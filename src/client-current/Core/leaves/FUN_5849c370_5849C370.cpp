// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849C370 .. +0x3F5 bytes.
extern "C" __declspec(naked) void FUN_5849c370_5849C370() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
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
        ; Exact mapped bytes 0F 84 D0 03 00 00: je 0x5849c75f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 1B: je 0x5849c3ba
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 06 64 2C 00: call 0x587627b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0x2c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5849c3ba
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x5849c455
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 454h], 0
        ; Exact mapped bytes 75 31: jne 0x5849c3f7
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 89 13 00: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x89
        __asm _emit 0x13
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5849c3f5
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 2F: jmp 0x5849c426
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 83 13 00: call 0x585d4720
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x83
        __asm _emit 0x13
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5849c426
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 29: jne 0x5849c455
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 FA FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 15: je 0x5849c455
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 68 63 2C 00: call 0x587627b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0x2c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E0 FC FE FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB E5: jmp 0x5849c43a
        __asm _emit 0xeb
        __asm _emit 0xe5
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 E9 02 00 00: je 0x5849c748
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4fch]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6B 9A FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x5849c497
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5849c497
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 51: je 0x5849c4f7
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5849c4ba
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x5849c4a0
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4E 92 FF FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x5849c4cb
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x5849c4f7
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 80 93 FF FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB A9: jmp 0x5849c4a0
        __asm _emit 0xeb
        __asm _emit 0xa9
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x5849c50f
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 07: ja 0x5849c50f
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 48: je 0x5849c55d
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 40: je 0x5849c55b
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5849c52f
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x5849c515
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C 93 FF FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB BA: jmp 0x5849c515
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x5849c50f
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 504h]
        ; Exact mapped bytes E8 25 93 FF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 CF 01 00 00: jne 0x5849c746
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 85 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 92 FF FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 85 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E 92 FF FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 34h], 8
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4b8h]
        sub eax, 20h
        ; Exact mapped bytes 79 09: jns 0x5849c5ca
        __asm _emit 0x79
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5849c5d9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4b8h]
        sub edx, 20h
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4b8h]
        sub edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 09: jmp 0x5849c5f9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        sub eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 8C 41 01 00 00: jl 0x5849c746
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ebp - 34h]
        mov ecx, 100h
        sub ecx, eax
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 10h]
        and edx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x5849c62f
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffe0h
        inc edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*8 + 350h]
        add ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp + 10h]
        add ecx, dword ptr [edx]
        mov dword ptr [ebp - 50h], ecx
        mov eax, dword ptr [ebp - 10h]
        and eax, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x5849c653
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffffe0h
        inc eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*8 + 354h]
        add edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp + 10h]
        add edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4ch], edx
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 84 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 102h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D8 00 00 00: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        sub edx, 1
        mov dword ptr [ebp - 4ch], edx
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 84 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 102h
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A0 00 00 00: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        sub ecx, 1
        mov dword ptr [ebp - 4ch], ecx
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 83 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 102h
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 68 00 00 00: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        sub eax, 1
        mov dword ptr [ebp - 4ch], eax
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 83 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 102h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 30 00 00 00: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AA FE FF FF: jmp 0x5849c5f0
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x5849c75f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 82 97 FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
