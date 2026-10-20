// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58567830 .. +0x586 bytes.
extern "C" __declspec(naked) void FUN_58567830_58567830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
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
        ; Exact mapped bytes 0F 84 61 05 00 00: je 0x58567db0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 243ech], 0
        ; Exact mapped bytes 0F 84 C2 03 00 00: je 0x58567c21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 144h], 0
        ; Exact mapped bytes 0F 84 B2 03 00 00: je 0x58567c21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 148h], 0
        ; Exact mapped bytes 0F 84 A2 03 00 00: je 0x58567c21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 C2 FF FF: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E C3 FF FF: call 0x58563bb0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 244fch], 0
        ; Exact mapped bytes 0F 84 7C 03 00 00: je 0x58567c21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 243ech], 2
        ; Exact mapped bytes 75 36: jne 0x585678e7
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0f4h], 0
        ; Exact mapped bytes 74 12: je 0x585678cf
        __asm _emit 0x74
        __asm _emit 0x12
        push 6
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 D2 F1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 10: jmp 0x585678df
        __asm _emit 0xeb
        __asm _emit 0x10
        push 7
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 D2 F1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 10: jmp 0x585678f7
        __asm _emit 0xeb
        __asm _emit 0x10
        push 5
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C D2 F1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 244fch], edx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58567915
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 74h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F 8D F4 02 00 00: jge 0x58567c21
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx*4 + 10h]
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        lea edx, [ebp - 4ch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 FE C1 F7 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4ch]
        add edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 10h]
        add edx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], edx
        imul eax, dword ptr [ebp - 48h], 56h
        neg eax
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 243f4h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 14h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 73: jne 0x58567a0e
        __asm _emit 0x75
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 24504h]
        ; Exact mapped bytes E8 37 D0 F1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd0
        __asm _emit 0xf1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24504h]
        ; Exact mapped bytes E8 53 02 F2 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0xf2
        __asm _emit 0xff
        add eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24504h]
        mov dword ptr [ebp - 24h], edx
        push 101h
        push 100h
        mov eax, dword ptr [ebp + 0ch]
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 25 2E 25 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2e
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 71: jmp 0x58567a7f
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 244fch]
        ; Exact mapped bytes E8 C4 CF F1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xf1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 244fch]
        ; Exact mapped bytes E8 E0 01 F2 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0xf2
        __asm _emit 0xff
        add eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 244fch]
        mov dword ptr [ebp - 28h], ecx
        push 101h
        push 100h
        mov edx, dword ptr [ebp + 0ch]
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B2 2D 25 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2d
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 140h], 0
        ; Exact mapped bytes 0F 84 8D 01 00 00: je 0x58567c1c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 174h], 0
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x58567c1c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 54h]
        imul eax, dword ptr [edx*4 + 5894c930h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 54h]
        imul eax, dword ptr [edx*4 + 589490f0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        lea eax, [ebp - 4ch]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        ; Exact mapped bytes E8 67 C0 F7 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc0
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4ch]
        add eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 4ch], eax
        imul eax, dword ptr [ebp - 48h], 56h
        neg eax
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 243f4h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 14h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 76: jne 0x58567ba8
        __asm _emit 0x75
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 24504h]
        ; Exact mapped bytes E8 A0 CE F1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xce
        __asm _emit 0xf1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24504h]
        ; Exact mapped bytes E8 BC 00 F2 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0xf2
        __asm _emit 0xff
        add eax, dword ptr [ebp - 48h]
        sub eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24504h]
        mov dword ptr [ebp - 2ch], edx
        push 101h
        push 100h
        mov eax, dword ptr [ebp + 0ch]
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8B 2C 25 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 74: jmp 0x58567c1c
        __asm _emit 0xeb
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 24500h]
        ; Exact mapped bytes E8 2A CE F1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xce
        __asm _emit 0xf1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 24500h]
        ; Exact mapped bytes E8 46 00 F2 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0xf2
        __asm _emit 0xff
        add eax, dword ptr [ebp - 48h]
        sub eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24500h]
        mov dword ptr [ebp - 30h], ecx
        push 101h
        push 100h
        mov edx, dword ptr [ebp + 0ch]
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 15 2C 25 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EB FC FF FF: jmp 0x5856790c
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x58567c42
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58567c42
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 51: je 0x58567ca2
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x58567c65
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58567c4b
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A3 DA F2 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xda
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x58567c76
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x58567ca2
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 DB F2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB A9: jmp 0x58567c4b
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x58567d4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx]
        mov dword ptr [ebp - 64h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 63 4A F3 FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x4a
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3d8h], 0
        ; Exact mapped bytes 74 30: je 0x58567d4a
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d8h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3d8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x58567d62
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 07: ja 0x58567d62
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 48: je 0x58567db0
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 40: je 0x58567dae
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58567d82
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58567d68
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 BC: call dword ptr [ebp - 0x44]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xbc
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C9 DA F2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xda
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB BA: jmp 0x58567d68
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x58567d62
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
