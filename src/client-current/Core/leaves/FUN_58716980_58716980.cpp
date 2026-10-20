// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58716980 .. +0x44F bytes.
extern "C" __declspec(naked) void FUN_58716980_58716980() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587169a2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 0F 8D AD 03 00 00: jge 0x58716d59
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0e8h], 0
        ; Exact mapped bytes 0F 84 1B 03 00 00: je 0x58716cdb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 E6 FF D6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 99 EE D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 23: jne 0x58716a22
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BF F4 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf4
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        ; Exact mapped bytes E8 5C EE D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xee
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 1B: jne 0x58716a56
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8B F4 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf4
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 104h], 1
        ; Exact mapped bytes 75 49: jne 0x58716aaf
        __asm _emit 0x75
        __asm _emit 0x49
        push 11h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D E0 D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 35 53 0A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        push 11h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 DF D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 104h], 0ah
        ; Exact mapped bytes 77 54: ja 0x58716b13
        __asm _emit 0x77
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 C7 55 D7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x55
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 104h]
        lea edx, [eax + ecx - 7]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 13 EB 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 99 01 00 00: jmp 0x58716cac
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 104h], 10h
        ; Exact mapped bytes 77 53: ja 0x58716b76
        __asm _emit 0x77
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 63 55 D7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x55
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        sub eax, dword ptr [edx + ecx*4 + 104h]
        add eax, 0eh
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B0 EA 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 36 01 00 00: jmp 0x58716cac
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 104h], 14h
        ; Exact mapped bytes 77 54: ja 0x58716bda
        __asm _emit 0x77
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 00 55 D7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x55
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 104h]
        lea edx, [eax + ecx - 13h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 4C EA 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x58716cac
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 104h], 18h
        ; Exact mapped bytes 77 50: ja 0x58716c3a
        __asm _emit 0x77
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 9C 54 D7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x54
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        sub eax, dword ptr [edx + ecx*4 + 104h]
        add eax, 17h
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E9 E9 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 72: jmp 0x58716cac
        __asm _emit 0xeb
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 104h], 19h
        ; Exact mapped bytes 75 40: jne 0x58716c8a
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 3C 54 D7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x54
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 99 E9 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 22: jmp 0x58716cac
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 0e8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 104h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 104h], 19h
        ; Exact mapped bytes 77 1D: ja 0x58716cd9
        __asm _emit 0x77
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 104h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 104h], ecx
        ; Exact mapped bytes EB 79: jmp 0x58716d54
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 9B EB D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xeb
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x58716d1f
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 54h], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C2 F1 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf1
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 0b4h]
        ; Exact mapped bytes E8 5F EB D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xeb
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x58716d54
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 8D F1 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 40 FC FF FF: jmp 0x58716999
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58716d6b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 7D 22: jge 0x58716d93
        __asm _emit 0x7d
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 25 EA D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xd7
        __asm _emit 0xff
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB CF: jmp 0x58716d62
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 74h]
        ; Exact mapped bytes E8 09 EA D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 74 1F: je 0x58716dcb
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C6 43 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
