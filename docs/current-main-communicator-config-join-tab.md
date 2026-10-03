# Current Main communicator-configuration join tab constructor

`FUN_58831ed0` initializes a `CMenuScreen` base, then installs the
Ghidra-labeled `CPannelCommunicatorConfigJoinTab::vftable`. Its body has two
ranges:

| Ghidra range (inclusive) | Bytes |
| --- | ---: |
| `0x58831ED0..0x588327B6` | 2,279 |
| `0x588327C0..0x588329CD` | 526 |

The 10-byte gap is excluded. ObjDiff 3.8.0 verifies both ranges against the
captured mapped `Main.dll`.

## Evidence from the original code

The verified parent constructor `FUN_58843380` directly calls this method at
`0x588441DE`. Its callsite allocates `0xD0` bytes, passes the parent child-list
field and layout/resource arguments, then continues building the parent panel.
The parent is independently identified as `CPannelCommunicatorConfigPannel`.

The constructor obtains resource entries with bounds checks and creates several
groups of child controls. The original calls include repeated
`CSpriteDataScreen` initialization, pairs through `FUN_5878a280`, controls
through `FUN_58761090` and `FUN_58733280`, and data-driven controls through
`FUN_5875dda0`. It stores the resulting child pointers in the new object and
sets child flag/state values. This behavior is based on the Ghidra body and
direct verified parent call; the resource/control identities are not inferred.
ObjDiff checks all 2,805 bytes and 70 mapped operand targets.

## Uncertainties

Visible labels, resource-index meanings, exact control interactions, and the
tab's runtime appearance remain unresolved. No emulator runtime test was
performed.
