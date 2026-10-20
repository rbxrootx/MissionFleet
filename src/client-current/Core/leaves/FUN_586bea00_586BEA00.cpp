// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BEA00 .. +0x39E bytes.
extern "C" __declspec(naked) void FUN_586bea00_586BEA00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov dword ptr [ebp - 0ch], ecx
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 41 78: mov word ptr [ecx + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 80h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bea31
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7D 15: jge 0x586bea4c
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx*4 + 22ch]
        ; Exact mapped bytes E8 77 1E 10 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1e
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x586bea28
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov dword ptr [ebp - 14h], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 29h
        ; Exact mapped bytes 74 08: je 0x586bea6d
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 18h], 2ah
        ; Exact mapped bytes 74 0D: je 0x586bea78
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes EB 14: jmp 0x586bea81
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, 0ah
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x586bea81
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 AB E2 FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x586bea9c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 17 D6 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 E9 02 00 00: je 0x586bed8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 D4 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd4
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB 48 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x48
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0bh
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 10 D4 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd4
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 48 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x48
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [eax + ecx + 8]
        xor edx, 55h
        mov dword ptr [ebp - 60h], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 77 07: ja 0x586beaf6
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 1
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD D3 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A6 5E DC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 588b0db2h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 ED 19 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 81 D3 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0A 11 DF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x11
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        mov dword ptr [ebp - 2ch], ecx
        push 0ffffffh
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4C 19 10 00: call 0x587c04d0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 40h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3F D3 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C8 47 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x47
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        add ecx, 5890bfd0h
        mov dword ptr [ebp - 34h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 16 D3 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F AA E2 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0xff
        imul edx, eax, 0e0h
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 34h]
        add eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], eax
        push 0ffffffh
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 2A 19 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 D2 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A 47 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x47
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 75 3F: jne 0x586bec4e
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 48h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 D2 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E D9 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 0ffffffh
        push 8
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D8 18 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x586becfb
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8A D2 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 47 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x47
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 3C: jne 0x586beca2
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 50h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5E D2 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F7 D8 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd8
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 0ffffffh
        push 9
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 81 18 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 59: jmp 0x586becfb
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 22 D2 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AB 46 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x46
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov dword ptr [ebp - 54h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 05 D2 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9E D8 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 0ffffffh
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 26 18 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        movzx edx, word ptr [ebp - 4]
        cmp dword ptr [ebp - 60h], edx
        ; Exact mapped bytes 73 3B: jae 0x586bed3f
        __asm _emit 0x73
        __asm _emit 0x3b
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 68h], edx
        push 588b0db4h
        ; Exact mapped bytes E8 CD 32 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x32
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        push 4848ceh
        push -1
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 E4 17 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x586bed78
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 70h], eax
        push 588b0dd0h
        ; Exact mapped bytes E8 92 32 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x32
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        push 0ffffffh
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 A9 17 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 42 78: mov ax, word ptr [edx + 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x78
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 41 78: mov word ptr [ecx + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        ; Exact mapped bytes E9 02 FD FF FF: jmp 0x586bea91
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E9 3E 00 00: call 0x586c2c80
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
