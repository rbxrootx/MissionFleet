// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58763160 .. +0x2A3 bytes.
extern "C" __declspec(naked) void FUN_58763160_58763160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ef8h], 0
        ; Exact mapped bytes 75 75: jne 0x587631eb
        __asm _emit 0x75
        __asm _emit 0x75
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 CC 26 EA FF: call 0x58605850
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x587631e6
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12c8h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 CE E1 DA FF: call 0x58511370
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe1
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 19 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x19
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9D 3A D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12c8h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 67 C6 D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc6
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ef8h], 50000000h
        ; Exact mapped bytes E9 A3 01 00 00: jmp 0x5876338e
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ef8h], 50000000h
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x5876328f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 12c8h]
        ; Exact mapped bytes E8 B4 17 D2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x17
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12c8h]
        ; Exact mapped bytes E8 C4 6B D6 FF: call 0x584c9de0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6b
        __asm _emit 0xd6
        __asm _emit 0xff
        imul ecx, eax, 3
        sub ecx, 1
        cmp esi, ecx
        ; Exact mapped bytes 75 4D: jne 0x58763273
        __asm _emit 0x75
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12c8h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 30 E1 DA FF: call 0x58511370
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe1
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 18 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x18
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FC 39 D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x39
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ef8h], 70000000h
        ; Exact mapped bytes EB 17: jmp 0x5876328a
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12c8h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B7 1E D5 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1e
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x5876338e
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ef8h], 70000000h
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x58763331
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 A0 25 EA FF: call 0x58605850
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 64: jne 0x58763318
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12c8h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 A2 E0 DA FF: call 0x58511370
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe0
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, 2
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 17 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x17
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6E 39 D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x39
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ef8h], 60000000h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12c8h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2B C5 D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc5
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x5876332f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12c8h]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 12 1E D5 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5D: jmp 0x5876338e
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ef8h], 60000000h
        ; Exact mapped bytes 75 4E: jne 0x5876338e
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 12c8h]
        ; Exact mapped bytes E8 72 16 D2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x16
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12c8h]
        ; Exact mapped bytes E8 82 6A D6 FF: call 0x584c9de0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6a
        __asm _emit 0xd6
        __asm _emit 0xff
        imul ecx, eax, 3
        sub ecx, 1
        cmp esi, ecx
        ; Exact mapped bytes 75 0F: jne 0x58763377
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ef8h], 0
        ; Exact mapped bytes EB 17: jmp 0x5876338e
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12c8h]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 B3 1D D5 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x1d
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12c8h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 8D D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 120h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx + 14f8h]
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 5eb8h]
        sub eax, dword ptr [ecx + edx*8 + 4]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 35 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x35
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 120h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx + 14f8h]
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 5eb8h]
        add eax, dword ptr [ecx + edx*8]
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 23 22 05 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
