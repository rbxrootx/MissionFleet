# Current Main control rebuild routine

`FUN_587e0e40` is an 8,252-byte routine in the locally captured installed
`Main.dll`. It now matches all ten recorded source segments at 100.0% in
objdiff 3.8.0. The candidate is byte-exact for this mapped client image; it
does not establish that the client is bootable or that the routine's UI behavior
is fully understood.

Ghidra records direct calls from `FUN_587e4230` at `0x587E433E` and
`FUN_587e2e80` at `0x587E2EA6`. The pseudocode sets the stack cookie and checks
a 16-bit receiver field at `+0x60`. In its zero-state path it releases existing
child pointers in indexed arrays at `+0x470` and `+0x474`, resets those arrays,
and creates replacement controls using indexed shared resource records,
allocation calls, and screen/control helpers. This evidence does not identify a
stable class or screen name.

The original Ghidra function body contains six ranges totaling 8,216 bytes.
Ghidra marks `FUN_5897cc42` non-returning, but its mapped body is a six-byte
indirect jump through callback slot `0x5898C1F8`. Four calls to that thunk are
followed by reachable 9-byte cleanup/store sequences, each leading into the
next Ghidra-owned block:

| Continuation | Mapped instructions | Following Ghidra block |
| --- | --- | --- |
| `0x587E0EE3..0x587E0EEB` | `add esp, 4`; store to receiver `+0x470` | `0x587E0EEC` |
| `0x587E0F43..0x587E0F4B` | `add esp, 4`; store to receiver `+0x474` | `0x587E0F4C` |
| `0x587E2A08..0x587E2A10` | `add esp, 4`; store to receiver `+0x470` | `0x587E2A11` |
| `0x587E2A6B..0x587E2A73` | `add esp, 4`; store to receiver `+0x474` | `0x587E2A74` |

The mapped instructions decode fully with Capstone. Including these continuations
adds 36 bytes to the indexed span. The separate gap at `0x587E29BD..0x587E29BF`
is `lea ecx, [ecx]` alignment and remains excluded. Thus the corrected body is
8,252 bytes across ten segments, with 173 relocation operands audited by the
client verifier. The other semantics of the callback, receiver fields, shared
resource schema, control identities, and runtime rendering remain unresolved.
No original-client visual or interaction test was performed for this routine.
