# Current Main chat/channel menu refresh

`FUN_5888DF10` is called at six sites by the byte-matched chat/channel event
handler `FUN_587B83E0`. That handler receives the main menu through
`DAT_58A245C0`, the global instance constructed with the
`CPannelMainControl_MenuScreen` vtable. The first three calls follow observed
`0x8002B111` add-result branches for subtypes 2, 3, and 4, after storing the
message value in receiver fields `+0x188`, `+0x18C`, and `+0x190`. The other
three calls follow matching `0x8002B112` removal branches: the handler first
calls `FUN_5888DD80` with the subtype and saved value, refreshes the menu, then
sets that saved field to `0xFFFFFFFF`.

Both fresh Ghidra exports agree on body ranges `0x5888DF10..0x5888E0F9` and
`0x5888E100..0x5888E2B0`, totaling 921 bytes and 240 instructions. Independent
decoding of the mapped `Main.dll` covers every byte in both ranges. The routine
clears the low four bits of the word at child `+0x24` for twelve child pointers
held at receiver offsets `+0x600`, `+0x604`, `+0x608`, `+0x60C`, `+0x610`,
`+0x614`, `+0x618`, `+0x61C`, `+0x624`, `+0x628`, `+0x62C`, and `+0x630`. It
then makes ten direct calls to matched `FUN_58903290` to update child positions
from receiver coordinates at `+4` and `+8` with fixed offsets. Its branches
test globals `0x58A0B4A0` and `0x58A0B4A4` and receiver field `+0x10C`; observed
paths also OR `0x000F` into selected child flags and update receiver fields
`+0x638` through `+0x644` and child field `+0x50`.

One call at `0x5888DFC8` is indirect. The routine loads the child pointer from
`[receiver+0x620]`, reads its vtable, then loads slot `+8` and calls it. The
constructor initializes `+0x620` to null, but the current evidence does not
show its runtime assignment or identify the concrete callback. Child types,
flag meanings, coordinate units, and the meanings of the two globals remain
unresolved. The source preserves the mapped x86 stream for byte matching; no
emulator runtime or visual test was performed.

The focused verifier checks both fresh Ghidra body and edge exports, exact
mapped ranges and instruction counts, the unresolved virtual-call sequence,
all ten matched direct callees, and the six caller windows in the matched event
handler. See [`FUN_5888df10.cpp`](../src/client-current/Main/FUN_5888df10.cpp),
[`FUN_587b83e0.cpp`](../src/client-current/Main/FUN_587b83e0.cpp),
[`current-main-chat-channel-event-handler.md`](current-main-chat-channel-event-handler.md),
and [`current-main-control-menu-constructor.md`](current-main-control-menu-constructor.md).
