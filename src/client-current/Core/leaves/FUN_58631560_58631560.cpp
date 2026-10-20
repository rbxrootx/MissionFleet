// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58631560 .. +0x654 bytes.
extern "C" __declspec(naked) void FUN_58631560_58631560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        mov dword ptr [ebp - 4], ecx
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
        cmp edx, 5
        ; Exact mapped bytes 74 1B: je 0x5863159e
        __asm _emit 0x74
        __asm _emit 0x1b
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
        cmp edx, 4
        ; Exact mapped bytes 0F 85 12 06 00 00: jne 0x58631bb0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 57 EF E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xef
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 4C EF E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xef
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 80h]
        ; Exact mapped bytes E8 4E 05 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 40 05 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 22 EF E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xef
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 14 EF E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xef
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 16 05 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes E8 08 05 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 EA EE E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xee
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 12 01 00 00: jne 0x58631736
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x58631736
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9C 47 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x47
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 B1 EE E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xee
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 A6 EE E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xee
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 80h]
        ; Exact mapped bytes E8 A8 04 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 9A 04 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 7C EE E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xee
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 46 47 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x47
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 30 47 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1A 47 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x47
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 64 E1 E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe1
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 EE 46 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x46
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 00 EE E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xee
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 02 04 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes E8 F4 03 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 D6 ED E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xed
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 60h], 1
        ; Exact mapped bytes E9 F2 03 00 00: jmp 0x58631b28
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 0D 38 05 96 58: movsx ecx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 97 02 00 00: jne 0x586319dd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 30 05 96 58: mov edx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes A1 34 05 96 58: mov eax, dword ptr [0x58960534]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 9F E8 FF: call 0x584bb6f0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x9f
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x58631794
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 9D E8 FF: call 0x584bb570
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x9d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 EF AF EB FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xaf
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 10: jmp 0x586317a4
        __asm _emit 0xeb
        __asm _emit 0x10
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD B5 F4 FF: call 0x5857cd60
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb5
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 38h], edx
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 9E E8 FF: call 0x584bb630
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B5 AF EB FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xaf
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 9F E8 FF: call 0x584bb7b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9f
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5863180c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 40h], ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 9B E8 FF: call 0x584bb360
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x9b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 77 AF EB FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xaf
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 10: jmp 0x5863181c
        __asm _emit 0xeb
        __asm _emit 0x10
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 BA F4 FF: call 0x5857d2f0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xba
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 80h]
        ; Exact mapped bytes E8 E6 02 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 D8 02 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x58631979
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 05 96 58: mov ecx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 9E E8 FF: call 0x584bb6f0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x58631896
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 48h], ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 9C E8 FF: call 0x584bb570
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 ED AE EB FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xae
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 10: jmp 0x586318a6
        __asm _emit 0xeb
        __asm _emit 0x10
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB B4 F4 FF: call 0x5857cd60
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb4
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 9E E8 FF: call 0x584bb7b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x586318e6
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 50h], ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 9A E8 FF: call 0x584bb360
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 9D AE EB FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xae
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 10: jmp 0x586318f6
        __asm _emit 0xeb
        __asm _emit 0x10
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB B9 F4 FF: call 0x5857d2f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 0C 02 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 FE 01 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 98h], edx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 B2 44 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 54h], ecx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9C 44 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 86 44 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 5ch], edx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 70 44 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 60h], 2
        ; Exact mapped bytes EB 5F: jmp 0x586319d8
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 51 44 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 64h], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 3B 44 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 25 44 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 6ch], edx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 0F 44 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 60h], 0
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x58631b28
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 0D 38 05 96 58: movsx ecx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 36 01 00 00: jne 0x58631b23
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58960530h
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 9C E8 FF: call 0x584bb6f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9c
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x58631a2f
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 74h], eax
        push 58960530h
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 9B E8 FF: call 0x584bb570
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x9b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 54 AD EB FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xad
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x58631a40
        __asm _emit 0xeb
        __asm _emit 0x11
        push 58960530h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 B3 F4 FF: call 0x5857cd60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb3
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 58960530h
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 9D E8 FF: call 0x584bb7b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9d
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x58631a82
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 7ch], eax
        push 58960530h
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 98 E8 FF: call 0x584bb360
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x98
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 01 AD EB FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xad
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x58631a93
        __asm _emit 0xeb
        __asm _emit 0x11
        push 58960530h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E B8 F4 FF: call 0x5857d2f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 6F 00 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 61 00 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 60h], 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 80h], eax
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 14 43 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x43
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 F8 42 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 88h], ecx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 DC 42 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 8ch], eax
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 C0 42 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x42
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x58631b28
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x58631bb0
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 100h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 04: or dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 2E E5 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x2e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 AD 2E E5 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x2e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 90h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 95 6C FF FF FF: call dword ptr [ebp - 0x94]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
