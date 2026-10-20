// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB270 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_100fb270_100FB270() {
    __asm {
        mov edx, dword ptr [ecx + 30h]
        push esi
        test edx, edx
        push edi
        mov eax, 1
        ; Exact mapped bytes 74 03: je 0x100fb281
        __asm _emit 0x74
        __asm _emit 0x03
        or dword ptr [edx + 48h], eax
        mov edx, dword ptr [ecx + 4]
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x100fb2a0
        __asm _emit 0x74
        __asm _emit 0x18
        mov esi, dword ptr [esp + 0ch]
        mov edi, dword ptr [edx + 48h]
        shr edi, 0ah
        cmp edi, esi
        ; Exact mapped bytes 74 11: je 0x100fb2a7
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [edx + 0b70h]
        test edx, edx
        ; Exact mapped bytes 75 EC: jne 0x100fb28c
        __asm _emit 0x75
        __asm _emit 0xec
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 74 F5: je 0x100fb2a0
        __asm _emit 0x74
        __asm _emit 0xf5
        mov esi, dword ptr [edx + 0a0h]
        test esi, esi
        ; Exact mapped bytes 74 0E: je 0x100fb2c3
        __asm _emit 0x74
        __asm _emit 0x0e
        pop edi
        mov dword ptr [ecx + 30h], 0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ecx + 30h], edx
        mov ecx, dword ptr [edx + 48h]
        or ecx, eax
        pop edi
        mov dword ptr [edx + 48h], ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
