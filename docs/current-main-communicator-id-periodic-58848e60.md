# Current Main.dll communicator ID panel periodic update

The installed client's RTTI-backed `CPannelCommunicatorIDPannel` vtable at
`0x5899E780` points from slot `+0x0C` to `FUN_58848E60`. The pinned
`Main.mapped.bin` supplies the instructions for this method and its direct
batch helper `FUN_58848870`. Their [instruction sources](../src/client-current/Main/)
match all 652 and 353 bytes respectively under objdiff 3.8.0, including 13
and 12 mapped operand targets. These are exact x86 reconstructions, not
high-level C++ implementations.

The method reads the byte at `[0x58A245B4]+0xD0`. If it equals `0x0F`, it
increments the receiver's word at `+0x106` until a signed 16-bit comparison
reaches `0x012C` (300), then resets the word and calls `FUN_58848870`.
Otherwise it resets the word without that call. With bit `0x0004` in the
receiver word at `+0x24`, movement proceeds only for masked states `0x0100`
and `0x0400`, or for `0x0200` when the receiver's `+0xC8` pointer is nonzero.
The mask is `0x1F00`.

For each coordinate, the method subtracts the current value (`+4` or `+8`)
from the target (`+0x50` or `+0x54`). It uses the delta's sign for magnitudes
0–3, signed truncation of delta/2 for magnitudes 4–7, and signed truncation
of delta/4 for larger magnitudes. It passes both steps to the already matched
`FUN_58902E10`, whose observed behavior adds them to the receiver position
and propagates to certain children. The method separately moves the field at
`+0x2C` toward `+0x5C` through matched `FUN_58902D20`, and `+0x28` toward
`+0x58` through matched `FUN_58902CE0`, with each step capped at 32. When all
four fields reach their targets, it changes flag masks and may call matched
`FUN_588486E0` or a virtual callback on the parent. It then traverses its
child chain and invokes each child's vtable slot `+0x0C`.

The batch helper uses two receiver-linked chains. For the first it reads
head `+0x6C`, signed count `+0xF2`, and cursor `+0x108`; for the second it
reads head `+0x64`, signed count `+0xF0`, and cursor `+0x10C`. Each pass emits
at most ten records with 0x18-byte destination spacing, advances through
node `+0x54`, and wraps to its head at a null link. It calls through pointer
`0x5898C3C4` with format pointer `0x5898D0D4` and a value reached at node
`+0x70/+0x6C`; for nonempty batches it calls `FUN_587B91B0` with channel
0 or 1. The original 347-byte inventory extent ended one byte into the
`add esp, 0xF4` epilogue at `0x588489CA`. The corrected body ends at the
`ret` at `0x588489D0` (353 bytes); fifteen `CC` bytes precede the next
indexed function at `0x588489E0`.

Reproduce the static checks with:

```text
python tools/verify_current_communicator_rtti.py
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58848E60 --only 58848870
python tools/generate_progress.py --check
```

The global byte, flag state names, formatter and batch callback contracts,
exact update frequency, and visible result remain unknown. The instruction
match and RTTI check do not establish a running client or a faithful portable
renderer. No original-client runtime comparison was performed.
