//! Rust game-server replacement (scaffold).
//!
//! The login transport is reconstructed; the game-server room, movement, and
//! combat messages are not yet recovered to the same standard. This binary
//! deliberately refuses to pretend otherwise: it does not listen or answer
//! frames it cannot prove.

use std::process;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    if args.iter().any(|arg| arg == "--help" || arg == "-h") {
        print_help();
        return;
    }

    println!(
        "NavyFIELD 2.062 game server (Rust) v{}",
        env!("CARGO_PKG_VERSION")
    );
    eprintln!("Game-server protocol reconstruction is not complete.");
    eprintln!("No listener was started and no frames were answered. The next milestone is");
    eprintln!("to recover room, harbor, movement, and combat messages from the supplied");
    eprintln!("binary before implementing them here. Login transport and the English");
    eprintln!("account path live in `nf-login`.");
    process::exit(2);
}

fn print_help() {
    println!(
        "nf-game {version} - NavyFIELD 2.062 game server (Rust, scaffold)\n\
         \n\
         Status: protocol reconstruction not complete. This binary does not bind a\n\
         port yet. Use `nf-login` for the implemented transport server.\n\
         \n\
         Planned scope:\n\
           - authenticated session handoff from the login server\n\
           - harbor state and ship/item/crew data\n\
           - rooms, movement, projectiles, damage, aircraft, and results\n\
           - deterministic fixtures for each recovered message\n\
         \n\
         No undocumented message IDs or success responses will be invented.",
        version = env!("CARGO_PKG_VERSION")
    );
}
