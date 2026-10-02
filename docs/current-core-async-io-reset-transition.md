# Installed Core.dll reset and process-state transition

The context constructor's error branch and the client shutdown path both call
`0x58857B5A(0)`. That wrapper passes arguments `(value, 0, 0)` to
`0x5885796F`. A second wrapper, `0x58857B3D`, passes `(value, 2, 0)`; Ghidra
shows callers in state handlers `0x58862710` and `0x5887316E`. Startup helper
`0x588317EF` also calls `0x5885796F`, with a nonzero third argument.

When the third argument is zero, `0x5885796F` calls `0x58857A5B` to inspect the
current image. The helper obtains an image base through callback slot
`0x588942AC`, then checks the `MZ` signature, the `PE` signature, PE32 optional
header magic `0x10B`, a data-directory count greater than 14, and a nonzero
DWORD at optional-header offset `+0xE8`. If all checks pass, the caller invokes
`0x58857A9D` with its first argument. That helper uses callback slots
`0x5889426C`, `0x588942DC`, and `0x588942E8` with the mapped strings
`mscoree.dll` and `CorExitProcess` to acquire a handle, resolve and conditionally
call the named export, and release the handle. The callback slot identities and
the export's call ABI have not been recovered.

The routine then constructs three stack records and calls `0x5885781F`. That
helper passes the first record's leading value to `0x58863C1C`, supplies the
second record in ECX to `0x58857887`, and gives the third record to
`0x58857860`; it also calls `0x58832760` with table `0x588ED120` and count 8.
These calls and record placements are direct disassembly/decompiler evidence,
but the record schemas and helper contracts remain unknown.

If the third argument is still zero, `0x5885796F` calls `0x5886F1DC`. When that
helper returns zero, it calls `0x5886F17D`, which reads bit 0 of the DWORD at
`TEB + 0x30 + 0x68` after shifting it right by 8. The resulting byte is stored
in local state. The routine then calls `0x58857A2D`, which conditionally uses
callback slots `0x58894254` and `0x588943B4`, always calls `0x58857A9D`, then
calls `0x5889420C` and executes `INT3`. This is evidence of the branch and
breakpoint, not proof of the user-visible failure or termination behavior.

The eight functions in this slice match the hash-pinned installed Core image at
100% under VC6 SP5 and objdiff 3.8.0: `0x5885796F` (185 bytes), `0x58857A5B`
(66), `0x58857A9D` (125), `0x5885781F` (65), `0x5886F1DC` (39), `0x5886F17D`
(18), `0x58857A2D` (46), and `0x58857B3D` (22). The verifier checked 29
relocation operands. No callback was executed and no live client/server reset
was captured; mode meanings, callback ABIs, local-record schemas, and the
breakpoint's intended handling remain open questions.
