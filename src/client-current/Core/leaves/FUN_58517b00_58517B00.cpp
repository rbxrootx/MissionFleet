// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58517B00 .. +0x1687 bytes.
extern "C" __declspec(naked) void FUN_58517b00_58517B00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588811e7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 190h
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes 0F 84 2F 16 00 00: je 0x58519177
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF D1 0B 00: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd1
        __asm _emit 0x0b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x58517b8b
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes 75 12: jne 0x58517b89
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 29: jmp 0x58517bb4
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10h]
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
        cmp eax, 1
        ; Exact mapped bytes 75 16: jne 0x58517bb4
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 74 4C: je 0x58517c09
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e0h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0e0h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 75 26: jne 0x58517c04
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 18ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 0D 14 25 00: call 0x58769010
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DE 14 00 00: jmp 0x585190e7
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 0F 84 D1 14 00 00: je 0x585190e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 34h]
        imul eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 44h]
        imul ecx, dword ptr [ebp - 44h]
        add eax, ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes F2 0F 2A 45 B4: cvtsi2sd xmm0, dword ptr [ebp - 0x4c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xb4
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 C7 93 33 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x93
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 2F 96 31 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x96
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0dch], 0
        ; Exact mapped bytes 0F 8F 5E 14 00 00: jg 0x585190d2
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x5e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4ch], 1eh
        ; Exact mapped bytes 0F 8D FE 03 00 00: jge 0x5851807c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 EA 94 24 00: call 0x58761180
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 EC 14 00 00: call 0x58519190
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 8E 97 03 00 00: jle 0x58518046
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 DC F7 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xdc
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 4B 03 00 00: jne 0x5851800e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 24h], 0ah
        imul eax, edx, 78h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 10 F4 FB FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 C3 52 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x52
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 17 03 00 00: je 0x5851800c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 32 F0 FF FF: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 11ch
        ; Exact mapped bytes E8 EB 92 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x92
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x58517dbb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 75 43 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes E8 26 8F 33 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x8f
        __asm _emit 0x33
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov esi, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 65 EC F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        sub eax, esi
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 EC F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 0e0h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C CD F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        push 40h
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 CA DF FA FF: call 0x584c5d80
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xdf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58517dc2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 94h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 10h]
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
        movzx eax, dl
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 E8 E0 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0f8h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0f8h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x58517e24
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 3
        ; Exact mapped bytes 7D 24: jge 0x58517e4e
        __asm _emit 0x7d
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 10h]
        mov esi, dword ptr [ecx]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov edx, dword ptr [esi + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB CD: jmp 0x58517e1b
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 108h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 7D F2 FB FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 30 51 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x51
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x58517f7c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 2D 66 FF FF: call 0x5850e4d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0a0h], eax
        imul ecx, dword ptr [ebp - 24h], 32h
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 6F 5F 24 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0x24
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        push 2
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 52 5F 24 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x5f
        __asm _emit 0x24
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 C7 50 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x50
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 6C FF FF: call 0x5850eb20
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF EA F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 60h], eax
        ; Exact mapped bytes 75 10: jne 0x58517f29
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 65 FF FF: call 0x5850e440
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 7C 50 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x50
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F EA F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 68 50 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 30: jne 0x58517f7c
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 6B FF FF: call 0x5850ea90
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A D7 F7 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 D5 F9 FF FF: call 0x58517950
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 29 50 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x50
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C EA F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 50 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 3D: je 0x58517fdc
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 46 F1 FB FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 EA F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 4F F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4f
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 1A: jne 0x58517fdc
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0b0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 55 94 FF FF: call 0x58511430
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 BD 4F F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 75 E5 FF FF: call 0x58516580
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 38: jmp 0x58518046
        __asm _emit 0xeb
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 10h]
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 24 0B 00: call 0x585ca500
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 FB EC FF FF: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 FF 95 FB FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 1F: jne 0x58518077
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 70 11 00 00: call 0x585191d0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0e0h], 7dh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 58h], 1
        ; Exact mapped bytes E9 47 10 00 00: jmp 0x585190c3
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 0F 84 E8 01 00 00: je 0x58518271
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C E9 F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0c0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0c4h], ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 C5 C3 06 00: call 0x58584490
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc3
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 0F 84 99 01 00 00: je 0x58518271
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 68h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 0F 84 8D 01 00 00: je 0x58518271
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 10h]
        imul esi, dword ptr [eax + 0e4h], 1fh
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D D5 F7 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0xf7
        __asm _emit 0xff
        add esi, eax
        push esi
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 A0 3B F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3b
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 3
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 7F: jne 0x5851819c
        __asm _emit 0x75
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0e8h], 1
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851813c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 50h]
        add eax, 1
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 2
        ; Exact mapped bytes 7D 58: jge 0x5851819a
        __asm _emit 0x7d
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 70h]
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 D5 F7 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd5
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5C E8 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 0dch
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 51 C9 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc9
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 C9 EA F6 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 99: jmp 0x58518133
        __asm _emit 0xeb
        __asm _emit 0x99
        ; Exact mapped bytes EB 45: jmp 0x585181e1
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0e8h], 0
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x585181bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 1
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 2
        ; Exact mapped bytes 7D 20: jge 0x585181e1
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 70h]
        mov dword ptr [ebp - 0d8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 72 73 F8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x585181b2
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x585181f3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 3
        ; Exact mapped bytes 7D 23: jge 0x5851821c
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 0dch], edx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 C7 DC F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xdc
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x585181ea
        __asm _emit 0xeb
        __asm _emit 0xce
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851822e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 2
        ; Exact mapped bytes 7D 23: jge 0x58518257
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c8h]
        mov dword ptr [ebp - 0e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 8C DC F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xdc
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58518225
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0f8h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0f8h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x58518352
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 89 8D 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 77 8D 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        ; Exact mapped bytes E8 2E 54 03 00: call 0x5854d6e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d4h]
        add eax, 0c8h
        mov ecx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ecx*4 + 5894c930h]
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d8h]
        add eax, 0c8h
        mov ecx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ecx*4 + 589490f0h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 18h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d4h], edx
        mov eax, dword ptr [ebp - 18h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d8h], edx
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 18h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 69: jmp 0x585183bb
        __asm _emit 0xeb
        __asm _emit 0x69
        mov dword ptr [ebp - 28h], 384h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d8h]
        add edx, 0c8h
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d4h], edx
        mov eax, dword ptr [ebp - 18h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d8h], edx
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 18h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 7E 20: jle 0x585183e7
        __asm _emit 0x7e
        __asm _emit 0x20
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 7D 0D: jge 0x585183da
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 20h]
        add eax, 0a8ch
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 0B: jmp 0x585183e5
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, 384h
        sub ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 1E: jmp 0x58518405
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 7D 0D: jge 0x585183fa
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edx, 0a8ch
        sub edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 0B: jmp 0x58518405
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 20h]
        add eax, 384h
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 7E 21: jle 0x5851842c
        __asm _emit 0x7e
        __asm _emit 0x21
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 7D 0E: jge 0x5851841f
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0a8ch
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x5851842a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, 708h
        sub edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 1F: jmp 0x5851844b
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 7D 0D: jge 0x5851843f
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, 0a8ch
        sub eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 0C: jmp 0x5851844b
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 708h
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x58518465
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 0E: jne 0x58518465
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [ebp - 1ch], 1
        mov dword ptr [ebp - 18h], 1
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 7E 07: jle 0x58518472
        __asm _emit 0x7e
        __asm _emit 0x07
        imul edx, dword ptr [ebp - 1ch], -1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 7E 07: jle 0x5851847f
        __asm _emit 0x7e
        __asm _emit 0x07
        imul eax, dword ptr [ebp - 18h], -1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 0F 84 3E 06 00 00: je 0x58518ae2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 E5 F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0A C5 F6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D D4 F7 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 0A E5 F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 D5 F7 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd5
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC E4 F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 D2 F7 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xd2
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 D3 F7 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd3
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 B5 E4 F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE D4 F7 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd4
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 74h], esi
        mov edx, dword ptr [ebp - 20h]
        add edx, 64h
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58518569
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D FA 00 00 00: jge 0x5851866d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 70h]
        mov dword ptr [ebp - 0f4h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 D1 F7 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd1
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B E4 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        imul ecx, dword ptr [ebp - 14h], 28h
        mov eax, dword ptr [ebp - 20h]
        cdq
        mov esi, 64h
        idiv esi
        lea edx, [ecx + eax + 0ah]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 16 C5 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 8E E6 F6 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 70h]
        mov dword ptr [ebp - 0f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 51 72 F8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0fch], edx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 D8 D8 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 59: jne 0x58518668
        __asm _emit 0x75
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 108h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA D0 F7 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 E3 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        mov eax, dword ptr [ebp - 20h]
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 81 C4 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F9 E5 F6 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F3 FE FF FF: jmp 0x58518560
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 10ch], edx
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 21 CF 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcf
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585186a2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D D8 02 00 00: jge 0x58518984
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 0bch]
        ; Exact mapped bytes E8 D2 D1 F7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd1
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 85 7F 02 00 00: jne 0x58518948
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC CF F7 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xcf
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ecx + 4], 13h
        add eax, dword ptr [ebp - 14h]
        add edx, eax
        mov eax, dword ptr [ebp - 10h]
        imul ecx, dword ptr [eax + 0e4h], 0bh
        add edx, ecx
        push edx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 B9 35 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x35
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 1eh
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 66: jne 0x5851876a
        __asm _emit 0x75
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 110h], ecx
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 1C 71 F8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 114h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 4
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 E7 6C F8 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 118h], edx
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 77 D7 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd7
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [ecx + eax*4 + 0fch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 0F 85 B3 01 00 00: jne 0x58518946
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
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
        cmp eax, 1
        ; Exact mapped bytes 0F 85 9C 01 00 00: jne 0x58518946
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 10ch]
        test edx, edx
        ; Exact mapped bytes 0F 85 6C 01 00 00: jne 0x5851892b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 0fch]
        ; Exact mapped bytes E8 FF 32 2A 00: call 0x587bbad0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x32
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 20h]
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 CE F7 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D2 C1 F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 3B F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x3b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + 0e4h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 77 34 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 10h
        div ecx
        add edx, 4
        mov dword ptr [ebp - 11ch], edx
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 23 C2 F6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        mov eax, dword ptr [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes FF 95 D4 FE FF FF: call dword ptr [ebp - 0x12c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6ch], ecx
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58518891
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 3ch]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 6
        ; Exact mapped bytes 7D 25: jge 0x585188bc
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 3ch]
        imul eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 39 05 90 20 96 58: cmp dword ptr [0x58962090], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x585188ba
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 2
        mov edx, dword ptr [ebp - 3ch]
        add edx, 2
        imul ecx, edx
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x585188bc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CC: jmp 0x58518888
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 DA 52 05 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 3A F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x3a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ecx + 0e4h], 11h
        add eax, edx
        mov ecx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ecx + 4], 3
        add eax, edx
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 9F 33 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x33
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 46h
        div ecx
        add edx, 5
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 14h]
        mov byte ptr [eax + 10ch], dl
        ; Exact mapped bytes EB 1B: jmp 0x58518946
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 14h]
        mov dl, byte ptr [ecx + 10ch]
        sub dl, 1
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 14h]
        mov byte ptr [eax + 10ch], dl
        ; Exact mapped bytes EB 37: jmp 0x5851897f
        __asm _emit 0xeb
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 0bch]
        ; Exact mapped bytes E8 E6 CE F9 FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xce
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5851897f
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 134h], edx
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 62 D5 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd5
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 15 FD FF FF: jmp 0x58518699
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58518996
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D D3 00 00 00: jge 0x58518a73
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 0c8h]
        ; Exact mapped bytes E8 DE CE F7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 7E: jne 0x58518a37
        __asm _emit 0x75
        __asm _emit 0x7e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC CC F7 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ecx + 8], 1fh
        add eax, dword ptr [ebp - 14h]
        add edx, eax
        mov eax, dword ptr [ebp - 10h]
        imul ecx, dword ptr [eax + 0e4h], 15h
        add edx, ecx
        push edx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 C9 32 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x32
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 32h
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x58518a35
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0c8h]
        mov dword ptr [ebp - 138h], ecx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 2C 6E F8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0c8h]
        mov dword ptr [ebp - 13ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 AC D4 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 37: jmp 0x58518a6e
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0c8h]
        ; Exact mapped bytes E8 F7 CD F9 FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x58518a6e
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c8h]
        mov dword ptr [ebp - 140h], eax
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 73 D4 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x5851898d
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0f8h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0f8h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 3C: jne 0x58518acc
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 10h]
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
        cmp eax, 1
        ; Exact mapped bytes 75 29: jne 0x58518acc
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 144h], edx
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 F5 50 05 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 CB 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xcb
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E1 05 00 00: jmp 0x585190c3
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0e8h], 0
        ; Exact mapped bytes 0F 84 F9 01 00 00: je 0x58518ceb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58518b04
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 5ch]
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 2
        ; Exact mapped bytes 7D 2A: jge 0x58518b34
        __asm _emit 0x7d
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 70h]
        mov dword ptr [ebp - 148h], eax
        mov eax, dword ptr [ebp - 20h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 0F 6D F8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C7: jmp 0x58518afb
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 0d0h]
        ; Exact mapped bytes E8 4E CD F7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xcd
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 85 61 01 00 00: jne 0x58518cae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        imul esi, dword ptr [ecx + 0e4h], 1fh
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E CB F7 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xcb
        __asm _emit 0xf7
        __asm _emit 0xff
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        add esi, dword ptr [edx + 4]
        push esi
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 3B 31 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x31
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 7
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 26 01 00 00: jne 0x58518cac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 14ch], eax
        push 1
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 3E D3 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 150h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 708h
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 32h
        idiv ecx
        imul edx, eax, 19h
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 66 6C F8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB DD F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xdd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 BD F6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 CC F7 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xcc
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 D4 DD F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xdd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD CD F7 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xcd
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 DD F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xdd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EC CA F7 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F CC F7 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xcc
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 7C DD F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xdd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A5 CD F7 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xcd
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 190h], esi
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 108h]
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 190h]
        push edx
        mov eax, dword ptr [ebp - 194h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 15 4F 05 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4f
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 38: jmp 0x58518ce6
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes E8 04 BD F6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xbd
        __asm _emit 0xf6
        __asm _emit 0xff
        cdq
        mov ecx, 19h
        idiv ecx
        cmp edx, 18h
        ; Exact mapped bytes 75 1D: jne 0x58518ce6
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 158h], eax
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 FB D1 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd1
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x58518dae
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x58518cfd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 1
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 2
        ; Exact mapped bytes 0F 8D 81 00 00 00: jge 0x58518d88
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 70h]
        mov dword ptr [ebp - 164h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE C9 F7 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 97 DC F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xdc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        mov edx, dword ptr [ebp - 54h]
        add edx, 9
        imul ecx, edx, 0ah
        mov eax, dword ptr [ebp - 20h]
        cdq
        mov esi, 1c2h
        idiv esi
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 7F BD F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xbd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov edx, dword ptr [ebp - 160h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 F7 DE F6 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xde
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 168h], ecx
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 5E D1 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd1
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6C FF FF FF: jmp 0x58518cf4
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 16ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 03 C8 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc8
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x58518dc0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 38h]
        add edx, 1
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 3
        ; Exact mapped bytes 0F 8D 15 02 00 00: jge 0x58518fdf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [ecx + eax*4 + 0fch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 0F 85 E7 01 00 00: jne 0x58518fda
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
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
        cmp eax, 1
        ; Exact mapped bytes 0F 85 D0 01 00 00: jne 0x58518fda
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB DB F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xdb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 BB F6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xbb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 CA F7 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xca
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 A4 DB F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CD CB F7 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcb
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 19ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 DB F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xdb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC C8 F7 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F CA F7 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xca
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 4C DB F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 75 CB F7 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xcb
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 198h], esi
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        ; Exact mapped bytes E8 12 2C 2A 00: call 0x587bbad0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2c
        __asm _emit 0x2a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0fch]
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0fch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 180h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC C7 F7 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 BA F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 34 F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + 0e4h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 8A 2D F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x2d
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 12h
        div ecx
        add edx, 14h
        mov dword ptr [ebp - 170h], edx
        mov edx, dword ptr [ebp - 170h]
        push edx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 36 BB F6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xbb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        mov eax, dword ptr [ebp - 178h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes FF 95 80 FE FF FF: call dword ptr [ebp - 0x180]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 70h], ecx
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x58518f7e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 40h]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 6
        ; Exact mapped bytes 7D 25: jge 0x58518fa9
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 40h]
        imul eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 39 05 90 20 96 58: cmp dword ptr [0x58962090], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x58518fa7
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 2
        mov edx, dword ptr [ebp - 40h]
        add edx, 2
        imul ecx, edx
        mov dword ptr [ebp - 70h], ecx
        ; Exact mapped bytes EB 02: jmp 0x58518fa9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CC: jmp 0x58518f75
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov dword ptr [ebp - 184h], edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 E7 4B 05 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D8 FD FF FF: jmp 0x58518db7
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0f0h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x58519081
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
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
        ; Exact mapped bytes E8 64 33 F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x33
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [edx + 0e4h], 1dh
        add eax, ecx
        mov edx, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + 4]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 97 2C F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 3
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x58519035
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f4h], 1
        ; Exact mapped bytes EB 0D: jmp 0x58519042
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0f4h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 33 F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x33
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ecx + 0e4h], 33h
        add eax, edx
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 8]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 46 2C F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 14h
        div ecx
        add edx, 5
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 0f0h], dl
        ; Exact mapped bytes EB 1E: jmp 0x5851909f
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0f4h], 0
        ; Exact mapped bytes 74 12: je 0x5851909f
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 C5 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc5
        __asm _emit 0x29
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [edx + 0f0h]
        sub al, 1
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0f0h], al
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0dch], 2
        ; Exact mapped bytes EB 15: jmp 0x585190e7
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0dch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0dch], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58519108
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58519108
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 60: je 0x58519177
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5851912b
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB E6: jmp 0x58519111
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DD C4 F7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5851914f
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58519177
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x58519175
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B9 C4 F7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 188h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 9A: jmp 0x58519111
        __asm _emit 0xeb
        __asm _emit 0x9a
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
