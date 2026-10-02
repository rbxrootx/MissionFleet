# Installed Core.dll ship sprite cache and loader

This slice follows the ship-structure asset path in the captured mapped
`Core.dll` at runtime base `0x58480000`. The installed file is pinned by SHA-256
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`; its
on-disk PE has no raw `.text` bytes for these addresses, so the mapped capture
is the comparison source.

## Evidence-backed path

`0x585B03F0` formats `ShipStructureF%d%d%d.spr` from the requested structure
ID. It checks the cache table at `0x589617E8`; on a miss it allocates a
`0x198`-byte object, calls the derived constructor at `0x587803B0`, and stores
the loaded object in the cache. The derived constructor delegates to the base
initializer at `0x587B6750`, then installs vtable address point `0x588B5B58`.
Its slot 0 is destructor wrapper `0x58780490`, which invokes cleanup and
conditionally frees the same `0x198` bytes.

The base initializer installs vtable `0x588BDC84` and calls parser
`0x587B6D70` when given a path. Ghidra's parser decompilation shows it opening
the file, reading an `0x84`-byte header, comparing the first `0x28` bytes with
an embedded signature, and branching on the version byte. It reads image
records and payloads, allocates image/frame tables, selects sprite classes
from target depth and format/mask branches, converts or copies image data,
and builds animation records at `0x40`-byte stride. The parser directly calls
the two RGB16 format-2 constructors already documented in the
[compositor evidence](current-core-rgb16-compositors.md).

The current ship draw path separately establishes how animation records are
selected and rendered; see [the client render path](client-render-path.md).
This loader trace ties the cache and parser functions to that renderer without
assuming every supported payload variant has been decoded correctly.

## Function extent and byte verification

Ghidra's parser function body is sparse: it reports 15,015 addresses in four
ranges, while the contiguous output starts at `0x587B6D70` and ends after the
`RET 8` at `0x587BA82C`. The 22 addresses omitted from Ghidra's body lie inside
that linear span. The inventory builder records this reviewed span as 15,037
bytes; it does not include the three `INT3` bytes before the next function at
`0x587BA830`. Capstone decoded the complete span, and the repository's pinned
VC6 plus objdiff verifier matched all 15,037 bytes and checked 340 captured
operand targets.

The five cache/loader functions in this slice total 15,845 matched bytes:

| Address | Role | Bytes |
| --- | --- | ---: |
| `0x585B03F0` | Ship cache/name lookup | 293 |
| `0x587803B0` | Derived sprite constructor | 184 |
| `0x58780490` | Derived cleanup/destructor slot | 49 |
| `0x587B6750` | Base initializer | 282 |
| `0x587B6D70` | Sprite file parser/loader | 15,037 |

All five are byte-identical against the hash-pinned mapped image. This verifies
the emitted machine-code stream, not recovery of the original high-level source.
The Ghidra function body's omitted bytes and unreachable-block warning remain
unresolved at the source-structure level. No live `.spr` corpus matrix or
pixel-for-pixel original-client comparison has been recorded, so the precise
header checks, accepted versions, and every depth/mask/payload combination
still need runtime validation.
