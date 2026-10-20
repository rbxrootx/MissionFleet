// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850FC00 .. +0x4FD bytes.
extern "C" __declspec(naked) void FUN_5850fc00_5850FC00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 1ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 B6 01 00 00: je 0x5850fdcf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 858h
        mov dword ptr [ebp - 7ch], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 4F 84 F7 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 12: jmp 0x5850fc46
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0
        lea eax, [ebp - 90h]
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 3B 7E F7 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 858h
        mov dword ptr [ebp - 80h], ecx
        lea edx, [ebp - 94h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 2F 85 F7 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 66 7D F7 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x5850fdcf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 C3 7D F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 BC 16 00 00: call 0x58511340
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x5850fdca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 AC 7D F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 37 17 00 00: call 0x585113e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5850fcec
        __asm _emit 0x74
        __asm _emit 0x3f
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 8B 7D F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A6 B9 00 00: call 0x5851b670
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x5850fce7
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 13: je 0x5850fce7
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 1ch]
        cmp dword ptr [ecx], 0bh
        ; Exact mapped bytes 75 0B: jne 0x5850fce7
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0bh
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8A E2 24 00: call 0x5875df70
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe2
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x5850fdca
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 4C 7D F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 C5 6C F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6c
        __asm _emit 0xf7
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 37 7D F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 A0 C3 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc3
        __asm _emit 0xf7
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 28h]
        imul edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 24h]
        imul eax, dword ptr [ebp - 24h]
        add edx, eax
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, dword ptr [ebp + 18h]
        cmp dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x5850fdca
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 E8: cvtsi2sd xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe8
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 D5 12 34 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x12
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 3D 15 32 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x15
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 6B 46 FD FF: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 10h], 0ffffffffh
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 0ch], 2
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 4], 0
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 8C 7C F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A7 B8 00 00: call 0x5851b670
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 65 FE FF FF: jmp 0x5850fc34
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 864h
        mov dword ptr [ebp - 4ch], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 9A 82 F7 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 12: jmp 0x5850fdfb
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0
        lea edx, [ebp - 98h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 86 7C F7 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 864h
        mov dword ptr [ebp - 50h], eax
        lea ecx, [ebp - 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 7B 83 F7 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x83
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B2 7B F7 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x5850ff83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0F 7C F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 38 15 00 00: call 0x58511370
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x5850ff7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F8 7B F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 33 15 00 00: call 0x58511390
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5850fea0
        __asm _emit 0x74
        __asm _emit 0x3f
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D7 7B F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 A2 9B 00 00: call 0x58519a20
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x5850fe9b
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 13: je 0x5850fe9b
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 1ch]
        cmp dword ptr [eax], 0bh
        ; Exact mapped bytes 75 0B: jne 0x5850fe9b
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0bh
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D6 E0 24 00: call 0x5875df70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe0
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x5850ff7e
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 98 7B F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 11 6B F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6b
        __asm _emit 0xf7
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 83 7B F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 EC C1 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 30h]
        imul ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        imul edx, dword ptr [ebp - 2ch]
        add ecx, edx
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 18h]
        imul eax, dword ptr [ebp + 18h]
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x5850ff7e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 E4: cvtsi2sd xmm0, dword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe4
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 21 11 34 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x11
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 89 13 32 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x13
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [ecx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        ; Exact mapped bytes E8 B7 44 FD FF: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 10h], 0ffffffffh
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 0ch], 2
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D8 7A F7 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A3 9A 00 00: call 0x58519a20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 66 FE FF FF: jmp 0x5850fde9
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x585100f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5850ff9f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 874h]
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 0F 8D 44 01 00 00: jge 0x585100f6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*8 + 878h]
        sub ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx*8 + 878h]
        sub edx, dword ptr [ebp + 10h]
        imul ecx, edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax*8 + 87ch]
        sub eax, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx*8 + 87ch]
        sub edx, dword ptr [ebp + 14h]
        imul eax, edx
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 84h], ecx
        cmp dword ptr [ebp - 14h], 258h
        ; Exact mapped bytes 7D 49: jge 0x58510061
        __asm _emit 0x7d
        __asm _emit 0x49
        lea edx, [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD A4 0B 00: call 0x585ca500
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 E5 6C 00 00: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x585100f1
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, dword ptr [ebp + 18h]
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 0F 8D 80 00 00 00: jge 0x585100f1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 EC: cvtsi2sd xmm0, dword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xec
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 9D 0F 34 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 05 12 32 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x12
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes E8 33 43 FD FF: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x43
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        lea eax, [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 A4 0B 00: call 0x585ca500
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 50 6C 00 00: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A0 FE FF FF: jmp 0x5850ff96
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
