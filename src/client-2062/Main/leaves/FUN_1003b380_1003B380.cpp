// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003B380 .. +0x1FF bytes.
extern "C" __declspec(naked) void FUN_1003b380_1003B380() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 87 A4 02 00 00: mov ax, word ptr [edi + 0x2a4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x1003b39f
        __asm _emit 0x75
        __asm _emit 0x09
        mov ebx, dword ptr [esp + 10h]
        ; Exact mapped bytes E9 22 01 00 00: jmp 0x1003b4c1
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        sub eax, 0
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x1003b46f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 2
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x1003b449
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 6D: je 0x1003b426
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 2a8h]
        xor esi, esi
        mov eax, dword ptr [eax + 0d0ch]
        mov ebx, dword ptr [eax + 0b4ch]
        mov edx, dword ptr [eax + ecx*4 + 9cch]
        ; Exact mapped bytes 66 8B B4 4B C6 00 00 00: mov si, word ptr [ebx + ecx*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x4b
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x1003b488
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        mov ecx, dword ptr [edx + 74h]
        sub ebx, ecx
        mov ecx, dword ptr [eax + 0b4ch]
        push ebp
        mov ebp, dword ptr [esp + 18h]
        mov ecx, dword ptr [ecx + 64h]
        mov eax, dword ptr [eax + 904h]
        sub ecx, ebp
        xor eax, 0aaaaaaaah
        pop ebp
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        shl ecx, 3
        sub ecx, eax
        mov eax, dword ptr [edx + 24h]
        add ecx, eax
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x1003b4c1
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov eax, dword ptr [ecx + 0d0ch]
        mov ecx, dword ptr [eax + 0b4ch]
        mov edx, dword ptr [eax + 0b58h]
        ; Exact mapped bytes 66 8B B1 C4 00 00 00: mov si, word ptr [ecx + 0xc4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 98: jmp 0x1003b3e1
        __asm _emit 0xeb
        __asm _emit 0x98
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov eax, dword ptr [edx + 0d0ch]
        mov ecx, dword ptr [eax + 0b4ch]
        mov edx, dword ptr [eax + 0b54h]
        ; Exact mapped bytes 66 8B B1 C2 00 00 00: mov si, word ptr [ecx + 0xc2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x1003b3e1
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 DC 92 1C 10: mov edx, dword ptr [0x101c92dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 1017f3bch
        push 101a8734h
        push edx
        ; Exact mapped bytes FF 15 8C 51 17 10: call dword ptr [0x1017518c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 10h]
        mov edx, dword ptr [ecx + 0d0ch]
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [edx + 0b4ch]
        mov edx, dword ptr [edx + 904h]
        xor edx, 0aaaaaaaah
        mov eax, dword ptr [eax + 64h]
        sub eax, ecx
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        shl ecx, 3
        sub ecx, edx
        xor eax, eax
        ; Exact mapped bytes 66 39 87 B0 02 00 00: cmp word ptr [edi + 0x2b0], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 9C 00 00 00: jle 0x1003b56c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        mov edx, 0eeh
        ; Exact mapped bytes 7C 0F: jl 0x1003b4e8
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [edi + 1c0h]
        mov dword ptr [ecx + 60h], 0eeeeeeh
        ; Exact mapped bytes EB 0E: jmp 0x1003b4f6
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 1c0h]
        mov dword ptr [eax + 60h], edx
        mov eax, 1
        test esi, esi
        ; Exact mapped bytes 7C 0F: jl 0x1003b509
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [edi + 1c4h]
        mov dword ptr [ecx + 60h], 0eeeeeeh
        ; Exact mapped bytes EB 0E: jmp 0x1003b517
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 1c4h]
        mov dword ptr [eax + 60h], edx
        mov eax, 2
        ; Exact mapped bytes 8B 0D 00 D1 1A 10: mov ecx, dword ptr [0x101ad100]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        xor ecx, 0aaaaaaaah
        cmp ebx, ecx
        ; Exact mapped bytes 7F 24: jg 0x1003b54b
        __asm _emit 0x7f
        __asm _emit 0x24
        mov edx, dword ptr [edi + 1c8h]
        test eax, eax
        mov dword ptr [edx + 60h], 0eeeeeeh
        ; Exact mapped bytes 74 34: je 0x1003b56c
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [edi + 0c0h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr [ecx + 50h], 0
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1c8h]
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [edi + 0c0h]
        pop edi
        pop esi
        mov eax, 3
        mov dword ptr [ecx + 50h], 0
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0c0h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr [edx + 50h], 1
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
