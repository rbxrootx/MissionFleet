// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F9BA0 .. +0x1E0 bytes.
extern "C" __declspec(naked) void FUN_100f9ba0_100F9BA0() {
    __asm {
        sub esp, 54h
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov esi, dword ptr [esp + 5ch]
        push edi
        mov eax, dword ptr [eax + 0d0ch]
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        mov edx, dword ptr [eax + esi*4 + 9cch]
        test edx, edx
        ; Exact mapped bytes 0F 84 AF 01 00 00: je 0x100f9d78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [edx]
        and ecx, 0fh
        sub ecx, 5
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x100f9d05
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec ecx
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x100f9c7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 7
        ; Exact mapped bytes 0F 85 91 01 00 00: jne 0x100f9d78
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 0b4ch]
        push ebx
        push ebp
        mov cl, byte ptr [edi + 2]
        and cl, 1fh
        cmp cl, 8
        ; Exact mapped bytes 75 10: jne 0x100f9c0a
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 4F 0A: mov cx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0a
        shr ecx, 0ah
        and ecx, 1fh
        lea ebx, [ecx + esi - 1ch]
        ; Exact mapped bytes EB 0A: jmp 0x100f9c14
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 66 8B 5F 0A: mov bx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5f
        __asm _emit 0x0a
        shr ebx, 0ah
        and ebx, 1fh
        test edx, edx
        ; Exact mapped bytes 74 1B: je 0x100f9c33
        __asm _emit 0x74
        __asm _emit 0x1b
        xor edi, edi
        xor ecx, ecx
        ; Exact mapped bytes 66 8B BC B0 4C 09 00 00: mov di, word ptr [eax + esi*4 + 0x94c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0xb0
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8A 98 00 00 00: mov cx, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, 0aah
        ; Exact mapped bytes EB 04: jmp 0x100f9c37
        __asm _emit 0xeb
        __asm _emit 0x04
        xor ecx, ecx
        xor edi, edi
        mov ebp, dword ptr [eax + esi*8 + 0a50h]
        test ebp, ebp
        ; Exact mapped bytes 74 1C: je 0x100f9c5e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov dl, byte ptr [ebp]
        xor ebp, ebp
        ; Exact mapped bytes 66 8B AC B0 4E 09 00 00: mov bp, word ptr [eax + esi*4 + 0x94e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0xb0
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0fh
        mov eax, ebp
        sub edx, 0bh
        xor eax, 0aah
        ; Exact mapped bytes EB 04: jmp 0x100f9c62
        __asm _emit 0xeb
        __asm _emit 0x04
        xor edx, edx
        xor eax, eax
        push edx
        push ecx
        mov ecx, dword ptr [esp + 18h]
        push ebx
        push esi
        push eax
        push edi
        ; Exact mapped bytes E8 1F E8 FF FF: call 0x100f8490
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 54h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax + esi*8 + 0a4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x100f9c99
        __asm _emit 0x74
        __asm _emit 0x13
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 B0 4C 09 00 00: mov dx, word ptr [eax + esi*4 + 0x94c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0xb0
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        xor eax, 0aah
        ; Exact mapped bytes 75 1A: jne 0x100f9cb3
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [edi + 124h]
        push 505050h
        push esi
        push 101ac92ch
        mov dword ptr [eax + 60h], 505050h
        ; Exact mapped bytes EB 29: jmp 0x100f9cdc
        __asm _emit 0xeb
        __asm _emit 0x29
        push eax
        lea ecx, [esp + 10h]
        push 101ac920h
        push ecx
        mov dword ptr [edi + 400h], 1
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea edx, [esp + 0ch]
        push 0ffffffh
        push esi
        push edx
        mov ecx, dword ptr [edi + 124h]
        ; Exact mapped bytes E8 49 A3 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 128h]
        push 0ffffffh
        push esi
        push 101ace48h
        ; Exact mapped bytes E8 33 A3 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 54h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax + esi*8 + 0a4ch]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x100f9d14
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 11: jmp 0x100f9d25
        __asm _emit 0xeb
        __asm _emit 0x11
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C B0 4C 09 00 00: mov cx, word ptr [eax + esi*4 + 0x94c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xb0
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        xor eax, 0aah
        push 0
        push esi
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 70 E6 FF FF: call 0x100f83a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0d0ch]
        mov ecx, dword ptr [eax + esi*8 + 0a50h]
        test ecx, ecx
        ; Exact mapped bytes 75 15: jne 0x100f9d5c
        __asm _emit 0x75
        __asm _emit 0x15
        xor eax, eax
        push 1
        push esi
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 4C E6 FF FF: call 0x100f83a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 54h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        push 1
        ; Exact mapped bytes 66 8B 8C B0 4E 09 00 00: mov cx, word ptr [eax + esi*4 + 0x94e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xb0
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov eax, ecx
        mov ecx, edi
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 28 E6 FF FF: call 0x100f83a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 54h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
