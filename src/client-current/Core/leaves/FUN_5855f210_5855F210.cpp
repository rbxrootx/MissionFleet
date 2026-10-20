// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855F210 .. +0x47A bytes.
extern "C" __declspec(naked) void FUN_5855f210_5855F210() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883570h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 80h
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
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], 588a9494h
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14ch
        mov dword ptr [ebp - 2ch], ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 24 8E F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855f26e
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 70h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 13 88 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14ch
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0A 8F F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 41 87 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5855f2b3
        __asm _emit 0x74
        __asm _emit 0x1d
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 A2 87 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        push 1ch
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 86 1D 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x1d
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB AC: jmp 0x5855f25f
        __asm _emit 0xeb
        __asm _emit 0xac
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14ch
        ; Exact mapped bytes E8 2F 8E F2 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 1ch]
        add eax, 158h
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A7 8D F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855f2eb
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 78h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 96 87 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 1ch]
        add eax, 158h
        mov dword ptr [ebp - 3ch], eax
        lea ecx, [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8E 8E F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C5 86 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 35 03 00 00: je 0x5855f64b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 22 87 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 40h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 4B 8D F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855f347
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 80h]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3A 87 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F1 86 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 44h], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 27 8E F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5E 86 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 24 02 00 00: je 0x5855f5a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BB 86 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 48h], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E4 8C F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 12: jmp 0x5855f3b1
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0
        lea edx, [ebp - 88h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D0 86 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 87 86 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 4ch], ecx
        lea edx, [ebp - 8ch]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BD 8D F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F4 85 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x5855f4f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 51 86 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + 120h], 0
        ; Exact mapped bytes 74 33: je 0x5855f42d
        __asm _emit 0x74
        __asm _emit 0x33
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3E 86 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 35 1C 2D 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1F 86 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [edx + 120h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0B 86 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp dword ptr [eax + 128h], 0
        ; Exact mapped bytes 74 33: je 0x5855f473
        __asm _emit 0x74
        __asm _emit 0x33
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F8 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 EF 1B 2D 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1b
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D9 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 128h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C5 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp dword ptr [edx + 124h], 0
        ; Exact mapped bytes 74 33: je 0x5855f4b9
        __asm _emit 0x74
        __asm _emit 0x33
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B2 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 A9 1B 2D 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x1b
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 93 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [eax + 124h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7F 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2C: je 0x5855f4f2
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 72 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 5ch], ecx
        push 134h
        mov edx, dword ptr [ebp - 5ch]
        push edx
        ; Exact mapped bytes E8 53 1B 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1b
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 54 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [eax], 0
        ; Exact mapped bytes E9 A8 FE FF FF: jmp 0x5855f39f
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 41 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 E4 8B F2 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8b
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2B 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 43: je 0x5855f563
        __asm _emit 0x74
        __asm _emit 0x43
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 18 85 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0F: je 0x5855f548
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4D 01 00 00: call 0x5855f690
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x5855f54f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E9 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 88h], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D5 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2C: je 0x5855f59c
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C8 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 64h], edx
        push 8ch
        mov eax, dword ptr [ebp - 64h]
        push eax
        ; Exact mapped bytes E8 A9 1A 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 AA 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [eax], 0
        ; Exact mapped bytes E9 97 FD FF FF: jmp 0x5855f338
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 97 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 3A 8B F2 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8b
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 81 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 43: je 0x5855f60d
        __asm _emit 0x74
        __asm _emit 0x43
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6E 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0F: je 0x5855f5f2
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A3 00 00 00: call 0x5855f690
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x5855f5f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 3F 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [edx + 88h], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2B 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2C: je 0x5855f646
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 1E 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 6ch], eax
        push 8ch
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        ; Exact mapped bytes E8 FF 19 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x19
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 00 84 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [eax], 0
        ; Exact mapped bytes E9 91 FC FF FF: jmp 0x5855f2dc
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 3e4h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 73 04 00 00: call 0x5855fad0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 158h
        ; Exact mapped bytes E8 74 81 F2 FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14ch
        ; Exact mapped bytes E8 66 81 F2 FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
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
        mov esp, ebp
        pop ebp
        ret
    }
}
