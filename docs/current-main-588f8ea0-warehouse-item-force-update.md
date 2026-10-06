# Current Main `CWarehouseItemForce` resource updater

`FUN_588F8EA0` is a 2,553-byte virtual method in the installed `Main.dll`.
Ghidra maps one complete instruction range, `[0x588F8EA0, 0x588F9899)`, with
679 instructions and a `ret` at `0x588F9898`; alignment begins immediately
afterward. The byte-emission source preserves that range literally and the
objdiff verification checks all 45 mapped operand targets.

## Class and dispatch evidence

The method pointer at `0x589A2128` is slot `+0x1C` in the vtable at
`0x589A210C`. Its complete-object locator and type descriptor resolve to
`CWarehouseItemForce`. Ghidra found no direct code-call sites for this method,
so the table establishes virtual dispatch but does not identify which caller
invokes it.

## Observed update behavior

Ghidra shows the method selecting resource records from `DAT_589CFD70` using
receiver fields `+0x6C` and `+0x70`. It resolves selected indices through the
current resource tables, copies fields from those records into child objects
held at receiver offsets `+0xA4` through `+0xE0`, and sets or clears visibility
bit 0 in child word `+0x24`. A global state at `DAT_58A24AE0` chooses between
clearing the resource/visibility fields and the resource-selection path. The
receiver mode at `+0x90` selects color constants written through the child at
`+0xA0` and controls special child values.

Its six direct helper calls are `FUN_58907360` at `0x588F8F63`,
`FUN_58731CE0` at `0x588F95F7`, and `FUN_587316C0` at
`0x588F9737`, `0x588F97A0`, `0x588F97FB`, and `0x588F982E`.

## Unresolved details

The receiver fields, resource table schema and index meanings, child roles,
global-state conditions, and mode/color labels are not identified. The class
and virtual slot are supported by RTTI and vtable data, but there is no traced
dispatch caller or runtime observation. The byte match validates the captured
instruction stream only; this function has not been exercised in the emulator.
