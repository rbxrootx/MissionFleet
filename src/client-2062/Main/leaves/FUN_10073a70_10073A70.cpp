// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10073A70 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_10073a70_10073A70() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        xor eax, eax
        mov ebx, ecx
        push edi
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 46 87 FB FF: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 66 01 00 00: je 0x10073bfa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        xor edx, edx
        mov cl, byte ptr [edi + 330h]
        mov dl, byte ptr [esi + 4]
        push ebp
        mov ebp, ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 34 A5 07 00: call 0x100edfe0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp edi, dword ptr [eax + 4]
        ; Exact mapped bytes 75 37: jne 0x10073aed
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, dword ptr [ebx + 108h]
        xor edx, edx
        mov eax, dword ptr [ecx + ebp*4]
        xor ecx, ecx
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dl, byte ptr [esi + 4]
        mov eax, dword ptr [ebx + 108h]
        mov eax, dword ptr [eax + edx*4]
        or byte ptr [eax + 24h], 0fh
        mov cl, byte ptr [esi + 4]
        mov dword ptr [ebx + 104h], ecx
        mov ecx, dword ptr [ebx + 174h]
        ; Exact mapped bytes E8 53 22 05 00: call 0x100c5d40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp*4 + 101ace60h]
        xor eax, eax
        mov ecx, dword ptr [edx + 34h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x10073b11
        __asm _emit 0x74
        __asm _emit 0x14
        xor edx, edx
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        cmp dword ptr [ecx + 18h], edx
        ; Exact mapped bytes 74 08: je 0x10073b0f
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10073b11
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes EB F3: jmp 0x10073b02
        __asm _emit 0xeb
        __asm _emit 0xf3
        mov eax, ecx
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 10h]
        push ecx
        mov ecx, dword ptr [eax + 0ch]
        push edx
        mov dl, byte ptr [eax + 9]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr [esi + 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        push edx
        mov ecx, dword ptr [ecx*4 + 101ace60h]
        push eax
        ; Exact mapped bytes E8 A8 81 FB FF: call 0x1002bce0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp*4 + 101ace60h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        push edx
        ; Exact mapped bytes E8 76 83 FB FF: call 0x1002bec0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 174h]
        push 0
        push ebp
        ; Exact mapped bytes E8 98 20 05 00: call 0x100c5bf0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 174h]
        xor eax, eax
        mov al, byte ptr [esi + 4]
        push 0
        push eax
        ; Exact mapped bytes E8 85 20 05 00: call 0x100c5bf0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 02: mov cx, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 89 8F 2E 03 00 00: mov word ptr [edi + 0x32e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 5]
        mov ecx, edi
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 E4 78 07 00: call 0x100eb470
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        mov al, byte ptr [edi + 330h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8F 2E 03 00 00: mov cx, word ptr [edi + 0x32e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shl eax, 0ah
        add eax, ecx
        mov ecx, dword ptr [edx + eax*8 + 44ch]
        push ecx
        mov ecx, edi
        lea eax, [edx + eax*8 + 448h]
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 0F B1 08 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 11ch]
        ; Exact mapped bytes E8 D4 B5 08 00: call 0x100ff1a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x00
        test byte ptr [ebx + 1b8h], 1
        ; Exact mapped bytes 74 0D: je 0x10073be2
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push edi
        ; Exact mapped bytes E8 CE E9 FC FF: call 0x100425b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 BB B6 01 00 00 02: cmp word ptr [ebx + 0x1b6], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        pop ebp
        ; Exact mapped bytes 75 2B: jne 0x10073c18
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, ebx
        ; Exact mapped bytes E8 DC 0C 00 00: call 0x100748d0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 0a4h]
        mov ecx, dword ptr [ebx + 0a0h]
        push 40000h
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C8 95 FD FF: call 0x1004d1e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
