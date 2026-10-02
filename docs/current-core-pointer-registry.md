# Installed Core.dll pointer registry and state callbacks

This slice traces a shared pointer-array operation in the installed mapped
`Core.dll`, with direct Ghidra call-graph evidence and byte checks against the
hash-pinned image. The state-processing routine at `0x58521620` calls wrapper
`0x5885A039` at `0x58521678`. That wrapper handles a null input through
`0x58859EC2(0)`, otherwise evaluates the flags at object offset `+0x0C` through
`0x58859F3F`, and sends accepted inputs through `0x58859E62`.

`0x58859E62` calls `0x58832760(&0x588ED1A0, 0x0C)`, invokes callback slot `0x58894220`
on the first input object plus `0x20`, calls `0x58859FCB` with a nested pointer,
then releases the record through `0x58859EB6` and callback slot `0x5889421C`.
`0x58859FCB` brackets its checks with `0x58850C9F(0)` and `0x58850CE7`. For a
nonnull object it calls `0x58859F62`; if that helper accepts the state, it
checks flag bit 11 and consults `0x5886CC56` and `0x5887031F`. Otherwise it
returns -1. The exact meanings of this gate and return value are not recovered.

The array operation is `0x58859DB6`, called by the previously matched
`0x58859EC2`. It calls `0x58832760(&0x588ED180, 0x2C)`, obtains a value through
`0x58863C1C`, then scans `DAT_58969614` pointer slots beginning at
`DAT_58969618`. For each pointer, `0x58859F0E` checks for a nonnull object
whose flag bit 13 is set, then applies `0x58859F3F`. If the predicate accepts
an entry, `0x58859DB6` builds a temporary record and invokes `0x58859D2A`.
That helper calls `0x58859D02`, which dispatches callback slot `0x58894220`
with object pointer + `0x20`. It conditionally calls `0x58859FCB`; its result
either writes -1 through a supplied output pointer or increments a supplied
counter. The path exits through `0x58859DAA`, which forwards a record field to
`0x58859D16`; that function invokes callback slot `0x5889421C` with pointer +
`0x20`. The array scan then releases its own temporary state through
`0x58859E56` and `0x58863C64`.

The 13 newly matched functions are `0x58859DB6` (160 bytes), `0x58859D2A`
(128), `0x58859D02` (20), `0x58859DAA` (12), `0x58859E56` (12), `0x58859F0E`
(49), `0x58859F3F` (35), `0x58859E62` (81), `0x58859EB6` (12), `0x58859FCB`
(101), `0x58859F62` (105), `0x5885A039` (83), and `0x58859D16` (20). Together
they cover 818 bytes and 36 checked relocation operands. All 13 match the
installed Core image at 100% with objdiff 3.8.0 and the configured VC6 SP5
toolchain.

Object/record types, callback ABIs, counter purpose, state-gate meaning,
flag-field meanings, and the array's higher-level role remain unresolved. The
documented control flow and field offsets are direct observations; descriptive
labels such as “registry” refer only to the scan/update pattern and are not
recovered source names.
