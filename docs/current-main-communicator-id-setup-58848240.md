# Current Main.dll communicator ID panel state setup

The pinned `Main.mapped.bin` identifies `FUN_58848240` as slot `+0x04` of
the RTTI-backed `CPannelCommunicatorIDPannel` vtable at `0x5899E780`.
The [instruction source](../src/client-current/Main/FUN_58848240.cpp)
matches its complete 310-byte body under objdiff 3.8.0, with ten mapped
operand targets checked. This is an exact x86 reconstruction, not recovered
high-level C++.

The method reads the same global byte at `[0x58A245B4]+0xD0` used by the
[periodic update](current-main-communicator-id-periodic-58848e60.md). Unless
it equals `0x0F`, it returns without changing receiver state. When equal, it
sets bits `0x0001` and `0x0004` in receiver word `+0x24`, clears that word's
`0x1E00` bits and sets `0x0100`. It writes `0xC8` to receiver `+0x58` and
calls matched `FUN_58902D20` on child `+0xA4` with argument `-0x101`.
`FUN_58902D20` writes its argument to its receiver's field `+0x2C` and
recurses to flagged children.

Next, the method reads the object at global `0x58A246D8`. If its field
`+0x170` is greater than `0x2F` and its field `+0x194` is nonzero, it reads
a pointer through `+0x194/+0xBC`; otherwise it uses zero. It calls matched
`FUN_58907990` with that pointer in `ECX` and the value at global
`0x58A248F8` as argument. It repeats the pointer selection and calls that
pointer's virtual slot `+0x04`. The binary does not show a null guard before
the virtual dereference; the valid runtime precondition is unknown.

Receiver word `+0xF6` then chooses the child-flag branch. For zero, it calls
`FUN_58902D20` on children `+0xB4` and `+0xB8` with `-0x101` and `+0x101`,
clears the low flag nibble at child `+0xB0/+0x24`, and sets it at
`+0xAC/+0x24`. For one, it clears that nibble at `+0xAC` and sets it at
`+0xB0`. Other values skip these changes. Finally, it stores 1 in child
`+0xD8/+0x50` when global pointer `0x58A0B4A0` is nonzero, else 0.

The method's UI purpose, identities of the children and global objects,
meaning of the numeric arguments, and visible effect remain unknown. No
running-client comparison has been performed. The static checks are:

```text
python tools/verify_current_communicator_rtti.py
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58848240
```
