# Current Main `CPannelForceClassChange` constructor

`FUN_58863fd0` is a single contiguous body at `0x58863FD0..0x58864FC6`
(4,087 bytes). The byte source was generated from the captured mapped Main image
using the exact function extent reported by Ghidra. `verify_client_matches.py`
confirms a 100% match with 120 operand targets checked by objdiff 3.8.0.

Ghidra assigns `CPannelForceClassChange::vftable` after the shared screen base
initializer. Its direct caller is `FUN_58872030` (`CPannelForceManager`); the
caller stores this child at receiver offset `+0xB8` (slot `+0x2E`).

The body initializes screen state from shared sprite-table entries and creates
multiple `CSpriteDataScreen` children and indexed groups. These structures and
call paths come directly from the original decompilation. Individual child roles,
resource mappings, labels, and visible behavior remain unresolved. No emulator
runtime or visual test has been performed for this slice.
