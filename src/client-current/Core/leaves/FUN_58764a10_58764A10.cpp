// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58764A10 .. +0x187 bytes.
extern "C" __declspec(naked) void FUN_58764a10_58764A10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 0F 85 D0 00 00 00: jne 0x58764afb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 4
        mov ecx, dword ptr [ebp - 14h]
        lea ecx, [ecx + eax + 11f4h]
        ; Exact mapped bytes E8 80 1F D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58764a50
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 76 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x76
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x58764afb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 74 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x74
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 03 0F D3 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, word ptr [eax + 98h]
        cmp edx, 4
        ; Exact mapped bytes 75 7D: jne 0x58764af6
        __asm _emit 0x75
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EF 86 D2 FF: call 0x5848d170
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x86
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 71: jne 0x58764af6
        __asm _emit 0x75
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C3 0D D3 FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0xd3
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 1F D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1f
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 53: jne 0x58764af1
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes A1 78 5E 96 58: mov eax, dword ptr [0x58965e78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 7d0h
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 32: jae 0x58764ae8
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 73 F1 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 588b5234h
        ; Exact mapped bytes E8 22 D5 DB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 19 9E D9 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x9e
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 15 78 5E 96 58: mov dword ptr [0x58965e78], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x58764b90
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x58764a45
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 4
        mov ecx, dword ptr [ebp - 14h]
        lea ecx, [ecx + eax + 11f4h]
        ; Exact mapped bytes E8 B0 1E D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x1e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58764b20
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 75 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x75
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 6A: je 0x58764b90
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 73 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x73
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 19h
        ; Exact mapped bytes 74 06: je 0x58764b3d
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 1ah
        ; Exact mapped bytes 75 3F: jne 0x58764b7c
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2B 0E D3 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, word ptr [eax + 98h]
        cmp edx, 1
        ; Exact mapped bytes 74 02: je 0x58764b53
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB C2: jmp 0x58764b15
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 15 0E D3 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx eax, word ptr [eax + 0a2h]
        test eax, eax
        ; Exact mapped bytes 7E 14: jle 0x58764b7a
        __asm _emit 0x7e
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        movzx edx, word ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C9 86 D3 FF: call 0x5849d240
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x86
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x58764b90
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes EB 12: jmp 0x58764b8e
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 10h]
        push eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B3 86 D3 FF: call 0x5849d240
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x86
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 85: jmp 0x58764b15
        __asm _emit 0xeb
        __asm _emit 0x85
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
