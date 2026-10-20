// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877E040 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_5877e040() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 24 01 00 00: je 0x5877e174
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 3ch]
        mov esi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5877e07f
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5877e078
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [edi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x5877e07f
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5877e062
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        sub eax, 200h
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5877e120
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 74 43: je 0x5877e0d5
        __asm _emit 0x74
        __asm _emit 0x43
        sub eax, 1
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x5877e174
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 0F 8E BD 00 00 00: jle 0x5877e16a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x5877e16a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 190h]
        add eax, 240h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 53 68 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
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
        mov ecx, edi
        ; Exact mapped bytes E8 5A 34 FB FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5877e174
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0ch
        ; Exact mapped bytes 7E 6E: jle 0x5877e16a
        __asm _emit 0x7e
        __asm _emit 0x6e
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 65: je 0x5877e16a
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [eax + 190h]
        add eax, 300h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 08 68 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 10 34 FB FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 63 FF FF FF: je 0x5877e0a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 160h], 0ah
        ; Exact mapped bytes 7E 24: jle 0x5877e16a
        __asm _emit 0x7e
        __asm _emit 0x24
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 1B: je 0x5877e16a
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 190h]
        add eax, 280h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 BE 67 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 AC 67 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
