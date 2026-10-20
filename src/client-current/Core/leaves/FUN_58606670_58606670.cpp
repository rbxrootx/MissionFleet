// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58606670 .. +0x40C bytes.
extern "C" __declspec(naked) void FUN_58606670_58606670() {
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
        ; Exact mapped bytes E8 48 F3 E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 59 E8 FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x59
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 F3 E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 64 F1 FF FF: call 0x58605810
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 98h]
        sub ecx, 1
        mov dword ptr [ebp - 58h], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 8B 15 F8 57 90 58: mov edx, dword ptr [0x589057f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x57
        __asm _emit 0x90
        __asm _emit 0x58
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 12: jne 0x586066dd
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 114h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x58606859
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 15 F8 57 90 58: mov dword ptr [0x589057f8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf8
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
        ; Exact mapped bytes E8 A8 EF 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xef
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
        ; Exact mapped bytes E8 7F EF 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xef
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
        ; Exact mapped bytes E8 88 F2 E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B9 F0 FF FF: call 0x58605810
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf0
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
        ; Exact mapped bytes E8 AD E3 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AE F7 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 05 EF 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xef
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
        ; Exact mapped bytes E8 DC EE 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xee
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
        ; Exact mapped bytes E8 B3 EE 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xee
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
        ; Exact mapped bytes E8 8A EE 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xee
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
        ; Exact mapped bytes E8 61 EE 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xee
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
        ; Exact mapped bytes E8 60 F1 E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E9 EB FF FF: call 0x58605460
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 EF E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 03 49 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x49
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
        ; Exact mapped bytes E8 2C F1 E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 EB FF FF: call 0x586054a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE EE E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xee
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 CF 48 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x48
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
        ; Exact mapped bytes E8 E8 00 E8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 61 5B E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x5b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FA E0 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe0
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
        ; Exact mapped bytes E8 D3 F0 E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C EF FF FF: call 0x58605870
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 50h], esi
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 7B 48 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x48
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
        ; Exact mapped bytes E8 A4 F0 E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 A5 EB FF FF: call 0x586054e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E EE E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xee
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 3F 48 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x48
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
        ; Exact mapped bytes E8 68 F0 E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 89 EA FF FF: call 0x58605400
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 0A 48 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58606999
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 0F 8D D4 00 00 00: jge 0x58606a77
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 13ch]
        ; Exact mapped bytes E8 DB EE E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xee
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x58606a72
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
        ; Exact mapped bytes E8 04 F0 E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 F5 ED FF FF: call 0x586057d0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 4C: jne 0x58606a2c
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
        ; Exact mapped bytes E8 D5 EF E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 C6 EB FF FF: call 0x586055d0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xeb
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
        ; Exact mapped bytes E8 15 8E E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x8e
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
        ; Exact mapped bytes E8 99 EF E8 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 84 ED FF FF: call 0x586057d0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 21: jne 0x58606a72
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 15ch]
        mov dword ptr [ebp - 88h], ecx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 CF 8D E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x8d
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 19 FF FF FF: jmp 0x58606990
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
