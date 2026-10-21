//! English-language transport replacement for the 2.062 login server.
//!
//! Reconstructed here:
//! - 20-byte framing and the recovered checksum arithmetic
//! - accepted-connection announcement and optional protection negotiation
//! - liveness probe / timeout handling
//! - an English operator console and account file loader
//!
//! Not reconstructed here: credential request/response layouts, server-list
//! responses, billing, and game/save handoff. Those are logged as undecoded
//! frames instead of being invented.

use std::collections::HashMap;
use std::env;
use std::fs;
use std::io::{ErrorKind, Read, Write};
use std::net::{SocketAddr, TcpListener, TcpStream};
use std::path::{Path, PathBuf};
use std::process;
use std::sync::atomic::{AtomicUsize, Ordering};
use std::sync::Arc;
use std::thread;
use std::time::{Duration, SystemTime, UNIX_EPOCH};

use nf_protocol::{
    message_name, send_checksum_base, Frame, LoginBootstrap, ProtectedDecoder, ProtectionState,
    UnprotectedDecoder, CONNECTION_ANNOUNCEMENT, DEFAULT_MAX_PAYLOAD, INITIAL_PROBE,
    INITIAL_PROBE_REPLY, PROTECTION_RESPONSE,
};

const DEFAULT_BIND: &str = "127.0.0.1:8010";
const DEFAULT_TIMEOUT_MS: u32 = 30_000;
const DEFAULT_MAX_CONNECTIONS: usize = 64;
const READ_POLL_MS: u64 = 200;

#[derive(Clone, Debug)]
struct Config {
    bind: String,
    timeout_ms: u32,
    max_connections: usize,
    protection: bool,
    accounts: Option<PathBuf>,
}

impl Default for Config {
    fn default() -> Self {
        Self {
            bind: DEFAULT_BIND.to_string(),
            timeout_ms: DEFAULT_TIMEOUT_MS,
            max_connections: DEFAULT_MAX_CONNECTIONS,
            protection: false,
            accounts: None,
        }
    }
}

#[derive(Clone, Debug)]
struct Account {
    #[allow(dead_code)]
    password: String,
    #[allow(dead_code)]
    rank: i32,
    #[allow(dead_code)]
    is_flag: i32,
}

enum Decoder {
    Unprotected(UnprotectedDecoder),
    Protected(ProtectedDecoder),
}

impl Decoder {
    fn feed(&mut self, data: &[u8]) -> Vec<Frame> {
        match self {
            Self::Unprotected(decoder) => decoder.feed(data),
            Self::Protected(decoder) => decoder.feed(data),
        }
    }

    fn protected_table_active(&self) -> bool {
        match self {
            Self::Protected(decoder) => decoder.table_mode_active(),
            Self::Unprotected(_) => false,
        }
    }
}

fn main() {
    if let Err(error) = run() {
        eprintln!("nf-login: {error}");
        process::exit(1);
    }
}

fn run() -> Result<(), String> {
    let config = parse_args()?;
    if config.bind.is_empty() {
        return Err("bind address must not be empty".to_string());
    }

    let accounts = load_accounts(config.accounts.as_deref())?;
    let active = Arc::new(AtomicUsize::new(0));
    let config = Arc::new(config);

    let listener = TcpListener::bind(&config.bind)
        .map_err(|error| format!("cannot bind {}: {error}", config.bind))?;

    print_banner(&config, accounts.len());
    let local = listener
        .local_addr()
        .map(|address| address.to_string())
        .unwrap_or_else(|_| config.bind.clone());
    log(&format!("Listening on {local}"));

    for incoming in listener.incoming() {
        match incoming {
            Ok(stream) => {
                let previous = active.fetch_add(1, Ordering::SeqCst);
                if previous > config.max_connections {
                    active.fetch_sub(1, Ordering::SeqCst);
                    log(&format!(
                        "Rejected connection: capacity {} already reached",
                        config.max_connections
                    ));
                    drop(stream);
                    continue;
                }

                let accepted_count = previous + 1;
                let config = Arc::clone(&config);
                let active = Arc::clone(&active);
                thread::spawn(move || {
                    if let Err(error) = handle_client(stream, &config, accepted_count) {
                        log(&format!("Connection error: {error}"));
                    }
                    active.fetch_sub(1, Ordering::SeqCst);
                });
            }
            Err(error) => log(&format!("Accept error: {error}")),
        }
    }
    Ok(())
}

