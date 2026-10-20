// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029B60 .. +0x1C8 bytes.
extern "C" __declspec(naked) void FUN_10029b60_10029B60() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 B2 01 00 00: je 0x10029d20
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x10029b99
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10029b92
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x10029b99
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x10029b7c
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        sub eax, 200h
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x10029c72
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 63: je 0x10029c0d
        __asm _emit 0x74
        __asm _emit 0x63
        dec eax
        ; Exact mapped bytes 0F 85 6F 01 00 00: jne 0x10029d20
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 11: jle 0x10029bd0
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10029bd0
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x10029bd2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 0F 84 43 01 00 00: je 0x10029d20
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [esi + 14h]
        pop edi
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [esi + 34h]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C FA 00 00 00: jl 0x10029d20
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8D ED 00 00 00: jge 0x10029d20
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C DA 00 00 00: jl 0x10029d20
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 8D CD 00 00 00: jge 0x10029d20
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0ch
        ; Exact mapped bytes 7E 66: jle 0x10029cc7
        __asm _emit 0x7e
        __asm _emit 0x66
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x10029cc7
        __asm _emit 0x74
        __asm _emit 0x5c
        add eax, 300h
        ; Exact mapped bytes EB 57: jmp 0x10029cc9
        __asm _emit 0xeb
        __asm _emit 0x57
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 7C 4B: jl 0x10029cd2
        __asm _emit 0x7c
        __asm _emit 0x4b
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 7D 42: jge 0x10029cd2
        __asm _emit 0x7d
        __asm _emit 0x42
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 33: jl 0x10029cd2
        __asm _emit 0x7c
        __asm _emit 0x33
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 2A: jge 0x10029cd2
        __asm _emit 0x7d
        __asm _emit 0x2a
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0ah
        ; Exact mapped bytes 7E 11: jle 0x10029cc7
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10029cc7
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 280h
        ; Exact mapped bytes EB 02: jmp 0x10029cc9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 50: je 0x10029d20
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes EB 28: jmp 0x10029cfa
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 11: jle 0x10029cf1
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10029cf1
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x10029cf3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 26: je 0x10029d20
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
