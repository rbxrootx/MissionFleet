# Current Main ranged selector update

`FUN_588EBFA0` is a 221-byte function in the installed 2026 `Main.dll`
capture. Its complete mapped extent ends with `ret 0x0C` at `0x588EC07A`;
three `INT3` alignment bytes follow before the next indexed function at
`0x588EC080`. Objdiff 3.8.0 confirms all 221 bytes and four operand targets.

## Caller evidence

The verified `FUN_587EAE10` state update calls this helper repeatedly. Its
observed argument triples are `(0x12, 0x5C, 0x5F)` and
`(0x13, 0x60, 0x61)`. Verified callers `FUN_587EFD60` and `FUN_588E5150` pass
`(0x15, 0x66, 0x69)`, `(0x14, 0x62, 0x65)`, and `(0x1D, 0x7C, 0x7D)`.
The values are recorded without assigning names to the selectors or ranges.

## Observed behavior

The helper returns zero unless global `0x589C9074` equals `2`. It reads a
current value from receiver slot `+8 + selector * 8` and resolves the value
through the object table at receiver `+4`. When the resolved object's virtual
method at `+0x14` returns nonzero, the helper returns `1`.

Otherwise it calls `0x5897CC36`, divides the returned value by the inclusive
range size (`upper - lower + 1`), and uses the remainder as an offset from the
lower value. It stores the result in the selected receiver slot, resolves that
object through the same table, calls `0x58907990` with the object and global
`0x58A248FC`, then calls the object's virtual method at `+4` with argument
zero. This path returns `1`. The control flow is closely related to
[`FUN_588EBEB0`](current-main-option-selection.md), whose role is likewise
limited to a selector/range description.

## Uncertainties

The receiver and object-table types, selector and range semantics, callback
behind `0x5897CC36`, and identities and effects of the virtual methods remain
unknown. The higher-level UI or state effect is not established by these
callers. No emulator test was performed.