fn handle_client(
    mut stream: TcpStream,
    config: &Config,
    accepted_count: usize,
) -> Result<(), String> {
    let peer = stream
        .peer_addr()
        .map(|address| address.to_string())
        .unwrap_or_else(|_| "unknown".to_string());
    let peer_ipv4 = peer_ipv4(stream.peer_addr().ok());
    let peer_port = stream
        .peer_addr()
        .map(|address| address.port())
        .unwrap_or(0);

    stream
        .set_nodelay(true)
        .map_err(|error| format!("{peer}: cannot disable Nagle: {error}"))?;
    stream
        .set_read_timeout(Some(Duration::from_millis(READ_POLL_MS)))
        .map_err(|error| format!("{peer}: cannot set read timeout: {error}"))?;
    stream
        .set_write_timeout(Some(Duration::from_secs(5)))
        .map_err(|error| format!("{peer}: cannot set write timeout: {error}"))?;

    let tick = now_ms();
    let bootstrap = LoginBootstrap {
        peer_ipv4: peer_ipv4.clone(),
        peer_port,
        tick_milliseconds: tick,
        accepted_connection_count: accepted_count as u32,
        protection_enabled: config.protection,
    };
    let negotiation = bootstrap.negotiation();

    log(&format!(
        "Accepted {peer} as connection #{accepted_count} (protection={})",
        if config.protection { "on" } else { "off" }
    ));

    let mut send_state: Option<ProtectionState> = if config.protection {
        Some(negotiation.table_state())
    } else {
        None
    };
    let mut send_table_mode = false;

    for frame in bootstrap.frames() {
        stream
            .write_all(&frame.encode())
            .map_err(|error| format!("{peer}: cannot send bootstrap: {error}"))?;
        log(&format!("Sent {frame}"));
    }

    let mut decoder = if config.protection {
        Decoder::Protected(ProtectedDecoder::new(
            negotiation.table_state(),
            DEFAULT_MAX_PAYLOAD,
        ))
    } else {
        Decoder::Unprotected(UnprotectedDecoder::new(DEFAULT_MAX_PAYLOAD))
    };

    let mut last_activity = tick;
    let mut probe_armed = true;
    let mut bytes_received: u64 = 0;
    let mut frames_received: u64 = 0;
    let mut read_buffer = [0u8; 16 * 1024];

    loop {
        match stream.read(&mut read_buffer) {
            Ok(0) => {
                log(&format!(
                    "Disconnected {peer} (bytes={bytes_received}, frames={frames_received})"
                ));
                return Ok(());
            }
            Ok(read) => {
                bytes_received += read as u64;
                last_activity = now_ms();
                probe_armed = true;
                for frame in decoder.feed(&read_buffer[..read]) {
                    frames_received += 1;
                    log(&format!("Received from {peer}: {frame}"));
                    handle_frame(
                        &mut stream,
                        &frame,
                        &peer,
                        &mut send_state,
                        send_table_mode,
                        &decoder,
                    )?;
                    if frame.message_id == PROTECTION_RESPONSE && decoder.protected_table_active() {
                        send_table_mode = true;
                    }
                }
            }
            Err(error) if matches!(error.kind(), ErrorKind::WouldBlock | ErrorKind::TimedOut) => {
                let elapsed = now_ms().wrapping_sub(last_activity);
                if elapsed > config.timeout_ms {
                    log(&format!(
                        "Timed out {peer} after {elapsed} ms of inactivity"
                    ));
                    return Ok(());
                }
                let half_timeout = config.timeout_ms / 2;
                if probe_armed && elapsed > half_timeout {
                    probe_armed = false;
                    let probe = Frame::new(INITIAL_PROBE, 0, 0);
                    send_frame(&mut stream, probe, &peer, &mut send_state, send_table_mode)?;
                }
            }
            Err(error) => {
                log(&format!("Read error for {peer}: {error}"));
                return Ok(());
            }
        }
    }
}

