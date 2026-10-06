# Current Main.dll possible bounded-cursor validation helper

`FUN_587A5080` is a 48-byte helper with one pointer in ECX and no stack
arguments. Ghidra and the mapped image agree on the contiguous body
`[0x587A5080,0x587A50B0)`, ending with `ret` at `0x587A50AF`.

Fresh Ghidra references record 80 unconditional calls across 11 callers.
Matched `FUN_58775980` contains seven sites, and matched `FUN_587A90D0`
contains thirteen; both pass a descriptor address in ECX and no stack
arguments. The other 60 references come from nine currently unmatched
callers: `FUN_58739740` (13), `FUN_587752D0` (7), `FUN_587754E0` (10),
`FUN_587756F0` (8), `FUN_587A88A0` (1), `FUN_587A5120` (1), `FUN_587AAA50`
(15), `FUN_587AA5D0` (3), and `FUN_58754E80` (2). Their surrounding argument
setup has not been independently audited.

The function reads the descriptor's first dword as a pointer. If it is null,
it calls `FUN_5897CC72` and reloads that field. It then compares the
descriptor's second dword with the dword at offset `+0x10` of the
dereferenced first-field object. When the second dword is at or beyond that
bound, it calls `FUN_5897CC72`. Both normal return paths return the second
dword unchanged. The literal-x86 source preserves all 48 mapped bytes;
objdiff confirms byte identity.

The descriptor and referenced object types, the meaning of the `+0x10`
bound, and the behavior of `FUN_5897CC72` remain unknown. If the first field
stays null after the helper returns, the mapped path proceeds to read address
`0x10`; the helper may initialize state or fail without returning, but that
was not established. No emulator runtime test has been performed.
