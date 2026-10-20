// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D1ED0 .. +0x1AC bytes.
extern "C" __declspec(naked) void FUN_585d1ed0_585D1ED0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 18h], ecx
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 5A 01 00: call 0x585e7900
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 37 01 00: call 0x585e5670
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 0A 00 00: call 0x585d2920
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 67: jne 0x585d1f6a
        __asm _emit 0x75
        __asm _emit 0x67
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 9E 0A 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x585d1f65
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes A1 EC 5C 96 58: mov eax, dword ptr [0x58965cec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x5c
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 7d0h
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 32: jae 0x585d1f5c
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 9E 0A 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 588ad170h
        ; Exact mapped bytes E8 AE 00 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A5 C9 F2 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc9
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 15 EC 5C 96 58: mov dword ptr [0x58965cec], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x5c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x585d2078
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 88 F9 FF: call 0x5856a780
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x88
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x585d1f9d
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 09 00 00: call 0x585d2940
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x585d1f9d
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 5ah
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 39 9B 01 00: call 0x585ebad0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x585d2078
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 6
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 18 0F 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x18
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 64: jle 0x585d2016
        __asm _emit 0x7e
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 9E 0A 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x585d2014
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes A1 F0 5C 96 58: mov eax, dword ptr [0x58965cf0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x5c
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 7d0h
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 32: jae 0x585d200b
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 9D 0A 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 588ad198h
        ; Exact mapped bytes E8 FF FF F4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F6 C8 F2 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc8
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 15 F0 5C 96 58: mov dword ptr [0x58965cf0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x5c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 62: jmp 0x585d2078
        __asm _emit 0xeb
        __asm _emit 0x62
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 9D 0A 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x585d2078
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes A1 F4 5C 96 58: mov eax, dword ptr [0x58965cf4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x5c
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 7d0h
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 32: jae 0x585d206f
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 9D 0A 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 588ad1c0h
        ; Exact mapped bytes E8 9B FF F4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 92 C8 F2 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 15 F4 5C 96 58: mov dword ptr [0x58965cf4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x5c
        __asm _emit 0x96
        __asm _emit 0x58
        mov esp, ebp
        pop ebp
        ret
    }
}
