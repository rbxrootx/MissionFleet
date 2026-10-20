// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58607250 .. +0x4CF bytes.
extern "C" __declspec(naked) void FUN_58607250_58607250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        push esi
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 10h], 3e8h
        mov dword ptr [ebp - 14h], 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 E1 FF FF: call 0x586053e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5860729f
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 E1 FF FF: call 0x586053e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 1E: jne 0x586072bd
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 2C: jmp 0x586072e9
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 E1 FF FF: call 0x586053e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 1C: jne 0x586072e9
        __asm _emit 0x75
        __asm _emit 0x1c
        mov dword ptr [ebp - 8], 3e8h
        mov dword ptr [ebp - 0ch], 3e8h
        mov dword ptr [ebp - 10h], 3e8h
        mov dword ptr [ebp - 14h], 3e8h
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586072fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D C0 03 00 00: jge 0x586076c5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 F6 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 BF FC FF: call 0x585d3290
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 74 01 00 00: jne 0x58607493
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
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
        ; Exact mapped bytes E8 C6 98 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x98
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 37 BF FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x586073d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 F6 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 55 B4 FC FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 74: jne 0x586073d6
        __asm _emit 0x75
        __asm _emit 0x74
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 F6 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 44 E0 FF FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 53: jne 0x586073d6
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 98 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x98
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 98 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x98
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C5 BE FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3E 87 EA FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0xff
        imul esi, dword ptr [eax], 3e8h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 AC BE FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 87 EA FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 98 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x98
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 80 BE FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x5860748e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD F5 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 9E B3 FC FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 75: jne 0x5860748e
        __asm _emit 0x75
        __asm _emit 0x75
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C F5 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 8D DF FF FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 53: jne 0x5860748e
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 97 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 97 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 0D BE FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 86 EA FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0xff
        imul esi, dword ptr [eax], 3e8h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 F4 BD FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D 86 EA FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E9 8C 01 00 00: jmp 0x5860761f
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 F5 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EB BD FC FF: call 0x585d3290
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 71 01 00 00: jne 0x5860761f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
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
        ; Exact mapped bytes E8 37 97 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 A8 BD FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x58607566
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 F4 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 C6 B2 FC FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 74: jne 0x58607566
        __asm _emit 0x75
        __asm _emit 0x74
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 F4 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 B4 DE FF FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 53: jne 0x58607566
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 96 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 96 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 35 BD FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AE 85 EA FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0xff
        imul esi, dword ptr [eax], 3e8h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 1C BD FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 85 EA FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 96 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 F0 BC FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x5860761f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D F4 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 0E B2 FC FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 75: jne 0x5860761f
        __asm _emit 0x75
        __asm _emit 0x75
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B F4 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 FC DD FF FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 53: jne 0x5860761f
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 96 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 96 F4 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 7C BC FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 84 EA FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0xff
        imul esi, dword ptr [eax], 3e8h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 63 BC FC FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DC 84 EA FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 DD FF FF: call 0x586053e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5860763e
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 DD FF FF: call 0x586053e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 3A: jne 0x58607678
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 08: jge 0x5860764e
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 06: jmp 0x58607654
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 08: jge 0x5860766a
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x58607670
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 48: jmp 0x586076c0
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D DD FF FF: call 0x586053e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 38: jne 0x586076c0
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 08: jle 0x58607698
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 06: jmp 0x5860769e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7E 08: jle 0x586076b4
        __asm _emit 0x7e
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 06: jmp 0x586076ba
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 2D FC FF FF: jmp 0x586072f2
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + ecx + 0fch]
        mov dword ptr [ebp - 7ch], eax
        imul eax, dword ptr [ebp - 8], 13h
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 51 81 E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + edx + 0fch]
        mov dword ptr [ebp - 80h], ecx
        imul eax, dword ptr [ebp - 0ch], 13h
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 27 81 E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
