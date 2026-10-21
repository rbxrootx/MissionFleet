//! Rust save-server replacement (scaffold).
//!
//! The persistence protocol and CDB record mapping have not been recovered to
//! the same standard as the login transport. This binary does not start a
//! listener or fabricate save acknowledgements.

use std::process;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    if args.iter().any(|arg| arg == "--help" || arg == "-h") {
        print_help();
        return;
    }

    println!(
        "NavyFIELD 2.062 save server (Rust) v{}",
        env!("CARGO_PKG_VERSION")
    );
    eprintln!("Save-server protocol reconstruction is not complete.");
    eprintln!("No listener was started and no save acknowledgements are being invented.");
    eprintln!("The next milestone is a CDB record map and an explicit persistence schema");
    eprintln!("before this crate binds a port.");
    process::exit(2);
}

fn print_help() {
    println!(
        "nf-save {version} - NavyFIELD 2.062 save server (Rust, scaffold)\n\
         \n\
         Status: protocol reconstruction not complete. This binary does not bind a\n\
         port yet. Use `nf-login` for the implemented transport server.\n\
         \n\
         Planned scope:\n\
           - CDB record layouts for users, fleets, ships, and sailors\n\
           - explicit transactional persistence (no silent partial saves)\n\
           - save/load acknowledgements tied to captured frames\n\
           - English diagnostics for every rejected record\n\
         \n\
         No persistence format will be guessed from file names or offsets alone.",
        version = env!("CARGO_PKG_VERSION")
    );
}
