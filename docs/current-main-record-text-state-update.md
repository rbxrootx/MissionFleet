# Current Main.dll record-text state update

The pinned mapped `Main.dll` function `FUN_58847a50` at `0x58847A50` is 88
bytes. Its [instruction source](../src/client-current/Main/FUN_58847a50.cpp)
matches all 88 under objdiff 3.8.0 with one mapped direct-call target, the
already verified bounded text copier `FUN_58731CE0`. Verified packet
dispatcher `FUN_587BB700` and event dispatcher `FUN_588C1650` both call it.

The function receives three stack arguments. If either of the first two is
nonzero, it passes the third argument plus `0x0C` to `FUN_58731CE0` on the
child at receiver `+0x94`. It then always writes `1` to receiver byte
`+0xA0`, including when it skips the text copy. It reads receiver word
`+0x24` **after** the copy, masks it with `0x1F00`, and calls the receiver's
virtual slot `+4` only when the result is `0x0500`. Without that callback it
returns `0x1F00`; with it, it returns the callback's EAX result. The body ends
with `ret 0x0C`.

The [portable model](../src/client-current/semantic/RecordTextStateUpdate.cpp)
and [native cases](../tests/native/record_text_state_update_test.cpp) cover
copy/no-copy gating, record `+0x0C` source selection, byte `+0xA0` timing,
masked flag comparison, flags changed by the copy callback, and both return
paths. Run `python tools/verify_record_text_state_update.py`. The model is
separate from the byte-identical instruction source.

The argument fields, text's UI role, receiver flag meanings, and virtual
callback contract remain unknown. No installed-client or emulator runtime
test has been performed.
