// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F02E0 .. +0xB1F bytes.
extern "C" __declspec(naked) void FUN_585f02e0_585F02E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes 0F 84 E5 0A 00 00: je 0x585f0df5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x585f03a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x585f033c
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 BF 0A 00 00: jmp 0x585f0dfb
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 F9 45 E9 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 09: jne 0x585f035b
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 A2 0A 00 00: jmp 0x585f0dfb
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x585f0387
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 C2 45 E9 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x585f0387
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x585f03a8
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 19: je 0x585f03a6
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x585f03a6
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 2ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 55 0A 00 00: jmp 0x585f0dfb
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x585f034c
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 200h
        ; Exact mapped bytes 77 1B: ja 0x585f03d5
        __asm _emit 0x77
        __asm _emit 0x1b
        cmp dword ptr [ebp - 38h], 200h
        ; Exact mapped bytes 0F 84 98 05 00 00: je 0x585f095f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 100h
        ; Exact mapped bytes 74 2B: je 0x585f03fb
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes E9 17 0A 00 00: jmp 0x585f0dec
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        sub eax, 201h
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 9
        ; Exact mapped bytes 0F 87 02 0A 00 00: ja 0x585f0dec
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        movzx edx, byte ptr [ecx + 585f0e20h]
        ; Exact mapped bytes FF 24 95 0C 0E 5F 58: jmp dword ptr [edx*4 + 0x585f0e0c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x5f
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        sub edx, 9
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 6dh
        ; Exact mapped bytes 0F 87 E9 01 00 00: ja 0x585f0600
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        movzx ecx, byte ptr [eax + 585f0e40h]
        ; Exact mapped bytes FF 24 8D 2C 0E 5F 58: jmp dword ptr [ecx*4 + 0x585f0e2c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x5f
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A0 18 00 00: call 0x585f1cd0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 40 06 96 58: mov ecx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 8E EC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 75 15: jne 0x585f0459
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes A1 40 06 96 58: mov eax, dword ptr [0x58960640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 40 06 96 58: mov ecx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 27: jmp 0x585f0480
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 40 06 96 58: mov ecx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 8D EC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 14: jne 0x585f0480
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 40 06 96 58: mov edx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 40 06 96 58: mov ecx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 7B 01 00 00: jmp 0x585f0600
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 8D EC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 5
        ; Exact mapped bytes 75 16: jne 0x585f04ae
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 27: jmp 0x585f04d5
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 8D EC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 14: jne 0x585f04d5
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 44 06 96 58: mov edx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 26 01 00 00: jmp 0x585f0600
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 45 E9 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E4 13 F8 FF: call 0x585718d0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x13
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x585f0511
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 45 E9 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CB 13 F8 FF: call 0x585718d0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x13
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 D2 00 00 00: jne 0x585f05e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        movzx eax, word ptr [edx + 204h]
        cmp eax, 6
        ; Exact mapped bytes 74 4B: je 0x585f056b
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 20h]
        movzx edx, word ptr [ecx + 204h]
        cmp edx, 4
        ; Exact mapped bytes 74 3C: je 0x585f056b
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 20h]
        movzx ecx, word ptr [eax + 204h]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 2D: je 0x585f056b
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 20h]
        movzx eax, word ptr [edx + 204h]
        cmp eax, 5
        ; Exact mapped bytes 74 1E: je 0x585f056b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 20h]
        movzx edx, word ptr [ecx + 204h]
        cmp edx, 0bh
        ; Exact mapped bytes 74 0F: je 0x585f056b
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 20h]
        movzx ecx, word ptr [eax + 1b6h]
        cmp ecx, 0eh
        ; Exact mapped bytes 75 46: jne 0x585f05b1
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 174h]
        ; Exact mapped bytes E8 87 25 F3 FF: call 0x58522b00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x25
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x585f05af
        __asm _emit 0x75
        __asm _emit 0x32
        push 40000h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 9ch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF E0 F8 FF: call 0x5857e660
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 F2 F8 FF: call 0x5857f840
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf2
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 32: jmp 0x585f05e3
        __asm _emit 0xeb
        __asm _emit 0x32
        push 40000h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0a0h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B E0 F8 FF: call 0x5857e660
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe0
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E F2 F8 FF: call 0x5857f840
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf2
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x585f0600
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 174h], 0
        ; Exact mapped bytes 74 0F: je 0x585f0600
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 B1 F2 10 00: call 0x586ff8b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E7 07 00 00: jmp 0x585f0dec
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C3 16 00 00: call 0x585f1cd0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 10ch], -1
        ; Exact mapped bytes 74 16: je 0x585f0630
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10ch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 E1 F8 FF: call 0x5857e810
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe1
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B7 07 00 00: jmp 0x585f0dec
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 93 16 00 00: call 0x585f1cd0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 20h]
        movzx edx, word ptr [ecx + 110h]
        cmp edx, 1
        ; Exact mapped bytes 75 51: jne 0x585f069e
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 90h], -1
        ; Exact mapped bytes 74 45: je 0x585f069e
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 43 E9 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x43
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 65 12 F8 FF: call 0x585718d0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 75 2C: jne 0x585f069e
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 43 E9 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x43
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 244h]
        ; Exact mapped bytes E8 72 9A EB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x9a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 73 09 13 00: call 0x58721010
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x09
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        xor ecx, ecx
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x585f0735
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 78h]
        and eax, 1
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x585f0735
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 3D 24 F3 FF: call 0x58522b00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6E: je 0x585f0735
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 2c4h], 1
        ; Exact mapped bytes 74 62: je 0x585f0735
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 244h], 0
        ; Exact mapped bytes 74 56: je 0x585f0735
        __asm _emit 0x74
        __asm _emit 0x56
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 244h]
        ; Exact mapped bytes E8 BC C8 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x585f0702
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 19: jmp 0x585f071b
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 244h]
        ; Exact mapped bytes E8 A0 C8 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x585f071b
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC DD F8 FF: call 0x5857e510
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xdd
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B2 06 00 00: jmp 0x585f0dec
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8E 15 00 00: call 0x585f1cd0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 78h]
        and ecx, 1
        ; Exact mapped bytes 0F 84 4E 01 00 00: je 0x585f08a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 90h], -1
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x585f08a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 42 E9 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x42
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5C 11 F8 FF: call 0x585718d0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x585f0799
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 42 E9 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x42
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 43 11 F8 FF: call 0x585718d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 07 01 00 00: jne 0x585f08a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E1 57 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x57
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 B7 E9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 21h], 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 37 0A 00 00: call 0x585f1200
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 10 9A EB FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x9a
        __asm _emit 0xeb
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F7 92 EB FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x92
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 68h], ecx
        push 0
        push 588adbc8h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 EF 02 F3 FF: call 0x58520ae0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 74 09: je 0x585f07ff
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 1
        ; Exact mapped bytes EB 07: jmp 0x585f0806
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov dl, byte ptr [ebp - 48h]
        mov byte ptr [ebp - 31h], dl
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 1C 95 EB FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x95
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 31h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x585f0820
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [ebp - 21h], 1
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 9ch], 7
        ; Exact mapped bytes 74 0C: je 0x585f0838
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 9ch], 0ch
        ; Exact mapped bytes 75 38: jne 0x585f0870
        __asm _emit 0x75
        __asm _emit 0x38
        movzx eax, byte ptr [ebp - 21h]
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x585f0870
        __asm _emit 0x75
        __asm _emit 0x30
        push 588adbd0h
        ; Exact mapped bytes E8 A6 17 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x17
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 FA 0E 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7C 05 00 00: jmp 0x585f0dec
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        movzx eax, word ptr [edx + 90h]
        push eax
        push 80010022h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0a0h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 C3 F8 FF: call 0x5857cba0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 47 05 00 00: jmp 0x585f0dec
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 23 14 00 00: call 0x585f1cd0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        shr eax, 10h
        and eax, 0ffffh
        cwde
        cdq
        mov ecx, 14h
        idiv ecx
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 0F BF 55 D8: movsx edx, word ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xd8
        test edx, edx
        ; Exact mapped bytes 7E 3E: jle 0x585f090e
        __asm _emit 0x7e
        __asm _emit 0x3e
        ; Exact mapped bytes 0F BF 45 D8: movsx eax, word ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xd8
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 0b4h], ecx
        ; Exact mapped bytes 7C 1D: jl 0x585f08ff
        __asm _emit 0x7c
        __asm _emit 0x1d
        ; Exact mapped bytes 0F BF 45 D8: movsx eax, word ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xd8
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0b4h]
        sub eax, ecx
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0b4h], eax
        ; Exact mapped bytes EB 0D: jmp 0x585f090c
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0b4h], 0
        ; Exact mapped bytes EB 42: jmp 0x585f0950
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes 0F BF 45 D8: movsx eax, word ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xd8
        imul ecx, eax, 0ah
        add ecx, 32ch
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 0b4h], ecx
        ; Exact mapped bytes 7F 1D: jg 0x585f0943
        __asm _emit 0x7f
        __asm _emit 0x1d
        ; Exact mapped bytes 0F BF 45 D8: movsx eax, word ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xd8
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0b4h]
        sub eax, ecx
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0b4h], eax
        ; Exact mapped bytes EB 0D: jmp 0x585f0950
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0b4h], 32ch
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 64h], 40000000h
        ; Exact mapped bytes E9 8D 04 00 00: jmp 0x585f0dec
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 60 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x60
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ecx + 2b8h]
        ; Exact mapped bytes 75 16: jne 0x585f098b
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 B7 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        cmp eax, dword ptr [edx + 2bch]
        ; Exact mapped bytes 74 09: je 0x585f0994
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3D 13 00 00: call 0x585f1cd0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 60 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x60
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 2b8h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD B6 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 2bch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 B5 E9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 0B: jmp 0x585f09d7
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5C B7 E9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 24 02 00 00: je 0x585f0c05
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 41 4D EA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4d
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 C0 3F E9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x3f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 0
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0B 0A 17 00: call 0x58761420
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x17
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 6D 01 00 00: jne 0x585f0b8d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 244h], edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1C B7 E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 90h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 94h]
        cmp ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x585f0b77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 47 B6 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 B7 4C EA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 74h], esi
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 3A 5F E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x5f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 2A 3F E9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x3f
        __asm _emit 0xe9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 78h], esi
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 75 4B 1C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4b
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 80h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 CF 54 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 78h]
        and edx, 1
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x585f0b77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
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
        ; Exact mapped bytes E8 E4 5E E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x5e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D B6 E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ecx + 90h]
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x585f0b77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 3F E9 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CC 0D F8 FF: call 0x585718d0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 74 1A: je 0x585f0b25
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 3F E9 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B3 0D F8 FF: call 0x585718d0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 1
        ; Exact mapped bytes 75 52: jne 0x585f0b77
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 124h]
        ; Exact mapped bytes E8 BE 3E E9 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 D6 E8 EA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 8ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 1A 54 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ecx + 94h], eax
        ; Exact mapped bytes EB 7A: jmp 0x585f0c05
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes EB 73: jmp 0x585f0c00
        __asm _emit 0xeb
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 90h], 0ffffffffh
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 94h]
        cmp ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 74 52: je 0x585f0c00
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 94h], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 90h], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 B9 53 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 78h]
        and eax, 1
        ; Exact mapped bytes 74 1D: je 0x585f0c00
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 91 53 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C7 FD FF FF: jmp 0x585f09cc
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 80h]
        cmp edx, dword ptr [ecx + 100h]
        ; Exact mapped bytes 0F 85 CF 01 00 00: jne 0x585f0dec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 5D E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x5d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 88 3D E9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x3d
        __asm _emit 0xe9
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 0b8h], esi
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 B4 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 D5 4A EA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4a
        __asm _emit 0xea
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 0b4h], esi
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585f0c75
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 3ch]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 04 00 00: call 0x585f1130
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 0F 8D F1 00 00 00: jge 0x585f0d84
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 108h]
        mov eax, dword ptr [edx + eax*4]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 98h], edx
        lea eax, [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 5A 4C E9 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x585f0d7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 3ch]
        cmp edx, dword ptr [ecx + 10ch]
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x585f0d7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1dh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 3D E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x3d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 B0 B0 1C 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb0
        __asm _emit 0x1c
        __asm _emit 0x00
        push 1dh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 3D E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 5C FF FF FF: call dword ptr [ebp - 0xa4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [edx + 10ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 108h]
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 10ch]
        mov ecx, dword ptr [ecx + edx*4]
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [ebp - 0a8h], edx
        push 100h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 C4 47 1C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x47
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x585f0d84
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 E8 FE FF FF: jmp 0x585f0c6c
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 03 00 00: call 0x585f1130
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 75 4E: jne 0x585f0dec
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 10ch], -1
        ; Exact mapped bytes 74 35: je 0x585f0ddf
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [ebp - 20h]
        mov edx, dword ptr [edx + 10ch]
        mov eax, dword ptr [eax + ecx*4]
        mov ecx, dword ptr [eax + edx*4]
        mov dword ptr [ebp - 0ach], ecx
        push 64h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 62 47 1C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x47
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 10ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BC 00 00 00: call 0x585f0eb0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 34h]
        pop esi
        mov ecx, dword ptr [ebp - 4]
    }
}
