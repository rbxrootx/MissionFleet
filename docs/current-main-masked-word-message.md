# Current Main.dll masked-word selector message

The pinned mapped `Main.dll` function `FUN_587b9760` at `0x587B9760` is 88
bytes. Its [instruction source](../src/client-current/Main/FUN_587b9760.cpp)
matches all 88 under objdiff 3.8.0, with two mapped calls to the already
verified sender `FUN_58970C70`. Verified state handlers `FUN_587EFD60` and
`FUN_587FD890` call it with a receiver in ECX and five stack arguments.

The function reads only arguments two through five. It zero-extends the low
words of arguments two and three, XORs each with `0xAA`, and packs them into
the upper and lower halves of a DWORD. It shifts argument four left 16 bits
for another DWORD. Selector zero in argument five sends message `0x80020400`;
selector one sends `0x80020700`. Both calls pass the shifted DWORD, packed
DWORD, and three zero arguments to `FUN_58970C70` with the original receiver
in ECX, then return the sender's result. Any other selector sends nothing
and returns the packed DWORD. The function ends with `ret 0x14`.

The [portable model](../src/client-current/semantic/MaskedWordMessage.cpp)
and [native cases](../tests/native/masked_word_message_test.cpp) check 16-bit
truncation, XOR/packing, wrapped left shift, both selectors, zero payload
fields, sender return propagation, and the unsupported-selector path. Run
`python tools/verify_masked_word_message.py`. The model is separate from the
byte-identical instruction source.

The argument values' game meaning, selector policy, and wire compatibility
remain unknown. No installed-client or emulator runtime test has been done.
