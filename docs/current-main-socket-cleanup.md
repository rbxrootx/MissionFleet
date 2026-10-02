# Current Main socket-error cleanup

This slice follows the error branches of the byte-matched record sender
`FUN_58970c70`. Ghidra assigns three contiguous functions, all reproduced from
the installed current Main mapped capture:

| Function | Address range | Bytes |
| --- | --- | ---: |
| `FUN_58970ae0` | `0x58970AE0..0x58970B27` | 72 |
| `FUN_58971480` | `0x58971480..0x589714AA` | 43 |
| `FUN_58971440` | `0x58971440..0x5897147A` | 59 |

All three compile to 100.0% objdiff matches; five, one, and zero operands are
audited respectively.

## Observed cleanup flow

When `WSASend` fails with an error other than `0x3E5`, the sender calls
`FUN_58970ae0` in the branch where context `+0x44` is zero. That helper returns
unless context DWORD `+0x30` is nonzero and the socket handle at `+4` is not
`-1`. On the cleanup path it calls the context vtable at `+0x10`, calls the
mapped `shutdown(socket, 1)` and `closesocket(socket)` imports, invokes
`FUN_58971480(handle)`, then sets the handle to `-1` and clears `+0x30`.

The sender's other error branch performs the same callback and Winsock calls
inline, then calls `FUN_58971480` directly. That routine checks that context
DWORD `+0x21C` is nonzero and the handle is not `-1`. It passes the handle to
`FUN_58971440` with ECX set to context `+0x220`, then decrements `+0x21C`.

`FUN_58971440` uses the handle's low 16 bits to select a four-byte bucket
pointer from the table at context `+0x220`. It walks nodes whose next pointer
is at `+8`, compares each node's first DWORD with the full handle, and unlinks
the matching node from the bucket head or its predecessor. The observed code
does not free that node. Ghidra's reference analysis finds
`FUN_58971480` calls from `FUN_58970ae0` and `FUN_58970c70`, and the one direct
call to `FUN_58971440` from `FUN_58971480` at `0x5897149C`.

## Unresolved behavior

The handle-based bucket lookup and counter update are direct instruction
observations. The meaning and lifetime of `+0x30` and `+0x21C`, the virtual
callback contract, ownership of unlinked nodes, and the behavior when no
matching node exists remain unknown. The cleanup branches have not been
exercised at runtime. Exact source hashes, compiler flags, and operand checks
are in `config/NF2_2026/client-verifications.json`.
