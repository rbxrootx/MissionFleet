// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875A250 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_5875a250() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x5875a31a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5875a28f
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5875a288
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x5875a28f
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5875a272
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 200h
        ; Exact mapped bytes 75 43: jne 0x5875a2dc
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [esi + 6ch]
        add edx, 4
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 93 72 FD FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5875a2d6
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 79: jne 0x5875a332
        __asm _emit 0x75
        __asm _emit 0x79
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, dword ptr [esi + 6ch]
        push 101h
        ; Exact mapped bytes E8 52 8A 1A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x8a
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes EB 45: jmp 0x5875a321
        __asm _emit 0xeb
        __asm _emit 0x45
        cmp eax, 204h
        ; Exact mapped bytes 75 4F: jne 0x5875a332
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, esi
        ; Exact mapped bytes E8 56 FE FF FF: call 0x5875a140
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x5875a332
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 66 83 BE 9E 00 00 00 00: cmp word ptr [esi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 3A: je 0x5875a332
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 0F BF 86 AC 00 00 00: movsx eax, word ptr [esi + 0xac]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        mov edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push edx
        ; Exact mapped bytes E8 CE EE 05 00: call 0x587b91e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 0C: je 0x5875a332
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 6ch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
