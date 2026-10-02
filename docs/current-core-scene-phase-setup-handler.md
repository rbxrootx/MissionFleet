# Installed Core.dll scene phase-setup handler

This slice reconstructs handler `0x5872D130` and its table accessor
`0x58484AD0` from the hash-pinned mapped `Core.dll` image at base
`0x58480000`. Ghidra's call graph places the handler directly in the
`0x58531000` scene-update dispatcher at `0x58531698`, and records two other
callers at `0x585F6720` and `0x585B0E50`.

In the dispatcher, state code 7 at phase 9 changes the phase field at `+0x12148`
to `0x10`, writes `0x40000000` to scene field `+0xA0`, performs optional global
object setup, then calls `0x5872D130(0x20000)`. The handler looks up indices 2,
4, and 5 through `0x58484AD0` and attaches each result through
`0x58486C60`. It calls `0x58485EE0` with 0, 1, and 1; the dispatcher calls the
same helper with 1 immediately before and twice after the handler. For input
`0x20000`, the handler writes 2 to receiver `+0x64`, writes 3 to `+0x68`, and
detaches through `0x58486C60(0)`. It then writes 300 to `+0x54` and `+0x58`
and copies the values at `+0x64` and `+0x68` to `+0x5C` and `+0x60`.

The handler also contains branches for `0x30000`, `0x40000`, and `0x50000`.
The first and last follow the same field writes and detach path as `0x20000`;
`0x40000` performs the field writes without detaching. The dispatcher call
site proves only the `0x20000` input in this state path.

The accessor `0x58484AD0` rejects negative indices and indices at or above the
count at receiver `+0x160`. If receiver `+0x190` is nonzero, it returns
`*(DWORD *)(receiver + 0x190) + index * 0x40`; otherwise it returns null. The entry schema
and the meaning of the attached objects, fields, global helper side effects,
and numeric values remain unresolved.

Both functions match the captured mapped image at objdiff 100%: 411 bytes and
39 audited operand targets for the handler, plus 77 bytes and one target for
the accessor. The complete Core verification profile passed all 137 recorded
functions at 100%. These checks prove the captured x86 extents and relocation
destinations, not a live rendered transition.
