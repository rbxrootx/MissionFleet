# Current Main.dll outbound text notice

The pinned mapped `Main.dll` function `FUN_587b9440` at `0x587B9440` is 96
bytes. Its [instruction source](../src/client-current/Main/FUN_587b9440.cpp)
matches all 96 under objdiff 3.8.0, with six mapped operand targets. Verified
packet dispatcher `FUN_587BB700` and event dispatcher `FUN_588C1650` call it
repeatedly.

The first stack argument is a text pointer. A null pointer selects global
text at `0x58A0B450`; a nonnull pointer is used unchanged. The function calls
the pointer at `0x5898C1A8` to obtain the selected string length and increments
that result by one, including the terminator. It then calls the byte-matched
sender `FUN_58970C70` with the original receiver in ECX and six stack values:
message `0x80010FA0`, the wrapper's second and third stack arguments, the
selected text pointer, length plus one, and zero. The sender's verified
`ret 0x18` and the wrapper's stack restoration confirm this six-argument
layout. The wrapper returns the sender's result with `ret 0x0C`.

The [portable model](../src/client-current/semantic/OutboundTextNotice.cpp)
and [native cases](../tests/native/outbound_text_notice_test.cpp) validate
both text branches, an empty string, forwarded values, length including the
terminator, zero flags, receiver forwarding, and return propagation. Run
`python tools/verify_outbound_text_notice.py`. The normal-path model is
separate from the byte-identical instruction source.

The message's protocol meaning, the fallback text's runtime content, the
length callback's exact identity, and live wire behavior remain unknown. No
installed-client or emulator runtime test has been performed.
