# Current Main.dll simple outbound messages

Three caller-backed wrappers around the verified sender `FUN_58970C70` now
match the pinned mapped `Main.dll` exactly under objdiff 3.8.0:

| Function | Bytes | Caller evidence | Six values passed to sender |
| --- | ---: | --- | --- |
| `FUN_587b9190` | 21 | Verified dispatchers `FUN_587BB700` and `FUN_588C1650` | `0x80010F01, 0, 0, 0, 0, 0` |
| `FUN_587b9270` | 30 | Both verified dispatchers | `0x80010F06, record[0], record[1], 0, 0, 0` |
| `FUN_587b9e10` | 26 | Verified `FUN_588450B0` and `FUN_588C4210` | `0x8001312B, value, 0, 0, 0, 0` |

Each body contains one mapped direct call to `FUN_58970C70` and leaves the
receiver in ECX unchanged. The first ends with plain `ret`; the other two
consume one stack argument with `ret 4`. Each returns the sender's result.
The two-DWORD wrapper dereferences its pointer argument at offsets `+0` and
`+4` without a null check. The exact instruction sources are in
[`FUN_587b9190.cpp`](../src/client-current/Main/FUN_587b9190.cpp),
[`FUN_587b9270.cpp`](../src/client-current/Main/FUN_587b9270.cpp), and
[`FUN_587b9e10.cpp`](../src/client-current/Main/FUN_587b9e10.cpp).

The [portable models](../src/client-current/semantic/SimpleOutboundMessages.cpp)
and [native cases](../tests/native/simple_outbound_messages_test.cpp) verify
message IDs, value ordering, zero payload/length/flags, receiver forwarding,
and return propagation. Run `python tools/verify_simple_outbound_messages.py`.
These normal-path models are separate from the byte-identical sources.

The protocol meanings and runtime wire behavior remain unknown; no
installed-client or emulator runtime test has been performed.
