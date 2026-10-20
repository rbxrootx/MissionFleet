// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867A870 .. +0x4F3 bytes.
extern "C" __declspec(naked) void FUN_5867a870_5867A870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 D6 04 00 00: jne 0x5867ad5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 47 00 00: call 0x5867f030
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x5867a939
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 75 3E: jne 0x5867a8ec
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0a4h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 1ch], ecx
        push 5
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 63 4F E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x4f
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 1
        ; Exact mapped bytes EB 48: jmp 0x5867a934
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ach], 1
        ; Exact mapped bytes 75 3C: jne 0x5867a934
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0a4h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 19 4F E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x4f
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], 0
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x5867a9dc
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes E8 29 58 E3 FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x58
        __asm _emit 0xe3
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x5867a9dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5867a9dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
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
        ; Exact mapped bytes E8 3B 9F F5 FF: call 0x585d48a0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9f
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 1D: jne 0x5867a987
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B A1 F5 FF: call 0x585d4a90
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5867a985
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 6D F5 FF: call 0x585d1730
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6d
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 55: jmp 0x5867a9dc
        __asm _emit 0xeb
        __asm _emit 0x55
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 15 2C 5D 96 58: mov edx, dword ptr [0x58965d2c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        add edx, 7d0h
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 32: jae 0x5867a9d3
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 14 00 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 588aff1ch
        ; Exact mapped bytes E8 37 76 EA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        push 9fh
        push 0
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 2E 3F E8 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3f
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 0D 2C 5D 96 58: mov dword ptr [0x58965d2c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 2f8h]
        ; Exact mapped bytes 0F 85 12 01 00 00: jne 0x5867ab00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
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
        ; Exact mapped bytes E8 37 AF E1 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xaf
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 74 06: je 0x5867aa08
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 9
        ; Exact mapped bytes 75 7F: jne 0x5867aa87
        __asm _emit 0x75
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD BF E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 26 1A E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BF 9F E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x9f
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 7
        ; Exact mapped bytes 74 12: je 0x5867aa47
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 74 0C: je 0x5867aa47
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 74 06: je 0x5867aa47
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 9
        ; Exact mapped bytes 75 34: jne 0x5867aa7b
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 13 00 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        push 588aff40h
        ; Exact mapped bytes E8 91 75 EA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        push 9fh
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 88 3E E8 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x3e
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0A: jmp 0x5867aa85
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 2fch], 1
        ; Exact mapped bytes EB 79: jmp 0x5867ab00
        __asm _emit 0xeb
        __asm _emit 0x79
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E BF E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 19 E1 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x19
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 75 0C: jne 0x5867aaac
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 2fch], 1
        ; Exact mapped bytes EB 54: jmp 0x5867ab00
        __asm _emit 0xeb
        __asm _emit 0x54
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 0D 30 5D 96 58: mov ecx, dword ptr [0x58965d30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        add ecx, 7d0h
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 73 32: jae 0x5867aaf8
        __asm _emit 0x73
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 13 00 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        push 588aff6ch
        ; Exact mapped bytes E8 12 75 EA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        push 9fh
        push 0
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 09 3E E8 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3e
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes A3 30 5D 96 58: mov dword ptr [0x58965d30], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5867ab12
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 8D 3E 02 00 00: jge 0x5867ad5a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 0c8h]
        ; Exact mapped bytes 0F 85 23 02 00 00: jne 0x5867ad55
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0f8h], 1
        ; Exact mapped bytes 0F 85 FF 00 00 00: jne 0x5867ac45
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0d8h]
        mov ecx, 4
        shl ecx, 0
        cmp dword ptr [eax + ecx], 0
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x5867ac40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0f8h], 2
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        add ecx, 68h
        push ecx
        imul edx, dword ptr [ebp - 8], 4ch
        add edx, 3dh
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C8 0C EF FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0c
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        add ecx, 9ah
        push ecx
        imul edx, dword ptr [ebp - 8], 4ch
        add edx, 3dh
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 93 0C EF FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 7ch]
        mov esi, dword ptr [ecx]
        mov ecx, dword ptr [eax + edx]
        mov edx, dword ptr [esi + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 7ch]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x5867ad53
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 0f8h], 2
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x5867ad53
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0d8h]
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [edx + ecx], 0
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x5867ad53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0f8h], 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        add edx, 68h
        push edx
        imul eax, dword ptr [ebp - 8], 4ch
        add eax, 3dh
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B5 0B EF FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0b
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        add ecx, 9ah
        push ecx
        imul edx, dword ptr [ebp - 8], 4ch
        add edx, 3dh
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 80 0B EF FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0b
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 7ch]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 7ch]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [ecx + eax]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 05: jmp 0x5867ad5a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 AF FD FF FF: jmp 0x5867ab09
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
