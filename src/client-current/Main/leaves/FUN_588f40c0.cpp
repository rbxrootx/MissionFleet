// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F40C0 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_588f40c0() {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 0B: jne 0x588f40da
        __asm _emit 0x75
        __asm _emit 0x0b
        mov esi, dword ptr [eax + 0ce4h]
        mov dword ptr [edx + 4], esi
        ; Exact mapped bytes EB 0E: jmp 0x588f40e8
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 75 09: jne 0x588f40e8
        __asm _emit 0x75
        __asm _emit 0x09
        mov esi, dword ptr [eax + 0ce0h]
        mov dword ptr [edx + 8], esi
        xor edi, edi
        cmp dword ptr [ecx + 4], edi
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x588f4177
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [eax + 0ce0h]
        cmp edx, edi
        ; Exact mapped bytes 74 50: je 0x588f4153
        __asm _emit 0x74
        __asm _emit 0x50
        mov esi, dword ptr [eax + 0ce4h]
        cmp esi, edi
        ; Exact mapped bytes 74 2C: je 0x588f4139
        __asm _emit 0x74
        __asm _emit 0x2c
        mov dword ptr [edx + 0ce4h], esi
        mov esi, dword ptr [eax + 0ce0h]
        mov edx, dword ptr [eax + 0ce4h]
        mov dword ptr [edx + 0ce0h], esi
        mov dword ptr [eax + 0ce0h], edi
        mov dword ptr [eax + 0ce4h], edi
        inc dword ptr [ecx + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edx + 0ce4h], edi
        mov dword ptr [eax + 0ce0h], edi
        mov dword ptr [eax + 0ce4h], edi
        inc dword ptr [ecx + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0ce4h]
        cmp edx, edi
        ; Exact mapped bytes 74 06: je 0x588f4163
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [edx + 0ce0h], edi
        mov dword ptr [eax + 0ce0h], edi
        mov dword ptr [eax + 0ce4h], edi
        inc dword ptr [ecx + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [edx + 0ce4h], eax
        mov edx, dword ptr [eax + 0ce0h]
        cmp edx, edi
        ; Exact mapped bytes 74 2C: je 0x588f41b6
        __asm _emit 0x74
        __asm _emit 0x2c
        mov esi, dword ptr [eax + 0ce4h]
        cmp esi, edi
        ; Exact mapped bytes 74 1A: je 0x588f41ae
        __asm _emit 0x74
        __asm _emit 0x1a
        mov dword ptr [edx + 0ce4h], esi
        mov edx, dword ptr [eax + 0ce4h]
        mov esi, dword ptr [eax + 0ce0h]
        mov dword ptr [edx + 0ce0h], esi
        ; Exact mapped bytes EB 18: jmp 0x588f41c6
        __asm _emit 0xeb
        __asm _emit 0x18
        mov dword ptr [edx + 0ce4h], edi
        ; Exact mapped bytes EB 10: jmp 0x588f41c6
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [eax + 0ce4h]
        cmp edx, edi
        ; Exact mapped bytes 74 06: je 0x588f41c6
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [edx + 0ce0h], edi
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 0ce0h], edx
        mov dword ptr [ecx + 8], eax
        mov dword ptr [eax + 0ce4h], edi
        inc dword ptr [ecx + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
