// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B2D0 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_5879b2d0_5879B2D0() {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [esp + 0ch]
        push esi
        cmp edx, eax
        ; Exact mapped bytes 74 26: je 0x5879b303
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        cmp byte ptr [eax - 1], 30h
        lea ecx, [eax - 1]
        ; Exact mapped bytes 75 1A: jne 0x5879b303
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp edx, ecx
        ; Exact mapped bytes 74 0C: je 0x5879b2f9
        __asm _emit 0x74
        __asm _emit 0x0c
        lea esi, [eax - 2]
        cmp edx, esi
        ; Exact mapped bytes 74 05: je 0x5879b2f9
        __asm _emit 0x74
        __asm _emit 0x05
        cmp byte ptr [esi], 2eh
        ; Exact mapped bytes 74 14: je 0x5879b30d
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, ecx
        mov dword ptr [esp + 10h], eax
        cmp edx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5879b2e0
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr [ecx], eax
        mov eax, ecx
        ret
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 75 EF: jne 0x5879b303
        __asm _emit 0x75
        __asm _emit 0xef
        mov eax, dword ptr [esp + 8]
        mov dword ptr [eax], esi
        pop esi
        ret
    }
}
