// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B9860 .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_584b9860_584B9860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 589604e0h
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 F4 00 00 00: jne 0x584b998d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A8 F6 FF FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x584b9988
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 F9 FF FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 18h
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 27 EF 1A 00: call 0x58668800
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xef
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x584b98fd
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 F9 FF FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 18h
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 06 EF 1A 00: call 0x58668800
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xef
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 F9 FF FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 86 EE 1A 00: call 0x586687a0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xee
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x584b993e
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 F9 FF FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 18h
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 65 EE 1A 00: call 0x586687a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 22: je 0x584b9966
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C4 69 FF FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x584b9966
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B8 69 FF FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 B0 FC FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 22: jne 0x584b9988
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 12 F9 FF FF: call 0x584b9280
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 11: je 0x584b9988
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 69 82 16 00: call 0x58621bf0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4F 01 00 00: jmp 0x584b9adc
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B7 F5 FF FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 36 01 00 00: je 0x584b9adc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 F8 FF FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 39 EE 1A 00: call 0x58668800
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xee
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x584b99e8
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA F8 FF FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 1B EE 1A 00: call 0x58668800
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xee
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD F8 FF FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 9E ED 1A 00: call 0x586687a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xed
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x584b9a23
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F F8 FF FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 80 ED 1A 00: call 0x586687a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xed
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 26: je 0x584b9a4f
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 DF 68 FF FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x584b9a4f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D3 68 FF FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1C AF FC FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x584b9adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 29 F8 FF FF: call 0x584b9280
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 6B: jne 0x584b9acb
        __asm _emit 0x75
        __asm _emit 0x6b
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F4 FB FF FF: call 0x584b9660
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 46 F8 FF FF: call 0x584b92c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 46: je 0x584b9ac9
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 14 06 96 58: cmp eax, dword ptr [0x58960614]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 28: jne 0x584b9ab8
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 FA FF FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EE BD FD FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x584b9ab8
        __asm _emit 0x75
        __asm _emit 0x0f
        push 1
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A9 78 16 00: call 0x58621360
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x78
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 28 81 16 00: call 0x58621bf0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 11: jmp 0x584b9adc
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 15 81 16 00: call 0x58621bf0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6A 75 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x75
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
