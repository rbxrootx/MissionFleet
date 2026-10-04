# Communicator configuration/memo helper methods

Nine direct callees of the byte-matched `CPannelCommunicatorConfigMemoManage`
handler `FUN_58840890` now match the installed `Main.dll` exactly. The handler
evidence is recorded in
[`current-main-communicator-config-memo-handler.md`](current-main-communicator-config-memo-handler.md).
Call-site inspection in that function finds 25 calls into these nine methods.
The generated sources were checked against their mapped function boundaries;
the nine bodies total 1,598 bytes and 50 relocated operands were checked.

The calls group into these observed behaviors:

- `FUN_5883F0E0` (587 bytes, six calls) applies the 500 ms append gate, adds
  stored header strings, and chunks supplied text at the observed `0x46`-byte
  limit or CR byte before appending it.
- `FUN_5883EAB0` (137 bytes, five calls) selects one of two child-control
  groups from the mode at `+0xF0`, updates their values, and in mode 2 performs
  linked-list lookups through `FUN_58789DF0` and `FUN_58789F80`.
- `FUN_5883F330` (35 bytes, three calls) splits the integer at `+0x110` into
  quotient and remainder by 10 and writes them to two child controls.
- `FUN_587BA3F0`, `FUN_587BA430`, and `FUN_587BA450` (58, 26, and 26 bytes;
  three, two, and two calls) package values and dispatch messages
  `0x80010A03`, `0x80010A02`, and `0x80010A04` through `FUN_58970C70`.
- `FUN_58789DF0` (392 bytes, two calls) walks a linked list and compares
  mode-specific records using fields at `+0x2A2`, `+0x2DA`, `+0x0C`, and
  `+0x2BA`, returning the matched record or `-1`.
- `FUN_5883F360` (166 bytes, one call) moves the child selection backward,
  updates the selected child, and recalculates its position. `FUN_5883F410`
  (171 bytes, one call) performs the corresponding forward move.

The two corrected extents include their terminating instructions: the
`FUN_5883F0E0` body is 587 bytes and ends at its `ret 4`; `FUN_58789DF0` is 392
bytes and ends at its `ret 0x10`. For every method, objdiff reports 100.0%
under the recorded compiler configuration. These are machine-code matches,
not independent runtime or emulator tests. The exact UI labels, message
semantics, clock units beyond the observed threshold, and rendering effects
remain unverified.
