// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58567F50 .. +0x342 bytes.
extern "C" __declspec(naked) void FUN_58567f50_58567F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 75 07: jne 0x58567f6d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 20 03 00 00: jmp 0x5856828d
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 164h]
        ; Exact mapped bytes E8 7E CA F1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xca
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], edx
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 164h]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3900h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 25 C3 1F 00: call 0x587642e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc3
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 38h]
        sub eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 34h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 40h]
        sub eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 3ch], ecx
        imul eax, dword ptr [ebp - 3ch], 75h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 40h]
        imul edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 3ch]
        imul eax, dword ptr [ebp - 3ch]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 0B 90 2E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x90
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 03 93 2C 00: call 0x58831320
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x93
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        imul eax, dword ptr [ebp - 3ch], 75h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 34h], eax
        mov edx, 360h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 2fch]
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 0a4h], 18h
        add edx, ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov eax, dword ptr [ebp - 38h]
        sub eax, dword ptr [edx + ecx*8]
        mov dword ptr [ebp - 38h], eax
        mov ecx, 360h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 2fch]
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0a4h], 18h
        add ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov edx, dword ptr [ebp - 34h]
        add edx, dword ptr [ecx + eax*8 + 4]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 38h]
        imul eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, dword ptr [ebp - 34h]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 6F 8F 2E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8f
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 67 92 2C 00: call 0x58831320
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x92
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 D0 02 00 00: mov ax, word ptr [edx + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx ecx, ax
        imul ecx, dword ptr [ebp - 10h]
        imul edx, ecx, 64h
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 164h]
        ; Exact mapped bytes E8 B7 7A F3 FF: call 0x5849fba0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 D8 F2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd8
        __asm _emit 0xf2
        __asm _emit 0xff
        imul eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 D0 02 00 00: mov ax, word ptr [edx + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx ecx, ax
        imul edx, ecx, 64h
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 164h]
        ; Exact mapped bytes E8 77 7A F3 FF: call 0x5849fba0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 D8 F2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd8
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [eax + 4]
        push edx
        ; Exact mapped bytes E8 B5 BD F7 FF: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xbd
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 10h
        imul eax, eax, 0ah
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 B9 FF FF: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 FA BE F7 FF: call 0x584e4060
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbe
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 9B 91 F2 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x91
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        cmp eax, 2
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x5856820e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        add ecx, 2
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7E 19: jle 0x585681ab
        __asm _emit 0x7e
        __asm _emit 0x19
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 34 43 FB FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 110h], 1
        ; Exact mapped bytes EB 36: jmp 0x585681e1
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 19: jge 0x585681ca
        __asm _emit 0x7d
        __asm _emit 0x19
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 43 FB FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x43
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 110h], 0
        ; Exact mapped bytes EB 17: jmp 0x585681e1
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC 42 FB FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 110h], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 0D: jle 0x585681f4
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 80 F3 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x58568205
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0B: jge 0x58568205
        __asm _emit 0x7d
        __asm _emit 0x0b
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC 80 F3 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58568217
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA 90 F2 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x90
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 D0 02 00 00: mov ax, word ptr [edx + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx ecx, ax
        imul ecx, dword ptr [ebp - 10h]
        imul esi, ecx, 64h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 164h]
        ; Exact mapped bytes E8 5F 79 F3 FF: call 0x5849fba0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x79
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 88 D7 F2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0xf2
        __asm _emit 0xff
        imul eax, dword ptr [ebp - 14h]
        cmp esi, eax
        ; Exact mapped bytes 76 1E: jbe 0x5856826e
        __asm _emit 0x76
        __asm _emit 0x1e
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3900h]
        sub ecx, 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3900h], ecx
        ; Exact mapped bytes EB 1C: jmp 0x5856828a
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3900h]
        add ecx, 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3900h], ecx
        mov eax, dword ptr [ebp - 0ch]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
