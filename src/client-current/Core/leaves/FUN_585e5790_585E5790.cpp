// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E5790 .. +0x15D7 bytes.
extern "C" __declspec(naked) void FUN_585e5790_585E5790() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 208h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov dword ptr [ebp - 0a8h], ecx
        mov dword ptr [ebp - 0f4h], 1fh
        ; Exact mapped bytes EB 0F: jmp 0x585e57c6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0f4h]
        add eax, 1
        mov dword ptr [ebp - 0f4h], eax
        cmp dword ptr [ebp - 0f4h], 26h
        ; Exact mapped bytes 7D 15: jge 0x585e57e4
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF C6 18 00: call 0x58771ea0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc6
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D3: jmp 0x585e57b7
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 0a8h]
        cmp dword ptr [edx + 10680h], 1
        ; Exact mapped bytes 75 05: jne 0x585e57f8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 61 15 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 10680h], 1
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 20f08h]
        mov eax, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 20f08h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [ecx + 21e20h]
        ; Exact mapped bytes E8 F2 D1 FE FF: call 0x585d2a50
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 3B FE FF: call 0x585c9380
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 0E 3B 00 00: call 0x585e9380
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0fffffffh
        or eax, 80000000h
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ecx + 10678h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 11 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x11
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A CF FE FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        xor edx, 7c8ba106h
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 2101ch], edx
        mov ecx, dword ptr [ebp - 0a8h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 9
        ; Exact mapped bytes 74 16: je 0x585e58e2
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0a8h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 8
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x585e5994
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a8h]
        cmp dword ptr [edx + 21aach], 1
        ; Exact mapped bytes 74 0F: je 0x585e5900
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0a8h]
        cmp dword ptr [eax + 21aach], 2
        ; Exact mapped bytes 75 5A: jne 0x585e595a
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes E8 EB 18 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x18
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        cmp ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes 75 0C: jne 0x585e5939
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 A8 43 FF FF: call 0x585d9ce0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E8 B2 18 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x18
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        push 0
        push 0
        push 0
        push 6
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 19 34 EF FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x34
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 38: jmp 0x585e5992
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes E8 91 18 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        cmp eax, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes 75 0C: jne 0x585e5992
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 3F 12 FE FF: call 0x585c6bd0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x585e59cd
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        cmp ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes 75 0C: jne 0x585e59ae
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 33 43 FF FF: call 0x585d9ce0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E8 3D 18 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        push 0
        push 0
        push 0
        push 6
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 A4 33 EF FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x33
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0a8h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 7D 03 00 00: jne 0x585e5d60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
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
        ; Exact mapped bytes E8 D2 0F EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5B 34 EC FF: call 0x584a8e50
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x34
        __asm _emit 0xec
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 64: jne 0x585e5a5e
        __asm _emit 0x75
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 0ffffff00h
        or edx, 20h
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 10678h], edx
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 8E 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 C3 17 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x17
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 F0 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf0
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        mov ecx, dword ptr [ebp - 1f8h]
        push ecx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 F8 2F EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2f
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FB 12 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a8h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 3
        ; Exact mapped bytes 0F 84 EC 02 00 00: je 0x585e5d60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 0F EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2A 75 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8D 48 FF FF FF: mov word ptr [ebp - 0xb8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 20h
        push 0
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 6B 73 26 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x73
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 5B 73 26 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x73
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 4B 73 26 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x73
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 64 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 11: jmp 0x585e5aec
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 4A 66 EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x66
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x585e5c01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 3C 69 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x69
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 EF E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xef
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 1
        ; Exact mapped bytes 75 02: jne 0x585e5b16
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB C5: jmp 0x585e5adb
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 8F 74 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        lea edx, [ebp + eax*2 - 24h]
        mov dword ptr [ebp - 12ch], edx
        mov eax, dword ptr [ebp - 12ch]
        movzx ecx, word ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 65 74 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 104h]
        ; Exact mapped bytes 74 4C: je 0x585e5b9f
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 F2 32 EC FF: call 0x584a8e50
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x32
        __asm _emit 0xec
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 10: je 0x585e5b73
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 82 FB EA FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 2A: jne 0x585e5b9d
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 32 74 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        lea eax, [ebp + eax*2 - 14h]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 130h]
        movzx edx, word ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp - 130h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes EB 5D: jmp 0x585e5bfc
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 06 74 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 104h]
        ; Exact mapped bytes 75 4A: jne 0x585e5bfc
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 93 32 EC FF: call 0x584a8e50
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x32
        __asm _emit 0xec
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 10: je 0x585e5bd2
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 23 FB EA FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 2A: jne 0x585e5bfc
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 D3 73 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        lea ecx, [ebp + eax*2 - 14h]
        mov dword ptr [ebp - 134h], ecx
        mov edx, dword ptr [ebp - 134h]
        movzx eax, word ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes E9 DA FE FF FF: jmp 0x585e5adb
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e5c1c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0bch]
        add edx, 1
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0bch], 8
        ; Exact mapped bytes 7D 4F: jge 0x585e5c74
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 0bch]
        movzx ecx, word ptr [ebp + eax*2 - 24h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x585e5c36
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D7: jmp 0x585e5c0d
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 0bch]
        movzx eax, word ptr [ebp + edx*2 - 24h]
        mov ecx, dword ptr [ebp - 0bch]
        movzx edx, word ptr [ebp + ecx*2 - 14h]
        cmp eax, edx
        ; Exact mapped bytes 74 22: je 0x585e5c72
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp + eax*4 - 84h], 1
        movzx ecx, word ptr [ebp - 0b8h]
        add ecx, 1
        ; Exact mapped bytes 66 89 8D 48 FF FF FF: mov word ptr [ebp - 0xb8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 99: jmp 0x585e5c0d
        __asm _emit 0xeb
        __asm _emit 0x99
        movzx edx, word ptr [ebp - 0b8h]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x585e5d60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 104h]
        cmp dword ptr [ebp + eax*4 - 84h], 1
        ; Exact mapped bytes 75 69: jne 0x585e5cfd
        __asm _emit 0x75
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 0ffffff00h
        or edx, 10h
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 10678h], edx
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 8C 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 26 15 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x15
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        push 2bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 EE E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        mov ecx, dword ptr [ebp - 200h]
        push ecx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 5B 2D EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x2d
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5E 10 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x585e5d60
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0ffffff00h
        or eax, 20h
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ecx + 10678h], eax
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 8B 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 C1 14 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x14
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE ED E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xed
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 F6 2C EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x2c
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F9 0F 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 4
        ; Exact mapped bytes 74 70: je 0x585e5de2
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 0a8h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 5
        ; Exact mapped bytes 74 5E: je 0x585e5de2
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 0a8h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0ah
        ; Exact mapped bytes 74 4C: je 0x585e5de2
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 0a8h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0bh
        ; Exact mapped bytes 74 3A: je 0x585e5de2
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 0a8h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0dh
        ; Exact mapped bytes 74 28: je 0x585e5de2
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 0a8h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0eh
        ; Exact mapped bytes 74 16: je 0x585e5de2
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0a8h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 10h
        ; Exact mapped bytes 0F 85 3C 02 00 00: jne 0x585e601e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a8h]
        cmp dword ptr [edx + 10678h], 80000000h
        ; Exact mapped bytes 0F 85 26 02 00 00: jne 0x585e601e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 138h], 0
        mov dword ptr [ebp - 0cch], 0ffffffffh
        mov dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e5e27
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0f0h]
        add eax, 1
        mov dword ptr [ebp - 0f0h], eax
        cmp dword ptr [ebp - 0f0h], 8
        ; Exact mapped bytes 7D 10: jge 0x585e5e40
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp + ecx*4 - 44h], 0
        ; Exact mapped bytes EB D8: jmp 0x585e5e18
        __asm _emit 0xeb
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 60 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 11: jmp 0x585e5e64
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 D2 62 EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 24: je 0x585e5e91
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 D8 B7 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb7
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x585e5e8f
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 29 71 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x71
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp + eax*4 - 44h], 1
        ; Exact mapped bytes EB C2: jmp 0x585e5e53
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e5eac
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0c0h]
        add edx, 1
        mov dword ptr [ebp - 0c0h], edx
        cmp dword ptr [ebp - 0c0h], 8
        ; Exact mapped bytes 7D 4F: jge 0x585e5f04
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + eax*4 + 10c44h]
        cmp edx, dword ptr [ebp - 138h]
        ; Exact mapped bytes 76 32: jbe 0x585e5f02
        __asm _emit 0x76
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 0c0h]
        cmp dword ptr [ebp + eax*4 - 44h], 0
        ; Exact mapped bytes 74 25: je 0x585e5f02
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + ecx*4 + 10c44h]
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 0cch], ecx
        ; Exact mapped bytes EB 99: jmp 0x585e5e9d
        __asm _emit 0xeb
        __asm _emit 0x99
        mov edx, dword ptr [ebp - 0a8h]
        cmp dword ptr [edx + 21aa0h], 0
        ; Exact mapped bytes 74 37: je 0x585e5f4a
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 0a8h]
        movzx ecx, byte ptr [eax + 21ab0h]
        cmp ecx, 1
        ; Exact mapped bytes 7C 0C: jl 0x585e5f31
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes EB 19: jmp 0x585e5f4a
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ebp + edx - 44h], 0
        ; Exact mapped bytes 74 0A: je 0x585e5f4a
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 1
        mov eax, dword ptr [ebp - 0a8h]
        cmp dword ptr [eax + 21a9ch], 0
        ; Exact mapped bytes 74 25: je 0x585e5f7e
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 0a8h]
        cmp dword ptr [ecx + 21aa8h], 0
        ; Exact mapped bytes 7F 0C: jg 0x585e5f74
        __asm _emit 0x7f
        __asm _emit 0x0c
        mov dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes EB 0A: jmp 0x585e5f7e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 0A EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 20 70 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes 75 43: jne 0x585e5fdb
        __asm _emit 0x75
        __asm _emit 0x43
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 89 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 43 12 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x12
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        push 2bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 EB E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xeb
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 78 2A EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2a
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x585e6019
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 89 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 12 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x12
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 EB E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        mov eax, dword ptr [ebp - 150h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 38 2A EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2a
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3B 0D 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a8h]
        movzx edx, word ptr [ecx + 107c8h]
        test edx, edx
        ; Exact mapped bytes 0F 85 87 01 00 00: jne 0x585e61ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        cmp dword ptr [eax + 10678h], 80000000h
        ; Exact mapped bytes 0F 85 71 01 00 00: jne 0x585e61ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], 0
        mov dword ptr [ebp - 110h], 0ffffffffh
        mov dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e6078
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0d8h]
        add ecx, 1
        mov dword ptr [ebp - 0d8h], ecx
        cmp dword ptr [ebp - 0d8h], 8
        ; Exact mapped bytes 7D 49: jge 0x585e60ca
        __asm _emit 0x7d
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 0d8h]
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax + edx*4 + 10bcch]
        xor ecx, 55555555h
        mov dword ptr [ebp - 108h], ecx
        ; Exact mapped bytes 74 26: je 0x585e60c8
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 10ch]
        cmp edx, dword ptr [ebp - 108h]
        ; Exact mapped bytes 7D 18: jge 0x585e60c8
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 110h], ecx
        ; Exact mapped bytes EB 9F: jmp 0x585e6069
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 08 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 7D: je 0x585e6156
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 08 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 6E EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6e
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp - 110h], eax
        ; Exact mapped bytes 75 63: jne 0x585e6156
        __asm _emit 0x75
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0ffffff00h
        or eax, 10h
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ecx + 10678h], eax
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 87 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 C8 10 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x10
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        push 2bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 E9 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        mov edx, dword ptr [ebp - 158h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 FD 28 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x28
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5F: jmp 0x585e61b5
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 0ffffff00h
        or ecx, 20h
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [edx + 10678h], ecx
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 87 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 67 10 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x10
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 E9 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 9C 28 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x28
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9F 0B 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a8h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 7
        ; Exact mapped bytes 0F 85 FB 01 00 00: jne 0x585e63cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0fch], 0ffffffffh
        mov byte ptr [ebp - 0abh], 0
        mov byte ptr [ebp - 0a9h], 0
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax + 220dch]
        ; Exact mapped bytes E8 C7 07 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        mov dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e621a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0d0h]
        add ecx, 1
        mov dword ptr [ebp - 0d0h], ecx
        mov edx, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [edx + 220dch]
        ; Exact mapped bytes E8 C5 40 F2 FF: call 0x5850a2f0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x40
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        cmp dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 74 6B: je 0x585e62a1
        __asm _emit 0x74
        __asm _emit 0x6b
        imul ecx, dword ptr [ebp - 0d0h], 3
        mov edx, dword ptr [ebp - 0f8h]
        movzx eax, byte ptr [edx + ecx + 2]
        cmp eax, 0ffh
        ; Exact mapped bytes 74 4D: je 0x585e629c
        __asm _emit 0x74
        __asm _emit 0x4d
        imul ecx, dword ptr [ebp - 0d0h], 3
        mov edx, dword ptr [ebp - 0f8h]
        movzx eax, byte ptr [edx + ecx + 2]
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x585e6276
        __asm _emit 0x75
        __asm _emit 0x11
        mov cl, byte ptr [ebp - 0abh]
        add cl, 1
        mov byte ptr [ebp - 0abh], cl
        ; Exact mapped bytes EB 26: jmp 0x585e629c
        __asm _emit 0xeb
        __asm _emit 0x26
        imul edx, dword ptr [ebp - 0d0h], 3
        mov eax, dword ptr [ebp - 0f8h]
        movzx ecx, byte ptr [eax + edx + 2]
        cmp ecx, 1
        ; Exact mapped bytes 75 0F: jne 0x585e629c
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dl, byte ptr [ebp - 0a9h]
        add dl, 1
        mov byte ptr [ebp - 0a9h], dl
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x585e620b
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 0abh]
        movzx ecx, byte ptr [ebp - 0a9h]
        cmp eax, ecx
        ; Exact mapped bytes 7E 0C: jle 0x585e62bf
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes EB 0A: jmp 0x585e62c9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 1
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 0fch], edx
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax + 220dch]
        ; Exact mapped bytes E8 9A 76 FA FF: call 0x5858d980
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x76
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 0A: jne 0x585e62f5
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0ffffffffh
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 06 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 6C EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6c
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes 75 5E: jne 0x585e636d
        __asm _emit 0x75
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 10678h]
        or edx, 10h
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 10678h], edx
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 85 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 B1 0E EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        push 2bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE E7 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 E6 26 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x26
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 59: jmp 0x585e63c6
        __asm _emit 0xeb
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + 10678h]
        or eax, 20h
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ecx + 10678h], eax
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 85 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 0E EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 E7 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        mov edx, dword ptr [ebp - 170h]
        push edx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 8B 26 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x26
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8E 09 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0fh
        ; Exact mapped bytes 0F 85 67 03 00 00: jne 0x585e6748
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 0b1h], 0
        mov dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e6403
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0dch]
        add edx, 1
        mov dword ptr [ebp - 0dch], edx
        cmp dword ptr [ebp - 0dch], 6
        ; Exact mapped bytes 0F 8D 3E 01 00 00: jge 0x585e654e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax + 21e24h]
        mov dword ptr [ebp - 178h], ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 2C C2 FE FF: call 0x585d2660
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 C3 FE FF: call 0x585d2790
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x585e6549
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 21e24h]
        mov dword ptr [ebp - 17ch], edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 F6 C1 FE FF: call 0x585d2660
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F 0C EF FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0xef
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 05 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B 6B EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6b
        __asm _emit 0xea
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 5E: je 0x585e64e7
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 10678h]
        or edx, 10h
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 10678h], edx
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 84 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 37 0D EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0d
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        push 2bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 E6 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        mov ecx, dword ptr [ebp - 180h]
        push ecx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 6C 25 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x25
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 59: jmp 0x585e6540
        __asm _emit 0xeb
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + 10678h]
        or eax, 20h
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ecx + 10678h], eax
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 83 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 DC 0C EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0c
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 E5 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        mov edx, dword ptr [ebp - 188h]
        push edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 11 25 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x25
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 0b1h], 1
        ; Exact mapped bytes EB 05: jmp 0x585e654e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 A6 FE FF FF: jmp 0x585e63f4
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 0b1h]
        test eax, eax
        ; Exact mapped bytes 0F 85 E6 01 00 00: jne 0x585e6743
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], 0
        mov dword ptr [ebp - 11ch], 0ffffffffh
        mov dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e658c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ech]
        add ecx, 1
        mov dword ptr [ebp - 0ech], ecx
        cmp dword ptr [ebp - 0ech], 8
        ; Exact mapped bytes 7D 13: jge 0x585e65a8
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp + edx*4 - 0a4h], 0
        ; Exact mapped bytes EB D5: jmp 0x585e657d
        __asm _emit 0xeb
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 59 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x59
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 11: jmp 0x585e65cc
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 6A 5B EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x5b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 27: je 0x585e65fc
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 70 B0 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb0
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x585e65fa
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 C1 69 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x69
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp + eax*4 - 0a4h], 1
        ; Exact mapped bytes EB BF: jmp 0x585e65bb
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e6617
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0c4h]
        add eax, 1
        mov dword ptr [ebp - 0c4h], eax
        cmp dword ptr [ebp - 0c4h], 8
        ; Exact mapped bytes 7D 52: jge 0x585e6672
        __asm _emit 0x7d
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 0c4h]
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + ecx*4 + 10c44h]
        cmp eax, dword ptr [ebp - 118h]
        ; Exact mapped bytes 76 35: jbe 0x585e6670
        __asm _emit 0x76
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 0c4h]
        cmp dword ptr [ebp + ecx*4 - 0a4h], 0
        ; Exact mapped bytes 74 25: je 0x585e6670
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 0c4h]
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax + edx*4 + 10c44h]
        mov dword ptr [ebp - 118h], ecx
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 11ch], edx
        ; Exact mapped bytes EB 96: jmp 0x585e6608
        __asm _emit 0xeb
        __asm _emit 0x96
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 03 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C 69 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x69
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes 75 5E: jne 0x585e66ea
        __asm _emit 0x75
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax + 10678h]
        or ecx, 10h
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [edx + 10678h], ecx
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 82 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 34 0B EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        push 2bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 E4 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 69 23 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x23
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 59: jmp 0x585e6743
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 10678h]
        or edx, 20h
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 10678h], edx
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 81 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 0A EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 E3 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 0E 23 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x23
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 11 06 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a8h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 8
        ; Exact mapped bytes 74 16: je 0x585e6770
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 0a8h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 9
        ; Exact mapped bytes 0F 85 82 01 00 00: jne 0x585e68f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        cmp dword ptr [eax + 21aach], 1
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x585e681f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
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
        ; Exact mapped bytes E8 32 02 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 68 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x68
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x585e67dc
        __asm _emit 0x75
        __asm _emit 0x43
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 81 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 42 0A EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        push 2bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F E3 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 77 22 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x22
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x585e681a
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 81 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 02 0A EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F E3 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        mov edx, dword ptr [ebp - 1d8h]
        push edx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 37 22 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x22
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x585e68ed
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        cmp dword ptr [eax + 21aach], 2
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x585e68cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
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
        ; Exact mapped bytes E8 83 01 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C 67 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x67
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x585e6888
        __asm _emit 0x75
        __asm _emit 0x40
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 80 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 09 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 E2 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe2
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        mov ecx, dword ptr [ebp - 1b0h]
        push ecx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 CB 21 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x21
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x585e68c9
        __asm _emit 0xeb
        __asm _emit 0x41
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 80 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 09 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        push 2bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 E2 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        mov edx, dword ptr [ebp - 1b8h]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 88 21 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x21
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x585e68ed
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 20 09 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        push 0
        push 0
        push 0
        push 487h
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 84 24 EF FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 67 04 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 41 02 00 00: jne 0x585e6b49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [edx + 220e0h]
        ; Exact mapped bytes E8 07 47 EE FF: call 0x584cb020
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x47
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 75 31: jne 0x585e6959
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax + 10678h]
        or ecx, 10h
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [edx + 10678h], ecx
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 7F 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EB 01 00 00: jmp 0x585e6b44
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 100h], 1
        ; Exact mapped bytes 75 2E: jne 0x585e6990
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax + 10678h]
        or ecx, 20h
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [edx + 10678h], ecx
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 7F 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x585e6b44
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 100h], 2
        ; Exact mapped bytes 0F 85 A7 01 00 00: jne 0x585e6b44
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], 0
        mov dword ptr [ebp - 124h], 0ffffffffh
        mov dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e69cc
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0e8h]
        add eax, 1
        mov dword ptr [ebp - 0e8h], eax
        cmp dword ptr [ebp - 0e8h], 8
        ; Exact mapped bytes 7D 10: jge 0x585e69e5
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp + ecx*4 - 64h], 0
        ; Exact mapped bytes EB D8: jmp 0x585e69bd
        __asm _emit 0xeb
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 54 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x54
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 11: jmp 0x585e6a09
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 2D 57 EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x57
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 24: je 0x585e6a36
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 33 AC EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xac
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x585e6a34
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 84 65 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp + eax*4 - 64h], 1
        ; Exact mapped bytes EB C2: jmp 0x585e69f8
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e6a51
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0c8h]
        add edx, 1
        mov dword ptr [ebp - 0c8h], edx
        cmp dword ptr [ebp - 0c8h], 8
        ; Exact mapped bytes 7D 4F: jge 0x585e6aa9
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + eax*4 + 10c44h]
        cmp edx, dword ptr [ebp - 120h]
        ; Exact mapped bytes 76 32: jbe 0x585e6aa7
        __asm _emit 0x76
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 0c8h]
        cmp dword ptr [ebp + eax*4 - 64h], 0
        ; Exact mapped bytes 74 25: je 0x585e6aa7
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + ecx*4 + 10c44h]
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 124h], ecx
        ; Exact mapped bytes EB 99: jmp 0x585e6a42
        __asm _emit 0xeb
        __asm _emit 0x99
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C FF E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 64 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x64
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp - 124h], eax
        ; Exact mapped bytes 75 43: jne 0x585e6b06
        __asm _emit 0x75
        __asm _emit 0x43
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 7E 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 18 07 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        push 2bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 E0 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 4D 1F EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1f
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x585e6b44
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 7D 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 D8 06 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 DF E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xdf
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        mov eax, dword ptr [ebp - 1cch]
        push eax
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 0D 1F EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x1f
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 10 02 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a8h]
        cmp dword ptr [ecx + 220d4h], 0
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x585e6c21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0ffffff00h
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ecx + 10678h], eax
        mov edx, dword ptr [ebp - 0a8h]
        movzx eax, byte ptr [edx + 220d8h]
        test eax, eax
        ; Exact mapped bytes 74 7C: je 0x585e6c06
        __asm _emit 0x74
        __asm _emit 0x7c
        mov byte ptr [ebp - 0aah], 1
        movzx ebx, byte ptr [ebp - 0aah]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D FE E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 64 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        shl ebx, cl
        mov byte ptr [ebp - 0aah], bl
        movzx ecx, byte ptr [ebp - 0aah]
        mov edx, dword ptr [ebp - 0a8h]
        movzx eax, byte ptr [edx + 220d8h]
        and ecx, eax
        ; Exact mapped bytes 74 1D: je 0x585e6be9
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 10678h]
        or edx, 10h
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 10678h], edx
        ; Exact mapped bytes EB 1B: jmp 0x585e6c04
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 10678h]
        or edx, 20h
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 10678h], edx
        ; Exact mapped bytes EB 1B: jmp 0x585e6c21
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 10678h]
        or edx, 20h
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 10678h], edx
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 10h
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x585e6cc1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 40000000h
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 7C 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 0a8h]
        movzx ecx, byte ptr [eax + 20f3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 33: je 0x585e6c8b
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes E8 93 05 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        push 47h
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 DE E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xde
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        mov edx, dword ptr [ebp - 1d4h]
        push edx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 C8 1D EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1d
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 31: jmp 0x585e6cbc
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes E8 60 05 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        push 2bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D DE E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xde
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        mov eax, dword ptr [ebp - 1dch]
        push eax
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 95 1D EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x1d
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x585e6d59
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 20h
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x585e6d59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 7C 01 00: call 0x585fe8f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 0a8h]
        movzx ecx, byte ptr [eax + 20f3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 33: je 0x585e6d28
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes E8 F6 04 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        push 4ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 DE E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xde
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        mov edx, dword ptr [ebp - 1e4h]
        push edx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 2B 1D EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1d
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 31: jmp 0x585e6d59
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes E8 C3 04 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        push 2ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 DD E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdd
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 F8 1C EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x1c
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 EB A2 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa2
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
    }
}
