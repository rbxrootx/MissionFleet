// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58606A80 .. +0x40C bytes.
extern "C" __declspec(naked) void FUN_58606a80_58606A80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 88h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 EF E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 51 BC FC FF: call 0x585d26f0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 EF E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 74 ED FF FF: call 0x58605830
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 98h]
        sub ecx, 1
        mov dword ptr [ebp - 58h], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 8B 15 FC 57 90 58: mov edx, dword ptr [0x589057fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x57
        __asm _emit 0x90
        __asm _emit 0x58
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 12: jne 0x58606aed
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 114h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x58606c69
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 15 FC 57 90 58: mov dword ptr [0x589057fc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x57
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 14h], ecx
        imul edx, dword ptr [ebp - 8], 16h
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 118h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 98 EB 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xeb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        imul edx, dword ptr [ebp - 8], 16h
        lea eax, [ecx + edx + 0dfh]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6F EB 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xeb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 EE E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C9 EC FF FF: call 0x58605830
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        add ecx, 212h
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D DF E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdf
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9E F3 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        imul edx, dword ptr [ebp - 8], 16h
        lea eax, [ecx + edx + 143h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F5 EA 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xea
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        imul edx, dword ptr [ebp - 8], 16h
        lea eax, [ecx + edx + 16ah]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 CC EA 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        imul edx, dword ptr [ebp - 8], 16h
        lea eax, [ecx + edx + 0e6h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A3 EA 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xea
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        imul edx, dword ptr [ebp - 8], 16h
        lea eax, [ecx + edx + 119h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7A EA 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xea
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 138h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        imul edx, dword ptr [ebp - 8], 16h
        lea eax, [ecx + edx + 13ah]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 51 EA 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xea
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 114h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 ED E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F9 E7 FF FF: call 0x58605480
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 22 EB E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xeb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 F3 44 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x44
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12ch]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C ED E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 E8 FF FF: call 0x586054c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EE EA E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xea
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BF 44 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 FC E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 51 57 E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x57
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA DC E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xdc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 48 10: and cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x10
        movzx esi, cx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 EC E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xec
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AC EB FF FF: call 0x586058c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 50h], esi
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 6B 44 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x44
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 64h], ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 EC E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xec
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 B5 E7 FF FF: call 0x58605500
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E EA E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xea
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 2F 44 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x44
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 138h]
        mov dword ptr [ebp - 70h], edx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 EC E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A9 E6 FF FF: call 0x58605430
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 FA 43 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x43
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58606da9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 0F 8D D4 00 00 00: jge 0x58606e87
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 13ch]
        ; Exact mapped bytes E8 CB EA E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x58606e82
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 EC E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 05 EA FF FF: call 0x586057f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 4C: jne 0x58606e3c
        __asm _emit 0x75
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 15ch]
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 EB E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xeb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 96 E8 FF FF: call 0x586056b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 1dh
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 1dh
        sub edx, eax
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 05 8A E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8a
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 EB E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xeb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 94 E9 FF FF: call 0x586057f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 21: jne 0x58606e82
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 15ch]
        mov dword ptr [ebp - 88h], ecx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 BF 89 E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x89
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 19 FF FF FF: jmp 0x58606da0
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
