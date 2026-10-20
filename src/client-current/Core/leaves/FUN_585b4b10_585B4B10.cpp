// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B4B10 .. +0x6BB bytes.
extern "C" __declspec(naked) void FUN_585b4b10_585B4B10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0e8h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 0F 84 65 06 00 00: je 0x585b518e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0dbch]
        ; Exact mapped bytes E8 19 7F 1C 00: call 0x5877ca50
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x7f
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 FE EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9A FE EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 268h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 26ch]
        mov dword ptr [ebp - 38h], edx
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b4b88
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 7D 1C: jge 0x585b4baa
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA FD EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 E9 20 00 00: call 0x585b6c90
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D5: jmp 0x585b4b7f
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585b4bbc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 0A: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 0F 8D 7C 02 00 00: jge 0x585b4e53
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 FD EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 52 84 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E7 01 00 00: je 0x585b4ddd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 34h]
        and ecx, 80000000h
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 38h]
        and edx, 80000000h
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 38: je 0x585b4c53
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 09: je 0x585b4c2a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 4
        ; Exact mapped bytes EB 07: jmp 0x585b4c31
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 3
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 FD EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C2 AE EF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xae
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 36: jmp 0x585b4c89
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 09: je 0x585b4c62
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 2
        ; Exact mapped bytes EB 07: jmp 0x585b4c69
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 1
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 1ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 FD EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 8A AE EF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xae
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 78: je 0x585b4d07
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 30 FF FF: call 0x585a7cd0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 FC EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D3 1F 00 00: call 0x585b6c90
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 48h], 1
        ; Exact mapped bytes 75 20: jne 0x585b4ce4
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dbch]
        mov dword ptr [ebp - 68h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 8F A7 1C 00: call 0x5877f470
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa7
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x585b4d02
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dbch]
        mov dword ptr [ebp - 6ch], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 6F A7 1C 00: call 0x5877f470
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa7
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x585b4ddb
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 74h], ecx
        push 3dh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC FD EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 FD 11 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x11
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1c4h]
        mov dword ptr [ebp - 7ch], edx
        push 123h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD FD EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 CE 11 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x11
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 144h]
        mov dword ptr [ebp - 84h], eax
        push 122h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B FD EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 99 11 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x11
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        mov dword ptr [ebp - 88h], ecx
        push 78h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 89 07 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dbch]
        mov dword ptr [ebp - 8ch], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 96 A6 1C 00: call 0x5877f470
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa6
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 61: jmp 0x585b4e3e
        __asm _emit 0xeb
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 90h], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 33 11 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 144h]
        mov dword ptr [ebp - 94h], ecx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 13 11 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x11
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1c4h]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 F3 10 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 34h]
        shl edx, 1
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 38h]
        shl eax, 1
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes E9 60 FD FF FF: jmp 0x585b4bb3
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 7B FB EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov dword ptr [ebp - 0a0h], eax
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 0ch], 1ch
        ; Exact mapped bytes EB 09: jmp 0x585b4e8f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D F3 02 00 00: jge 0x585b518c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 3C FB EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + 270h]
        shr eax, cl
        and eax, 1
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 0F 84 3A 02 00 00: je 0x585b50fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 FA EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfa
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 63 81 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x81
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 15 02 00 00: je 0x585b50fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 0dh], 0
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 11h
        mov byte ptr [ebp - 0dh], dl
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b4f0b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes 0F 83 DF 00 00 00: jae 0x585b4ff9
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E FA EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfa
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov edx, dword ptr [ebp - 14h]
        add edx, 5
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 26 DC EE FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xdc
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 2]
        movzx ecx, byte ptr [ebp - 0dh]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x585b4ff4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E FA EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 14h]
        add edx, 5
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 A6 AB EF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xab
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 2D FF FF: call 0x585a7cd0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 F9 EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 EF 1C 00 00: call 0x585b6c90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 50h], 1
        ; Exact mapped bytes 75 28: jne 0x585b4fd0
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dbch]
        mov dword ptr [ebp - 0b0h], edx
        push 0ffffffh
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 A5 A4 1C 00: call 0x5877f470
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa4
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2B: jmp 0x585b4ff9
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes EB 24: jmp 0x585b4ff4
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dbch]
        mov dword ptr [ebp - 0b4h], edx
        push 0ffh
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 7D A4 1C 00: call 0x5877f470
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa4
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 09 FF FF FF: jmp 0x585b4f02
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 85 F2 00 00 00: jne 0x585b50f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0c4h]
        mov dword ptr [ebp - 0bch], eax
        push 3dh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD FA EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 F5 0E ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1c4h]
        mov dword ptr [ebp - 0c4h], ecx
        push 123h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 FA EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfa
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 BA 0E ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x0e
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 144h]
        mov dword ptr [ebp - 0cch], edx
        push 122h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 FA EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 7F 0E ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0e
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 508h]
        mov dword ptr [ebp - 0d0h], eax
        push 78h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 6F 04 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dbch]
        mov dword ptr [ebp - 0d4h], edx
        push 0ffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 7C A3 1C 00: call 0x5877f470
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x585b517e
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 508h]
        mov dword ptr [ebp - 0d8h], eax
        push 100h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 23 04 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0c4h]
        mov dword ptr [ebp - 0dch], eax
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 F3 0D ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 144h]
        mov dword ptr [ebp - 0e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 D3 0D ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1c4h]
        mov dword ptr [ebp - 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 B3 0D ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 FA FC FF FF: jmp 0x585b4e86
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3B: jmp 0x585b51c9
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b51a0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 20h
        ; Exact mapped bytes 7D 23: jge 0x585b51c9
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 0e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 6A 0D ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x585b5197
        __asm _emit 0xeb
        __asm _emit 0xce
        mov esp, ebp
    }
}
