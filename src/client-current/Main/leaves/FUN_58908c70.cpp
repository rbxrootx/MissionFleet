// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58908C70 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_58908c70() {
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
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x58908d89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov ebx, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x58908cb1
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58908ca9
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
        ; Exact mapped bytes 74 0C: je 0x58908cb1
        __asm _emit 0x74
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x58908c93
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
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x58908d89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
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
        ; Exact mapped bytes E8 73 88 E2 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x88
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 69: je 0x58908d3a
        __asm _emit 0x74
        __asm _emit 0x69
        mov eax, dword ptr [ebx + 4]
        add eax, 0fffffdffh
        cmp eax, 4
        ; Exact mapped bytes 77 43: ja 0x58908d21
        __asm _emit 0x77
        __asm _emit 0x43
        ; Exact mapped bytes FF 24 85 94 8D 90 58: jmp dword ptr [eax*4 + 0x58908d94]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x58
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
        cmp edi, 1
        ; Exact mapped bytes 74 05: je 0x58908d2b
        __asm _emit 0x74
        __asm _emit 0x05
        cmp edi, 5
        ; Exact mapped bytes 75 5E: jne 0x58908d89
        __asm _emit 0x75
        __asm _emit 0x5e
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 28h]
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
        ; Exact mapped bytes 74 3F: je 0x58908d7f
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebx + 4]
        sub eax, 202h
        ; Exact mapped bytes 74 1D: je 0x58908d67
        __asm _emit 0x74
        __asm _emit 0x1d
        sub eax, 3
        ; Exact mapped bytes 75 3A: jne 0x58908d89
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 20h]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 2ch]
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
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 2ch]
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
        ; Exact mapped bytes 74 05: je 0x58908d89
        __asm _emit 0x74
        __asm _emit 0x05
        cmp edi, 5
        ; Exact mapped bytes 75 E7: jne 0x58908d70
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
