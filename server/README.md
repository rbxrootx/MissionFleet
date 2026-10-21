# Rust server stack

English-language replacements for the supplied 2.062 server binaries. The
workspace is intentionally staged: reconstructed behavior is implemented, and
unreconstructed behavior is refused rather than guessed.

## Crates

| Crate | Status |
| --- | --- |
| `nf-protocol` | Framing, stateless/table checksums, protection negotiation, unprotected/protected decoders. Tested against recovered constants. |
| `nf-login` | Working transport server: announcement, optional protection, liveness probes, idle timeout, English console, account-file loader. |
| `nf-game` | Scaffold. Refuses to listen until room/harbor/movement/combat messages are recovered. |
| `nf-save` | Scaffold. Refuses to listen until CDB record layouts and persistence semantics are recovered. |

The original Chinese server binaries are no longer needed for the transport
path. They remain useful as evidence until the login credential/server-list
handlers and the game/save protocols are reconstructed.

## Run the login server

```powershell
cd server
cargo run -p nf-login
```

Defaults to `127.0.0.1:8010`, a 30-second idle timeout, 64 connections, and
protection negotiation off. Options:

```text
--bind ADDR              Bind address (default 127.0.0.1:8010)
--timeout-ms N           Idle timeout in milliseconds
--max-connections N      Accepted-connection limit
--protection             Enable the recovered protection-table negotiation
--accounts FILE          Load id<TAB>password[<TAB>rank<TAB>is_flag] records
```

Without `--accounts`, the test account is `admin` / `admin`. Passwords are
never printed.

The client currently dials port 8001. Either run `nf-login --bind 127.0.0.1:8001`
or keep the existing TCP relay from 8001 to 8010.

## Implemented evidence

- 20-byte little-endian header and `0x01020304` magic.
- Stateless send/receive checksums with signed-byte arithmetic.
- 2,048-entry connection checksum table, independent send/receive cursors.
- `0x80010109` announcement, optional `0x8002030d` negotiation, and
  `0x8002030e` table-mode activation.
- Liveness probe `0x8001000f` at half-timeout and idle shutdown after the full
  timeout.
- English logs and explicit "handler not reconstructed" lines for undecoded
  frames.

## Not implemented

- Credential request/response payloads and authentication results.
- Server-list and game-server handoff responses.
- Billing messages.
- Game-server rooms, movement, combat, and results.
- Save-server CDB mappings and acknowledgements.

These are logged, not answered. `docs/login-protocol.md` is the current
evidence boundary.

## Verify

```powershell
cd server
cargo test --workspace
cargo build --workspace
```

Protocol tests pin the recovered checksum and table values, split-frame parsing,
invalid-magic consumption, and protected table activation.
