# Current Main.dll `CPannelRule` text window

The verified `CPannelRule` event handlers `FUN_588AA610` and `FUN_588AA640`
call the neighboring helpers `FUN_588AA0D0` and `FUN_588AA120`. In the first
handler, child field `+0x98` selects the backward helper and `+0x9C` selects
the forward helper. Both helpers use receiver `+0xA0` as a base text pointer,
`+0xA4` as the current text pointer, and `+0xA8` as a child text receiver.

`FUN_588AA0D0` returns unchanged if either text pointer is null. Otherwise it
moves the current pointer back `0x47` bytes, clamping to the base pointer when
that step would precede it according to the original unsigned x86 pointer
comparison. It stores the result and passes it to the already matched
`FUN_58770A80` text-buffer update. Its full 72 bytes match, including two
direct calls to that same target.

`FUN_588AA120` has the same null gates. It counts bytes from the current
pointer through the next NUL terminator. If at least `0x545` bytes remain, it
advances the current pointer by `0x47` bytes. It then calls the same text-buffer
update even when it did not advance. Its full 83 bytes and direct-call target
match. Together these two helpers add 155 checked bytes.

The [portable model](../src/client-current/semantic/RuleTextWindow.cpp) and
[native cases](../tests/native/rule_text_window_test.cpp) cover exact forward
threshold, repeated steps, backward clamping, no-advance refresh, and null
gates. Run `python tools/verify_rule_text_window.py`. The model assumes valid
pointers within one live NUL-terminated buffer; it does not model arbitrary
32-bit pointer wraparound. The exact-match instruction sources remain
[`FUN_588aa0d0.cpp`](../src/client-current/Main/FUN_588aa0d0.cpp) and
[`FUN_588aa120.cpp`](../src/client-current/Main/FUN_588aa120.cpp).

The text content, buffer capacity, ownership, and reason for the two numeric
thresholds remain unknown. No runtime client or visual test was performed.
