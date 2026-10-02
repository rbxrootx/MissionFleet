# Installed Core.dll resource screen construction

Ghidra records `0x5856E240` calling constructor `0x5857FE50` at
`0x5856E2F1`. The constructor initializes its scene base, installs vtable
address point `0x588AA82C`, initializes a temporary child/context object, calls
`0x58539D50` with global `0x589056B4`, then creates another child with
`0x585367B0`, stores it at receiver offset `+0x60`, and invokes that child's
virtual slot `+0x04`. This ties the resource setup routine to a concrete
constructed scene object; the class and child types remain unnamed.
The client startup path that reaches `0x5856E240` from `WinMain` is documented
in [the entry and window setup notes](current-core-client-entry-and-window-setup.md).

`0x58539D50` stores its argument in `0x589056B4`, resets related globals, and
builds a set of screen resources. It makes repeated calls through factory
callback `0x588940D4` using resource IDs `10`, `11`, `0x10`, `0x14`, and `0x18`
with varying dimensions, flags, and label pointers. Returned objects are
wrapped by `0x587B60F0` and saved to scene globals. The routine also initializes
resource arrays and repeated child entries. The static trace now connects the
scene constructor to the same renderer adapter whose draw and text-conversion
path is documented in [the backend notes](current-core-text-render-backend.md).

The same setup call site invokes three short helpers. `0x5853ACB0` forwards its
temporary object to `0x587BD5D0` and returns zero. `0x5853ADA0(2)` uses the
registered registry callbacks with the literal key path
`SOFTWARE\FleetMission\NAVYFIELDClient\Log`; argument 2 skips the function's
argument-0 read and argument-1 write branches. Those branches refer to literal
value names `ID`, `PlayerID`, `pass`, and `PS`, but the resource screen calls
neither branch. `0x5853ACD0` stores an object from `0x584F1470` at
`0x589620A4`, then loads the mapped path `.\spr\Warning.spr` through `0x587803B0` and
stores that result at `0x589606DC`.

The installed file is `D:\FleetMission\SPR\en-us\Warning.spr`. The current
sprite previewer indexes it as pixel format `[1,2]` and rejects it because its
decoder currently supports `[2,2]`; the warning art's decoded appearance is
therefore not established here.

The callback factory's implementation, resource-ID names, label meanings,
child types, and resulting layout remain unknown. The captured callback pointer
is outside the Core image, and its owning module was not recorded in the
capture manifest. No live frame or input sequence was verified.

All five functions match the hash-pinned mapped Core image at 100% under VC6
SP5 and objdiff 3.8.0: `0x5857FE50` (230 bytes), `0x58539D50` (3,926),
`0x5853ACB0` (19), `0x5853ACD0` (204), and `0x5853ADA0` (467), for 4,846
exact bytes. The verifier checked zero relative relocations in these spans.
