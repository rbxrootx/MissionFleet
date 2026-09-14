# Compiler evidence

All three supplied server executables declare Microsoft linker version 6.0.
Their Rich headers contain Visual C++ 6-era product/build identifiers, and the
recovered code contains the Visual C++ runtime and MFC signatures. The current
working compiler family is Microsoft Visual C++ 6.0.

The Rich headers contain inputs from several Microsoft tool and library builds,
so no single Rich product ID identifies every translation unit. The strongest
game-owned compiler candidate is Visual C++ 6.0 SP5: the game image records
`C++` product ID `0x0016`, build 8804, while the login and persistence images
also record SP5 compiler build 8966 among older linked library objects.

Observed PE timestamps and original entry points:

| Component | PE timestamp | Linker | Recovered entry |
| --- | --- | --- | --- |
| Login | 2003-12-30 16:33:26 local | 6.0 | `0x41ef2f` |
| Game | 2005-08-29 08:17:12 local | 6.0 | `0x4acbd0` |
| Persistence | 2005-08-08 22:26:02 local | 6.0 | `0x466220` |

The first confirmed match is game function `0043f169`. Microsoft compiler
12.00.8804 with `/Od /GZ /GX-` emits the same 42 bytes and relocations, and
objdiff 3.8.0 reports 100.0%. This confirms SP5 and those flags for that function;
other translation units still require their own evidence.

The compiler package SHA-256 is
`16f639b7961ca74b938532d912d2bb655d5ea08b01dc2f50e4a180774d138169`;
its `CL.EXE` SHA-256 is
`1bf99f206271ecdbd13da2829192ea2c02e2a44c740b8d72935d5d9cb753b156`.
Run `python tools/verify_matches.py` with the private recovered images present
to rebuild every recorded source file and repeat the objdiff comparison.

decomp.me remains useful for isolated compiler experiments. The whole-project
progress transport is decomp.dev.
