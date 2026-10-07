# Current Main.dll sprite-data screen base constructor

`FUN_587B6DD0` is a 201-byte constructor called by the verified
`FUN_58836B90` (ManageFleetTab) and `FUN_5883BBE0` (ManageSquadTab)
constructors. Both pass the receiver in ECX and use this shared initialization
before configuring their tab-specific controls. Its mapped body has three
operand targets and returns with `ret 0x24`.

The function forwards constructor values to `FUN_589031A0`, installs final
vtable pointer `0x5899A0E8`, sets receiver flag bit `0x20`, and initializes
fields `+0x50/+0x54` from arguments, `+0x58` to `0x100`, and `+0x5C` to zero.
It clears fields `+0x64..+0x70` when an optional pointer is null; otherwise it
copies four DWORDs from that pointer. It writes additional argument values at
`+0x60/+0x61`, clears `+0x78/+0x7C/+0x80/+0x84`, masks receiver word `+0x24`
with `0xE5FF` and sets `0x0500`, then stores two values at `+0x88/+0x8C`.

The class layout, constructor argument names, field and flag meanings, and
tab-specific behavior remain unresolved beyond the verified caller paths. No
runtime client or emulator test was performed.
