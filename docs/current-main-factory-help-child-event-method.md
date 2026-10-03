# Current Main factory-help child event method

`FUN_58856560` is the `+0x48` virtual method in the `CPannelFactoryHelp`
vtable at `0x5899E8E0` (pointer at `0x5899E928`). Its contiguous 2,344-byte
body ends with `ret 4`.

## Evidence from the original code

When state bit `0x02` is set, the method starts from the child structure at
object offset `+0x3C`, calls child virtual slot `+0x10` with its stack
argument, and compares returned values with child field `+0x34`. Further
branches call control, state, and input helpers and return either an object
field or zero. ObjDiff 3.8.0 matches all 2,344 bytes at 100.0% and checks 193
mapped operands.

## Uncertainties

The stack argument, child identifiers, control operations, and event names
remain unresolved. No emulator test was performed.
