// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58742BD0 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_58742bd0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x58742cfa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov ebx, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x58742c11
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58742c09
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0C: je 0x58742c11
        __asm _emit 0x74
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x58742bf3
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esi + 50h]
        test edi, edi
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x58742cfa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 4
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 13 E9 FE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x58742cc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        sub eax, 201h
        ; Exact mapped bytes 74 56: je 0x58742c95
        __asm _emit 0x74
        __asm _emit 0x56
        sub eax, 1
        ; Exact mapped bytes 74 42: je 0x58742c86
        __asm _emit 0x74
        __asm _emit 0x42
        cmp edi, 1
        ; Exact mapped bytes 74 09: je 0x58742c52
        __asm _emit 0x74
        __asm _emit 0x09
        cmp edi, 7
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x58742cfa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x58742c77
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 3D F8 48 A2 58: mov edi, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4]
        mov edx, 12ch
        sub edx, dword ptr [esi + 8]
        push edi
        sub eax, 190h
        push edx
        push eax
        ; Exact mapped bytes E8 89 47 07 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 20h]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 18h]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x58742cba
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 3D F8 48 A2 58: mov edi, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4]
        mov edx, 12ch
        sub edx, dword ptr [esi + 8]
        push edi
        sub eax, 190h
        push edx
        push eax
        ; Exact mapped bytes E8 46 47 07 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x47
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 1ch]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 21: je 0x58742cf0
        __asm _emit 0x74
        __asm _emit 0x21
        cmp dword ptr [ebx + 4], 202h
        ; Exact mapped bytes 75 22: jne 0x58742cfa
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 18h]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 24h]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 74 05: je 0x58742cfa
        __asm _emit 0x74
        __asm _emit 0x05
        cmp edi, 7
        ; Exact mapped bytes 75 E7: jne 0x58742ce1
        __asm _emit 0x75
        __asm _emit 0xe7
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
