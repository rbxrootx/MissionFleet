// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CB380 .. +0x6EF bytes.
extern "C" __declspec(naked) void FUN_585cb380_585CB380() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885c14h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 58h
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 21a88h], 0
        ; Exact mapped bytes 7E 34: jle 0x585cb3e9
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 21e20h], 0
        ; Exact mapped bytes 74 28: je 0x585cb3e9
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 21e20h]
        ; Exact mapped bytes E8 81 76 00 00: call 0x585d2a50
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x585cb3e9
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 21e20h]
        ; Exact mapped bytes E8 6F 76 00 00: call 0x585d2a50
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 18 DB F8 FF: call 0x58558f00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xdb
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 1068ch], 1
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x585cb499
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10694h]
        xor edx, edx
        mov ecx, 10h
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x585cb499
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10724h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 10724h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10728h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 10728h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 10724h]
        imul ecx, dword ptr [eax + 10728h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10720h]
        push eax
        ; Exact mapped bytes E8 AA 19 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x19
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10724h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 10724h], edx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10728h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 10728h], edx
        ; Exact mapped bytes 83 3D 74 75 94 58 00: cmp dword ptr [0x58947574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x585cb4a7
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B8 05 00 00: jmp 0x585cba5f
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 0A EC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x585cb4c2
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 71 0C EC FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 69: je 0x585cb531
        __asm _emit 0x74
        __asm _emit 0x69
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 61: je 0x585cb52f
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6A 6B 19 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6b
        __asm _emit 0x19
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 52: jne 0x585cb52f
        __asm _emit 0x75
        __asm _emit 0x52
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0E: je 0x585cb4f1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 38: je 0x585cb52f
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A1 A5 EC FF: call 0x58495aa0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa5
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x585cb52f
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 15 72 19 00: call 0x58762720
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x72
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x585cb52f
        __asm _emit 0x74
        __asm _emit 0x20
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B1 E1 01 00: call 0x585e96d0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        push 8
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 23 EE FF: call 0x584ad860
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x23
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 86: jmp 0x585cb4b7
        __asm _emit 0xeb
        __asm _emit 0x86
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 106fch], 0
        ; Exact mapped bytes 74 1A: je 0x585cb557
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 106fch]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 106fch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, byte ptr [eax + 20f3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x585cb56e
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 73 E1 00 00: call 0x585d96e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 21a88h], 0
        ; Exact mapped bytes 7F 0C: jg 0x585cb586
        __asm _emit 0x7f
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 21a9ch], 0
        ; Exact mapped bytes 74 09: je 0x585cb58f
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 32 E7 00 00: call 0x585d9cc0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E8 AC EB ED FF: call 0x584aa140
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xeb
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 EC ED FF: call 0x584aa250
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [edx + 58947974h]
        and eax, 1
        ; Exact mapped bytes 74 0B: je 0x585cb5ba
        __asm _emit 0x74
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 47 D7 00 00: call 0x585d8d00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8E D9 00 00: call 0x585d8f50
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 278h]
        cmp edx, 1
        ; Exact mapped bytes 75 11: jne 0x585cb5e3
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 46 36 01 00: call 0x585dec20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3E CC 00 00: call 0x585d8220
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 34 06 96 58 00: cmp dword ptr [0x58960634], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x585cb5f1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 6E 04 00 00: jmp 0x585cba5f
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 06 96 58 00: cmp dword ptr [0x58960634], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x585cb616
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 74 00 00: call 0x585d2a70
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x585cb616
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AB 3C 01 00: call 0x585df2c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 74 75 94 58 00: cmp dword ptr [0x58947574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 7B: je 0x585cb69a
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 B3 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb3
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6C: je 0x585cb69a
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 B3 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb3
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 00 0E EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 93 EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x93
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x585cb69a
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A B3 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb3
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E3 0D EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C 93 EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x93
        __asm _emit 0xeb
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
        cmp edx, 9
        ; Exact mapped bytes 75 26: jne 0x585cb69a
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 83 3D 34 06 96 58 00: cmp dword ptr [0x58960634], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x585cb69a
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 A3 EC FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 09: je 0x585cb69a
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E7 37 0C 00: call 0x5868ee80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x37
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 106e4h]
        add ecx, 1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 106e4h], ecx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 08 EC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x585cb6d1
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 62 0A EC FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0a
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 5D 03 00 00: je 0x585cba38
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5D 69 19 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x69
        __asm _emit 0x19
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 45 03 00 00: jne 0x585cba33
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 33 01 00: call 0x585dea10
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 44 F4 FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A0 09 EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A5 B2 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8A 70 19 00: call 0x587627b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x70
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 AF A4 11 00: call 0x586e5bf0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa4
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 30 0D EC FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 3
        ; Exact mapped bytes 7C 1F: jl 0x585cb777
        __asm _emit 0x7c
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D B2 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A4 2A 19 00: call 0x5875e210
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2a
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x585cb777
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 31 09 EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 36 B2 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 95 00 00: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x585cb87e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x585cb87e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B4 9B 01 00: call 0x585e5370
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + edx*4 + 37ch], 0
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x585cb879
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + ecx*4 + 37ch], 1
        push 68h
        ; Exact mapped bytes E8 1B 58 26 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x58
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 56: je 0x585cb852
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C6 BA F0 FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x585cb823
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 21e0ch], 0
        ; Exact mapped bytes 75 09: jne 0x585cb823
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes EB 07: jmp 0x585cb82a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        push 2ee0h
        push 300h
        push 400h
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 53 3C 1B 00: call 0x5877f4a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x585cb859
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 58h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 68 A8 EB FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AC 01 00 00: jmp 0x585cba2a
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + edx*4 + 37ch], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E9 0B EC FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 7C 10: jl 0x585cb8af
        __asm _emit 0x7c
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C7 9A 01 00: call 0x585e5370
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7B 01 00 00: jmp 0x585cba2a
        __asm _emit 0xe9
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 06 B1 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb1
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F 67 19 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x67
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x585cb8d0
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A1 9A 01 00: call 0x585e5370
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 06 EC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x585cb8eb
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 48 08 EC FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x585cba0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B3 16 EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x16
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 B0 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb0
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F 16 EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0xec
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 EF 00 00 00: jne 0x585cba08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2F 5D F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x585cba08
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0F 0B EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0b
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A8 90 EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 90 80 03 00 00: mov dx, word ptr [eax + 0x380]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 35 0B EC FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0b
        __asm _emit 0xec
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 7C 0C: jl 0x585cb95f
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 15 D5 ED FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd5
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 B8 F0 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 14: je 0x585cb98a
        __asm _emit 0x74
        __asm _emit 0x14
        movzx edx, word ptr [ebp - 10h]
        imul eax, edx, 78h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 1D: jmp 0x585cb9a7
        __asm _emit 0xeb
        __asm _emit 0x1d
        movzx edx, word ptr [ebp - 10h]
        imul eax, edx, 7
        cdq
        mov ecx, 0ah
        idiv ecx
        imul eax, eax, 78h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 11 B0 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb0
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 07 B0 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb0
        __asm _emit 0xeb
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 64h], esi
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EA 06 EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E0 06 EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0xec
        __asm _emit 0xff
        sub esi, eax
        imul eax, esi, 78h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 24h]
        imul edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 64h]
        imul eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [ebp - 60h]
        imul ecx, dword ptr [ebp - 60h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7C 0D: jl 0x585cba08
        __asm _emit 0x7c
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6B 99 01 00: call 0x585e5370
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x585cba0d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 D3 FE FF FF: jmp 0x585cb8e0
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 17: jne 0x585cba2a
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F5 92 00 00: call 0x585d4d10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x585cba2a
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 47 99 01 00: call 0x585e5370
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes E9 8E FC FF FF: jmp 0x585cb6c6
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F0 93 1E 00: call 0x587b4e30
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x93
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 7
        ; Exact mapped bytes 75 0F: jne 0x585cba5f
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 220dch]
        ; Exact mapped bytes E8 22 31 FC FF: call 0x5858eb80
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
