# Installed CType0MMXHigh555 sprite-data methods

This slice follows the installed sprite parser's `CType0MMXHigh555SpriteData`
branch through the first class's virtual methods. The parser evidence and other
format constructors are recorded in
[`current-client-sprite-data-formats.md`](current-client-sprite-data-formats.md).
The bytes come from the mapped installed `Main.dll` capture at base
`0x58730000`, SHA-256
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Vtable and call evidence

Constructor `FUN_5892DEF0` installs the vtable pointer `0x589A2DB8`; the parser
selects that constructor when its observed format discriminator is `2`, the
`0x8000` flag test is clear, and the record subfield at `piVar13[0xB]` is zero.
The mapped vtable entries are:

| Vtable slot | Target | Bytes | Observed role |
| --- | --- | ---: | --- |
| `+0x00` | `0x5892DF10` | 58 | `CType0MMXHigh555SpriteData` destructor path |
| `+0x04` | `0x5892DF50` | 15,823 | MMX method using fields at object offsets `+8` and `+0x0C` |
| `+0x08` | `0x58931D20` | 7,710 | Second MMX method using those same fields |

The two large methods call `FUN_58789FB0` and `FUN_5890C1C0`, which return the
32-bit values at `this+8` and `this+0x0C`. Their instruction streams contain
repeated `MOVQ`, `PAND`, `PSRLW`, `PMULLW`, and `PADDUSW` operations. That ties
them to this MMX sprite-data implementation, but does not establish a more
specific name for either virtual method or the meanings of their other
arguments and buffers.

The destructor installs its class vtable, conditionally dispatches the field at
`+0x0C` through the host callback thunk `FUN_5897CF96`, invokes the
`CSpriteData` base destructor at `0x58903AC0`, and passes `this` through
`FUN_5897CC42` when its second argument's low bit is set. Both thunks are
indirect calls through distinct host callback slots. The actual callback
targets and ownership rules remain unresolved. The large methods' epilogues
call the indexed MSVC `__security_check_cookie` routine at `0x5897CBDA`.

## Verification and limits

The three vtable methods and six directly used support/accessor functions
compile with the pinned MSVC 6.0 SP5 toolchain and match the mapped image at
objdiff 100%, totaling 23,647 bytes across nine functions. The complete
current-`Main.dll` inventory was also re-verified after adding this family.

The sources preserve captured instructions in naked assembly. This establishes
exact bytes for one sprite-data class, not recovered high-level C++ or a
verified screen render. The other eleven class vtables, their format-specific
method semantics, and the emulator's visual output remain unverified.
