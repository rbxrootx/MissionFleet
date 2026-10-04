# Current Main.dll communicator ID panel teardown

The pinned `Main.mapped.bin` identifies `FUN_588497E0` as slot `+0x00` of
the RTTI-backed `CPannelCommunicatorIDPannel` vtable at `0x5899E780`.
That wrapper calls `FUN_58849540`, the panel cleanup body. The body calls
the already matched `FUN_58848610` and the newly matched `FUN_58848680`
to release the panel's two linked chains. Their
[instruction sources](../src/client-current/Main/) match 30, 659, and 90
bytes respectively under objdiff 3.8.0, including all twelve mapped operand
targets across the wrapper and body. These are exact x86 reconstructions,
not a portable C++ ownership model.

`FUN_58849540` installs the panel vtable, then invokes the first virtual
slot with stack argument 1 on nonnull child fields. It clears each field
after the call. The observed order begins with `+0xA4`, `+0xA8`, then
`+0xB4/+0xB8` and `+0xBC/+0xC0`. It calls both linked-chain helpers before
continuing through `+0xCC/+0xD0/+0xD4`, `+0xE0/+0xE4/+0xE8/+0xEC`,
`+0xB0/+0xAC`, `+0x114`, `+0xD8/+0xDC`, and `+0x118/+0x11C`.
It passes receiver-owned pointers at `+0x98` (when nonnull), `+0x8C`,
`+0x80` (when nonnull), and `+0x74` to the already matched host-call thunk
`FUN_5897CC42`, zeros the adjacent bookkeeping triples, then calls the
matched base teardown `FUN_58902C10`.

`FUN_58848680` processes the chain whose signed count is receiver word
`+0xF2`. If that count is positive and tail `+0x70` is nonnull, it follows
node link `+0x50`, calls each node's first virtual slot with argument 1,
and stops at a null link or when its visited count equals `+0xF2`. It then
zeros cursor `+0x108`, tail `+0x70`, head `+0x6C`, and count `+0xF2`.
For a nonpositive count or null tail it returns without those stores.
The earlier matched `FUN_58848610` handles the parallel `+0xF0` chain.

`FUN_588497E0` calls the cleanup body and, if bit 0 of its stack argument
is set, passes the receiver to `FUN_5897CC42`. It returns the receiver in
`EAX` with `ret 4`.

The original inventory truncated `FUN_58849540` at 569 bytes, in the
middle of a call at `0x58849777`. The mapped body continues through its
`ret` at `0x588497D2`, yielding 659 bytes. Thirteen `CC` bytes separate
it from the wrapper at `0x588497E0`. The wrapper's inventory omitted its
three-byte `ret 4` at `0x588497FB`, so its complete extent is 30 bytes.
Two `CC` bytes precede the next indexed function at `0x58849800`.

The first-slot callback and host-call thunk suggest destruction and
deallocation, but exact ownership, alias safety, and invalid-list behavior
are unresolved. No original-client lifecycle comparison was performed.
The static checks are:

```text
python tools/verify_current_communicator_rtti.py
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58848680 --only 58849540 --only 588497E0
python tools/generate_progress.py --check
```
