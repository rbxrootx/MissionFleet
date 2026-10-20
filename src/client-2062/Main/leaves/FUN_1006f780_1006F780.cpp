// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006F780 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_1006f780_1006F780() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        ; Exact mapped bytes 8B 35 C4 58 1C 10: mov esi, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, eax
        shl edx, 4
        mov esi, dword ptr [esi + 4]
        push edi
        mov edi, dword ptr [esi + edx + 0f84h]
        test edi, edi
        pop edi
        pop esi
        ; Exact mapped bytes 75 16: jne 0x1006f7b7
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ecx + eax*4 + 88h]
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x1006f7b7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov dword ptr [ecx + eax*4 + 88h], 0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
