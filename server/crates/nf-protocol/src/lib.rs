//! NavyFIELD 2.062 transport primitives.
//!
//! The framing and checksum behavior here is reconstructed from the recovered
//! 2.062 login server (`docs/login-protocol.md`). This crate intentionally
//! contains no invented authentication or gameplay semantics.

use std::fmt;

pub const MAGIC: u32 = 0x0102_0304;
pub const HEADER_SIZE: usize = 20;
pub const CHECKSUM_SIZE: usize = 4;
pub const DEFAULT_LOGIN_PORT: u16 = 8010;
pub const PROTECTION_TABLE_SIZE: usize = 0x800;
pub const DEFAULT_MAX_PAYLOAD: usize = 8 * 1024 * 1024;

pub const INITIAL_PROBE: u32 = 0x8001_000F;
pub const INITIAL_PROBE_REPLY: u32 = 0x8002_000F;
pub const CONNECTION_ANNOUNCEMENT: u32 = 0x8001_0109;
pub const CONNECTION_REJECTED: u32 = 0x8000_0003;
pub const LOGIN_SERVER_ROLE: u32 = 0x8002;
pub const PROTECTION_REQUEST: u32 = 0x8002_030D;
pub const PROTECTION_RESPONSE: u32 = 0x8002_030E;

pub const STATELESS_CHECKSUM_XOR: u32 = 0xF3A9_1CD0;
pub const STATELESS_RECEIVE_CHECKSUM_XOR: u32 = 0x7C8B_A106;

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Frame {
    pub message_id: u32,
    pub parameter_1: u32,
    pub parameter_2: u32,
    pub payload: Vec<u8>,
    pub checksum: Option<u32>,
}

impl Frame {
    pub fn new(message_id: u32, parameter_1: u32, parameter_2: u32) -> Self {
        Self {
            message_id,
            parameter_1,
            parameter_2,
            payload: Vec::new(),
            checksum: None,
        }
    }

    pub fn with_payload(
        message_id: u32,
        parameter_1: u32,
        parameter_2: u32,
        payload: Vec<u8>,
    ) -> Self {
        Self {
            message_id,
            parameter_1,
            parameter_2,
            payload,
            checksum: None,
        }
    }

    pub fn with_checksum(mut self, checksum: u32) -> Self {
        self.checksum = Some(checksum);
        self
    }

    pub fn with_stateless_checksum(self) -> Self {
        let checksum = stateless_protected_checksum(
            self.message_id,
            self.parameter_1,
            self.parameter_2,
            &self.payload,
        );
        self.with_checksum(checksum)
    }

    pub fn encode(&self) -> Vec<u8> {
        let payload_len = u32::try_from(self.payload.len()).unwrap_or(u32::MAX);
        let mut out = Vec::with_capacity(
            HEADER_SIZE + self.payload.len() + usize::from(self.checksum.is_some()) * CHECKSUM_SIZE,
        );
        out.extend_from_slice(&MAGIC.to_le_bytes());
        out.extend_from_slice(&self.message_id.to_le_bytes());
        out.extend_from_slice(&self.parameter_1.to_le_bytes());
        out.extend_from_slice(&self.parameter_2.to_le_bytes());
        out.extend_from_slice(&payload_len.to_le_bytes());
        out.extend_from_slice(&self.payload);
        if let Some(checksum) = self.checksum {
            out.extend_from_slice(&checksum.to_le_bytes());
        }
        out
    }

