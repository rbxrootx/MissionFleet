# Compiler evidence

All three supplied server executables declare Microsoft linker version 6.0.
Their Rich headers contain Visual C++ 6-era product/build identifiers, and the
recovered code contains the Visual C++ runtime and MFC signatures. The current
working compiler family is Microsoft Visual C++ 6.0.

The exact service pack and flags are deliberately unresolved. The Rich headers
contain inputs from more than one Microsoft tool/library build, and the NsPack
loader also contributes build evidence. A compiler variant becomes confirmed
only when representative game-owned functions compile byte-identically.

Observed PE timestamps and original entry points:

| Component | PE timestamp | Linker | Recovered entry |
| --- | --- | --- | --- |
| Login | 2003-12-30 16:33:26 local | 6.0 | `0x41ef2f` |
| Game | 2005-08-29 08:17:12 local | 6.0 | `0x4acbd0` |
| Persistence | 2005-08-08 22:26:02 local | 6.0 | `0x466220` |

decomp.me currently provides Visual C++ 6.0 RTM and SP3 through SP6 variants,
which is useful for resolving this uncertainty one function at a time. The
whole-project progress transport is decomp.dev.
