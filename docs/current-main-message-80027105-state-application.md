# Current Main message `0x80027105` state application

The byte-matched `FUN_587bb700` message dispatcher routes event
`0x80027105` through switch-table entry 3 to block `0x587C126B`, which calls
`FUN_588fcfb0` at `0x587C127B`. The verifier checks the mapped dispatcher
instructions, the adjusted switch index, the table entry, and the direct call.
The event and root-call addresses are inside the verified dispatcher body.

## Behavior observed in the original code

`FUN_588fcfb0` first clears receiver fields `+0x94` and `+0x98` and sets bit 1
in the word at `+0x24`. With a nonzero second argument, it finds the first
registered object whose byte at `+0x98` is 1, deactivates that object when
present, then passes the argument to `FUN_588f74c0` and `FUN_588f7430`.

With a zero second argument, it walks the supplied descriptors at an observed
8-byte stride. `FUN_588ff0f0` looks up each entry by the pair of DWORDs at
`+0x60` and `+0x64`. For an entry whose byte at `+0x68` is zero, the root calls
`FUN_588fc110` to process its associated record data. For subtype 1, the root
sets receiver `+0xA0`, calls `FUN_588f43f0`, `FUN_588730f0`, and
`FUN_588bc600`, then advances the output pointer by `0x180`. After each found
entry, `FUN_588ffb50` calls the entry's first virtual method with argument 1,
clears its pointer-vector slot, shifts later pointers, and reduces the vector
end. A missing lookup deactivates the first object with state byte `+0x98 == 1`
if one exists, then returns. A completed list calls `FUN_588f74c0(0)` and
`FUN_588f7430(0)`.

`FUN_588fc110` resolves record-associated objects, compares an observed byte at
resolved offset `+0x35C` with a global byte's low nibble, and follows the
corresponding state-dependent calls. For a nonzero record count, it derives a
record start from the input header, calls `FUN_588f43f0` at `0x180`-byte
intervals, and then calls the observed update/finalization helpers. The
`FUN_588ff080` helper finds the first object with state byte `+0x98 == 1`;
`FUN_588f7e90` clears that state and performs the observed attached-object
field and lifecycle updates. `FUN_588f7430` dispatches values 0 through 4 to
`FUN_588f7230` and sends other values through the observed error path.

Fresh Ghidra 12.1.3 output gives this direct-call closure seven functions and
1,288 bytes in eight exact ranges. The split `FUN_588fc110` ranges are recorded
in [`main-message-80027105-state-body-ranges.tsv`](../config/NF2_2026/main-message-80027105-state-body-ranges.tsv).
ObjDiff 3.8.0 reports every emitted function byte-identical. The focused
verifier checks exact ranges, all nine internal direct calls, the 33 direct
calls to byte-verified functions, the absence of unmatched mapped direct calls,
and the dispatcher route.

The receiver class, descriptor semantics, `+0x68` subtype meaning,
output-record schema, global state values, virtual method contract, and
server-authoritative meaning remain unresolved. This static byte-match check
does not verify a runtime visual result or establish that the client is
bootable.

Repeat the checks with:

```powershell
rtk python tools\verify_current_main_message_80027105_state.py
rtk python tools\verify_client_matches.py --config config\NF2_2026\client-verifications.json --only 588F7430 --only 588F7E90 --only 588FC110 --only 588FCFB0 --only 588FF080 --only 588FF0F0 --only 588FFB50
```
