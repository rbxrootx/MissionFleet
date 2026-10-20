// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BEDA0 .. +0x520 bytes.
extern "C" __declspec(naked) void FUN_586beda0_586BEDA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 174h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10ch], ecx
        xor eax, eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes 66 89 41 78: mov word ptr [ecx + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [edx + 80h], 0
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586bedf0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 110h]
        add eax, 1
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 5
        ; Exact mapped bytes 7D 1B: jge 0x586bee14
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [edx + ecx*4 + 22ch]
        ; Exact mapped bytes E8 AF 1A 10 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x586bede1
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 A7 E2 FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 11: jmp 0x586bee42
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 74 D2 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 0F 84 57 04 00 00: je 0x586bf2a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b0de2h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 11ch], ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 56 D0 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd0
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 5B DC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        push 0ffffffh
        mov edx, dword ptr [ebp - 118h]
        push edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 6B 16 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x16
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 120h], ecx
        mov edx, dword ptr [ebp - 114h]
        add edx, 1
        mov dword ptr [ebp - 114h], edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 EA CF DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xcf
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 73 0D DF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0d
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        mov dword ptr [ebp - 124h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 A9 15 10 00: call 0x587c04d0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 93 CF DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xcf
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1C 44 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x44
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        add eax, 5890bfd0h
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 65 CF DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcf
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E A6 E2 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa6
        __asm _emit 0xe2
        __asm _emit 0xff
        imul ecx, eax, 0e0h
        mov dword ptr [ebp - 130h], ecx
        mov edx, dword ptr [ebp - 12ch]
        add edx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 134h], edx
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 67 15 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 1B CF DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xcf
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 43 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x43
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 75 51: jne 0x586bf026
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E6 CE DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xce
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F D5 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd5
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        push 0ffffffh
        push 8
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 00 15 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x586bf103
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 AF CE DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xce
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 38 43 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 4E: jne 0x586bf08f
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 148h], ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 7A CE DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xce
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 D5 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd5
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        push 0ffffffh
        push 9
        mov edx, dword ptr [ebp - 144h]
        push edx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 94 14 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 74: jmp 0x586bf103
        __asm _emit 0xeb
        __asm _emit 0x74
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 154h], edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 2C CE DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xce
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 42 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x42
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        mov dword ptr [ebp - 14ch], ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 09 CE DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xce
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A2 D4 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        push 0ffffffh
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 150h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 1E 14 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 D2 CD DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xcd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5B 42 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x42
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 174h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x586bf241
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 B1 CD DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xcd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A 42 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x42
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 174h]
        cmp edx, 30h
        ; Exact mapped bytes 75 4D: jne 0x586bf18f
        __asm _emit 0x75
        __asm _emit 0x4d
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 15ch], edx
        push 588b0e94h
        ; Exact mapped bytes E8 89 2E E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2e
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        push 239fc8h
        push -1
        mov eax, dword ptr [ebp - 158h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 97 13 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x586bf23f
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 46 CD DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xcd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF 41 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x41
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 174h]
        and ecx, 1
        ; Exact mapped bytes 74 4A: je 0x586bf1f7
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 164h], ecx
        push 588b0ea8h
        ; Exact mapped bytes E8 1E 2E E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2e
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        push 4848ceh
        push -1
        mov edx, dword ptr [ebp - 160h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 2C 13 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x586bf23f
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 16ch], edx
        push 588b0ebch
        ; Exact mapped bytes E8 D4 2D E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x2d
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        push 0ffffffh
        push 1
        mov eax, dword ptr [ebp - 168h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 E2 12 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x12
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x586bf289
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 174h], eax
        push 588b0ed0h
        ; Exact mapped bytes E8 8A 2D E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x2d
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        push 0ffffffh
        push 1
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 98 12 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x12
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes 66 8B 42 78: mov ax, word ptr [edx + 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x78
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes 66 89 41 78: mov word ptr [ecx + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        ; Exact mapped bytes E9 8B FB FF FF: jmp 0x586bee31
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 CF 39 00 00: call 0x586c2c80
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 94 1D 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1d
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
