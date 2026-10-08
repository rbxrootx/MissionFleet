# Current Main data-file aggregate

Byte-matched `FUN_587F2DD0` calls `FUN_58779500` at `0x587F50E1`. The caller
loads the value at `0x58A2481C` into ECX for the fastcall entry, then stores the
returned EAX at receiver offset `+0x108EC` (`0x587F5104`). The callsite, input
load, and result store are present in the mapped image and in the matched
caller's source.

`FUN_58779500` calls `FUN_587793C0` fourteen times. The exact callsites push
these mapped data-file names: `Armor.Data`, `Hmbpd.Data`, `Aircraft.Data`,
`Location.Data`, `FCS.Data`, `SpecialItem.Data`, `Torpedo.Data`,
`TpLauncher.Data`, `Engine.Data`, `Projectile.Data`, `GunSet.Data`,
`Frame.Data`, `ShipReinforceItem.Data`, and `ForceInfo.Data`. The adjacent
mapped strings describe most entries as FleetMission database or data files.
The parent adds the fourteen helper results and returns the sum.

The helper pseudocode walks 0x30 four-byte groups from a supplied pointer,
folding byte-derived products into an integer. When a count read through
another supplied pointer is positive, it also processes a byte span whose
length depends on that count and a supplied stride. It has no direct callees.
Two independent Ghidra body and call-edge exports agree on the 626-byte and
319-byte bodies, all 14 helper edges, and the matched caller edge. The focused
verifier checks complete mapped instruction decoding, each literal pointer at
its exact callsite, the caller's register input and return store, and the
byte-identical ObjDiff records.

The data-record schemas, argument mapping inside the helper, arithmetic's
meaning, the role of `+0x108EC`, and later use of this value remain unknown.
The strings establish the values passed to the helper; they do not prove that
these functions open or parse those files. No emulator runtime test has been
performed.