    /// Decode exactly one complete frame from the front of `bytes`.
    pub fn decode_single(bytes: &[u8]) -> Option<Self> {
        let header = Header::parse(bytes)?;
        if header.magic != MAGIC {
            return None;
        }
        let payload_end = HEADER_SIZE + header.payload_len as usize;
        let payload = bytes.get(HEADER_SIZE..payload_end)?.to_vec();
        if payload.len() != header.payload_len as usize {
            return None;
        }
        let checksum = if bytes.len() >= payload_end + CHECKSUM_SIZE {
            Some(u32::from_le_bytes(
                bytes[payload_end..payload_end + CHECKSUM_SIZE]
                    .try_into()
                    .ok()?,
            ))
        } else {
            None
        };
        Some(Self {
            message_id: header.message_id,
            parameter_1: header.parameter_1,
            parameter_2: header.parameter_2,
            payload,
            checksum,
        })
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Header {
    pub magic: u32,
    pub message_id: u32,
    pub parameter_1: u32,
    pub parameter_2: u32,
    pub payload_len: u32,
}

impl Header {
    pub fn parse(bytes: &[u8]) -> Option<Self> {
        if bytes.len() < HEADER_SIZE {
            return None;
        }
        Some(Self {
            magic: u32::from_le_bytes(bytes[0..4].try_into().ok()?),
            message_id: u32::from_le_bytes(bytes[4..8].try_into().ok()?),
            parameter_1: u32::from_le_bytes(bytes[8..12].try_into().ok()?),
            parameter_2: u32::from_le_bytes(bytes[12..16].try_into().ok()?),
            payload_len: u32::from_le_bytes(bytes[16..20].try_into().ok()?),
        })
    }

    pub fn encode(&self) -> [u8; HEADER_SIZE] {
        let mut out = [0u8; HEADER_SIZE];
        out[0..4].copy_from_slice(&self.magic.to_le_bytes());
        out[4..8].copy_from_slice(&self.message_id.to_le_bytes());
        out[8..12].copy_from_slice(&self.parameter_1.to_le_bytes());
        out[12..16].copy_from_slice(&self.parameter_2.to_le_bytes());
        out[16..20].copy_from_slice(&self.payload_len.to_le_bytes());
        out
    }
}

#[inline]
fn signed_byte(value: u8) -> i64 {
    i64::from(value as i8)
}

/// Raw send-side checksum sum used before the stateless or table XOR.
pub fn send_checksum_base(
    message_id: u32,
    parameter_1: u32,
    parameter_2: u32,
    payload: &[u8],
) -> u32 {
    let header = Header {
        magic: MAGIC,
        message_id,
        parameter_1,
        parameter_2,
        payload_len: payload.len() as u32,
    }
    .encode();

    let mut checksum: i64 = 0;
    for (index, &byte) in header.iter().enumerate() {
        checksum = checksum.wrapping_add(
            (signed_byte(byte) + 7)
                .wrapping_mul(index as i64)
                .wrapping_mul(0x1D),
        );
    }
    for (index, &byte) in payload.iter().enumerate() {
        checksum = checksum.wrapping_add(
            (signed_byte(byte) + 0x0B)
                .wrapping_mul(index as i64)
                .wrapping_mul(0x0D),
        );
    }
    checksum as u32
}

/// Stateless send checksum from login-server routine `0x00410000`.
pub fn stateless_protected_checksum(
    message_id: u32,
    parameter_1: u32,
    parameter_2: u32,
    payload: &[u8],
) -> u32 {
    if message_id == INITIAL_PROBE {
        return 0;
    }
    send_checksum_base(message_id, parameter_1, parameter_2, payload) ^ STATELESS_CHECKSUM_XOR
}

/// Base receive checksum from login-server routine `0x00410340`.
pub fn receive_checksum_base(
    message_id: u32,
    parameter_1: u32,
    parameter_2: u32,
    payload: &[u8],
) -> u32 {
    let header = Header {
        magic: MAGIC,
        message_id,
        parameter_1,
        parameter_2,
        payload_len: payload.len() as u32,
    }
    .encode();

    let mut checksum: i64 = 0;
    for (index, &byte) in header.iter().enumerate() {
        checksum = checksum.wrapping_add(
            (signed_byte(byte) + 0x0D)
                .wrapping_mul(index as i64)
                .wrapping_mul(0x0B),
        );
    }
    for (index, &byte) in payload.iter().enumerate() {
        checksum = checksum.wrapping_add(
            (signed_byte(byte) + 0x1D)
                .wrapping_mul(index as i64)
                .wrapping_mul(0x07),
        );
    }
    checksum as u32
}

pub fn stateless_receive_checksum(
    message_id: u32,
    parameter_1: u32,
    parameter_2: u32,
    payload: &[u8],
) -> u32 {
    receive_checksum_base(message_id, parameter_1, parameter_2, payload)
        ^ STATELESS_RECEIVE_CHECKSUM_XOR
}

fn next_rand(state: &mut u32) -> u32 {
    *state = state.wrapping_mul(0x343F_D).wrapping_add(0x269E_C3);
    (*state >> 16) & 0x7FFF
}

/// Connection checksum table generator from login-server routine `0x00411720`.
pub fn build_protection_table(seed: u32, size: usize) -> Vec<u32> {
    let mut rand_state = seed;
    let mut values = Vec::with_capacity(size);
    for _ in 0..size {
        let mut value = next_rand(&mut rand_state);
        value = value.wrapping_mul(next_rand(&mut rand_state));
        value = value.wrapping_mul(next_rand(&mut rand_state));
        value = value.wrapping_mul(next_rand(&mut rand_state));
        value ^= STATELESS_RECEIVE_CHECKSUM_XOR;
        // The original code divides by this value. A zero is not expected for
        // the observed seeds; keep the server alive if it occurs.
        let quotient = if value == 0 {
            0
        } else {
            STATELESS_CHECKSUM_XOR / value
        };
        values.push(value.wrapping_add(quotient.wrapping_mul(481)));
    }
    values
}

#[derive(Clone, Debug)]
pub struct ProtectionState {
    pub table: Vec<u32>,
    pub send_index: u32,
    pub receive_index: u32,
}

impl ProtectionState {
    pub fn from_seed(seed: u32) -> Self {
        let table = build_protection_table(seed, PROTECTION_TABLE_SIZE);
        let remainder = seed % PROTECTION_TABLE_SIZE as u32;
        Self {
            table,
            send_index: remainder.wrapping_mul(0x0D),
            receive_index: remainder.wrapping_mul(0x11),
        }
    }

    pub fn send_checksum(&mut self, base_checksum: u32) -> u32 {
        let product = self.send_index.wrapping_mul(base_checksum);
        let slot = (product % self.table.len() as u32) as usize;
        let checksum = base_checksum ^ self.table[slot];
        self.send_index = self.send_index.wrapping_add(0x0D);
        checksum
    }

    pub fn receive_checksum(&mut self, base_checksum: u32) -> u32 {
        let product = self.receive_index.wrapping_mul(base_checksum);
        let slot = (product % self.table.len() as u32) as usize;
        let checksum = base_checksum ^ self.table[slot];
        self.receive_index = self.receive_index.wrapping_add(0x11);
        checksum
    }

    /// Table checksum without advancing the receive cursor, for the one-frame
    /// negotiation retry performed by the native parser.
    pub fn receive_checksum_peek(&self, base_checksum: u32) -> u32 {
        let product = self.receive_index.wrapping_mul(base_checksum);
        let slot = (product % self.table.len() as u32) as usize;
        base_checksum ^ self.table[slot]
    }
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ProtectionNegotiation {
    pub peer_ipv4: String,
    pub peer_port: u16,
    pub connection_nonce: u32,
}

impl ProtectionNegotiation {
    pub fn peer_component(&self) -> u32 {
        let address_sum: i64 = self
            .peer_ipv4
            .as_bytes()
            .iter()
            .map(|&byte| signed_byte(byte).wrapping_mul(0x1D))
            .sum();
        (address_sum.wrapping_add((self.peer_port as i64).wrapping_mul(0x1F))) as u32
    }

    pub fn table_seed(&self) -> u32 {
        self.peer_component()
            .wrapping_add(self.connection_nonce.wrapping_mul(0x11))
    }

    pub fn request_frame(&self) -> Frame {
        Frame::new(
            PROTECTION_REQUEST,
            self.peer_component() ^ STATELESS_RECEIVE_CHECKSUM_XOR,
            self.connection_nonce ^ STATELESS_CHECKSUM_XOR,
        )
    }

    pub fn table_state(&self) -> ProtectionState {
        ProtectionState::from_seed(self.table_seed())
    }
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LoginBootstrap {
    pub peer_ipv4: String,
    pub peer_port: u16,
    pub tick_milliseconds: u32,
    pub accepted_connection_count: u32,
    pub protection_enabled: bool,
}

impl LoginBootstrap {
    pub fn connection_nonce(&self) -> u32 {
        self.tick_milliseconds
            .wrapping_mul(self.accepted_connection_count)
    }

    pub fn negotiation(&self) -> ProtectionNegotiation {
        ProtectionNegotiation {
            peer_ipv4: self.peer_ipv4.clone(),
            peer_port: self.peer_port,
            connection_nonce: self.connection_nonce(),
        }
    }

    pub fn frames(&self) -> Vec<Frame> {
        let announcement = if self.protection_enabled {
            Frame::new(CONNECTION_ANNOUNCEMENT, 0, LOGIN_SERVER_ROLE).with_stateless_checksum()
        } else {
            Frame::new(CONNECTION_ANNOUNCEMENT, 0, LOGIN_SERVER_ROLE)
        };
        let mut frames = vec![announcement];
        if self.protection_enabled {
            frames.push(self.negotiation().request_frame().with_stateless_checksum());
        }
        frames
    }
}

#[derive(Debug)]
pub struct UnprotectedDecoder {
    buffer: Vec<u8>,
    max_payload: usize,
    invalid_magic_count: usize,
}

impl Default for UnprotectedDecoder {
    fn default() -> Self {
        Self::new(DEFAULT_MAX_PAYLOAD)
    }
}

impl UnprotectedDecoder {
    pub fn new(max_payload: usize) -> Self {
        Self {
            buffer: Vec::new(),
            max_payload,
            invalid_magic_count: 0,
        }
    }

    pub fn buffered_bytes(&self) -> usize {
        self.buffer.len()
    }

    pub fn invalid_magic_count(&self) -> usize {
        self.invalid_magic_count
    }

    pub fn feed(&mut self, data: &[u8]) -> Vec<Frame> {
        self.buffer.extend_from_slice(data);
        let mut frames = Vec::new();
        let mut consumed = 0usize;

        while self.buffer.len() - consumed >= HEADER_SIZE {
            let header = Header::parse(&self.buffer[consumed..]).expect("header length checked");
            let payload_len = header.payload_len as usize;
            if payload_len > self.max_payload {
                self.invalid_magic_count += 1;
                consumed = self.buffer.len();
                break;
            }
            let frame_size = HEADER_SIZE + payload_len;
            if self.buffer.len() - consumed < frame_size {
                break;
            }
            let payload_start = consumed + HEADER_SIZE;
            let payload_end = payload_start + payload_len;
            if header.magic == MAGIC {
                frames.push(Frame::with_payload(
                    header.message_id,
                    header.parameter_1,
                    header.parameter_2,
                    self.buffer[payload_start..payload_end].to_vec(),
                ));
            } else {
                self.invalid_magic_count += 1;
            }
            consumed += frame_size;
        }

        if consumed > 0 {
            self.buffer.drain(..consumed);
        }
        frames
    }
}

#[derive(Debug)]
pub struct ProtectedDecoder {
    buffer: Vec<u8>,
    max_payload: usize,
    state: Option<ProtectionState>,
    table_mode_active: bool,
    invalid_magic_count: usize,
    checksum_mismatch_count: usize,
}

impl ProtectedDecoder {
    pub fn new(state: ProtectionState, max_payload: usize) -> Self {
        Self {
            buffer: Vec::new(),
            max_payload,
            state: Some(state),
            table_mode_active: false,
            invalid_magic_count: 0,
            checksum_mismatch_count: 0,
        }
    }

    pub fn buffered_bytes(&self) -> usize {
        self.buffer.len()
    }

    pub fn invalid_magic_count(&self) -> usize {
        self.invalid_magic_count
    }

    pub fn checksum_mismatch_count(&self) -> usize {
        self.checksum_mismatch_count
    }

    pub fn table_mode_active(&self) -> bool {
        self.table_mode_active
    }

    pub fn feed(&mut self, data: &[u8]) -> Vec<Frame> {
        self.buffer.extend_from_slice(data);
        let mut frames = Vec::new();
        let mut consumed = 0usize;

        while self.buffer.len() - consumed >= HEADER_SIZE {
            let header = Header::parse(&self.buffer[consumed..]).expect("header length checked");
            let payload_len = header.payload_len as usize;
            if payload_len > self.max_payload {
                self.invalid_magic_count += 1;
                consumed = self.buffer.len();
                break;
            }
            let frame_size = HEADER_SIZE + payload_len + CHECKSUM_SIZE;
            if self.buffer.len() - consumed < frame_size {
                break;
            }
            let payload_start = consumed + HEADER_SIZE;
            let payload_end = payload_start + payload_len;
            let checksum_start = payload_end;
            let payload = self.buffer[payload_start..payload_end].to_vec();
            let checksum = u32::from_le_bytes(
                self.buffer[checksum_start..checksum_start + CHECKSUM_SIZE]
                    .try_into()
                    .expect("checksum length checked"),
            );

            let mut accepted = false;
            if header.magic != MAGIC {
                self.invalid_magic_count += 1;
            } else if header.message_id == INITIAL_PROBE_REPLY {
                accepted = true;
            } else {
                let base = receive_checksum_base(
                    header.message_id,
                    header.parameter_1,
                    header.parameter_2,
                    &payload,
                );
                if self.table_mode_active {
                    if let Some(state) = self.state.as_mut() {
                        let expected = state.receive_checksum(base);
                        accepted = checksum == expected;
                    }
                } else {
                    let stateless = base ^ STATELESS_RECEIVE_CHECKSUM_XOR;
                    if checksum == stateless {
                        accepted = true;
                    } else if let Some(state) = self.state.as_mut() {
                        let expected = state.receive_checksum_peek(base);
                        if checksum == expected && header.message_id == PROTECTION_RESPONSE {
                            state.receive_index = state.receive_index.wrapping_add(0x11);
                            self.table_mode_active = true;
                            accepted = true;
                        }
                    }
                }
            }

            if accepted {
                frames.push(Frame {
                    message_id: header.message_id,
                    parameter_1: header.parameter_1,
                    parameter_2: header.parameter_2,
                    payload,
                    checksum: Some(checksum),
                });
            } else {
                self.checksum_mismatch_count += 1;
            }
            consumed += frame_size;
        }

        if consumed > 0 {
            self.buffer.drain(..consumed);
        }
        frames
    }
}

/// Human-readable names used by the English server console.
pub fn message_name(message_id: u32) -> &'static str {
    match message_id {
        INITIAL_PROBE => "liveness_probe",
        INITIAL_PROBE_REPLY => "liveness_probe_reply",
        CONNECTION_ANNOUNCEMENT => "connection_announcement",
        CONNECTION_REJECTED => "connection_rejected",
        PROTECTION_REQUEST => "protection_request",
        PROTECTION_RESPONSE => "protection_response",
        0x8001_1200 => "billing_time_update",
        0x8001_7000 => "billing_login_start",
        0x8001_7001 => "billing_login_finish",
        0x8001_7002 => "billing_ip_release",
        0x8001_7003 => "billing_point_query",
        0x8001_7004 => "billing_time_end",
        0x8001_7005 => "billing_point_consume",
        0x8001_E002 => "user_state_update",
        0x8002_D012 => "user_info_update",
        0x8001_1100 => "billing_time_direct_update",
        0x8001_6001 => "broadcast_login",
        0x8001_6002 => "broadcast_logout",
        0x8001_1000 => "billing_record_batch",
        0x8001_E001 => "user_data_stage",
        _ => "unknown",
    }
}

impl fmt::Display for Frame {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(
            f,
            "{} (0x{:08X}) p1=0x{:08X} p2=0x{:08X} payload={} checksum={}",
            message_name(self.message_id),
            self.message_id,
            self.parameter_1,
            self.parameter_2,
            self.payload.len(),
            self.checksum
                .map(|value| format!("0x{value:08X}"))
                .unwrap_or_else(|| "none".to_string())
        )?;
        if !self.payload.is_empty() {
            let preview = &self.payload[..self.payload.len().min(128)];
            write!(f, " payload_hex={}", hex_bytes(preview))?;
            if self.payload.len() > preview.len() {
                write!(f, "... ({} bytes total)", self.payload.len())?;
            }
        }
        Ok(())
    }
}

fn hex_bytes(bytes: &[u8]) -> String {
    let mut out = String::with_capacity(bytes.len() * 2);
    for byte in bytes {
        use std::fmt::Write as _;
        let _ = write!(out, "{byte:02X}");
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn probe_checksum_is_zero() {
        assert_eq!(stateless_protected_checksum(INITIAL_PROBE, 0, 0, &[]), 0);
    }

    #[test]
    fn checksum_matches_recovered_values() {
        assert_eq!(
            stateless_protected_checksum(CONNECTION_ANNOUNCEMENT, 0, LOGIN_SERVER_ROLE, &[]),
            0x0C56_6107
        );
        assert_eq!(
            stateless_receive_checksum(CONNECTION_ANNOUNCEMENT, 0, LOGIN_SERVER_ROLE, &[]),
            0x8374_5E9B
        );
    }

    #[test]
    fn protection_table_matches_recovered_values() {
        assert_eq!(
            build_protection_table(0, 4),
            vec![3_397_523_819, 703_793_298, 1_032_877_513, 2_956_229_073]
        );
        assert_eq!(
            build_protection_table(1, 4),
            vec![2_290_724_879, 1_843_365_816, 287_964_276, 3_448_195_496]
        );
    }

    #[test]
    fn negotiation_matches_recovered_values() {
        let negotiation = ProtectionNegotiation {
            peer_ipv4: "127.0.0.1".to_string(),
            peer_port: 54321,
            connection_nonce: 0x1234_5678,
        };
        assert_eq!(negotiation.peer_component(), 0x0019_E370);
        assert_eq!(negotiation.table_seed(), 0x3593_A168);
        let request = negotiation.request_frame();
        assert_eq!(request.message_id, PROTECTION_REQUEST);
        assert_eq!(request.parameter_1, 0x7C92_4276);
        assert_eq!(request.parameter_2, 0xE19D_4AA8);
        let mut state = negotiation.table_state();
        assert_eq!(state.send_index, 4680);
        assert_eq!(state.receive_index, 6120);
        assert_eq!(state.send_checksum(0x1122_3344), 0x3E90_BF2F);
        assert_eq!(state.receive_checksum(0x1122_3344), 0xD266_B533);
    }

    #[test]
    fn announcement_bootstrap_has_expected_order() {
        let bootstrap = LoginBootstrap {
            peer_ipv4: "127.0.0.1".to_string(),
            peer_port: 1234,
            tick_milliseconds: 7,
            accepted_connection_count: 3,
            protection_enabled: true,
        };
        let frames = bootstrap.frames();
        assert_eq!(frames.len(), 2);
        assert_eq!(frames[0].message_id, CONNECTION_ANNOUNCEMENT);
        assert_eq!(frames[1].message_id, PROTECTION_REQUEST);
        assert!(frames.iter().all(|frame| frame.checksum.is_some()));
    }

    #[test]
    fn unprotected_decoder_handles_split_and_concatenated_frames() {
        let first = Frame::new(INITIAL_PROBE, 0, 0).encode();
        let second = Frame::with_payload(0x8001_7000, 1, 2, vec![0xAA; 16]).encode();
        let mut decoder = UnprotectedDecoder::default();
        assert!(decoder.feed(&first[..7]).is_empty());
        let frames = decoder.feed(&[&first[7..], &second].concat());
        assert_eq!(frames.len(), 2);
        assert_eq!(frames[0].message_id, INITIAL_PROBE);
        assert_eq!(frames[1].payload, vec![0xAA; 16]);
        assert_eq!(decoder.buffered_bytes(), 0);
    }

    #[test]
    fn unprotected_decoder_consumes_invalid_magic() {
        let mut bytes = Frame::new(INITIAL_PROBE, 0, 0).encode();
        bytes[0] ^= 0xFF;
        let valid = Frame::new(INITIAL_PROBE, 0, 0).encode();
        let mut decoder = UnprotectedDecoder::default();
        let frames = decoder.feed(&[bytes, valid].concat());
        assert_eq!(frames.len(), 1);
        assert_eq!(decoder.invalid_magic_count(), 1);
    }

    #[test]
    fn protected_decoder_activates_on_response() {
        let negotiation = ProtectionNegotiation {
            peer_ipv4: "127.0.0.1".to_string(),
            peer_port: 54321,
            connection_nonce: 0x1234_5678,
        };
        let mut encoder_state = negotiation.table_state();
        let base = receive_checksum_base(PROTECTION_RESPONSE, 0, 0, &[]);
        let checksum = encoder_state.receive_checksum(base);
        let response = Frame::new(PROTECTION_RESPONSE, 0, 0).with_checksum(checksum);

        let mut decoder = ProtectedDecoder::new(negotiation.table_state(), DEFAULT_MAX_PAYLOAD);
        let frames = decoder.feed(&response.encode());
        assert_eq!(frames.len(), 1);
        assert!(decoder.table_mode_active());
        assert_eq!(decoder.checksum_mismatch_count(), 0);
    }

    #[test]
    fn protected_decoder_rejects_bad_checksum() {
        let negotiation = ProtectionNegotiation {
            peer_ipv4: "127.0.0.1".to_string(),
            peer_port: 54321,
            connection_nonce: 0x1234_5678,
        };
        let response = Frame::new(PROTECTION_RESPONSE, 0, 0).with_checksum(0xDEAD_BEEF);
        let mut decoder = ProtectedDecoder::new(negotiation.table_state(), DEFAULT_MAX_PAYLOAD);
        assert!(decoder.feed(&response.encode()).is_empty());
        assert_eq!(decoder.checksum_mismatch_count(), 1);
    }
}
