# Installed Core.dll four-byte-target sprite class, selector 2

This slice follows the selector-2 class chosen by the installed ship sprite
parser for a four-byte output target. Evidence is from the hash-pinned mapped
`Core.dll` at runtime base `0x58480000`.

## Selection and dispatch

At `0x587B6D70`, the parser's `DAT_58905F98 == 4` branch selects constructor
`0x58821250` when its local class selector is 2. Ghidra shows that constructor
calling shared initialization at `0x587C9800` and writing vtable address point
`0x588BE74C` to the object. The vtable entries read directly from that address
in the mapped capture are:

| Offset | Target | Role supported by evidence |
| --- | --- | --- |
| `+0x00` | `0x588212A0` | Cleanup and deleting-destructor wrapper |
| `+0x04` | `0x588212D0` | Sprite slot 1 renderer |
| `+0x08` | `0x588244F0` | Sprite slot 2 renderer |

The generic screen dispatcher at `0x587BA830` calls sprite vtable slot 1 with
the target buffer, geometry, and color/effect parameters. A specific invocation
site for slot 2 has not been established.

## Observed renderer behavior

Both methods test the payload at object offset `+0x0C`, reject empty or
nonintersecting geometry, clip to the destination rectangle, obtain target
origin and pitch through shared screen helpers, then traverse sprite data using
the configured `DAT_58905F98` output stride. Slot 1 uses channel-mask globals
`DAT_58965F54` and `DAT_58965F5C`; slot 2 also uses
`DAT_58965F3C`, `DAT_58965F44`, and `DAT_58965F4C`. Ghidra shows blending
branches that combine sprite and destination values with the final arguments,
but this does not establish user-visible channel layout or effect names.

No captured original-client frame has been compared pixel-for-pixel, and the
runtime mask values and slot-2 caller remain unresolved.

## Byte verification

The four class functions were generated from the mapped instruction stream and
verified by the pinned VC6 plus objdiff 3.8.0 pipeline at **100%**: 24,958 bytes
and 820 captured operand targets checked.

| Address | Role | Bytes |
| --- | --- | ---: |
| `0x58821250` | Constructor | 37 |
| `0x588212A0` | Cleanup/destructor slot | 46 |
| `0x588212D0` | Slot-1 renderer | 12,821 |
| `0x588244F0` | Slot-2 renderer | 12,054 |

This establishes emitted machine-code identity, not recovery of the original
high-level C++ source.
