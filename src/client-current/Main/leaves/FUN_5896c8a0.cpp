// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896C8A0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5896c8a0() {
    __asm {
        mov eax, dword ptr [ecx + 50h]
        sub eax, 1
        ; Exact mapped bytes 74 13: je 0x5896c8bb
        __asm _emit 0x74
        __asm _emit 0x13
        sub eax, 4
        ; Exact mapped bytes 74 04: je 0x5896c8b1
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
