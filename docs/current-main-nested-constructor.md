# Current Main nested constructor subtree

This pass follows the constructor call chain from `FUN_5890C1D0` through
`FUN_5890D0C0`, `FUN_5890C600`, and `FUN_5890C020` to four subtype setup
routines. Eight functions add 1,136 exact bytes. ObjDiff 3.8.0 reports 100%
for every function and checks all 43 mapped operand targets. A depth-four
direct-call audit from `FUN_5890C1D0` finds no unmatched inventory-backed
callee in this subtree.

| Address | Bytes | Evidence from the captured instructions |
| --- | ---: | --- |
| `5890D0C0` | 317 | SEH-protected constructor that calls `5890C720` and `5890C600`, installs `0x589A2CDC`, initializes fields around `+0x104..+0x128`, and allocates a member. Its caller then installs another vtable pointer. |
| `5890C720` | 94 | Calls base setup `589031A0`, initializes fields `+0xEC`, `+0x50..+0x64` to observed zero, -100, and 100 values, and installs `0x589A2A48`. |
| `5890C600` | 148 | SEH-protected setup through `589031A0`, clears `+0x50/+0x54`, calls `5890C020`, and installs `0x589A2CA0`. |
| `5890C020` | 405 | Allocates four 0x40-byte members and dispatches setup through the four 43-byte routines below; stores a selected result at `+0x50` and calls `58903290`. |
| `5890BF40` | 43 | Calls shared setup `5890E400` and installs `0x589A2BD8`. |
| `5890BF70` | 43 | Calls shared setup `5890E400` and installs `0x589A2C00`. |
| `5890BFC0` | 43 | Calls shared setup `5890E400` and installs `0x589A2C28`. |
| `5890BFF0` | 43 | Calls shared setup `5890E400` and installs `0x589A2C50`. |

The class identities, timer and range meanings, subtype selector mapping, and
member ownership remain unresolved. The audit establishes machine-code
identity and indexed call coverage, not successful runtime behavior or correct
rendering.
