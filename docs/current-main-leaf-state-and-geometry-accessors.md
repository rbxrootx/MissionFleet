# Current Main.dll leaf state and clipping accessors

Five small `Main.dll` methods now have ordinary C++ match sources instead of
literal instruction emissions. The `thiscall` signatures express the observed
`ECX` receiver convention. The mapped body of each method has one load or
store and a plain return.

| Function | Observed body | Verified caller evidence |
| --- | --- | --- |
| `FUN_587AFE40` | Store DWORD `1` at receiver `+8`. | `FUN_588E4260`; `FUN_588E5150` takes this path for a negative tested value. |
| `FUN_587AFE50` | Store DWORD `2` at receiver `+8`. | Same callers; `FUN_588E5150` takes this path for a positive tested value. |
| `FUN_587AFE60` | Store DWORD `4` at receiver `+8`. | Same callers; `FUN_588E5150` takes this path for a zero tested value. |
| `FUN_58907F30` | Return DWORD at receiver `+0x1C`. | `FUN_5896CF50` and `FUN_5896E150` subtract this result in a first coordinate clipping pass. |
| `FUN_58907F40` | Return DWORD at receiver `+0x20`. | The same two callers subtract this result in a second coordinate clipping pass. |

The three setters form a value-selecting leaf family; the two getters form an
adjacent coordinate-field family. The original code does not establish their
class names, game meanings, coordinate units, or signedness of the stored
fields. Their complete extents total 32 bytes. Clang-cl recompiles all five
ordinary C++ sources to those exact original bytes; objdiff 3.8.0 confirms
100% identity. No runtime client test was performed.
