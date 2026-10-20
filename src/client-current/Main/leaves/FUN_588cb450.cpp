// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CB450 .. +0x28A bytes.
extern "C" __declspec(naked) void FUN_588cb450() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 71 02 00 00: je 0x588cb6d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov ebp, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588cb493
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x588cb48a
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push ebp
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0D: je 0x588cb493
        __asm _emit 0x74
        __asm _emit 0x0d
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588cb474
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 4]
        sub eax, 100h
        ; Exact mapped bytes 0F 84 62 01 00 00: je 0x588cb603
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 100h
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x588cb574
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0ah
        ; Exact mapped bytes 0F 85 1E 02 00 00: jne 0x588cb6d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0ech]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 0D 02 00 00: je 0x588cb6d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 84 03 02 00 00: je 0x588cb6d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 1d4h]
        mov ebx, 4
        ; Exact mapped bytes EB 03: jmp 0x588cb4e0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 34h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 4E 60 E6 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x60
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x588cb512
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 83 7D 0A 00: cmp word ptr [ebp + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 18h]
        push 1
        push 2
        ; Exact mapped bytes 7E 04: jle 0x588cb50a
        __asm _emit 0x7e
        __asm _emit 0x04
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes EB 03: jmp 0x588cb50d
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ecx, dword ptr [edi + 10h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 C6: jne 0x588cb4e0
        __asm _emit 0x75
        __asm _emit 0xc6
        mov eax, dword ptr [esi + 248h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 0F 84 A6 01 00 00: je 0x588cb6d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 248h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 FE 5F E6 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5f
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 89 01 00 00: je 0x588cb6d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 5D 0A: cmp word ptr [ebp + 0xa], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5d
        __asm _emit 0x0a
        mov ecx, esi
        ; Exact mapped bytes 7E 11: jle 0x588cb563
        __asm _emit 0x7e
        __asm _emit 0x11
        push 1
        ; Exact mapped bytes E8 77 D1 FF FF: call 0x588c86d0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 66 D1 FF FF: call 0x588c86d0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor ebp, ebp
        lea edi, [esi + 204h]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [edi]
        add eax, 4
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 AE 5F E6 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x5f
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x588cb5dd
        __asm _emit 0x74
        __asm _emit 0x47
        cmp ebp, 3
        ; Exact mapped bytes 74 05: je 0x588cb5a0
        __asm _emit 0x74
        __asm _emit 0x05
        cmp ebp, 4
        ; Exact mapped bytes 75 0A: jne 0x588cb5aa
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 BE 9E 00 00 00 0F: cmp word ptr [esi + 0x9e], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 74 46: je 0x588cb5f0
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 66 8B 4B 24: mov cx, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 3D: jne 0x588cb5f0
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 CB C3 03 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes EB 13: jmp 0x588cb5f0
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 66 8B 43 24: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 0B: je 0x588cb5f0
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [edi]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        inc ebp
        add edi, 4
        cmp ebp, 5
        ; Exact mapped bytes 7C 87: jl 0x588cb580
        __asm _emit 0x7c
        __asm _emit 0x87
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, -0dh
        cmp eax, 1bh
        ; Exact mapped bytes 0F 87 C1 00 00 00: ja 0x588cb6d3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 588cb6f0h]
        ; Exact mapped bytes FF 24 95 E0 B6 8C 58: jmp dword ptr [edx*4 + 0x588cb6e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xb6
        __asm _emit 0x8c
        __asm _emit 0x58
        mov ecx, esi
        ; Exact mapped bytes E8 29 D1 FF FF: call 0x588c8750
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 58 DB FF FF: call 0x588c9190
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x588cb6d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2a0h]
        pop edi
        mov dword ptr [eax + 50h], 1
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0ech]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 6F: je 0x588cb6d3
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 69: je 0x588cb6d3
        __asm _emit 0x74
        __asm _emit 0x69
        lea edi, [esi + 1d4h]
        mov ebx, 4
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 4
        push ecx
        mov ecx, dword ptr [edi + 34h]
        ; Exact mapped bytes E8 B9 5E E6 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x5e
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x588cb6cb
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 8]
        cmp eax, 26h
        ; Exact mapped bytes 75 0E: jne 0x588cb6a1
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [edx + 18h]
        push 1
        push 2
        push eax
        ; Exact mapped bytes EB 26: jmp 0x588cb6c7
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp eax, 28h
        ; Exact mapped bytes 75 04: jne 0x588cb6aa
        __asm _emit 0x75
        __asm _emit 0x04
        push 1
        ; Exact mapped bytes EB 12: jmp 0x588cb6bc
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp eax, 21h
        ; Exact mapped bytes 75 06: jne 0x588cb6b5
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [edi]
        push 0ah
        ; Exact mapped bytes EB 0A: jmp 0x588cb6bf
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp eax, 22h
        ; Exact mapped bytes 75 11: jne 0x588cb6cb
        __asm _emit 0x75
        __asm _emit 0x11
        push 0ah
        mov ecx, dword ptr [edi + 10h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 18h]
        push 2
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 A2: jne 0x588cb675
        __asm _emit 0x75
        __asm _emit 0xa2
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
    }
}
