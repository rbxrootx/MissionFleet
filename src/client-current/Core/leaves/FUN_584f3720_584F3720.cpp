// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F3720 .. +0x3A6 bytes.
extern "C" __declspec(naked) void FUN_584f3720_584F3720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 58h
        ; Exact mapped bytes E8 0B 4B F9 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x4b
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 76 67: jbe 0x584f37a0
        __asm _emit 0x76
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F FE FF FF: call 0x584f3550
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 58h
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 29 49 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f3769
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 48h]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 18 43 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 58h
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 12 4A F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 49 42 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x584f37a0
        __asm _emit 0x74
        __asm _emit 0x12
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 AA 42 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 93 44 F9 FF: call 0x58487c30
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x584f375a
        __asm _emit 0xeb
        __asm _emit 0xba
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 7ch]
        xor edx, edx
        mov ecx, 32h
        div ecx
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x584f37bc
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 E7 FF FF: call 0x584f1f90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 79 12 F9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 76 1D: jbe 0x584f37ed
        __asm _emit 0x76
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes E8 A2 7C 06 00: call 0x5855b480
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes E8 24 8F 06 00: call 0x5855c710
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 B9 11 F9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp eax, 0f4241h
        ; Exact mapped bytes 0F 84 31 02 00 00: je 0x584f3a43
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 23 12 F9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [eax + 104h], 3
        ; Exact mapped bytes 0F 85 76 01 00 00: jne 0x584f39a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 58h
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 41 48 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f3851
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 30 42 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 58h
        mov dword ptr [ebp - 34h], ecx
        lea edx, [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2A 49 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 61 41 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x584f398f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BE 41 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 A7 F6 FF FF: call 0x584f2f30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E8 47 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f38aa
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 58h]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D7 41 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8E 41 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 77 F6 FF FF: call 0x584f2f30
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C8 48 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 FF 40 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x584f398a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5C 41 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 B5 8B F9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 86 47 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f390c
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 60h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 75 41 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2C 41 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 85 8B F9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        lea ecx, [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 66 48 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 9D 40 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 4B: je 0x584f3985
        __asm _emit 0x74
        __asm _emit 0x4b
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 FE 40 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 F7 97 F9 FF: call 0x5848d140
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x97
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x584f3980
        __asm _emit 0x74
        __asm _emit 0x33
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EB 40 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 84 85 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4D 96 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 30 F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 39 96 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x584f3980
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x584f3ac1
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x584f38fd
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 11 FF FF FF: jmp 0x584f389b
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B3 FE FF FF: jmp 0x584f3842
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 34 0F 00: call 0x585e6e80
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x34
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x584f3a41
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 F5 FF FF: call 0x584f2ef0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x584f39c3
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 34 0F 00: call 0x585e6e80
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x34
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x584f3ac1
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 85 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x584f39e5
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4E 87 F9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 44: je 0x584f3a2f
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD 95 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 2F F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 95 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 22: jne 0x584f3a2d
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3D DC FD FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 13: jne 0x584f3a2d
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FE 96 F9 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x584f3a2d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB AB: jmp 0x584f39da
        __asm _emit 0xeb
        __asm _emit 0xab
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0C: je 0x584f3a41
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 34 0F 00: call 0x585e6e80
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x34
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7E: jmp 0x584f3ac1
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 84 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584f3a65
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CE 86 F9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 44: je 0x584f3aaf
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3D 95 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 2F F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 29 95 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 22: jne 0x584f3aad
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BD DB FD FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 13: jne 0x584f3aad
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7E 96 F9 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x584f3aad
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB AB: jmp 0x584f3a5a
        __asm _emit 0xeb
        __asm _emit 0xab
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0C: je 0x584f3ac1
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 33 0F 00: call 0x585e6e80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