fn handle_frame(
    stream: &mut TcpStream,
    frame: &Frame,
    peer: &str,
    send_state: &mut Option<ProtectionState>,
    send_table_mode: bool,
    decoder: &Decoder,
) -> Result<(), String> {
    match frame.message_id {
        INITIAL_PROBE => {
            let reply = Frame::new(INITIAL_PROBE_REPLY, 0, 0);
            send_frame(stream, reply, peer, send_state, send_table_mode)?;
        }
        PROTECTION_RESPONSE => {
            if decoder.protected_table_active() {
                log(&format!("{peer}: protection table active"));
            } else {
                log(&format!(
                    "{peer}: protection response did not activate table mode (checksum mismatch)"
                ));
            }
        }
        CONNECTION_ANNOUNCEMENT => {
            log(&format!(
                "{peer}: client announced role 0x{:08X}",
                frame.parameter_2
            ));
        }
        _ => {
            log(&format!(
                "{peer}: {} accepted at transport level; payload handler is not reconstructed",
                message_name(frame.message_id)
            ));
        }
    }

    Ok(())
}

fn send_frame(
    stream: &mut TcpStream,
    frame: Frame,
    peer: &str,
    send_state: &mut Option<ProtectionState>,
    table_mode: bool,
) -> Result<(), String> {
    let encoded = if let Some(state) = send_state.as_mut() {
        if frame.message_id == INITIAL_PROBE {
            frame.with_checksum(0).encode()
        } else if table_mode {
            let base = send_checksum_base(
                frame.message_id,
                frame.parameter_1,
                frame.parameter_2,
                &frame.payload,
            );
            let checksum = state.send_checksum(base);
            frame.with_checksum(checksum).encode()
        } else {
            frame.with_stateless_checksum().encode()
        }
    } else {
        frame.encode()
    };
    stream
        .write_all(&encoded)
        .map_err(|error| format!("{peer}: send failed: {error}"))?;
    let sent = Frame::decode_single(&encoded);
    if let Some(sent) = sent {
        log(&format!("Sent to {peer}: {sent}"));
    }
    Ok(())
}

fn parse_args() -> Result<Config, String> {
    let mut config = Config::default();
    let mut args = env::args().skip(1);
    while let Some(argument) = args.next() {
        match argument.as_str() {
            "--bind" => {
                config.bind = args
                    .next()
                    .ok_or_else(|| "--bind requires an address".to_string())?;
            }
            "--timeout-ms" => {
                let value = args
                    .next()
                    .ok_or_else(|| "--timeout-ms requires a number".to_string())?;
                config.timeout_ms = value
                    .parse()
                    .map_err(|_| format!("invalid timeout: {value}"))?;
                if config.timeout_ms < 1_000 {
                    return Err("--timeout-ms must be at least 1000".to_string());
                }
            }
            "--max-connections" => {
                let value = args
                    .next()
                    .ok_or_else(|| "--max-connections requires a number".to_string())?;
                config.max_connections = value
                    .parse()
                    .map_err(|_| format!("invalid connection limit: {value}"))?;
            }
            "--protection" => config.protection = true,
            "--accounts" => {
                config.accounts =
                    Some(PathBuf::from(args.next().ok_or_else(|| {
                        "--accounts requires a file path".to_string()
                    })?));
            }
            "--help" | "-h" => {
                print_help();
                process::exit(0);
            }
            other => return Err(format!("unknown option: {other} (use --help)")),
        }
    }
    Ok(config)
}

