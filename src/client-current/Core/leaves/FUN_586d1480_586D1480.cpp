// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D1480 .. +0x5C0 bytes.
extern "C" __declspec(naked) void FUN_586d1480_586D1480() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 94h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 A5 05 00 00: je 0x586d1a4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x586d153d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x586d14d1
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 7F 05 00 00: jmp 0x586d1a50
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 64 34 DB FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x34
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x586d14f0
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 62 05 00 00: jmp 0x586d1a50
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x586d151c
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 2D 34 DB FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x34
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x586d151c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x586d153d
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x586d153b
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x586d153b
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes E9 15 05 00 00: jmp 0x586d1a50
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x586d14e1
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 100h
        ; Exact mapped bytes 74 1F: je 0x586d156e
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 28h], 105h
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x586d167a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 201h
        ; Exact mapped bytes 0F 84 77 01 00 00: je 0x586d16e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DC 04 00 00: jmp 0x586d1a4a
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x586d166b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 9
        ; Exact mapped bytes 74 4B: je 0x586d15e3
        __asm _emit 0x74
        __asm _emit 0x4b
        cmp dword ptr [ebp - 2ch], 0dh
        ; Exact mapped bytes 74 0B: je 0x586d15a9
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 2ch], 1bh
        ; Exact mapped bytes 74 26: je 0x586d15ca
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x586d166b
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 10 00 00: call 0x586d2600
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        ; Exact mapped bytes E9 8B 04 00 00: jmp 0x586d1a50
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x586d166b
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        ; Exact mapped bytes E9 72 04 00 00: jmp 0x586d1a50
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x586d166b
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586d15f5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 70: jge 0x586d166b
        __asm _emit 0x7d
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        ; Exact mapped bytes E8 56 33 DB FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x33
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 57: jne 0x586d1669
        __asm _emit 0x75
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B7 47 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x47
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 75 1F: jne 0x586d164f
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 94 47 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 18: jmp 0x586d1667
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 70h]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 7A 47 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x47
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x586d166b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 81: jmp 0x586d15ec
        __asm _emit 0xeb
        __asm _emit 0x81
        ; Exact mapped bytes E9 DA 03 00 00: jmp 0x586d1a4a
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D5 03 00 00: jmp 0x586d1a4a
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D0 03 00 00: jmp 0x586d1a4a
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 31h
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 77 49: ja 0x586d16db
        __asm _emit 0x77
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 85 58 1A 6D 58: jmp dword ptr [eax*4 + 0x586d1a58]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x1a
        __asm _emit 0x6d
        __asm _emit 0x58
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 0A 00 00: call 0x586d2120
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x586d16db
        __asm _emit 0xeb
        __asm _emit 0x32
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 0A 00 00: call 0x586d2120
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x586d16db
        __asm _emit 0xeb
        __asm _emit 0x25
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 60 0A 00 00: call 0x586d2120
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 18: jmp 0x586d16db
        __asm _emit 0xeb
        __asm _emit 0x18
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 0A 00 00: call 0x586d2120
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0B: jmp 0x586d16db
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 0A 00 00: call 0x586d2120
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6A 03 00 00: jmp 0x586d1a4a
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        ; Exact mapped bytes E8 9C 41 DC FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x41
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 4A 03 00 00: jne 0x586d1a4a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 32 DB FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x32
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 F4 41 DB FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x41
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 68: je 0x586d1798
        __asm _emit 0x74
        __asm _emit 0x68
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d1742
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 7D 1A: jge 0x586d1762
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 81 46 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x46
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586d1739
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 62 46 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x46
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 6ch]
        ; Exact mapped bytes E8 BE 24 E0 FF: call 0x584d3c50
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6A 02 00 00: jmp 0x586d1a02
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 32 DB FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x32
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 5C 41 DB FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x41
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 68: je 0x586d1830
        __asm _emit 0x74
        __asm _emit 0x68
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d17da
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 7D 1A: jge 0x586d17fa
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 58h], ecx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E9 45 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586d17d1
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 5ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 CA 45 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x45
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6ch]
        ; Exact mapped bytes E8 26 24 E0 FF: call 0x584d3c50
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D2 01 00 00: jmp 0x586d1a02
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 31 DB FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x31
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 C5 40 DB FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x40
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 66: je 0x586d18c5
        __asm _emit 0x74
        __asm _emit 0x66
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586d1871
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 5
        ; Exact mapped bytes 7D 1A: jge 0x586d1891
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6ch]
        mov dword ptr [ebp - 68h], edx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 52 45 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x45
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586d1868
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 6ch], edx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 34 45 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 6ch]
        ; Exact mapped bytes E8 91 23 E0 FF: call 0x584d3c50
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x23
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x586d1a02
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 31 DB FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x31
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 2F 40 DB FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x40
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 68: je 0x586d195d
        __asm _emit 0x74
        __asm _emit 0x68
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d1907
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 5
        ; Exact mapped bytes 7D 1A: jge 0x586d1927
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 78h], ecx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 BC 44 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586d18fe
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 7ch], edx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 9D 44 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x44
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 6ch]
        ; Exact mapped bytes E8 F9 22 E0 FF: call 0x584d3c50
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x22
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x586d1a02
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 30 DB FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x30
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 91 3F DB FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x3f
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x586d1a02
        __asm _emit 0x74
        __asm _emit 0x6f
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d19a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 5
        ; Exact mapped bytes 7D 20: jge 0x586d19cb
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 88h], ecx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 18 44 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x44
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x586d199c
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 8ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 F3 43 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x43
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6ch]
        ; Exact mapped bytes E8 4F 22 E0 FF: call 0x584d3c50
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x22
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 2F DB FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 E6 3E DB FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x3e
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x586d1a42
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
    }
}
