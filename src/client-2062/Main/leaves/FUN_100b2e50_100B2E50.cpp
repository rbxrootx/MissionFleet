// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B2E50 .. +0x201 bytes.
extern "C" __declspec(naked) void FUN_100b2e50_100B2E50() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 E9 01 00 00: je 0x100b3048
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        xor ebx, ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 21: je 0x100b2e89
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 CD 01 00 00: je 0x100b3040
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 10h]
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 06: je 0x100b2e8d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes EB E2: jmp 0x100b2e6b
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        and edx, 1f00h
        cmp edx, 200h
        ; Exact mapped bytes 0F 85 A5 01 00 00: jne 0x100b3048
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 0F 85 98 01 00 00: jne 0x100b3048
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        add eax, -9
        cmp eax, 71h
        ; Exact mapped bytes 0F 87 89 01 00 00: ja 0x100b3048
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 100b3080h]
        ; Exact mapped bytes FF 24 8D 54 30 0B 10: jmp dword ptr [ecx*4 + 0x100b3054]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x10
        ; Exact mapped bytes 66 39 9E CC 00 00 00: cmp word ptr [esi + 0xcc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 5ch]
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x100b2f96
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x100b2f8e
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 9E CC 00 00 00: cmp word ptr [esi + 0xcc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 64h]
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x100b2f96
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x100b2f8e
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 CC 00 00 00: mov ax, word ptr [esi + 0xcc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 6ch]
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x100b3048
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100b2f9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 63 04 00 00: call 0x100b3380
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7E: jmp 0x100b2f9d
        __asm _emit 0xeb
        __asm _emit 0x7e
        ; Exact mapped bytes 66 39 9E CC 00 00 00: cmp word ptr [esi + 0xcc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 74h]
        ; Exact mapped bytes 74 6B: je 0x100b2f96
        __asm _emit 0x74
        __asm _emit 0x6b
        ; Exact mapped bytes EB 61: jmp 0x100b2f8e
        __asm _emit 0xeb
        __asm _emit 0x61
        ; Exact mapped bytes 66 39 9E CC 00 00 00: cmp word ptr [esi + 0xcc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 7ch]
        ; Exact mapped bytes 74 5D: je 0x100b2f96
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes EB 53: jmp 0x100b2f8e
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes 66 39 9E CC 00 00 00: cmp word ptr [esi + 0xcc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 84h]
        ; Exact mapped bytes 74 4C: je 0x100b2f96
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes EB 42: jmp 0x100b2f8e
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes 66 39 9E CC 00 00 00: cmp word ptr [esi + 0xcc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 8ch]
        ; Exact mapped bytes 74 3B: je 0x100b2f96
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes EB 31: jmp 0x100b2f8e
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 66 39 9E CC 00 00 00: cmp word ptr [esi + 0xcc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 94h]
        ; Exact mapped bytes 74 2A: je 0x100b2f96
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes EB 20: jmp 0x100b2f8e
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 66 39 9E CC 00 00 00: cmp word ptr [esi + 0xcc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 9ch]
        ; Exact mapped bytes 74 19: je 0x100b2f96
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes EB 0F: jmp 0x100b2f8e
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 66 39 9E CC 00 00 00: cmp word ptr [esi + 0xcc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 0a4h]
        ; Exact mapped bytes 74 08: je 0x100b2f96
        __asm _emit 0x74
        __asm _emit 0x08
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 EA 03 00 00: call 0x100b3380
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E CE 00 00 00: mov word ptr [esi + 0xce], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x100b3048
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        mov ebx, 1
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x100b2fd7
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [esi + 58h]
        push 101h
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 54h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 54h]
        ; Exact mapped bytes E8 8F C1 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + 0c8h], ebx
        mov eax, dword ptr [esi + 0c4h]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x100b2ff8
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0c4h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 0c4h], edi
        mov eax, dword ptr [edi]
        push 0fffffeffh
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 3D C1 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0c4h]
        push 101h
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 2A C1 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        cmp dword ptr [eax + 8], 1bh
        ; Exact mapped bytes 75 08: jne 0x100b3048
        __asm _emit 0x75
        __asm _emit 0x08
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
