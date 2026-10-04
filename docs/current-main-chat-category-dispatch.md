# Current Main.dll chat-category dispatch variants

The adjacent functions `FUN_587B8290`, `FUN_587B8300`, and `FUN_587B8370`
are three 108-byte variants on the verified chat/event path. Each complete
instruction body matches the installed `Main.dll` byte for byte under objdiff
3.8.0; each has four mapped relocation targets checked. Their verified callers
include `FUN_587FC9C0` and `FUN_58890110`.

Each variant passes the text beginning at record `+0x30` and a length reduced
by `0x30` to `FUN_587A2D40`. A nonzero result returns zero. Otherwise it calls
the staged gate `FUN_587B7BD0`. If the gate allows dispatch and the variant's
receiver field is nonnegative, it calls `FUN_58970C70` with selector
`0x80020A00`, the record and length, and flags assembled from `0x20000` plus a
variant-specific receiver field and constant:

| Function | Receiver field | ORed constant |
| --- | --- | --- |
| `FUN_587B8290` | `+0x188` | `0x20000` |
| `FUN_587B8300` | `+0x18C` | `0x30000` |
| `FUN_587B8370` | `+0x190` | `0x40000` |

All non-filtered paths return one, including cases that skip dispatch. This
proves the shared filter/gate/dispatch structure and the variant differences;
it does not establish the filter policy, receiver field meanings, protocol
semantics, or user-visible category names. No runtime client or emulator test
was performed.
