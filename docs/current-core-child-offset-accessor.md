# Installed Core.dll child-field accessor

This slice reconstructs `0x584869C0` from the installed `Core.dll` capture at
runtime base `0x58480000`. Ghidra reports a 17-byte function whose pseudocode
returns the DWORD stored at `receiver + 4`. The captured x86 body preserves the
stack-frame load sequence and returns that value.

The accessor is called from multiple client paths, including ship rendering at
`0x587B6D70`, scene-object construction at `0x586E8270`, and ship-state setup at
`0x5852D5D0`. In the scene constructor, its result participates in child-object
placement arithmetic. That supports a coordinate/origin interpretation, but
the field name, coordinate system, and units are not established.

The source is verified against the hash-pinned mapped image with the repository's
Visual C++ 6 SP5 byte-emission toolchain and objdiff 3.8.0 at 100% (17/17 bytes).
The on-disk raw-image comparison is also checked independently. No live frame
comparison has been made, so this confirms the native accessor bytes and return
behavior, not the visible result of the callers.
