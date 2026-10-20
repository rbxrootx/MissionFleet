// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867E5A0 .. +0x2BE bytes.
extern "C" __declspec(naked) void FUN_5867e5a0_5867E5A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 85 02 00 00: je 0x5867e84e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x5867e5ea
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5867e5ea
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 51: je 0x5867e64a
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5867e60d
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB E6: jmp 0x5867e5f3
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FB 70 E1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x70
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x5867e61e
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x5867e64a
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2D 72 E1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x72
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB A9: jmp 0x5867e5f3
        __asm _emit 0xeb
        __asm _emit 0xa9
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 12: je 0x5867e662
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 07: ja 0x5867e662
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 48: je 0x5867e6b0
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 40: je 0x5867e6ae
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5867e682
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB E6: jmp 0x5867e668
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C9 71 E1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x71
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB BA: jmp 0x5867e668
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x5867e662
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 2ech], 0
        ; Exact mapped bytes 0F 8E 8E 01 00 00: jle 0x5867e84e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 258h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE D6 FF FF: call 0x5867bd80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x5867e6f9
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 1ch]
        mov eax, 78h
        sub eax, dword ptr [edx + 2ech]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes F3 0F 10 05 FC FF 8A 58: movss xmm0, dword ptr [0x588afffc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 D8: movss dword ptr [ebp - 0x28], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes EB 1E: jmp 0x5867e717
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, 3ch
        sub edx, dword ptr [ecx + 2ech]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes F3 0F 10 05 00 00 8B 58: movss xmm0, dword ptr [0x588b0000]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 D8: movss dword ptr [ebp - 0x28], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E D6 FF FF: call 0x5867bdc0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 58: jne 0x5867e77e
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, 34fh
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 20h]
        sub edx, 57h
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes F3 0F 2A 45 DC: cvtsi2ss xmm0, dword ptr [ebp - 0x24]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F3 0F 59 45 D8: mulss xmm0, dword ptr [ebp - 0x28]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes F3 0F 2C D0: cvttss2si edx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        lea eax, [ecx + edx + 34fh]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 57h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        add eax, 3bdh
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 35h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 56: jmp 0x5867e7d4
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        add eax, 347h
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 57h
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes F3 0F 2A 45 DC: cvtsi2ss xmm0, dword ptr [ebp - 0x24]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F3 0F 59 45 D8: mulss xmm0, dword ptr [ebp - 0x28]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        lea edx, [eax + ecx + 347h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 20h]
        sub eax, 57h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        add edx, 3b5h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 20h]
        sub eax, 35h
        mov dword ptr [ebp - 8], eax
        push 0cbh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 63 E0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x63
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 100h
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 12 C0 13 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc0
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 2f4h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 2f4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 55 BC: call dword ptr [ebp - 0x44]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xbc
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F8 27 1B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x27
        __asm _emit 0x1b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
