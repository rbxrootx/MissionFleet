// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2030 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_587b2030() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 38: je 0x587b2075
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [esi + 88h], 0
        ; Exact mapped bytes 74 10: je 0x587b2056
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [esi + 138h]
        push eax
        ; Exact mapped bytes E8 DE 21 0A 00: call 0x58854230
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x587b2063
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 31ch]
        xor eax, 0aaaaaaaah
        pop esi
        ret
        cmp eax, 1
        ; Exact mapped bytes 75 0D: jne 0x587b2075
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 3d0h]
        xor eax, 0aaaaaaaah
        pop esi
        ret
        or eax, 0ffffffffh
        pop esi
        ret
    }
}