fn print_help() {
    println!(
        "nf-login {version} - English NavyFIELD 2.062 login transport server\n\
         \n\
         Usage: nf-login [options]\n\
         \n\
         Options:\n\
           --bind ADDR              Bind address (default {DEFAULT_BIND})\n\
           --timeout-ms N           Idle timeout in milliseconds (default {DEFAULT_TIMEOUT_MS})\n\
           --max-connections N      Accepted-connection limit (default {DEFAULT_MAX_CONNECTIONS})\n\
           --protection             Enable the recovered protection-table negotiation\n\
           --accounts FILE          Load id<TAB>password records from FILE\n\
           -h, --help               Show this help\n\
         \n\
         Implemented: framing, checksums, announcement, optional protection\n\
         negotiation, liveness probes, idle timeouts, and English logs.\n\
         Not yet implemented: credential request/response layouts, server-list\n\
         responses, billing, and game/save handoff. Those frames are logged but\n\
         not answered.",
        version = env!("CARGO_PKG_VERSION")
    );
}

fn print_banner(config: &Config, account_count: usize) {
    println!(
        "NavyFIELD 2.062 login server (Rust) v{}",
        env!("CARGO_PKG_VERSION")
    );
    println!("  bind              : {}", config.bind);
    println!("  idle timeout      : {} ms", config.timeout_ms);
    println!("  connection limit  : {}", config.max_connections);
    println!(
        "  protection table  : {}",
        if config.protection {
            "enabled"
        } else {
            "disabled"
        }
    );
    println!("  accounts loaded   : {account_count}");
    println!("  note              : credential and server-list handlers are not reconstructed;");
    println!("                      undecoded frames are logged, never guessed.");
}

fn load_accounts(path: Option<&Path>) -> Result<HashMap<String, Account>, String> {
    let mut accounts = HashMap::new();
    match path {
        Some(path) => {
            let text = fs::read_to_string(path).map_err(|error| {
                format!("cannot read accounts file {}: {error}", path.display())
            })?;
            for (number, line) in text.lines().enumerate() {
                let line = line.trim();
                if line.is_empty() || line.starts_with('#') {
                    continue;
                }
                let mut fields = line.split('\t');
                let id = fields.next().unwrap_or_default().trim();
                let password = fields.next().unwrap_or_default().trim();
                if id.is_empty() || password.is_empty() {
                    return Err(format!(
                        "{}:{}: expected id<TAB>password",
                        path.display(),
                        number + 1
                    ));
                }
                let rank = fields
                    .next()
                    .and_then(|value| value.parse().ok())
                    .unwrap_or(0);
                let is_flag = fields
                    .next()
                    .and_then(|value| value.parse().ok())
                    .unwrap_or(0);
                accounts.insert(
                    id.to_string(),
                    Account {
                        password: password.to_string(),
                        rank,
                        is_flag,
                    },
                );
            }
            if accounts.is_empty() {
                return Err(format!(
                    "accounts file {} contains no records",
                    path.display()
                ));
            }
        }
        None => {
            accounts.insert(
                "admin".to_string(),
                Account {
                    password: "admin".to_string(),
                    rank: 0,
                    is_flag: 0,
                },
            );
        }
    }
    Ok(accounts)
}

fn peer_ipv4(address: Option<SocketAddr>) -> String {
    match address {
        Some(SocketAddr::V4(address)) => address.ip().to_string(),
        Some(SocketAddr::V6(address)) => address.ip().to_string(),
        None => "0.0.0.0".to_string(),
    }
}

fn now_ms() -> u32 {
    SystemTime::now()
        .duration_since(UNIX_EPOCH)
        .map(|duration| duration.as_millis() as u32)
        .unwrap_or(0)
}

fn timestamp() -> String {
    let duration = SystemTime::now()
        .duration_since(UNIX_EPOCH)
        .unwrap_or_default();
    format!("{:>10}.{:03}", duration.as_secs(), duration.subsec_millis())
}

fn log(message: &str) {
    println!("[{}] {message}", timestamp());
}
