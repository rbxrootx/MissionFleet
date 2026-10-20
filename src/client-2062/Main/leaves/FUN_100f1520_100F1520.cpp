// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1520 .. +0x309 bytes.
extern "C" __declspec(naked) void FUN_100f1520_100F1520() {
    __asm {
        push ecx
        push ebp
        mov ebp, ecx
        push esi
        mov edx, 20h
        lea ecx, [ebp + 0a50h]
        lea eax, [ebp + 94ch]
        xor esi, esi
        add ecx, 8
        mov dword ptr [eax + 80h], esi
        mov dword ptr [ecx - 0ch], esi
        ; Exact mapped bytes 66 C7 00 AA 00: mov word ptr [eax], 0xaa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0xaa
        __asm _emit 0x00
        mov dword ptr [ecx - 8], esi
        ; Exact mapped bytes 66 C7 40 02 AA 00: mov word ptr [eax + 2], 0xaa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0xaa
        __asm _emit 0x00
        add eax, 4
        dec edx
        ; Exact mapped bytes 75 DE: jne 0x100f1536
        __asm _emit 0x75
        __asm _emit 0xde
        mov esi, dword ptr [esp + 10h]
        xor eax, eax
        push ebx
        cmp esi, eax
        push edi
        ; Exact mapped bytes 0F 84 8F 02 00 00: je 0x100f17f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebp + 48h]
        mov ecx, 17h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edi, dword ptr [ebp + 4ch]
        mov esi, dword ptr [ebp + 50h]
        mov eax, 0aaaaaaaah
        xor edi, eax
        xor esi, eax
        ; Exact mapped bytes 66 8B 45 6C: mov ax, word ptr [ebp + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x6c
        mov dword ptr [ebp + 4ch], edi
        ; Exact mapped bytes 66 89 44 24 18: mov word ptr [esp + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [ebp + 50h], esi
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C0 38 F3 FF: call 0x10024e60
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x38
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 6C: mov dx, word ptr [ebp + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x6c
        mov dword ptr [ebp + 0b4ch], eax
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 54 24 18: mov word ptr [esp + 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        mov eax, dword ptr [esp + 18h]
        push eax
        ; Exact mapped bytes E8 01 39 F3 FF: call 0x10024ec0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4D 6E: mov cx, word ptr [ebp + 0x6e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x6e
        mov dword ptr [ebp + 0b50h], eax
        ; Exact mapped bytes 66 89 4C 24 18: mov word ptr [esp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        mov edx, dword ptr [esp + 18h]
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 42 39 F3 FF: call 0x10024f20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp + 0b54h], eax
        ; Exact mapped bytes 66 8B 45 70: mov ax, word ptr [ebp + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x70
        ; Exact mapped bytes 66 89 44 24 18: mov word ptr [esp + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 18h]
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 E3 39 F3 FF: call 0x10024fe0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 72: mov dx, word ptr [ebp + 0x72]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x72
        mov dword ptr [ebp + 0b58h], eax
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 54 24 18: mov word ptr [esp + 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        mov eax, dword ptr [esp + 18h]
        push eax
        ; Exact mapped bytes E8 64 39 F3 FF: call 0x10024f80
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4D 74: mov cx, word ptr [ebp + 0x74]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x74
        mov dword ptr [ebp + 0b5ch], eax
        ; Exact mapped bytes 66 89 4C 24 18: mov word ptr [esp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        mov edx, dword ptr [esp + 18h]
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 45 39 F3 FF: call 0x10024f80
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp + 0b60h], eax
        ; Exact mapped bytes 66 8B 45 76: mov ax, word ptr [ebp + 0x76]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x76
        ; Exact mapped bytes 66 89 44 24 18: mov word ptr [esp + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 18h]
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 26 39 F3 FF: call 0x10024f80
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 78: mov dx, word ptr [ebp + 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x78
        mov dword ptr [ebp + 0b64h], eax
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 54 24 18: mov word ptr [esp + 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        mov eax, dword ptr [esp + 18h]
        push eax
        ; Exact mapped bytes E8 07 39 F3 FF: call 0x10024f80
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 1ch]
        mov dword ptr [ebp + 0b68h], eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x100f17de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 48h]
        shr eax, 1
        and eax, 1fh
        lea ecx, [eax + eax*4]
        shl ecx, 1
        push ecx
        ; Exact mapped bytes E8 02 B1 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb1
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 48h]
        mov esi, ebx
        shr ecx, 1
        and ecx, 1fh
        mov edi, eax
        mov dword ptr [ebp + 0b0h], eax
        add esp, 4
        lea ecx, [ecx + ecx*4]
        mov dword ptr [esp + 18h], 0
        shl ecx, 1
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov eax, dword ptr [ebp + 48h]
        and eax, 3eh
        test al, al
        ; Exact mapped bytes 0F 86 02 01 00 00: jbe 0x100f17de
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebx + 8]
        ; Exact mapped bytes 66 8B 4E F8: mov cx, word ptr [esi - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xf8
        xor ebx, ebx
        xor edx, edx
        push ebx
        mov dl, byte ptr [esi]
        push ecx
        push edx
        mov ecx, ebp
        ; Exact mapped bytes E8 1D 03 00 00: call 0x100f1a10
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov al, byte ptr [esi]
        mov edi, eax
        cmp dword ptr [ebp + edi*4 + 9cch], ebx
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x100f17c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E FA: mov cx, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xfa
        ; Exact mapped bytes 66 89 4C 24 1C: mov word ptr [esp + 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 1ch]
        mov eax, ecx
        and eax, 0fh
        sub eax, 0bh
        ; Exact mapped bytes 74 1A: je 0x100f1737
        __asm _emit 0x74
        __asm _emit 0x1a
        dec eax
        ; Exact mapped bytes 74 09: je 0x100f1729
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp + edi*8 + 0a4ch], ebx
        ; Exact mapped bytes EB 21: jmp 0x100f174a
        __asm _emit 0xeb
        __asm _emit 0x21
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 2B 3A F3 FF: call 0x10025160
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x100f1743
        __asm _emit 0xeb
        __asm _emit 0x0c
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BD 39 F3 FF: call 0x10025100
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp + edi*8 + 0a4ch], eax
        mov dl, byte ptr [esi - 2]
        xor ecx, ecx
        mov cl, byte ptr [esi]
        xor dl, 0aah
        ; Exact mapped bytes 66 33 C0: xor ax, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc0
        mov al, dl
        ; Exact mapped bytes 66 89 84 8D 4C 09 00 00: mov word ptr [ebp + ecx*4 + 0x94c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 FC: mov dx, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xfc
        xor eax, eax
        ; Exact mapped bytes 66 89 54 24 10: mov word ptr [esp + 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        mov al, byte ptr [esi]
        mov ecx, dword ptr [esp + 10h]
        mov edi, eax
        mov eax, ecx
        and eax, 0fh
        sub eax, 0bh
        ; Exact mapped bytes 74 1A: je 0x100f1798
        __asm _emit 0x74
        __asm _emit 0x1a
        dec eax
        ; Exact mapped bytes 74 09: je 0x100f178a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp + edi*8 + 0a50h], ebx
        ; Exact mapped bytes EB 21: jmp 0x100f17ab
        __asm _emit 0xeb
        __asm _emit 0x21
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 CA 39 F3 FF: call 0x10025160
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x100f17a4
        __asm _emit 0xeb
        __asm _emit 0x0c
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 5C 39 F3 FF: call 0x10025100
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp + edi*8 + 0a50h], eax
        mov cl, byte ptr [esi - 1]
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        xor cl, 0aah
        xor eax, eax
        mov al, byte ptr [esi]
        mov dl, cl
        ; Exact mapped bytes 66 89 94 85 4E 09 00 00: mov word ptr [ebp + eax*4 + 0x94e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 48h]
        mov eax, dword ptr [esp + 18h]
        shr ecx, 1
        inc eax
        and ecx, 1fh
        add esi, 0ah
        cmp eax, ecx
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 0F 82 01 FF FF FF: jb 0x100f16df
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [esp + 20h]
        pop edi
        cmp ecx, eax
        pop ebx
        ; Exact mapped bytes 74 07: je 0x100f17f1
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, ebp
        ; Exact mapped bytes E8 7F 0C 00 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp + 0b4ch], eax
        mov dword ptr [ebp + 0b50h], eax
        mov dword ptr [ebp + 0b54h], eax
        mov dword ptr [ebp + 0b58h], eax
        mov dword ptr [ebp + 0b5ch], eax
        mov dword ptr [ebp + 0b60h], eax
        mov dword ptr [ebp + 0b64h], eax
        mov dword ptr [ebp + 0b68h], eax
        ; Exact mapped bytes EB B7: jmp 0x100f17e0
        __asm _emit 0xeb
        __asm _emit 0xb7
    }
}
