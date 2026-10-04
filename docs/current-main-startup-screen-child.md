# Current Main startup screen child constructor

`FUN_588B1FE0` is called by the matched screen initializer `FUN_588B0940` at
`0x588B12FD`. Its 1,533-byte body is byte-identical under ObjDiff 3.8.0, with
all 58 mapped operand targets checked. Its depth-two direct-call audit finds
no unmatched inventory-backed callees.

The captured instructions show an SEH-protected constructor. It calls shared
setup `FUN_589031A0`, installs vtable pointer `0x589A08A0`, initializes fields
`+0x50`, `+0x54`, `+0x58`, and `+0x5C`, allocates multiple members through
`FUN_5897CC4E`, and initializes child controls through `FUN_58731C60`,
`FUN_58734A30`, `FUN_58902D20`, and `FUN_58902CE0`.

The class identity, member and child roles, control flags, and screen-layout
meaning remain unresolved. This verifies machine-code identity and indexed
call coverage only; it does not establish that the constructor executes
correctly in the emulator or that its screen renders correctly.
