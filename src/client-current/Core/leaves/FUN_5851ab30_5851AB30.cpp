// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851AB30 .. +0x723 bytes.
extern "C" __declspec(naked) void FUN_5851ab30_5851AB30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 E3 8F 04 00: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 0F 85 04 01 00 00: jne 0x5851ac61
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x5851ac4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 D5 6A FB FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6a
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x5851ac36
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 2C BE F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xbe
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 9C 13 F7 FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x13
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 13 F7 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x13
        __asm _emit 0xf7
        __asm _emit 0xff
        imul eax, eax, 0fh
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 5A 11 F7 FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xff
        imul edi, dword ptr [eax*4 + 589490f0h]
        mov eax, edi
        cdq
        mov ecx, 3e8h
        idiv ecx
        sub esi, eax
        mov dword ptr [ebp - 70h], esi
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 C5 14 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 45 13 F7 FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x13
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE 12 F7 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        imul eax, eax, 0fh
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 03 11 F7 FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xff
        imul edi, dword ptr [eax*4 + 5894c930h]
        mov eax, edi
        cdq
        mov ecx, 3e8h
        idiv ecx
        sub esi, eax
        mov dword ptr [ebp - 6ch], esi
        ; Exact mapped bytes EB 12: jmp 0x5851ac48
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 0
        ; Exact mapped bytes E9 07 06 00 00: jmp 0x5851b24f
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x5851ac5c
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes E9 F3 05 00 00: jmp 0x5851b24f
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x5851ad17
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 1
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x5851ad17
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b0h], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x5851ad12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
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
        ; Exact mapped bytes E8 D7 12 F7 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 4C 25 F7 FF: call 0x5848d1f0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x25
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x5851ad0b
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 2A 24 F7 FF: call 0x5848d0e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x24
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 29 23 F7 FF: call 0x5848cff0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        add eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 1B 24 F7 FF: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x24
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 FA 22 F7 FF: call 0x5848cff0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x22
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        cdq
        mov ecx, 5dch
        idiv ecx
        mov edx, dword ptr [ebp - 6ch]
        sub edx, eax
        mov dword ptr [ebp - 6ch], edx
        ; Exact mapped bytes EB 05: jmp 0x5851ad10
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 3F 05 00 00: jmp 0x5851b24f
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x5851ad17
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 38 05 00 00: jmp 0x5851b24f
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [edx + 4]
        push ecx
        ; Exact mapped bytes E8 D1 91 FC FF: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        imul edx, eax, 0ah
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        sub eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 708h
        ; Exact mapped bytes 7E 0E: jle 0x5851ad58
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 0e10h
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 15: jmp 0x5851ad6d
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [ebp - 0ch], 0fffff8f8h
        ; Exact mapped bytes 7D 0C: jge 0x5851ad6d
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0ch]
        add edx, 0e10h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 9A 65 F7 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        cmp eax, 8
        ; Exact mapped bytes 0F 8E 8F 00 00 00: jle 0x5851ae11
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 63 4D F9 FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax + 34h]
        add edx, 2
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 71 65 F7 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        cmp eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes 7E 16: jle 0x5851adbd
        __asm _emit 0x7e
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 48h], edx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 16 17 00 00: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5851add4
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 4ch], ecx
        push 40000000h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 FD 16 00 00: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 16: jle 0x5851adf0
        __asm _emit 0x7e
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D3 54 F8 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1A: jmp 0x5851ae0a
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x5851ae0a
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 54h], edx
        push -1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B7 54 F8 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 40 04 00 00: jmp 0x5851b24f
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x5851ae30
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 58h], ecx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 AC 16 00 00: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 C1 64 F7 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 0F 85 F7 01 00 00: jne 0x5851b034
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 70h]
        sub edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 C1 61 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x61
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 70h]
        sub ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 AD 61 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x61
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        imul esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 6ch]
        sub eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 98 61 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x61
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov edi, eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 6ch]
        sub edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 84 61 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        imul edi, eax
        add esi, edi
        ; Exact mapped bytes F2 0F 2A C6: cvtsi2sd xmm0, esi
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc6
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 7E 61 33 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x61
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 E6 63 31 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x63
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 73 12: jae 0x5851aecd
        __asm _emit 0x73
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 0
        ; Exact mapped bytes E9 82 03 00 00: jmp 0x5851b24f
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 14 F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 D8 BA F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        imul ecx, eax, 0dh
        add esi, ecx
        push esi
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 B8 0D F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 1eh
        div ecx
        add edx, 64h
        imul edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x5851af6f
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5851af40
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 7ch]
        cmp dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 7D 23: jge 0x5851af6f
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 76 10: jbe 0x5851af6d
        __asm _emit 0x76
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D E4: mov cx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 88 B8 00 00 00: mov word ptr [eax + 0xb8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5851af6f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C8: jmp 0x5851af37
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 2ch]
        sub edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0b8h]
        test ecx, ecx
        ; Exact mapped bytes 7D 0E: jge 0x5851af94
        __asm _emit 0x7d
        __asm _emit 0x0e
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 B8 00 00 00: mov word ptr [eax + 0xb8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x5851afbd
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0b8h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 7ch]
        cmp edx, ecx
        ; Exact mapped bytes 7C 14: jl 0x5851afbd
        __asm _emit 0x7c
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 7ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 B8 00 00 00: mov word ptr [ecx + 0xb8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 34 9A F6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9a
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B 0D F7 FF: call 0x5848bd40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0xf7
        __asm _emit 0xff
        add eax, 384h
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2a94h
        ; Exact mapped bytes 75 07: jne 0x5851afed
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 0C: jge 0x5851b00d
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 14h]
        add edx, 0e10h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E3 92 04 00: call 0x58564310
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 1
        ; Exact mapped bytes 0F 85 F1 00 00 00: jne 0x5851b132
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC 0C F7 FF: call 0x5848bd40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0c
        __asm _emit 0xf7
        __asm _emit 0xff
        add eax, 384h
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2a94h
        ; Exact mapped bytes 75 07: jne 0x5851b06c
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 0C: jge 0x5851b08c
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        add edx, 0e10h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 70h]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 6ch]
        sub eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 38h]
        imul edx, dword ptr [ebp - 38h]
        add ecx, edx
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes F2 0F 2A 45 DC: cvtsi2sd xmm0, dword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xdc
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 57 5F 33 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x5f
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 BF 61 31 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x61
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 6E 0F F7 FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0f
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 59 05 58 4D 89 58: mulsd xmm0, qword ptr [0x58894d58]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 E4 25 03 00: call 0x5854d6e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 96h
        ; Exact mapped bytes 7D 07: jge 0x5851b112
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 96h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 E5 91 04 00: call 0x58564310
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 53 0F F7 FF: call 0x5848c090
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x5851b24f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x5851b24f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 26 12 F7 FF: call 0x5848c380
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 EA 00 00 00: jne 0x5851b24f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 00 0F F7 FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x5851b24f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        cmp dword ptr [edx + 58947974h], 0
        ; Exact mapped bytes 75 0C: jne 0x5851b195
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 BC 90 04 00: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffffe0h
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 1
        ; Exact mapped bytes 75 34: jne 0x5851b1db
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 10h]
        and eax, 0fffh
        shl eax, 0fh
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0f8007fffh
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 20h]
        and edx, 3ffh
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffff801fh
        or eax, edx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 3B: jmp 0x5851b216
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0fffh
        shl ecx, 0fh
        mov edx, dword ptr [ebp - 8]
        and edx, 0f8007fffh
        or edx, ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0b8h]
        and ecx, 3ffh
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffff801fh
        or edx, ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        and eax, 0e7ffffffh
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 9fffffffh
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 68h], ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        nop
        pop edi
        pop esi
        mov esp, ebp
    }
}
