// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F3AF0 .. +0x2B8 bytes.
extern "C" __declspec(naked) void FUN_584f3af0_584F3AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        push esi
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 14h]
        add eax, 58h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6A 45 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f3b28
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 48h]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 59 3F F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3f
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 14h]
        add eax, 58h
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 53 46 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8A 3E F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 4D 02 00 00: je 0x584f3d9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 E7 3E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 60 2E F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 94 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 27 02 00 00: jne 0x584f3d99
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 C6 3E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 AF F3 FF FF: call 0x584f2f30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F0 44 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f3ba2
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 50h]
        push ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 DF 3E F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 96 3E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 7F F3 FF FF: call 0x584f2f30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea edx, [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D0 45 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 07 3E F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 C3 01 00 00: je 0x584f3d97
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 64 3E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 BD 88 F9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x88
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8E 44 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f3c04
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 58h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7D 3E F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 34 3E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 8D 88 F9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 6E 45 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A5 3D F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 5C 01 00 00: je 0x584f3d92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 64 FB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x64
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F7 3D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 90 82 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 64 FB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x64
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 1D 01 00 00: jne 0x584f3d8d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x584f3d1f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 BE 3D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 57 82 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 80 80 27 00: call 0x5876bd10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A8 3D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 41 82 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 34 22 F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 8C 3D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 25 82 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 88 B8 FA FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6F 3D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 08 82 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D1 92 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 2C F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BD 92 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 26: je 0x584f3d1d
        __asm _emit 0x74
        __asm _emit 0x26
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 41 3D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 DA 81 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 87 F9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CC 0C F9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 6E: jmp 0x584f3d8d
        __asm _emit 0xeb
        __asm _emit 0x6e
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 19 3D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 B2 81 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DB 7F 27 00: call 0x5876bd10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7f
        __asm _emit 0x27
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 03 3D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 9C 81 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D5 5A 27 00: call 0x58769820
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x5a
        __asm _emit 0x27
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 ED 3C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x3c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 86 81 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E9 B7 FA FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 D1 3C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x3c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 6A 81 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 59 0F 00: call 0x585e96d0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x59
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 63 FE FF FF: jmp 0x584f3bf5
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FC FD FF FF: jmp 0x584f3b93
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x584f3d9e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 7B FD FF FF: jmp 0x584f3b19
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
