// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861D060 .. +0x38F bytes.
extern "C" __declspec(naked) void FUN_5861d060_5861D060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F C8 F0 FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5861d09b
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0d28h]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x5861d09b
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 28 0D 00 00: mov ax, word ptr [edx + 0xd28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 28 0D 00 00: mov word ptr [ecx + 0xd28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 02: shr ax, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 38 03 00 00: je 0x5861d3ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 C8 F0 FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F8 01 00 00: je 0x5861d2bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 12c8h], 0
        ; Exact mapped bytes 74 45: je 0x5861d116
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 12d8h]
        test ecx, ecx
        ; Exact mapped bytes 7E 37: jle 0x5861d116
        __asm _emit 0x7e
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 12d8h]
        sub al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 12d8h], al
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 12d8h]
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x5861d116
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        ; Exact mapped bytes 8B 0D 30 05 96 58: mov ecx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B FC F5 FF: call 0x5857cd90
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 DF FF FF: call 0x5861b080
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5861d127
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 91 01 00 00: jmp 0x5861d2b8
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 0F 84 3B 01 00 00: je 0x5861d26f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5861d146
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 30: jge 0x5861d17c
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 54h]
        ; Exact mapped bytes E8 35 87 E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x5861d17a
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 54h]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 67 8D E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C1: jmp 0x5861d13d
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 9ch]
        test edx, edx
        ; Exact mapped bytes 74 5A: je 0x5861d1e4
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 2B 78 E6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x78
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5861d1a8
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 A4 00 00 00: movsx edx, word ptr [ecx + 0xa4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, -1
        ; Exact mapped bytes 74 3C: je 0x5861d1e4
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 A4 00 00 00: movsx eax, word ptr [edx + 0xa4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7C 7F E9 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 A4 00 00 00: movsx ecx, word ptr [eax + 0xa4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5D 7F E9 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 51 86 E9 FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x5861d244
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 87 E7 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5861d20e
        __asm _emit 0x75
        __asm _emit 0x0f
        or eax, 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 A4 00 00 00: mov word ptr [ecx + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x5861d242
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA 87 E7 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 0E: jne 0x5861d229
        __asm _emit 0x75
        __asm _emit 0x0e
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 A4 00 00 00: mov word ptr [eax + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x5861d242
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 87 E7 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 0C: jne 0x5861d242
        __asm _emit 0x75
        __asm _emit 0x0c
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A A4 00 00 00: mov word ptr [edx + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x5861d26d
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 71 77 E6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x77
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x5861d26d
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, 1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A A4 00 00 00: mov word ptr [edx + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 07 00 00: call 0x5861d9d0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 49: jmp 0x5861d2b8
        __asm _emit 0xeb
        __asm _emit 0x49
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861d281
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 31: jge 0x5861d2b8
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 54h]
        ; Exact mapped bytes E8 FA 85 E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 18: jne 0x5861d2b6
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 54h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 2B 8C E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x8c
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C0: jmp 0x5861d278
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x5861d363
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861d2cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D 8A 00 00 00: jge 0x5861d363
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F0 8B E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x8b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D9 8B E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 32: jne 0x5861d35e
        __asm _emit 0x75
        __asm _emit 0x32
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861d33e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 7D 1A: jge 0x5861d35e
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 54h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 85 8B E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x5861d335
        __asm _emit 0xeb
        __asm _emit 0xd7
        ; Exact mapped bytes E9 63 FF FF FF: jmp 0x5861d2c6
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5861d384
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5861d384
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x5861d3ed
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5861d3a7
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x5861d38d
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 82 E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x82
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5861d3cb
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
        ; Exact mapped bytes EB 24: jmp 0x5861d3ed
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5861d3eb
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3D 82 E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x82
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x5861d38d
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
