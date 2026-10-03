# Control-menu factory child initializer

`FUN_587DBA00`, identified in the existing factory evidence as
`CPageFactory_ControlMenuScreen`, directly calls `FUN_587D7B90` at
`0x587DDFB2` and `0x587DE5DD`. The first returned pointer is stored at receiver
offset `+0x504`; the second is stored at `+0x584`. This establishes that the
same initializer creates two child objects in this factory path, without
identifying their class names.

## RTTI-backed child class

The `FUN_58794600` child initializer installs the primary vtable at
`0x58997CD0`. Its preceding complete-object locator is `0x58997CCC`, and its
TypeDescriptor at `0x589C2F94` names `.?AVCLoopSpriteBundleButton@@`. The six
entries at this address point are all byte-matched:

| Slot | Entry | Bytes | Evidence |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_587941C0` | 30 | Deleting destructor; calls cleanup body and conditionally releases `this`. |
| `+0x04` | `FUN_58731770` | 30 | Previously matched receiver flag update. |
| `+0x08` | `FUN_588A9ED0` | 39 | Previously matched receiver flag update. |
| `+0x0C` | `FUN_58794770` | 412 | State/input method; updates bounded fields and dispatches the observed selector. |
| `+0x10` | `FUN_587943A0` | 267 | Checks flags, traverses a child chain, and dispatches the observed `0x201` path. |
| `+0x14` | `FUN_589038C0` | 189 | Previously matched child traversal and rendering/helper dispatch. |

The class cleanup body `FUN_58794050` is 114 bytes and directly called by the
deleting destructor. It sets the receiver's vtable during cleanup, destroys the
optional child at `+0xB4` through its first virtual slot, clears that pointer,
and invokes the verified helper `FUN_589038A0`. The original indexed extent of
the deleting destructor was 27 bytes and ended after `pop esi`; the mapped body
continues with `ret 4` at `0x587941DB`. Two `int3` padding bytes follow before
the next function at `0x587941E0`, so its corrected extent is 30 bytes.

The 486-byte mapped body allocates `0xD4` bytes through `FUN_5897CC4E`. When
allocation succeeds, it calls `FUN_58794600` with fixed region values `0`,
`-0x320`, and `0x258`, plus a word derived from the receiver's `+0xB8` child.
It then reads values from three globals
(`0x58A246D8`, `0x58A246F0`, and `0x58A246B8`), checks their observed count and
pointer fields, and passes selected values to a sequence of child methods. It
updates words at `+0x24` and `+0x26`, conditionally calls `FUN_58902F50` and
`FUN_58902EE0`, and returns the initialized child pointer. These descriptions
follow the mapped fields and calls; no UI labels or table semantics are
assigned.

The indexed extent decodes continuously from `0x587D7B90` through its `ret` at
`0x587D7D75`. ObjDiff 3.8.0 reports a 100% match across all 486 bytes, with 19
mapped operand targets checked. Its direct-call set has 12 functions; five now
match, including `FUN_58794600`, and seven direct callees remain unmatched.
The child class, global table schemas, and helper contracts are unresolved.

## Shared region and state helpers

The 356-byte region initializer `FUN_58794600` is called by this child
initializer and by `FUN_588AC750`, both with the new object in `ECX`. It calls
base initializer `FUN_58734A30`, installs vtable address `0x58997CD0`, allocates
a `0x58`-byte child, and installs child vtable address `0x5898CA74` when that
allocation succeeds. It initializes observed receiver fields and calls
`FUN_58794240` before returning with `ret 0x14`. ObjDiff matches all bytes and
checks nine mapped operand targets. The receiver class and field semantics are
not identified.

`FUN_58794240` is a 116-byte shared state synchronizer called by
`FUN_58794600`, `FUN_587943A0`, and `FUN_587944B0`. It clears receiver fields
`+0x7C` and `+0x80`; when `+0xC4` is set it propagates state to the child at
`+0xB4`, and when `+0x88` is set it copies a six-word block to that child's
record. Its extent ends at `ret` `0x587942B3` and matches exactly.

The 412-byte vtable method `FUN_58794770` at slot `+0x0C` tests receiver flags,
computes bounded adjustments in its observed modes, updates the receiver and
child through `FUN_58902E10`, dispatches the selector at `+0x7C` through
`FUN_587944B0`, and traverses a child chain through virtual slot `+0x0C`. Its
state-entry and state-exit branches call `FUN_587942C0` and `FUN_58794340`.
Those helpers are 125 and 81 bytes: they update the observed state fields and
dispatch values 3 and 4 through a child virtual slot. `FUN_587944B0` is a
separate 259-byte selector handler used by the `+0x0C` method.

The neighboring 267-byte handler `FUN_587943A0` is called from
`FUN_58794770` at `0x587948B6`. It checks receiver flags, traverses a child
chain through virtual slot `+0x10`, filters input selector `0x201`, and updates
state through child virtual slot `+0x18`; one branch calls the shared
synchronizer. The 259-byte `FUN_587944B0` examines the record at `+0x54` and
handles observed selectors `0`, `1`, `0x20`, and `0x1000`, updating the same
receiver/child fields and calling the synchronizer for selector `0x20`. Both
match completely with 7 and 6 mapped operand targets checked, respectively.
All 12 direct callees of `FUN_587D7B90` now match. The other direct caller of
`FUN_58794600` is `FUN_588AC750`; its owning object path has not yet been traced.
The event payload, state semantics, labels and visible actions remain unknown.

No emulator runtime or visual test was performed.
