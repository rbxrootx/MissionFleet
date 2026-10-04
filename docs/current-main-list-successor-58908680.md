# Current Main.dll linked-selection successor

The pinned current `Main.mapped.bin` has a 106-byte body at `0x58908680`.
Verified `FUN_5879D480` calls it twice, at `0x5879D4AE` and `0x5879D4C2`;
verified `FUN_5879F810` calls it at `0x5879F889` and `0x5879F8A2`.
[`FUN_58908680.cpp`](../src/client-current/Main/FUN_58908680.cpp) records each
decoded instruction byte in the Ghidra function extent. The source and target
match at 100% under objdiff 3.8.0: all 106 bytes, with no mapped address
operands in this body.

With the receiver in `ECX`, the method reads its pointer at `+0x84`. If it is
null, the method copies the pointer at `+0x78` to `+0x84` and tail-jumps through
the receiver's vtable slot `+0x3C`. Otherwise it reads the current node's
`+0x14` link, stores that successor at receiver `+0x84`, and returns if the
successor is null. For a nonnull successor, it starts at receiver `+0x80` and
walks `+0x14` links toward that successor. Each preceding node adds receiver
`+0x5C` to a running displacement. If the starting pointer is nonnull and
this displacement is greater by signed comparison than receiver `+0x20`
minus `+0x5C` minus `+0x18`, the method moves receiver `+0x80` to its next
node. It then tail-jumps through vtable slot `+0x3C`.

The direct-call audit for both callers now reports every indexed direct
target as byte-matched. This function itself has no direct call target; its
final vtable transfer remains indirect. To reproduce the machine-code check:

```text
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58908680
python tools/audit_match_callgraph.py 5879D480 --depth 1
python tools/audit_match_callgraph.py 5879F810 --depth 1
python tools/generate_progress.py --check
```

The instruction trace establishes the field and branch behavior, but it does
not establish the receiver's class, the exact UI meaning of its linked nodes
and measures, or the indirect vtable target's effects. No runtime UI
transition was captured. The source is an exact x86 instruction reconstruction,
not a portable high-level implementation or a bootable-client test.
