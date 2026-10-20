// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008A300 .. +0x396 bytes.
extern "C" __declspec(naked) void FUN_1008a300_1008A300() {
    __asm {
        sub esp, 88h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 98h]
        push edi
        mov edi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes E8 C7 8C F8 FF: call 0x10012ff0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x1008a353
        __asm _emit 0x75
        __asm _emit 0x26
        mov byte ptr [edi + 2e5h], 6
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push eax
        ; Exact mapped bytes E8 3A 29 FC FF: call 0x1004cc80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [esi + 24h]
        lea edx, [esp + 18h]
        push ecx
        push 101abaach
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 18h]
        push -1
        push eax
        push 0
        ; Exact mapped bytes E8 82 65 FF FF: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [edi + 228h]
        mov eax, dword ptr [edi + 22ch]
        cmp ebx, eax
        ; Exact mapped bytes 74 4E: je 0x1008a3dc
        __asm _emit 0x74
        __asm _emit 0x4e
        lea ebp, [esi + 2dh]
        mov ecx, dword ptr [ebx]
        push ecx
        push ebp
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x1008a3ae
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [edi + 22ch]
        add ebx, 4
        cmp ebx, eax
        ; Exact mapped bytes 75 E5: jne 0x1008a391
        __asm _emit 0x75
        __asm _emit 0xe5
        ; Exact mapped bytes EB 2E: jmp 0x1008a3dc
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [edi + 22ch]
        lea eax, [ebx + 4]
        cmp eax, ecx
        ; Exact mapped bytes 74 0E: je 0x1008a3c9
        __asm _emit 0x74
        __asm _emit 0x0e
        sub ebx, eax
        mov edx, dword ptr [eax]
        mov dword ptr [ebx + eax], edx
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F4: jne 0x1008a3bd
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [edi + 22ch]
        add eax, -4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [edi + 22ch], eax
        mov ebx, dword ptr [edi + 194h]
        mov eax, dword ptr [edi + 198h]
        cmp ebx, eax
        ; Exact mapped bytes 74 2D: je 0x1008a419
        __asm _emit 0x74
        __asm _emit 0x2d
        add esi, 2dh
        lea ebp, [ebx + 2dh]
        push ebp
        push esi
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 87 02 00 00: je 0x1008a689
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 198h]
        add ebx, 54h
        add ebp, 54h
        cmp ebx, eax
        ; Exact mapped bytes 75 E0: jne 0x1008a3f2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov esi, dword ptr [esp + 9ch]
        mov ecx, dword ptr [edi + 198h]
        mov edx, dword ptr [edi + 19ch]
        lea ebx, [edi + 190h]
        sub edx, ecx
        mov eax, 30c30c31h
        mov ebp, ecx
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        ; Exact mapped bytes 0F 83 F9 00 00 00: jae 0x1008a542
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        ; Exact mapped bytes 74 1C: je 0x1008a46c
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, ecx
        mov eax, 30c30c31h
        sub edx, esi
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ; Exact mapped bytes 77 05: ja 0x1008a471
        __asm _emit 0x77
        __asm _emit 0x05
        mov edi, 1
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x1008a479
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 13: jmp 0x1008a48c
        __asm _emit 0xeb
        __asm _emit 0x13
        sub ecx, esi
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        lea esi, [edx + edi]
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 7D 02: jge 0x1008a497
        __asm _emit 0x7d
        __asm _emit 0x02
        xor ecx, ecx
        lea eax, [ecx*8]
        sub eax, ecx
        lea edx, [eax + eax*2]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 F4 22 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov edi, eax
        mov eax, dword ptr [ebx + 4]
        mov ecx, ebx
        push edi
        push ebp
        push eax
        ; Exact mapped bytes E8 D2 07 00 00: call 0x1008ac90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 9ch]
        mov dword ptr [esp + 14h], eax
        push ecx
        push 1
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 FC 07 00 00: call 0x1008acd0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [ebx + 8]
        add edx, 54h
        mov ecx, ebx
        push edx
        push eax
        push ebp
        ; Exact mapped bytes E8 A8 07 00 00: call 0x1008ac90
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        mov edx, dword ptr [ebx + 4]
        push ecx
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 D9 46 01 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        push eax
        ; Exact mapped bytes E8 84 22 0E 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        lea eax, [esi*8]
        add esp, 4
        sub eax, esi
        lea ecx, [eax + eax*2]
        lea edx, [edi + ecx*4]
        mov ecx, ebx
        mov dword ptr [ebx + 0ch], edx
        ; Exact mapped bytes E8 44 07 00 00: call 0x1008ac60
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        mov esi, dword ptr [esp + 9ch]
        mov dword ptr [ebx + 4], edi
        lea ecx, [eax*8]
        sub ecx, eax
        lea eax, [ecx + ecx*2]
        lea ecx, [edi + eax*4]
        mov edi, dword ptr [esp + 10h]
        mov dword ptr [ebx + 8], ecx
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x1008a633
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        mov eax, 30c30c31h
        sub edx, ebp
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        ; Exact mapped bytes 73 71: jae 0x1008a5cd
        __asm _emit 0x73
        __asm _emit 0x71
        lea edx, [ebp + 54h]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 27 07 00 00: call 0x1008ac90
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 8]
        mov eax, dword ptr [esp + 9ch]
        mov ecx, esi
        push eax
        sub ecx, ebp
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov ecx, edx
        mov eax, 1
        shr ecx, 1fh
        add edx, ecx
        mov ecx, ebx
        sub eax, edx
        push eax
        push esi
        ; Exact mapped bytes E8 37 07 00 00: call 0x1008acd0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 8]
        cmp ebp, eax
        ; Exact mapped bytes 74 1B: je 0x1008a5bb
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, dword ptr [esp + 9ch]
        mov edi, ebp
        add ebp, 54h
        mov ecx, 15h
        cmp ebp, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 E9: jne 0x1008a5a0
        __asm _emit 0x75
        __asm _emit 0xe9
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [ebx + 8]
        mov esi, dword ptr [esp + 9ch]
        add eax, 54h
        mov dword ptr [ebx + 8], eax
        ; Exact mapped bytes EB 66: jmp 0x1008a633
        __asm _emit 0xeb
        __asm _emit 0x66
        push ecx
        push ecx
        add ecx, -54h
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 B6 06 00 00: call 0x1008ac90
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 8]
        lea eax, [edx - 54h]
        cmp ebp, eax
        ; Exact mapped bytes 74 20: je 0x1008a604
        __asm _emit 0x74
        __asm _emit 0x20
        sub eax, 54h
        sub edx, 54h
        mov ecx, 15h
        mov esi, eax
        mov edi, edx
        cmp eax, ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 EB: jne 0x1008a5e4
        __asm _emit 0x75
        __asm _emit 0xeb
        mov edi, dword ptr [esp + 10h]
        mov esi, dword ptr [esp + 9ch]
        lea eax, [ebp + 54h]
        cmp ebp, eax
        ; Exact mapped bytes 74 24: je 0x1008a62f
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes EB 07: jmp 0x1008a614
        __asm _emit 0xeb
        __asm _emit 0x07
        mov esi, dword ptr [esp + 9ch]
        mov edi, ebp
        add ebp, 54h
        mov ecx, 15h
        cmp ebp, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 E9: jne 0x1008a60d
        __asm _emit 0x75
        __asm _emit 0xe9
        mov edi, dword ptr [esp + 10h]
        mov esi, dword ptr [esp + 9ch]
        add dword ptr [ebx + 8], 54h
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        and ecx, 1f00h
        cmp ecx, 200h
        ; Exact mapped bytes 75 44: jne 0x1008a689
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [edi + 218h]
        push 0add783h
        add esi, 2dh
        push 0
        push esi
        ; Exact mapped bytes E8 55 96 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 21ch]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 3E 96 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 220h]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 27 96 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
