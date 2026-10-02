# Installed Core.dll resource screen construction

Ghidra records `0x5856E240` calling constructor `0x5857FE50` at
`0x5856E2F1`. The constructor initializes its scene base, installs vtable
address point `0x588AA82C`, initializes a temporary child/context object, calls
`0x58539D50` with global `0x589056B4`, then creates another child with
`0x585367B0`, stores it at receiver offset `+0x60`, and invokes that child's
virtual slot `+0x04`. This ties the resource setup routine to a concrete
constructed scene object; the class and child types remain unnamed.

`0x58539D50` stores its argument in `0x589056B4`, resets related globals, and
builds a set of screen resources. It makes repeated calls through factory
callback `0x588940D4` using resource IDs `10`, `11`, `0x10`, `0x14`, and `0x18`
with varying dimensions, flags, and label pointers. Returned objects are
wrapped by `0x587B60F0` and saved to scene globals. The routine also initializes
resource arrays and repeated child entries. The static trace now connects the
scene constructor to the same renderer adapter whose draw and text-conversion
path is documented in [the backend notes](current-core-text-render-backend.md).

The callback factory's implementation, resource-ID names, label meanings,
child types, and resulting layout remain unknown. The captured callback pointer
is outside the Core image, and its owning module was not recorded in the
capture manifest. No live frame or input sequence was verified.

Both functions match the hash-pinned mapped Core image at 100% under VC6 SP5
and objdiff 3.8.0: `0x5857FE50` (230 bytes) and `0x58539D50` (3,926 bytes), for
4,156 exact bytes. The verifier checked zero relative relocations in these
function spans.
