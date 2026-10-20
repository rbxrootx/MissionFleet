// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877AB3 .. +0x254 bytes.
extern "C" __declspec(naked) void FUN_58877ab3_58877AB3() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0fch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes E8 CD 10 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes E8 C6 10 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov edi, dword ptr [eax + 34ch]
        ; Exact mapped bytes E8 F2 02 00 00: call 0x58877dd8
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push 78h
        mov esi, eax
        xor edx, edx
        cmp dword ptr [ebx + 64h], edx
        lea eax, [ebp - 0f4h]
        push eax
        push 7
        pop eax
        mov ecx, 1002h
        mov dword ptr [ebp - 0f8h], edx
        cmovne ecx, eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 D9 01 00 00: je 0x58877cf1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0f4h]
        push eax
        push dword ptr [ebx + 54h]
        ; Exact mapped bytes E8 89 C1 FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, 1001h
        push 3
        pop edx
        test eax, eax
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x58877bf1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 78h
        lea eax, [ebp - 0f4h]
        push eax
        mov eax, ecx
        xor ecx, ecx
        cmp dword ptr [ebx + 60h], ecx
        cmovne eax, edx
        push eax
        push esi
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 95 01 00 00: je 0x58877cf1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0f4h]
        push eax
        push dword ptr [ebx + 50h]
        ; Exact mapped bytes E8 45 C1 FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x58877b80
        __asm _emit 0x75
        __asm _emit 0x0d
        or ecx, 304h
        mov dword ptr [edi + 4], esi
        mov dword ptr [edi], ecx
        ; Exact mapped bytes EB 69: jmp 0x58877be9
        __asm _emit 0xeb
        __asm _emit 0x69
        test cl, 2
        ; Exact mapped bytes 75 67: jne 0x58877bec
        __asm _emit 0x75
        __asm _emit 0x67
        cmp dword ptr [ebx + 5ch], 0
        ; Exact mapped bytes 74 47: je 0x58877bd2
        __asm _emit 0x74
        __asm _emit 0x47
        push dword ptr [ebx + 5ch]
        lea eax, [ebp - 0f4h]
        push eax
        push dword ptr [ebx + 50h]
        ; Exact mapped bytes E8 E3 0E 00 00: call 0x58878a80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 2E: jne 0x58877bd2
        __asm _emit 0x75
        __asm _emit 0x2e
        or dword ptr [edi], 2
        mov dword ptr [edi + 8], esi
        mov ecx, dword ptr [ebx + 50h]
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 08 FF FF FF: cmp ax, word ptr [ebp - 0xf8]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x58877bb0
        __asm _emit 0x75
        __asm _emit 0xf1
        sub ecx, edx
        sar ecx, 1
        cmp ecx, dword ptr [ebx + 5ch]
        mov ecx, 1001h
        ; Exact mapped bytes 75 24: jne 0x58877bf1
        __asm _emit 0x75
        __asm _emit 0x24
        mov dword ptr [edi + 4], esi
        ; Exact mapped bytes EB 1F: jmp 0x58877bf1
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [edi]
        test dl, 1
        ; Exact mapped bytes 75 13: jne 0x58877bec
        __asm _emit 0x75
        __asm _emit 0x13
        push esi
        ; Exact mapped bytes E8 2E 03 00 00: call 0x58877f0d
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x58877bec
        __asm _emit 0x74
        __asm _emit 0x08
        or edx, 1
        mov dword ptr [edi], edx
        mov dword ptr [edi + 8], esi
        mov ecx, 1001h
        mov eax, dword ptr [edi]
        mov edx, 300h
        and eax, edx
        cmp eax, edx
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x58877ce5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 78h
        lea eax, [ebp - 0f4h]
        push eax
        xor eax, eax
        cmp dword ptr [ebx + 60h], eax
        push 3
        pop eax
        cmovne ecx, eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x58877cf1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0f4h]
        push eax
        push dword ptr [ebx + 50h]
        ; Exact mapped bytes E8 7B C0 FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 6A: jne 0x58877ca5
        __asm _emit 0x75
        __asm _emit 0x6a
        mov ecx, dword ptr [edi]
        or ecx, 200h
        mov dword ptr [edi], ecx
        cmp dword ptr [ebx + 60h], eax
        ; Exact mapped bytes 74 10: je 0x58877c5a
        __asm _emit 0x74
        __asm _emit 0x10
        or ecx, 100h
        mov dword ptr [edi], ecx
        cmp dword ptr [edi + 4], eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x58877ce0
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 5ch], eax
        ; Exact mapped bytes 74 EB: je 0x58877c4a
        __asm _emit 0x74
        __asm _emit 0xeb
        mov edx, dword ptr [ebx + 50h]
        lea eax, [edx + 2]
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        add edx, 2
        ; Exact mapped bytes 66 3B 85 08 FF FF FF: cmp ax, word ptr [ebp - 0xf8]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x58877c6b
        __asm _emit 0x75
        __asm _emit 0xf1
        sub edx, dword ptr [ebp - 0fch]
        sar edx, 1
        cmp edx, dword ptr [ebx + 5ch]
        ; Exact mapped bytes 75 1A: jne 0x58877ca1
        __asm _emit 0x75
        __asm _emit 0x1a
        push edi
        push 1
        push esi
        ; Exact mapped bytes E8 A2 02 00 00: call 0x58877f32
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x58877ce5
        __asm _emit 0x74
        __asm _emit 0x4e
        or dword ptr [edi], 100h
        xor eax, eax
        ; Exact mapped bytes EB B1: jmp 0x58877c52
        __asm _emit 0xeb
        __asm _emit 0xb1
        xor eax, eax
        ; Exact mapped bytes EB A5: jmp 0x58877c4a
        __asm _emit 0xeb
        __asm _emit 0xa5
        xor eax, eax
        cmp dword ptr [ebx + 60h], eax
        ; Exact mapped bytes 75 39: jne 0x58877ce5
        __asm _emit 0x75
        __asm _emit 0x39
        cmp dword ptr [ebx + 5ch], eax
        ; Exact mapped bytes 74 34: je 0x58877ce5
        __asm _emit 0x74
        __asm _emit 0x34
        lea eax, [ebp - 0f4h]
        push eax
        push dword ptr [ebx + 50h]
        ; Exact mapped bytes E8 F0 BF FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x58877ce5
        __asm _emit 0x75
        __asm _emit 0x1f
        push edi
        xor ebx, ebx
        push ebx
        push esi
        ; Exact mapped bytes E8 62 02 00 00: call 0x58877f32
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x58877ce5
        __asm _emit 0x74
        __asm _emit 0x0e
        or dword ptr [edi], 100h
        cmp dword ptr [edi + 4], ebx
        ; Exact mapped bytes 75 03: jne 0x58877ce5
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [edi + 4], esi
        mov eax, dword ptr [edi]
        shr eax, 2
        not eax
        and eax, 1
        ; Exact mapped bytes EB 05: jmp 0x58877cf6
        __asm _emit 0xeb
        __asm _emit 0x05
        xor eax, eax
        mov dword ptr [edi], eax
        inc eax
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 4D 93 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x93
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
