# Rust server stack

The supplied 2.062 server programs are Chinese MFC binaries. They are useful as
evidence, but they are no longer the intended runtime. This note records the
English/Rust replacement and its evidence boundary.

## Why replace instead of translate

Translating the original binaries would keep a large, closed, unsafe MFC
codebase in the runtime. The server behavior that is actually recovered is
small and protocol-shaped, so the replacement is split into Rust crates with one
shared transport layer. English logs are part of the implementation, not a
translation layer.

## Current status

| Component | State |
| --- | --- |
| Transport framing | Implemented in `nf-protocol` and pinned by tests. |
| Stateless and table checksums | Implemented from the recovered login code. |
| Protection negotiation | Implemented; validated with a synthetic client. |
| Login announcement / liveness / timeout | Implemented in `nf-login`; validated. |
| English operator console | Implemented. |
| Credential request/response | Not reconstructed; frames are logged with payload hex. |
| Server-list / game-server handoff | Not reconstructed. |
| Game server | Scaffold; refuses to bind until messages are recovered. |
| Save server | Scaffold; refuses to bind until CDB layouts are recovered. |

The Rust login server is a drop-in for the transport layer, not yet for account
authentication. The original login server remains useful only until the
credential exchange is captured and ported. Do not claim a working login on the
Rust server until that milestone is done.

## Layout

```text
server/
  crates/nf-protocol/   framing, checksums, protection table, decoders
  crates/nf-login/      TCP login transport, liveness, English console
  crates/nf-game/       game-server scaffold
  crates/nf-save/       save-server scaffold
```

## Run

```powershell
cd server
cargo run -p nf-login -- --bind 127.0.0.1:8010
```

Useful options:

```text
--protection             enable the recovered table negotiation
--timeout-ms N           idle timeout
--max-connections N      accepted-connection limit
--accounts FILE          id<TAB>password[<TAB>rank<TAB>is_flag]
```

Without `--accounts`, the test account is `admin` / `admin`.

The game client dials 8001. Either bind `nf-login` there, keep the 8001 → 8010
relay, or patch the client endpoint through the existing tool.

## Recovery loop for the remaining login messages

1. Run the Rust transport with payload hex logging.
2. Point the stock client at it.
3. Capture the credential frame and any server-list request.
4. Tie each field to the real login server's SQL recordset or a captured
   response; do not infer names from column order alone.
5. Add a Rust handler and a fixture test before enabling the response.

The game and save protocols use the same loop with the recovered server
regions and the `UserData` CDB records as evidence.

## Verification

```powershell
cd server
cargo fmt --all -- --check
cargo test --workspace
cargo build --workspace
```

The protocol tests pin the recovered checksum values, the 2,048-entry table
prefix, protection negotiation values, split-frame parsing, invalid-magic
consumption, and table-mode activation.
