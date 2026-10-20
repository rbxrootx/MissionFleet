// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587627F0 .. +0x231 bytes.
extern "C" __declspec(naked) void FUN_587627f0_587627F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 41 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x41
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9A A7 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 90 A7 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa7
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 E6 01 00 00: je 0x58762a0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 96 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x96
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x58762843
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F0 98 D2 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 3F 01 00 00: je 0x5876298c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FB ED D6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xed
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 27 01 00 00: jne 0x58762987
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 48 A7 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa7
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
        ; Exact mapped bytes E8 4B 41 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x41
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 34 A7 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa7
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x58762987
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 34 41 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x41
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        sub eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 13 98 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        sub eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 30h]
        imul ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, dword ptr [ebp - 34h]
        imul eax, edx, 0eh
        cdq
        mov esi, 0ah
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 38h], ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 74 9B D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD BB FF FF: call 0x5875e4d0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes 7C 07: jl 0x587628e1
        __asm _emit 0x7c
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x58762a10
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x587628f3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 8
        ; Exact mapped bytes 0F 8D 8A 00 00 00: jge 0x58762987
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F7 93 D2 FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x93
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E8 93 D2 FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C1 95 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5F: je 0x58762982
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 95 40 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x5876293b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 78 97 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x97
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 41: je 0x58762982
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 97 95 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x58762980
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8B 95 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 5C 0B D3 FF: call 0x584934c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0xd3
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 72 95 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3B BB FF FF: call 0x5875e4b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 73 07: jae 0x58762980
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x58762a10
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB AE: jmp 0x58762930
        __asm _emit 0xeb
        __asm _emit 0xae
        ; Exact mapped bytes E9 63 FF FF FF: jmp 0x587628ea
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AC FE FF FF: jmp 0x58762838
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 E9 FF FF: call 0x58761340
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 22 40 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x40
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 0B: jmp 0x587629ae
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 05 97 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x97
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 5A: je 0x58762a0e
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 24 95 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 47: je 0x58762a0c
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 23 6D DC FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x6d
        __asm _emit 0xdc
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 7D 3A: jge 0x58762a0c
        __asm _emit 0x7d
        __asm _emit 0x3a
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 02 A4 FA FF: call 0x5870cde0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7F F6 FF FF: call 0x58762080
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58762a0c
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x58762a10
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 95: jmp 0x587629a3
        __asm _emit 0xeb
        __asm _emit 0x95
        xor eax, eax
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 35 E6 0C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
