# Current Main ForceInfo panel constructor

`FUN_5886dda0` is the installed `Main.dll` constructor whose Ghidra-discovered
vtable is `CPannelForceInfo::vftable`. Its single body range,
`5886DDA0..5886FF9A`, contains the full 8,699-byte inventory extent. ObjDiff
3.8.0 verifies the range at 100.0%, including 408 mapped operands.

Ghidra records six direct callers. Five caller bodies install these vtables
before calling it: `CPannelTrade` (`FUN_588b61e0`), `CPannelTradingForce`
(`FUN_588bb6f0`), `CPannelForceManager` (`FUN_58872030`), `CPannelItemManager`
(`FUN_58883f80`), and `CWarehouseItemInfo` (`FUN_588fa1c0`). The sixth caller
is `FUN_588f6940`. This evidence shows that the `CPannelForceInfo` child is
shared across several parent panels; it does not establish its precise
user-facing purpose in each parent.

The constructor calls base initialization `FUN_587b62b0`, installs the
`CPannelForceInfo` vtable, and creates numerous children. It performs
bounds-checked lookups into indexed global tables, creates
`CSpriteDataScreen` and `CSpriteBundleScreen` instances, and calls observed
helpers including `FUN_58731c60`, `FUN_58733280`, `FUN_589031a0`, and
`FUN_58907100`. It also sets child flags and fields. These observations come
from the decompiled body and direct call sites.

The vtable's `ForceInfo` label is direct evidence for the class name, but the
record schemas, field meanings, control labels/actions, resource semantics,
and runtime presentation remain unresolved. This is static byte-match
evidence, not an original-client visual or interaction test.
