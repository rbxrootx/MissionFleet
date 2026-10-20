// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3E10 .. +0x2B4 bytes.
extern "C" __declspec(naked) void FUN_584a3e10_584A3E10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887de75h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 4ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + eax + 10h], 1
        ; Exact mapped bytes 0F 85 13 01 00 00: jne 0x584a3f5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F1 62 00 00: call 0x584aa140
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4A 86 FE FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 41 E4 FF FF: call 0x584a22a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 0E 42 FE FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584a3e7e
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 53 E9 FF FF: call 0x584a27d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea eax, [ebp - 40h]
        push eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 06 43 FE FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 3D 3B FE FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x584a3f48
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 9A 3B FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0D 36 FE FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 36 FE FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6F 3B FE FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes 74 02: je 0x584a3eca
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB AB: jmp 0x584a3e75
        __asm _emit 0xeb
        __asm _emit 0xab
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EE 35 FE FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 35 FE FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 2A FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 5A: je 0x584a3f43
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BF 81 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 19h
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C1 2A FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 19h
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 4E 43 00 00: call 0x584a8270
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 38h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 A5 38 FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes E9 70 01 00 00: jmp 0x584a40b3
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2D FF FF FF: jmp 0x584a3e75
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 89 38 FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 54 01 00 00: jmp 0x584a40b1
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + edx + 30h], 0
        ; Exact mapped bytes 75 39: jne 0x584a3fa4
        __asm _emit 0x75
        __asm _emit 0x39
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx + 34h], 0
        ; Exact mapped bytes 74 07: je 0x584a3f80
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x584a40b3
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 58 F8 FF FF: call 0x584a37e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0E: je 0x584a3f9f
        __asm _emit 0x74
        __asm _emit 0x0e
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + eax + 30h], edx
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x584a40b1
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 AD 46 00 00: call 0x584a8660
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 1
        mov byte ptr [ebp - 0dh], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x584a3fd3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 65 42 FE FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 73 23: jae 0x584a4003
        __asm _emit 0x73
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 24 3A FE FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        imul edx, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ecx + edx + 30h]
        ; Exact mapped bytes 75 06: jne 0x584a4001
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes EB 02: jmp 0x584a4003
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C7: jmp 0x584a3fca
        __asm _emit 0xeb
        __asm _emit 0xc7
        movzx ecx, byte ptr [ebp - 0dh]
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x584a401a
        __asm _emit 0x75
        __asm _emit 0x0f
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + edx + 30h], 0
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx + 30h], 0
        ; Exact mapped bytes 74 41: je 0x584a4069
        __asm _emit 0x74
        __asm _emit 0x41
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + eax + 30h]
        ; Exact mapped bytes E8 18 D6 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 74 2A: je 0x584a4069
        __asm _emit 0x74
        __asm _emit 0x2a
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + edx + 30h], 0
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 7C 37 FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes EB 4A: jmp 0x584a40b3
        __asm _emit 0xeb
        __asm _emit 0x4a
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx + 10h], 4
        ; Exact mapped bytes 75 0F: jne 0x584a4086
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4D 00 00 00: call 0x584a40d0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x584a40a1
        __asm _emit 0xeb
        __asm _emit 0x1b
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx + 10h], 3
        ; Exact mapped bytes 75 0D: jne 0x584a40a1
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B0 06 00 00: call 0x584a4750
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 30 37 FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
