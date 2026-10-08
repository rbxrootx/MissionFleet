# Current Main secondary-protection screen

This slice reconstructs the installed client's `C2ndProtectionSystemManager`
primary-vtable methods and their open direct-call closure. It contains 20
functions, 9,712 bytes, 24 exact Ghidra body ranges, and 2,829 decoded
instructions. Every emitted function passed ObjDiff's 100% byte comparison
against the mapped `Main.dll` image.

## Evidence from the original client

The primary vftable address point is `0x5898C4E0`. Its complete-object locator
at `0x5898C4DC` points to the TypeDescriptor
`.?AVC2ndProtectionSystemManager@@`. The table has seven observed slots:

| Offset | Target | Evidence in the body |
| --- | --- | --- |
| `+0x00` | `FUN_58731840` | deleting wrapper around the screen cleanup routine |
| `+0x04` | `FUN_58734850` | state-gated update that dispatches prompt layouts |
| `+0x08` | `FUN_58731A10` | guarded state transition and refresh request |
| `+0x0C` | `FUN_58731230` | updates observed state values `0x100`, `0x200`, `0x400`, and `0x500` |
| `+0x10` | `FUN_58731860` | window-event routing, including Escape and child-control paths |
| `+0x14` | `FUN_58902FE0` | previously byte-matched framework method |
| `+0x18` | `FUN_58733E70` | keypad input and password-entry comparison paths |

The matched constructor `FUN_58733360` first invokes the base initializer, then
writes the `C2ndProtectionSystemManager` vftable over the base vptr. It loads
`./SPR/ITPNNMPD.spr` and creates the observed child controls. The already
matched setup method `FUN_5878AF40` calls this constructor at `0x5878CA6C`.
These class identity and caller facts are checked against the mapped image by
`tools/verify_current_main_second_protection_system.py`.

Fresh Ghidra decompilation of `FUN_58734770` shows the update path rebuilding
several prompt/control layouts. The input handler routes digit controls into
entry buffers, renders masked digits, supports deletion, and compares observed
entries. It emits message identifiers `0x80016101` and `0x80016102` with
4-byte and 8-byte payloads, and passes status identifiers `0xBBA` and `0xBBB`
to the observed status helper. The mapped image also contains the screen's
`TEXT_2NDPROTECT`, `PASSWORD_INPUT`, `CHECK_PASSWORD`, `CHANGE_PASSWORD`,
`INFORM_NEEDPASSWORD`, and `INFORM_BLOCKPASSWORD` resource keys.

The tracked byte ranges are in
`config/NF2_2026/main-second-protection-system-body-ranges.tsv`. Two independent
Ghidra body exports agree on every range. Two independent call/data edge exports
agree, and the open direct-call graph from the six open primary-vtable slots
reaches exactly these 20 functions. The focused verifier also decodes each
mapped instruction range, checks every direct transfer against Ghidra, and
requires all out-of-slice in-image direct targets to have existing byte-match
records.

## Uncertainties

The meanings of the numeric screen modes and object fields remain unknown. The
message payload schemas and server-side effects are not established by these
client instructions alone. The resource keys identify prompt families, but the
full localized text and each mode's product meaning are not proven here. No
live-client or emulator interaction test was run, so this result establishes
function-level byte identity and class-flow evidence, not a working password
service or a bootable visual test of this screen.

Adjacent vtable data was not folded into this class on address proximity alone:
the nearby complete-object locators name other RTTI types, while the recovered
constructor installs the `C2ndProtectionSystemManager` primary vftable directly.
