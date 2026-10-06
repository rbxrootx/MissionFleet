# Current Main.dll paired child-key removal path

The shared removal dispatch consists of [FUN_5881DBE0](../src/client-current/Main/FUN_5881dbe0.cpp)
and its first child operation [FUN_58842780](../src/client-current/Main/FUN_58842780.cpp).
Their 37-byte and 343-byte instruction streams match all 380 bytes and six
mapped operand targets under objdiff 3.8.0. The second child operation,
`FUN_58848450`, was already byte-matched and is described in the
[linked-record removal notes](current-main-linked-record-removal-helper.md).

Both verified high-level dispatchers reach `FUN_5881DBE0`: packet dispatcher
`FUN_587BB700` at `0x587BE02C` and event dispatcher `FUN_588C1650` at
`0x588C17F9`. Both load its receiver from global `0x58A245B4`. The helper
reads the first stack argument and forwards that same pointer, first to
`FUN_58842780` with receiver `[this+0xDC]`, then to the already matched
`FUN_58848450` with receiver `[this+0xD8]`. It returns with `ret 8`; the other
stack argument is not read by this body. The callsites show distinct values
in that unused slot, but its intended role is not established.

`FUN_58842780` checks the count in the descriptor at child offset `+0xD0`.
When positive, it scans indexed entries through verified `FUN_589080E0` and
passes each entry with the key pointer to callback slot `0x5898C1A4`. On the
first callback result of zero, it removes that index from four consecutive
array descriptors beginning at `+0xD0`, using verified `FUN_589081E0` for each
descriptor. It then follows nodes from child `+0x138` through node `+0x54`,
comparing the key with the NUL-terminated string reached through node `+0x70`
and `+0x6C`. On the first equal string, it repairs the linked-list links and
head/tail fields, calls the node's first virtual method with argument `1`, and
returns. If no string matches, it returns without unlinking a node.

Recheck the callers, both new candidates, and supporting functions with:

```text
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 587BB700 --only 588C1650 --only 5881DBE0 --only 58842780 --only 58848450 --only 589080E0 --only 589081E0 --only 5897CC72
python tools/audit_match_callgraph.py 5881DBE0 --depth 1
```

The manager and child object types, callback implementation, key schema,
array roles, virtual deletion contract, meaning of the unused caller value,
and the event or visible UI effect remain unresolved. This establishes
instruction identity and static control flow; no client or emulator runtime
test has been performed.
