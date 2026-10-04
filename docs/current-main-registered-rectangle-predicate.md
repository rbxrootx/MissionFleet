# Current Main.dll registered-rectangle predicate

`FUN_588DD1B0` is a 237-byte routine in the hash-pinned installed-client
`Main.dll`. It is called from verified functions `FUN_5873E4E0` and
`FUN_588E5150`, in aircraft-flight-state and ship-object update paths.

The function scans a linked collection reached through global
`0x58A2459C + 0x20D58`. Nodes with a non-null record at `node + 0x0C` provide
rectangle bounds. The receiver's coordinates at `+0x04` and `+0x08` are checked
against half-open x/y intervals using the record's origin at `+0x04/+0x08` and
boundary values at `+0x14/+0x1C/+0x18/+0x20`. A containing record returns 1;
exhausting the list returns 0. When the single stack argument is 1, the routine
first returns 0 if receiver byte `+0x354` equals the corresponding byte in the
object at global `0x58A247F8 + 4`.

The reconstruction matches all 237 mapped bytes at 100% under objdiff 3.8.0,
with all six operand targets checked. The comparison values, object and node
types, coordinate units, and collection purpose are unknown. The two callers
use the result as a branch condition; that evidence does not establish whether
the rectangles encode collision, visibility, range, or another concept. No
runtime behavior test was performed.
