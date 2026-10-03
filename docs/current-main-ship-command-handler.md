# `CShip_MapObjectScreen` command handler

`FUN_588e4260` is a 3,641-byte `__thiscall` function with a 16-bit command and
a payload pointer. Ghidra's body ranges are:

| Range | Bytes |
| --- | ---: |
| `0x588E4260..0x588E42F8` | 153 |
| `0x588E4300..0x588E4B7C` | 2,173 |
| `0x588E4B80..0x588E50A2` | 1,315 |

The 7-byte and 3-byte gaps are omitted from the function body. Ghidra records
25 direct call references. One caller is the RTTI-identified
`CShip_MapObjectScreen` update method `FUN_588e5150`, which passes this function
the low six bits of a packed command word, a pointer into its record buffer,
and the word's upper-bit length field. Its special `0x1B` and `0x0C` paths pass
the full command and the same payload/length structure. The callsites set ECX to
the screen object and push three arguments; the handler epilogue is `ret 0x0C`.
Ghidra's decompiled body uses the command and payload pointer, but shows no read
of the third, caller-computed length argument. The body also contains the
original assertion path `Ship_MapObjectScreen.cpp`.

The command switch updates receiver filter bits and child-object fields for
several codes, formats `Engine Up`, `Engine Dn`, `Engine St`, and `Weapon
Control` messages on others, and routes command `0x0C` payload tags to object
and event helpers. That path includes smoke-bomb error-message branches. These
effects and helper calls are visible in Ghidra; most command meanings, payload
schemas, receiver-field roles, and final screen effects remain unknown.

The generated source matches the three mapped body ranges byte-for-byte under
the recorded Visual C++ 6.0 SP5 profile and ObjDiff 3.8.0. ObjDiff checked 190
mapped operand targets. No emulator runtime test was performed.
