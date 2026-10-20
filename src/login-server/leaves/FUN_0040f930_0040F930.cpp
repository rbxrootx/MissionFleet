// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F930 .. +0x25B bytes.
extern "C" __declspec(naked) void FUN_0040f930_0040F930() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov edi, dword ptr [esi + 0c28h]
        cmp edi, ebx
        ; Exact mapped bytes 74 18: je 0x40f95a
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, edi
        ; Exact mapped bytes E8 B7 19 00 00: call 0x411300
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 D0 1B 00 00: call 0x411520
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0c84h]
        cmp edi, ebx
        ; Exact mapped bytes 75 E8: jne 0x40f942
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esi + 40c3ch]
        mov ecx, dword ptr [esi + 40c40h]
        cmp eax, ecx
        ; Exact mapped bytes 74 58: je 0x40f9c2
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [esi + 40c40h]
        mov ecx, dword ptr [esi + 40c3ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 25: je 0x40f99f
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esi + 40c34h]
        dec ecx
        cmp eax, ecx
        ; Exact mapped bytes 75 04: jne 0x40f989
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 03: jmp 0x40f98c
        __asm _emit 0xeb
        __asm _emit 0x03
        lea ecx, [eax + 1]
        mov dword ptr [esi + 40c40h], ecx
        mov ecx, dword ptr [esi + 40c38h]
        dec ecx
        mov dword ptr [esi + 40c38h], ecx
        mov edx, dword ptr [esi + 40c44h]
        mov ecx, dword ptr [edx + eax*4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x40f9b2
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 40c3ch]
        mov eax, dword ptr [esi + 40c40h]
        cmp ecx, eax
        ; Exact mapped bytes 75 A8: jne 0x40f96a
        __asm _emit 0x75
        __asm _emit 0xa8
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 40c54h]
        ; Exact mapped bytes 8B 2D B0 C5 43 00: mov ebp, dword ptr [0x43c5b0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [eax + 18h], 1
        mov eax, dword ptr [esi + 40c54h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [eax + 10h]
        cmp ecx, edx
        ; Exact mapped bytes 74 7D: je 0x40fa6c
        __asm _emit 0x74
        __asm _emit 0x7d
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [eax + 0ch]
        cmp ecx, edx
        ; Exact mapped bytes 74 19: je 0x40fa12
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [eax + 4]
        dec edx
        cmp ecx, edx
        ; Exact mapped bytes 75 04: jne 0x40fa05
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 03: jmp 0x40fa08
        __asm _emit 0xeb
        __asm _emit 0x03
        lea edx, [ecx + 1]
        mov dword ptr [eax + 10h], edx
        mov edx, dword ptr [eax + 8]
        dec edx
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + ecx*8]
        mov ecx, dword ptr [eax + ecx*8 + 4]
        ; Exact mapped bytes 66 83 F9 08: cmp cx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x08
        ; Exact mapped bytes 75 0C: jne 0x40fa2e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x40fa5c
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp edx, -1
        ; Exact mapped bytes 74 29: je 0x40fa5c
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, edx
        and eax, 0ffffh
        mov eax, dword ptr [esi + eax*4 + 0c30h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x40fa54
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x40facd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        cmp eax, ebx
        ; Exact mapped bytes 75 F1: jne 0x40fa45
        __asm _emit 0x75
        __asm _emit 0xf1
        cmp ecx, 20h
        ; Exact mapped bytes 75 03: jne 0x40fa5c
        __asm _emit 0x75
        __asm _emit 0x03
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 40c54h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [eax + 10h]
        cmp ecx, edx
        ; Exact mapped bytes 75 83: jne 0x40f9ef
        __asm _emit 0x75
        __asm _emit 0x83
        mov eax, dword ptr [esi + 40c54h]
        mov dword ptr [eax + 0ch], ebx
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 8], ebx
        mov edx, dword ptr [esi + 40c54h]
        mov dword ptr [edx + 18h], ebx
        mov eax, dword ptr [esi + 40c54h]
        mov ecx, dword ptr [esi + 40c50h]
        mov dword ptr [esi + 40c50h], eax
        mov dword ptr [esi + 40c54h], ecx
        mov edx, dword ptr [esi + 40c64h]
        cmp edx, dword ptr [esi + 40c68h]
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x40fb52
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 40c68h]
        mov ecx, dword ptr [esi + 40c64h]
        cmp eax, ecx
        ; Exact mapped bytes 74 49: je 0x40fb07
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 40c5ch]
        dec ecx
        cmp eax, ecx
        ; Exact mapped bytes 75 28: jne 0x40faf1
        __asm _emit 0x75
        __asm _emit 0x28
        xor ecx, ecx
        ; Exact mapped bytes EB 27: jmp 0x40faf4
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edi, dword ptr [eax + 4]
        cmp edi, ebx
        ; Exact mapped bytes 74 80: je 0x40fa54
        __asm _emit 0x74
        __asm _emit 0x80
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 24 0C 00 00: call 0x410700
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 85 77 FF FF FF: jne 0x40fa5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 04 04 00 00: call 0x40fef0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x40fa5c
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [eax + 1]
        mov dword ptr [esi + 40c68h], ecx
        mov ecx, dword ptr [esi + 40c60h]
        dec ecx
        mov dword ptr [esi + 40c60h], ecx
        mov edx, dword ptr [esi + 40c6ch]
        mov ecx, dword ptr [edx + eax*8]
        cmp ecx, -1
        mov edx, dword ptr [edx + eax*8 + 4]
        ; Exact mapped bytes 74 25: je 0x40fb3e
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, ecx
        and eax, 0ffffh
        mov eax, dword ptr [esi + eax*4 + 0c30h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0B: je 0x40fb36
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [eax], ecx
        ; Exact mapped bytes 74 3F: je 0x40fb6e
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [eax + 8]
        cmp eax, ebx
        ; Exact mapped bytes 75 F5: jne 0x40fb2b
        __asm _emit 0x75
        __asm _emit 0xf5
        cmp edx, 20h
        ; Exact mapped bytes 75 03: jne 0x40fb3e
        __asm _emit 0x75
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 40c64h]
        mov eax, dword ptr [esi + 40c68h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 5C FF FF FF: jne 0x40faae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 40c64h], ebx
        mov dword ptr [esi + 40c68h], ebx
        mov dword ptr [esi + 40c60h], ebx
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
        mov edi, dword ptr [eax + 4]
        cmp edi, ebx
        ; Exact mapped bytes 74 C1: je 0x40fb36
        __asm _emit 0x74
        __asm _emit 0xc1
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 83 0B 00 00: call 0x410700
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 BC: jne 0x40fb3e
        __asm _emit 0x75
        __asm _emit 0xbc
        mov ecx, edi
        ; Exact mapped bytes E8 67 03 00 00: call 0x40fef0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B3: jmp 0x40fb3e
        __asm _emit 0xeb
        __asm _emit 0xb3
    }
}
