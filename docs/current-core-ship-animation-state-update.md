# Installed Core.dll derived ship-animation state update

This slice follows the derived ship-animation transition from its scene caller,
through reset/start methods and the update state machine, to its direct helpers
and alternate scene-state branch. Seven functions totaling 1,807 bytes are byte-matched against Ghidra's
locally captured mapped `Core.dll` at base `0x58480000`. The installed file
SHA-256 is
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`.

## Vtable and construction evidence

Constructor `0x58534900` first calls `0x58486810`, then installs vtable address
point `0x588A7020`. The mapped table points slot `+0x0C` to this update
callback and slot `+0x14` to the previously matched draw callback
`0x587B5DB0`. The constructor is called by the ship-scene constructor
`0x58525B10` and several other scene setup functions. It initializes
`+0x50` to zero, `+0x58` to one, and `+0x5C`, `+0x64`, and `+0x68` to zero.

## Starting and resetting playback

`0x58534D30` resets the node's `+0x50` frame counter to zero, sets direction
`+0x58` to one, and clears state `+0x5C` to zero. `0x58534E80(direction)` sets
state `+0x5C` to 2 and chooses direction `-1` when its argument is zero or
`+1` when nonzero. If optional object `+0x64` exists, it invokes that object's
virtual slot `+0x08` and calls coordinate helper `0x5856DBC0`.

Ship-scene handler `0x5852D160` calls both methods on its node at scene offset
`+0xB0`, in order: reset, then `0x58534E80(1)`. This is direct evidence of a
forward-playback trigger in the actual scene path. Other callers of
`0x58534E80` exist; their higher-level intent has not been identified.

The same dispatcher, `0x58531000`, reaches `0x5852D0C0` on the other parity
branch of scene state 1. That handler changes packed flags at `+0x24`, writes
`0x56` to `+0x12154`, advances `+0x12148` by four, writes `0x100` to `+0x28`,
and clears `+0x58`. This establishes a second branch in the same scene-state
path. The meanings of those fields and how this path differs visually from
`0x5852D160` are not established.

## Observed update behavior

The callback returns unless flag bit 2 at `+0x24` is set. If the DWORD at
`+0x5C` equals 2, it branches on the signed value at `+0x58` and the node's
frame counter at `+0x50`:

- If `+0x58` is negative and `+0x50` is zero, it writes zero to `+0x5C`.
- If `+0x58` is at least one and `+0x50` equals the frame count from
  `0x584C9DE0` minus one, it writes one to `+0x5C`.
- In those two state-changing cases, it invokes slot `+0x08` on non-null
  objects at `+0x64` and `+0x68`. When `+0x68` is non-null, it also calls
  `0x5856DBC0` with coordinates derived from node position (`+0x04`, `+0x08`)
  and the global at `0x58962090`.
- If `+0x58` is negative or at least one but the corresponding endpoint
  condition is false, it calls `0x584B5140` with `+0x58`. A zero value at
  `+0x58` causes no state transition in this branch.

After this state logic, it walks the circular child-update list at `+0x3C` and
calls each child's virtual slot `+0x0C`. This is the same callback contract
used by the base animation-node updater `0x587B5B20`; `0x58495610` supplies the
next-link address. The start method selects direction and state 2; the updater
advances one counter step per callback until it reaches the selected endpoint,
then changes state to 0 for reverse playback or 1 for forward playback. This is
a bounded, one-shot animation-counter path. Its callback cadence is unknown.

## Direct helper behavior

The two nonterminal branches call `0x584B5140(+0x58)`. That helper adds its
signed argument to the receiver's DWORD at `+0x50`. This confirms the state
callback adjusts the frame-selection counter by the signed value at `+0x58`
when its terminal test is false.

On the terminal path with a nonnull object at `+0x68`, `0x58534B00` calls
`0x5856DBC0` with x=`node.x - 400`, y=`300 - node.y`, and selector
`0x58962090`. The helper rejects coordinates outside x `[-639,639]` and y
`[-511,511]`. If receiver field `+0x1C` is nonzero, it calls `0x587BBBA0`
with x/y scaled by global `0x58895218` and the selector converted to float.
Otherwise, it maps selector values 9, 0, 1, 4, 16, 25, and 1000 to signed
integers sent through receiver virtual slot `+0x0C`, using `-10000` for other
values. Both paths finish by invoking receiver slot `+0x04` with zero.

The branch conditions and arguments are recovered, but the receiver type,
selector meaning, coordinate units, and downstream effects of `0x587BBBA0`
and the virtual calls remain unresolved.

## Uncertainties and validation

The field names and meaning of optional objects `+0x64` and `+0x68` remain
unknown. The direct scene caller proves one forward trigger, but no runtime
state transition or rendered frame was captured.

All seven functions match the capture at 100% with the repository's VC6
byte-emission toolchain and objdiff 3.8.0. They total 1,690 bytes, and all 46
captured operand targets are checked. Byte identity validates the emitted
functions, not the remaining field names or live behavior.
