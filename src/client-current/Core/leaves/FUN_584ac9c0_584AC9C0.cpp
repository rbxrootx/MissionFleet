// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AC9C0 .. +0x506 bytes.
extern "C" __declspec(naked) void FUN_584ac9c0_584AC9C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
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
        ; Exact mapped bytes 0F 84 DD 04 00 00: je 0x584acec2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0ach]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ecx + 8ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ecx + 90h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ecx + 94h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ecx + 98h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ecx + 0a8h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c4h], 40000000h
        ; Exact mapped bytes 75 29: jne 0x584aca8e
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 74 0B: je 0x584aca7c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 FD FF FF: call 0x584ac850
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0D: jmp 0x584aca89
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bch], 0
        ; Exact mapped bytes E9 AB 01 00 00: jmp 0x584acc39
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c4h], 0
        ; Exact mapped bytes 0F 85 9B 01 00 00: jne 0x584acc39
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 68h]
        cmp eax, 1
        ; Exact mapped bytes 75 75: jne 0x584acb1f
        __asm _emit 0x75
        __asm _emit 0x75
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 74 43: je 0x584acaf6
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 92 4B 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x584acaf6
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 33 7F FD FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], ecx
        mov dword ptr [eax + 70h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 6ch
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AD B8 2B 00: call 0x587683a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb8
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 29: jmp 0x584acb1f
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], ecx
        mov dword ptr [eax + 70h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 84h]
        sub eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes E8 DC 47 FE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp eax, 1eh
        ; Exact mapped bytes 7F 21: jg 0x584acb5d
        __asm _emit 0x7f
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 88h]
        sub eax, dword ptr [edx + 70h]
        push eax
        ; Exact mapped bytes E8 BF 47 FE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp eax, 1eh
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x584acbea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes 74 7F: je 0x584acbe8
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 9ch], 64h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A FC FF FF: call 0x584ac7d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 F9 FF FF: call 0x584ac500
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 7D 13: jge 0x584acbc7
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        add eax, 0e10h
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0C: jmp 0x584acbd3
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 FC FF FF: call 0x584ac850
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4F: jmp 0x584acc39
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c4h], 40000000h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [eax + 70h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [eax + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 0B: je 0x584acc2c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 FC FF FF: call 0x584ac850
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0D: jmp 0x584acc39
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c8h], 0
        ; Exact mapped bytes 0F 84 EF 01 00 00: je 0x584ace38
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes E8 F9 8A FE FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, 64h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 0F 8D CF 01 00 00: jge 0x584ace38
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 64h
        ; Exact mapped bytes 0F 8E BF 01 00 00: jle 0x584ace38
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes E8 E9 8A FE FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, 40h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 84h], eax
        ; Exact mapped bytes 0F 8D 9F 01 00 00: jge 0x584ace38
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 40h
        ; Exact mapped bytes 0F 8E 8F 01 00 00: jle 0x584ace38
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 59 FB FF FF: call 0x584ac820
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 4]
        add edi, 0d4h
        mov ecx, 0ch
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584acceb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 0F 8D EC 00 00 00: jge 0x584acde1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*8 + 0d8h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 88h]
        push eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*8 + 0d4h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 84h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 59 77 0D 00: call 0x58584490
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 78: je 0x584acdb8
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 70: je 0x584acdb8
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 4D 87 FF FF: call 0x584a54a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x584acd6b
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 16 02 00 00: call 0x584acf80
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov eax, dword ptr [ecx + 90h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], edx
        mov dword ptr [ecx + 88h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov ecx, dword ptr [edx + 98h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], eax
        mov dword ptr [edx + 80h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [eax + 0ach], edx
        ; Exact mapped bytes EB 29: jmp 0x584acde1
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 DD 86 FF FF: call 0x584a54a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 14: jne 0x584acddc
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A5 01 00 00: call 0x584acf80
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 01 FF FF FF: jmp 0x584acce2
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 104h], 1
        ; Exact mapped bytes 75 4B: jne 0x584ace38
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov eax, dword ptr [ecx + 90h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], edx
        mov dword ptr [ecx + 88h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov ecx, dword ptr [edx + 98h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], eax
        mov dword ptr [edx + 80h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [eax + 0ach], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584ace59
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584ace59
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x584acec2
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x584ace7c
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x584ace62
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8C 87 FE FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584acea0
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x584acec2
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584acec0
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 87 FE FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x584ace62
        __asm _emit 0xeb
        __asm _emit 0xa0
        pop edi
        pop esi
        mov esp, ebp
    }
}
