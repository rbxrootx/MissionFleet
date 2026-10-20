// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CD050 .. +0x35D bytes.
extern "C" __declspec(naked) void FUN_584cd050_584CD050() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f157h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 50h
        push ebx
        push esi
        push edi
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
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 08 03 00 00: je 0x584cd39d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 0F 8E C8 02 00 00: jle 0x584cd36a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x584cd179
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x584cd179
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 99 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 78 FB FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 87 FC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 98 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 89 FC FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 98 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0D 86 FC FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 87 FC FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 98 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C6 88 FC FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 58h], esi
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 48 0A 0A 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 50h]
        add edx, 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 60h]
        sub edx, 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E1 26 FD FF: call 0x5849f880
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x584cd2de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 44 3E 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x3e
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x584cd261
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        mov eax, dword ptr [ebp - 14h]
        mov esi, dword ptr [eax + 8]
        add esi, 1
        ; Exact mapped bytes E8 76 3A 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x3a
        __asm _emit 0x38
        __asm _emit 0x00
        cdq
        mov ecx, 3
        idiv ecx
        sub esi, edx
        mov dword ptr [ebp - 34h], esi
        ; Exact mapped bytes E8 64 3A 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3a
        __asm _emit 0x38
        __asm _emit 0x00
        cdq
        mov ecx, 3
        idiv ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        sub ecx, edx
        mov dword ptr [ebp - 38h], ecx
        push 1b9h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 78 FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 97 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        movzx edx, word ptr [ebp - 0eh]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F4 8B 06 00: call 0x58535e50
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584cd268
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 14h]
        mov esi, dword ptr [eax + 58h]
        ; Exact mapped bytes E8 E6 39 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x39
        __asm _emit 0x38
        __asm _emit 0x00
        cdq
        mov ecx, 0c8h
        idiv ecx
        lea eax, [esi + edx - 64h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7D 0E: jge 0x584cd2b1
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 1ch]
        add edx, 0e10h
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 06: jmp 0x584cd2b7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E8 AA 39 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x39
        __asm _emit 0x38
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [ebp - 14h]
        add edx, dword ptr [eax + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 23 94 06 00: call 0x58536700
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584cd2ff
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584cd2ff
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 5A: je 0x584cd368
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x584cd322
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB E6: jmp 0x584cd308
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E6 82 FC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584cd346
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x584cd368
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584cd366
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C2 82 FC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB A0: jmp 0x584cd308
        __asm _emit 0xeb
        __asm _emit 0xa0
        ; Exact mapped bytes EB 33: jmp 0x584cd39d
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2E 96 FB FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x96
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x584cd396
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x584cd39d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
    }
}
