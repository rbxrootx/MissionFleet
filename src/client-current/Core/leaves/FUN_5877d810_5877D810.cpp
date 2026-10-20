// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877D810 .. +0x2EF bytes.
extern "C" __declspec(naked) void FUN_5877d810_5877D810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 71 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 07 F8 D0 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 B3 02 00 00: je 0x5877daf9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 0F B6 02: movzx ax, byte ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        movzx ecx, word ptr [ebp - 4]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 74 19: je 0x5877d877
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp - 10h], 6
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x5877d949
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0dh
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x5877d9b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 82 02 00 00: jmp 0x5877daf9
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 70 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 7D 24 D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x24
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5877d8a0
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 25: jmp 0x5877d8c5
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 70 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 54 F7 D0 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E3 D5 FF FF: call 0x5877aec0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 70 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 17 24 D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x24
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5877d906
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 25: jmp 0x5877d92b
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 70 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 EE F6 D0 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], edx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7D D5 FF FF: call 0x5877aec0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x5877daf9
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 70 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AB 23 D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x23
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5877d972
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 25: jmp 0x5877d997
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 70 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 82 F6 D0 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 93 D7 FF FF: call 0x5877b140
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 46 01 00 00: jmp 0x5877daf9
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 6F D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x6f
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 70 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx - 1ch]
        mov eax, dword ptr [ebp - 0ch]
        sub edx, dword ptr [eax + 424h]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 6F D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6f
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 3F F6 D0 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x5877da50
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 6F D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x6f
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 21 F6 D0 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx eax, word ptr [eax + 98h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 6F D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6f
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 CB F5 D0 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 0E: jmp 0x5877da5e
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 6F D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x6f
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 96 22 D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x22
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x5877daca
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 6E D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6e
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 76 22 D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x22
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, byte ptr [eax]
        sub edx, 0bh
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 6E D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6e
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 51 F5 D0 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 0E: jmp 0x5877dad8
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D8 D0 FF FF: call 0x5877abd0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
