# Current Main chat input and submission handler

`FUN_587fc9c0` is a 3,573-byte `__thiscall` handler taking an event-record
pointer. Ghidra assigns its body to these 14 noncontiguous ranges:

| Range | Bytes |
| --- | ---: |
| `0x587FC9C0..0x587FCA09` | 74 |
| `0x587FCA10..0x587FCBFC` | 493 |
| `0x587FCC00..0x587FCC4C` | 77 |
| `0x587FCC50..0x587FD0AC` | 1,117 |
| `0x587FD0B0..0x587FD0FC` | 77 |
| `0x587FD100..0x587FD14C` | 77 |
| `0x587FD150..0x587FD19C` | 77 |
| `0x587FD1A0..0x587FD44C` | 685 |
| `0x587FD450..0x587FD597` | 328 |
| `0x587FD5A0..0x587FD5BB` | 28 |
| `0x587FD5C4..0x587FD5DF` | 28 |
| `0x587FD5E8..0x587FD603` | 28 |
| `0x587FD60C..0x587FD627` | 28 |
| `0x587FD630..0x587FD7F7` | 456 |

Ghidra records five call references from `FUN_587ff150`. The parent handles
event type `0x102`, dispatches carriage return and selected key paths to this
function, and passes the same event-record pointer. The handler checks the
record byte at `+8` for carriage return. This call and the localized
`MESSAGESTRING_*_CHATTING` strings support describing it as chat input and
submission logic. Ghidra does not identify the owning C++ class.

On carriage return, the body changes chat-control flags and selects labels for
whisper, all, fleet, squadron, direct-fleet, user-channel, and team chat modes.
It lowercases the first slash-command token, branches to command helpers,
emits localized chat-help lines, and includes forbidden-word message paths.
The user-facing semantics of most slash commands and helpers are not fully
established from this function alone.

The generated source reproduces the 14 Ghidra ranges byte-for-byte under the
recorded Visual C++ 6.0 SP5 profile. ObjDiff 3.8.0 checked 165 mapped operand
targets. The emulator runtime was not tested.

The `/w` and `/whisper` input branch is now reconstructed through its
recipient parser, guarded-message dispatch, and input-state update. See the
[private-chat recipient evidence](current-main-chat-private-recipient.md) for
the exact caller, mapped command strings, verified ranges, and remaining
uncertainties.
