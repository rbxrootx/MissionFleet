# Current Main.dll indexed record-text path

The indexed record-text path consists of two byte-identical routines in the
installed `Main.dll` capture: [FUN_58833E40](../src/client-current/Main/FUN_58833e40.cpp)
and [FUN_587BAA60](../src/client-current/Main/FUN_587baa60.cpp). Their 43-byte
and 117-byte bodies match all 160 bytes and all eight mapped operand targets
under objdiff 3.8.0.

Verified dispatchers `FUN_587BB700` and `FUN_588C1650` both call
`FUN_58833E40`; their call sites are `0x587BE127` and `0x588C1B5F`. Each
dispatcher checks receiver byte `+0x321 == 8` before passing its source record
pointer. The helper reads the text pointer at receiver `+0x328`, clears that
state byte, takes an index from `+0x324`, and computes the 8-byte header at
`sourceRecord + index*8 + 0x5C`. It then loads the receiver context from
`0x58A24588` and calls `FUN_587BAA60` with the header and text.

`FUN_587BAA60` calls the indirect function pointer at `0x5898C1A8` with the
text pointer, allocates `length + 9` bytes, copies the 8-byte header, and
appends the NUL-terminated text. It sends selector `0x80010F0E` through the
verified sender `FUN_58970C70`, passing `[0x58A0B4A0]`, zero, the assembled
payload, the scanned text length plus nine, and zero flags. The temporary
buffer is freed through verified `FUN_5897CE26`. The direct allocation, copy,
sender, and free helpers are independently byte-matched.

The [portable model](../src/client-current/semantic/OutboundTextNotice.cpp)
and [native test](../tests/native/outbound_text_notice_test.cpp) check the
header prefix, terminating NUL, selector, sender arguments, and zero flags.
Run `python tools/verify_outbound_text_notice.py` for that test. The
[related outbound text notice](current-main-outbound-text-notice.md) uses the
distinct selector `0x80010FA0`.

The indirect length function's runtime target, header field meanings, record
schema, receiver state semantics, selector meaning, server handling, and
visible game result remain unresolved. The exact instruction behavior is
established, but no emulator/server runtime test has been performed.
