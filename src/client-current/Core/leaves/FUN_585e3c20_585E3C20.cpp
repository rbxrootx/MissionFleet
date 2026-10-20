// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E3C20 .. +0xC3C bytes.
extern "C" __declspec(naked) void FUN_585e3c20_585E3C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 69ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 60ch], ecx
        mov dword ptr [ebp - 608h], 0ffffh
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 610h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 30h
        mov dword ptr [ebp - 614h], ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 0ff000000h
        shr edx, 10h
        mov dword ptr [ebp - 620h], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ff0000h
        shr eax, 10h
        mov dword ptr [ebp - 61ch], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        mov dword ptr [ebp - 644h], ecx
        mov edx, dword ptr [ebp - 61ch]
        shl edx, 10h
        mov eax, dword ptr [ebp - 620h]
        shl eax, 10h
        or edx, eax
        mov dword ptr [ebp - 618h], edx
        cmp dword ptr [ebp - 61ch], 3
        ; Exact mapped bytes 0F 85 A2 01 00 00: jne 0x585e3e54
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60ch]
        ; Exact mapped bytes E8 13 36 EF FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x36
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 8A 01 00 00: jne 0x585e3e4f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
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
        ; Exact mapped bytes E8 F0 2C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 92 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x92
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp - 644h], eax
        ; Exact mapped bytes 0F 85 6C 01 00 00: jne 0x585e3e4f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 610h]
        push ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 03 F4 FF: call 0x58524010
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 628h], eax
        cmp dword ptr [ebp - 628h], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x585e3dab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 628h]
        ; Exact mapped bytes E8 3D D9 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd9
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x585e3dab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
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
        ; Exact mapped bytes E8 9A 2C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 2C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 628h]
        ; Exact mapped bytes E8 86 2C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 634h], esi
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 2C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5C 83 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 628h]
        ; Exact mapped bytes E8 4F 83 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 638h], esi
        mov ecx, dword ptr [ebp - 634h]
        imul ecx, dword ptr [ebp - 634h]
        mov eax, dword ptr [ebp - 638h]
        imul eax, dword ptr [ebp - 638h]
        shl eax, 2
        cdq
        mov esi, 9
        idiv esi
        add ecx, eax
        cmp ecx, 9c400h
        ; Exact mapped bytes 7D 13: jge 0x585e3dab
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 614h]
        push edx
        mov ecx, dword ptr [ebp - 628h]
        ; Exact mapped bytes E8 26 9F 17 00: call 0x5875dcd0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9f
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 614h]
        push eax
        mov ecx, dword ptr [ebp - 610h]
        push ecx
        push 588acdd4h
        ; Exact mapped bytes E8 2D E2 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe2
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov dword ptr [ebp - 608h], 0a0a0eeh
        mov eax, dword ptr [ebp - 60ch]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 648h], ecx
        mov edx, dword ptr [ebp - 608h]
        push edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 648h]
        ; Exact mapped bytes E8 C4 16 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x16
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60ch]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 64ch], edx
        push 0
        mov eax, dword ptr [ebp - 608h]
        push eax
        mov ecx, dword ptr [ebp - 64ch]
        ; Exact mapped bytes E8 8E FA F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0xf4
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 618h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 B6 0F 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb6
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F7 09 00 00: jmp 0x585e484b
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 61ch], 1
        ; Exact mapped bytes 0F 85 01 02 00 00: jne 0x585e4062
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 14 FF FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 610h]
        push ecx
        ; Exact mapped bytes FF 15 1C 41 89 58: call dword ptr [0x5889411c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 02 01 00 00: jne 0x585e3f84
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 620h], 800h
        ; Exact mapped bytes 75 28: jne 0x585e3eb6
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 614h]
        push edx
        push 588acdech
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov dword ptr [ebp - 608h], 0a0bec8h
        ; Exact mapped bytes EB 77: jmp 0x585e3f2d
        __asm _emit 0xeb
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 610h]
        add ecx, 18h
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x585e3f05
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 614h]
        push edx
        mov eax, dword ptr [ebp - 610h]
        add eax, 18h
        push eax
        push 588acdf8h
        ; Exact mapped bytes E8 0B E1 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe1
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov dword ptr [ebp - 608h], 0ffffh
        ; Exact mapped bytes EB 28: jmp 0x585e3f2d
        __asm _emit 0xeb
        __asm _emit 0x28
        push 588ace10h
        ; Exact mapped bytes E8 E1 E0 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe0
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov dword ptr [ebp - 608h], 0ffffh
        mov eax, dword ptr [ebp - 60ch]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 698h], ecx
        mov edx, dword ptr [ebp - 608h]
        push edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 698h]
        ; Exact mapped bytes E8 78 15 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60ch]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 694h], edx
        push 0
        mov eax, dword ptr [ebp - 608h]
        push eax
        mov ecx, dword ptr [ebp - 694h]
        ; Exact mapped bytes E8 42 F9 F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x585e4040
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 620h], 800h
        ; Exact mapped bytes 75 28: jne 0x585e3fb8
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 614h]
        push ecx
        push 588ace34h
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov dword ptr [ebp - 608h], 0a0bec8h
        ; Exact mapped bytes EB 36: jmp 0x585e3fee
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 614h]
        push eax
        mov ecx, dword ptr [ebp - 610h]
        push ecx
        push 588ace3ch
        ; Exact mapped bytes E8 20 E0 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe0
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov dword ptr [ebp - 608h], 0ffffh
        mov eax, dword ptr [ebp - 60ch]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 69ch], ecx
        mov edx, dword ptr [ebp - 608h]
        push edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 69ch]
        ; Exact mapped bytes E8 B7 14 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x14
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60ch]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 650h], edx
        push 0
        mov eax, dword ptr [ebp - 608h]
        push eax
        mov ecx, dword ptr [ebp - 650h]
        ; Exact mapped bytes E8 81 F8 F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 618h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 B4 0F 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb4
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E9 07 00 00: jmp 0x585e484b
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 61ch], 2
        ; Exact mapped bytes 74 1F: je 0x585e408a
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 61ch], 8
        ; Exact mapped bytes 74 16: je 0x585e408a
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 61ch], 5
        ; Exact mapped bytes 74 0D: je 0x585e408a
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 61ch], 6
        ; Exact mapped bytes 0F 85 C1 07 00 00: jne 0x585e484b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 624h], 0
        mov ecx, dword ptr [ebp - 610h]
        push ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A FF F3 FF: call 0x58524010
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x585e40b4
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 624h], 1
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 610h]
        ; Exact mapped bytes 0F BE 14 01: movsx edx, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x01
        test edx, edx
        ; Exact mapped bytes 75 0C: jne 0x585e40d6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 624h], 0
        ; Exact mapped bytes EB 5F: jmp 0x585e4135
        __asm _emit 0xeb
        __asm _emit 0x5f
        push 588ace58h
        mov eax, dword ptr [ebp - 610h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x585e40f8
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 624h], 0
        ; Exact mapped bytes EB 3D: jmp 0x585e4135
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 588ace64h
        mov ecx, dword ptr [ebp - 610h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x585e411a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 624h], 0
        ; Exact mapped bytes EB 1B: jmp 0x585e4135
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffff0000h
        shr edx, 10h
        cmp edx, 1
        ; Exact mapped bytes 74 0A: je 0x585e4135
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp - 624h], 0
        cmp dword ptr [ebp - 624h], 0
        ; Exact mapped bytes 74 13: je 0x585e4151
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 60ch]
        ; Exact mapped bytes E8 87 31 EF FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x31
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 FA 06 00 00: je 0x585e484b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 620h], 800h
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x585e41e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 608h], 0a0bec8h
        mov eax, dword ptr [ebp - 60ch]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 654h], ecx
        mov edx, dword ptr [ebp - 608h]
        push edx
        mov eax, dword ptr [ebp - 614h]
        push eax
        mov ecx, dword ptr [ebp - 654h]
        ; Exact mapped bytes E8 3A 13 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x13
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60ch]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 658h], edx
        push 0
        mov eax, dword ptr [ebp - 608h]
        push eax
        mov ecx, dword ptr [ebp - 658h]
        ; Exact mapped bytes E8 04 F7 F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 618h], 8020000h
        push 1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 618h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE B2 0F 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb2
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 63 06 00 00: jmp 0x585e484b
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 620h], 2000h
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x585e42e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 608h], 1aee92h
        push 588ace70h
        ; Exact mapped bytes E8 E4 DD F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 610h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x585e424d
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 614h]
        push edx
        push 588ace8ch
        ; Exact mapped bytes E8 BE DD F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588acea8h
        lea eax, [ebp - 604h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 23: jmp 0x585e4270
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 614h]
        push ecx
        mov edx, dword ptr [ebp - 610h]
        push edx
        push 588aceb0h
        lea eax, [ebp - 604h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, dword ptr [ebp - 60ch]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 65ch], edx
        mov eax, dword ptr [ebp - 608h]
        push eax
        lea ecx, [ebp - 604h]
        push ecx
        mov ecx, dword ptr [ebp - 65ch]
        ; Exact mapped bytes E8 35 12 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60ch]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 660h], eax
        push 0
        mov ecx, dword ptr [ebp - 608h]
        push ecx
        mov ecx, dword ptr [ebp - 660h]
        ; Exact mapped bytes E8 FF F5 F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf5
        __asm _emit 0xf4
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 618h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 B1 0F 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb1
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 68 05 00 00: jmp 0x585e484b
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 620h], 4000h
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x585e43de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 608h], 1aee92h
        push 588aceb8h
        ; Exact mapped bytes E8 E9 DC F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp - 610h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x585e4348
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 614h]
        push eax
        push 588aced4h
        ; Exact mapped bytes E8 C3 DC F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xdc
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588acef0h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 23: jmp 0x585e436b
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 614h]
        push edx
        mov eax, dword ptr [ebp - 610h]
        push eax
        push 588acef8h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, dword ptr [ebp - 60ch]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 664h], eax
        mov ecx, dword ptr [ebp - 608h]
        push ecx
        lea edx, [ebp - 404h]
        push edx
        mov ecx, dword ptr [ebp - 664h]
        ; Exact mapped bytes E8 3A 11 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x11
        __asm _emit 0x1e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60ch]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 668h], ecx
        push 0
        mov edx, dword ptr [ebp - 608h]
        push edx
        mov ecx, dword ptr [ebp - 668h]
        ; Exact mapped bytes E8 04 F5 F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf5
        __asm _emit 0xf4
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 618h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 B0 0F 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6D 04 00 00: jmp 0x585e484b
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 620h], 8000h
        ; Exact mapped bytes 75 05: jne 0x585e43ef
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 5C 04 00 00: jmp 0x585e484b
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60ch]
        cmp dword ptr [eax + 580h], 0
        ; Exact mapped bytes 74 05: je 0x585e4403
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 48 04 00 00: jmp 0x585e484b
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffff0000h
        shr ecx, 10h
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x585e44e0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 610h]
        push edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 FB F3 FF: call 0x58524010
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 62ch], eax
        cmp dword ptr [ebp - 62ch], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x585e44e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 62ch]
        ; Exact mapped bytes E8 08 D2 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd2
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x585e44e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
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
        ; Exact mapped bytes E8 65 25 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E 25 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 62ch]
        ; Exact mapped bytes E8 51 25 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 63ch], esi
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 25 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 27 7C EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 62ch]
        ; Exact mapped bytes E8 1A 7C EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 640h], esi
        mov ecx, dword ptr [ebp - 63ch]
        imul ecx, dword ptr [ebp - 63ch]
        mov eax, dword ptr [ebp - 640h]
        imul eax, dword ptr [ebp - 640h]
        shl eax, 2
        cdq
        mov esi, 9
        idiv esi
        add ecx, eax
        cmp ecx, 9c400h
        ; Exact mapped bytes 7D 13: jge 0x585e44e0
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 614h]
        push edx
        mov ecx, dword ptr [ebp - 62ch]
        ; Exact mapped bytes E8 F1 97 17 00: call 0x5875dcd0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x97
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 608h], 0ffffffh
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffff0000h
        shr eax, 10h
        mov dword ptr [ebp - 630h], eax
        mov ecx, dword ptr [ebp - 630h]
        sub ecx, 1
        mov dword ptr [ebp - 630h], ecx
        cmp dword ptr [ebp - 630h], 4
        ; Exact mapped bytes 0F 87 0D 03 00 00: ja 0x585e4824
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 630h]
        ; Exact mapped bytes FF 24 95 5C 48 5E 58: jmp dword ptr [edx*4 + 0x585e485c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0x48
        __asm _emit 0x5e
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 614h]
        push eax
        mov ecx, dword ptr [ebp - 610h]
        push ecx
        push 588acf00h
        ; Exact mapped bytes E8 B4 DA F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xda
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 03 FF FF: call 0x585d4880
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x585e45b3
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 60ch]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 66ch], ecx
        mov edx, dword ptr [ebp - 608h]
        push edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 66ch]
        ; Exact mapped bytes E8 44 0F 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60ch]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 670h], edx
        push 0
        mov eax, dword ptr [ebp - 608h]
        push eax
        mov ecx, dword ptr [ebp - 670h]
        ; Exact mapped bytes E8 0E F3 F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6C 02 00 00: jmp 0x585e4824
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 614h]
        push ecx
        mov edx, dword ptr [ebp - 610h]
        push edx
        push 588acf18h
        ; Exact mapped bytes E8 20 DA F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov dword ptr [ebp - 608h], 0ffcc66h
        push 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 02 FF FF: call 0x585d4880
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x585e4651
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 60ch]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 674h], edx
        mov eax, dword ptr [ebp - 608h]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        mov ecx, dword ptr [ebp - 674h]
        ; Exact mapped bytes E8 A6 0E 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60ch]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 678h], eax
        push 0
        mov ecx, dword ptr [ebp - 608h]
        push ecx
        mov ecx, dword ptr [ebp - 678h]
        ; Exact mapped bytes E8 70 F2 F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf2
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x585e4824
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 614h]
        push edx
        mov eax, dword ptr [ebp - 610h]
        push eax
        push 588acf34h
        ; Exact mapped bytes E8 82 D9 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd9
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov dword ptr [ebp - 608h], 993399h
        push 3
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 01 FF FF: call 0x585d4880
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x585e46ef
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 60ch]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 67ch], eax
        mov ecx, dword ptr [ebp - 608h]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 67ch]
        ; Exact mapped bytes E8 08 0E 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x1e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60ch]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 680h], ecx
        push 0
        mov edx, dword ptr [ebp - 608h]
        push edx
        mov ecx, dword ptr [ebp - 680h]
        ; Exact mapped bytes E8 D2 F1 F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x585e4824
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 614h]
        push eax
        mov ecx, dword ptr [ebp - 610h]
        push ecx
        push 588acf54h
        ; Exact mapped bytes E8 E4 D8 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd8
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov dword ptr [ebp - 608h], 0f89a9ah
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 01 FF FF: call 0x585d4880
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x585e478d
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 60ch]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 684h], ecx
        mov edx, dword ptr [ebp - 608h]
        push edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 684h]
        ; Exact mapped bytes E8 6A 0D 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0d
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60ch]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 688h], edx
        push 0
        mov eax, dword ptr [ebp - 608h]
        push eax
        mov ecx, dword ptr [ebp - 688h]
        ; Exact mapped bytes E8 34 F1 F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf1
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x585e4824
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 614h]
        push ecx
        mov edx, dword ptr [ebp - 610h]
        push edx
        mov eax, dword ptr [ebp - 610h]
        add eax, 18h
        push eax
        push 588acf78h
        ; Exact mapped bytes E8 3C D8 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd8
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov dword ptr [ebp - 608h], 0cc66cch
        mov edx, dword ptr [ebp - 60ch]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 68ch], eax
        mov ecx, dword ptr [ebp - 608h]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 68ch]
        ; Exact mapped bytes E8 D3 0C 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0c
        __asm _emit 0x1e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60ch]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 690h], ecx
        push 0
        mov edx, dword ptr [ebp - 608h]
        push edx
        mov ecx, dword ptr [ebp - 690h]
        ; Exact mapped bytes E8 9D F0 F4 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf0
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 618h], 20000h
        push 1
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 618h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 AC 0F 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xac
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 FA C7 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc7
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
