// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x10109BD0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_10109bd0() {
    __asm {
        mov eax, dword ptr [ecx + 50h]
        dec eax
        ; Exact mapped bytes 74 13: je 0x10109be9
        __asm _emit 0x74
        __asm _emit 0x13
        sub eax, 4
        ; Exact mapped bytes 74 04: je 0x10109bdf
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [ecx + 34h]
        ret
        mov dword ptr [ecx + 50h], 3
        xor eax, eax
        ret
        mov dword ptr [ecx + 50h], 2
        xor eax, eax
        ret
    }
}
