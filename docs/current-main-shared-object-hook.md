# Current Main shared object hook

This pass reconstructs `FUN_5890E400` and `FUN_5890E0B0`, the shared path used
by four sibling constructors: `FUN_5890BF40`, `FUN_5890BF70`, `FUN_5890BFC0`,
and `FUN_5890BFF0`. All seven direct-call edges in the audited path are verified at 100% under
objdiff 3.8.0. The current startup-root call-graph audit reports no unmatched
inventory-backed edges through depth ten after these two matches.

`FUN_5890E400` stores its first and second stack arguments at receiver offsets
`+0x1C` and `+0x20`, and writes `0x01000000` at `+0x18`. If either stored
argument is zero, it clears four receiver fields and returns zero. Otherwise,
it passes a stack-local buffer, zero, and size `0x7C` to `0x5897CC48`, invokes
the method at slot `+0x18` of the object reached through global `0x58A28504`,
forwarding the third argument, and calls `FUN_5890E0B0`. On the observed success path it invokes slot `+0x80`
of a selected object and returns one.

`FUN_5890E0B0` reads receiver field `+4`, makes the same call through
`0x5897CC48`, and invokes slot `+0x64` on the referenced object. It compares
the returned value with `0x8876021C`; one branch repeats the virtual dispatch
through a nested object. It stores two stack values at receiver `+8` and
`+0x0C`, and the null-object path returns zero.

The thunk contract at `0x5897CC48`, global object's type, virtual method
contracts, status-code meaning, object schemas, and ownership rules remain
unresolved. The buffer-zeroing purpose is inferred only from the call
arguments, not established by the thunk body. No runtime client test was
performed.
