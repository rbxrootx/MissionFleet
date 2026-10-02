# Installed Core.dll UTF-8 conversion path

This slice traces the multibyte conversion helper reached from the installed
client's wide-character scan output. The evidence comes from Ghidra's function
bodies and cross references in the pinned mapped `Core.dll` image.

Wide scan emitters `0x58861476` and `0x588614EC` call `0x5886DDA0`. That wrapper
creates and initializes a temporary conversion record, calls `0x5886DC70`,
then releases the temporary state. The dispatcher handles empty and
single-byte cases, chooses the UTF-8 path for code-page value `0xFDE9`, and
routes its other multibyte case through a callback slot at `DAT_5889429C`.

The UTF-8 adapter `0x5886E0A9` calls `0x5886DE19`. The decoder classifies the
lead byte through `0x5886DDD8`, validates continuation bytes and Unicode
scalar ranges, supports a saved partial-sequence state, and sends malformed
input through `0x5887B1D9`, which clears that state and records error `0x2A`.
The adapter clamps completed values above `0xFFFF` to `0xFFFD` before writing
the 16-bit result. `0x5887B1C5` clears state for the decoder's zero-result
transition. The alternate multibyte branch uses `0x5886FA97` to filter flags
before `0x5886FB2F` calls the indirect conversion callback.

All nine functions in this slice, totaling 1,181 bytes, were emitted from the
pinned Ghidra-bounded instruction streams and verified by objdiff 3.8.0 at
100% byte identity. The single-byte helper `0x58855EA0` is already matched.

The indirect callback target behind `DAT_5889429C`, the symbolic code-page and
status names, and the exact meaning of the temporary conversion-state fields
remain unresolved. The separate locale classification-table accessor used by
the scan match predicate is outside this conversion slice.
