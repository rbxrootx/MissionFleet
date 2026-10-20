// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58764D30 .. +0x21E bytes.
extern "C" __declspec(naked) void FUN_58764d30_58764D30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 5C 03 D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 94 FF FF: call 0x5875e1b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 54 DB DF FF: call 0x585628c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xdb
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 35 03 D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8F C4 01 00 00: jg 0x58764f47
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C8 71 DF FF: call 0x5855bf60
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x71
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 6F 00 00: call 0x5876bd10
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 1C D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1c
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 2B: jne 0x58764ddc
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 23 D7 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7D EE F7 FF: call 0x586e3c40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xee
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 BE DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xbe
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 65 D1 DE FF: call 0x58551f40
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd1
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 C9 FF FF: call 0x58761740
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 0E: jne 0x58764dfa
        __asm _emit 0x75
        __asm _emit 0x0e
        push -1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 45 E8 FF: call 0x585e93a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5f0ch], 0
        ; Exact mapped bytes 75 60: jne 0x58764e66
        __asm _emit 0x75
        __asm _emit 0x60
        push 1
        push 4
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 8A D4 FF: call 0x584ad860
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f0ch], 40000000h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f0ch]
        or ecx, 40000h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f0ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 620ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5eb4h], 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 30 E8 FF: call 0x585e7f10
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x30
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x58764f47
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 0C D3 FF: call 0x58495aa0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0c
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x58764ec0
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 81 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58764e91
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x58764e98
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 3A FB D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfb
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 8A D4 FF: call 0x584ad910
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 80 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 07 FB D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0xd1
        __asm _emit 0xff
        imul eax, dword ptr [eax + 60h], -1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 8A D4 FF: call 0x584ad910
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 09 D3 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x09
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 44: jne 0x58764f47
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 80 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x80
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 1A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 91 80 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 24: je 0x58764f47
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 AF FA D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfa
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [eax + 60h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA B5 00 00: call 0x58770500
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
