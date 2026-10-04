# Current Main.dll linked payload ordering helper

`FUN_5878A3A0` is shared by two verified communicator-configuration handlers:
the `CPannelCommunicatorConfigMemoManage` handler
[`FUN_58840890`](current-main-communicator-config-memo-handler.md) and the
panel handler [`FUN_588450B0`](current-main-communicator-config-panel-handler.md).
Their call sites pass a receiver-owned list base, a mode/stride value of 3 or 4,
and an index. Afterward, the callers toggle a selection bit and return or
refresh a child control. The exact UI command meanings remain unknown.

The helper starts at receiver link `+0x78` and follows each node's `+0x14`
link. It compares payload pointers at node `+4`, reading paired bytes and
advancing by two until a mismatch or a zero byte. A positive comparison causes
payload fields `+4`, `+8`, and `+0xC` to be exchanged; the helper also updates
the receiver's entry table and neighboring links. It then continues through
the chain. This records the observed ordering operation without assigning a
string encoding or a domain meaning to the nodes.

The Ghidra index ended the function after `pop edi` at `0x5878A5BA`. The mapped
code continues with `add esp, 0x18; ret 0xC` at `0x5878A5BB..0x5878A5C0`, then
has fifteen `INT3` alignment bytes before the next indexed function at
`0x5878A5D0`. The source includes the full 545-byte callable body. ObjDiff
verified all 545 bytes and checked nine operand targets. No emulator test was
performed.
