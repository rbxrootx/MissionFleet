# Installed Main.dll static-text construction

This call path belongs to installed 2026 `Main.dll`, original SHA-256
`74398355bad12f5349319967ec92c08f2bb2e82dbb441acaeeffb4e55b4359dd`, and
mapped capture SHA-256
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831` at base
`0x58730000`. It is separate from archived 2062 client code.

## Recovered path

Ghidra's decompilation shows the screen constructor at `0x587C35A0` calling
`FUN_58733280` seven times while building its initial text rows. The same
string pointer, `DAT_58A24530`, is passed to those calls alongside differing
row-position values. This establishes the repeated construction and shared
input pointer; it does not establish the displayed text or its UI meaning.

`FUN_58733280` performs the following observed sequence:

1. Calls `FUN_58731700` to initialize the `CTextScreen` base and supplied
   layout fields.
2. Sets the derived vtable to `CStaticTextScreen`.
3. Requests an `0x80`-byte buffer through `FUN_5897CC4E`, stores it at object
   offset `+0x6C`, then calls `FUN_5897CC48` with `(buffer, 0, 0x80)`.
4. Calls `FUN_58731CE0` with the string argument and returns the object.

`FUN_58731CE0` copies bytes only when both the destination at `+0x6C` and the
source pointer are nonnull. Its bounded loop leaves room for a terminator,
copying at most 127 non-NUL bytes into the 128-byte buffer. The two six-byte
callback thunks transfer through slots `0x5898C200` and `0x5898C1FC`. The
caller uses the first with the requested size and the second with the
buffer/zero/size tuple; their runtime targets and host contracts are not
established here.

`FUN_58731700` delegates base-node initialization to the already matched
`FUN_589031A0`, then writes the `CTextScreen` vtable and fields at offsets
`+0x50` through `+0x68`. Those fields' semantic names and the screen's virtual
contract remain unknown. The byte-copy routine's handling of other callers or
of an uninitialized destination buffer is also outside this call-path evidence.

## Match validation

The newly matched bodies are `FUN_58733280.cpp` (168 bytes),
`FUN_58731700.cpp` (98), `FUN_58731CE0.cpp` (66), `FUN_5897CC4E.cpp` (6), and
`FUN_5897CC48.cpp` (6), all under `src/client-current/Main/`. Together with
the previously matched `FUN_589031A0` base initializer, this closes the
observed direct-call path. The installed-client verifier rebuilds all 30
recorded `Main.dll` matches with the pinned Visual C++ 6 SP5 toolchain and
reports objdiff 100%; fixed call and callback-slot operands are audited against
the mapped image. The static-text source retains its exact x86 instructions;
the behavior notes above come from Ghidra's decompilation and the static
call-site arguments, not from assigning guessed names to those fields.

This verifies the captured code and static relationships. It does not run the
control in a live scene or recover the string resources or host callback
implementations.
