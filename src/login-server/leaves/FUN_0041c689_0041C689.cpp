// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041C689 .. +0x943 bytes.
extern "C" __declspec(naked) void FUN_0041c689_0041C689() {
    __asm {
        mov eax, 43b033h
        ; Exact mapped bytes E8 75 2F 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0b4h
        push ebx
        push esi
        push edi
        mov ebx, ecx
        xor edi, edi
        cmp dword ptr [ebx + 48h], edi
        mov dword ptr [ebp - 40h], edi
        mov dword ptr [ebp - 18h], edi
        ; Exact mapped bytes 0F 84 FD 06 00 00: je 0x41cdac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 54h], edi
        ; Exact mapped bytes 0F 84 E3 06 00 00: je 0x41cd9b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        pop esi
        cmp dword ptr [ebx + 10h], esi
        mov dword ptr [ebp - 34h], esi
        ; Exact mapped bytes 0F 8C D4 06 00 00: jl 0x41cd9b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 30h
        mov dword ptr [ebp - 1ch], 28h
        mov eax, dword ptr [ebx + 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + eax - 4]
        mov eax, dword ptr [eax + 4]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 94 06 00 00: je 0x41cd7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ecx + 8]
        cmp dword ptr [ecx + 0a4h], edi
        lea edx, [ecx + 0a4h]
        ; Exact mapped bytes 0F 84 70 06 00 00: je 0x41cd76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [ebp - 18h]
        push 1
        pop eax
        mov dword ptr [edx], edi
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 75 03: jne 0x41c716
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ebx + 44h], eax
        lea eax, [ecx + 0a8h]
        lea ecx, [ebp - 30h]
        push eax
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes E8 8A B1 FF FF: call 0x4178b2
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], edi
        mov dword ptr [ebp - 0b0h], edi
        mov dword ptr [ebp - 0ach], edi
        mov dword ptr [ebp - 0a8h], edi
        mov dword ptr [ebp - 0a4h], edi
        mov dword ptr [ebp - 94h], edi
        mov dword ptr [ebp - 8ch], edi
        mov dword ptr [ebp - 0a0h], edi
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 10 F3 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 18: je 0x41c787
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + edx + 4]
        add eax, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x41c789
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 54h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 10h]
        push dword ptr [ecx + edx + 10h]
        lea ecx, [ebp - 0b0h]
        push eax
        push 1
        ; Exact mapped bytes E8 96 08 00 00: call 0x41d03a
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 C5 F2 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 18: je 0x41c7d2
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + eax*2]
        mov eax, dword ptr [ebp - 14h]
        shl ecx, 4
        mov edx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + edx + 4]
        add ecx, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x41c7d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ebx + 54h]
        mov edx, dword ptr [ebp - 20h]
        push edi
        push edi
        mov eax, dword ptr [eax + 10h]
        push ecx
        add eax, edx
        push dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 48 14: mov cx, word ptr [eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x14
        push ecx
        lea ecx, [ebp - 0b0h]
        push dword ptr [eax + 8]
        ; Exact mapped bytes E8 B9 08 00 00: call 0x41d0b1
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 50h]
        lea ecx, [ebp - 0b0h]
        push dword ptr [eax]
        ; Exact mapped bytes E8 FD 08 00 00: call 0x41d105
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 61 F2 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 18: je 0x41c836
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        ; Exact mapped bytes 66 8B 44 08 14: mov ax, word ptr [eax + ecx + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 45 C4: mov word ptr [ebp - 0x3c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc4
        movzx eax, word ptr [ebp - 3ch]
        mov ecx, 81h
        cmp eax, ecx
        ; Exact mapped bytes 0F 8F CC 03 00 00: jg 0x41cc13
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 69 03 00 00: je 0x41cbb6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8
        ; Exact mapped bytes 0F 8F 95 01 00 00: jg 0x41c9eb
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 80 04 00 00: je 0x41ccdc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 51 01 00 00: je 0x41c9b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x41c97f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x41c949
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x41c913
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 4C: je 0x41c8c8
        __asm _emit 0x74
        __asm _emit 0x4c
        dec eax
        ; Exact mapped bytes 0F 85 AD 04 00 00: jne 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 7
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 37 B1 FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 DB F1 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 88 04 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes DD 45 D8: fld qword ptr [ebp - 0x28]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xd8
        mov eax, dword ptr [eax + edx + 4]
        add eax, dword ptr [ecx + 8]
        ; Exact mapped bytes DD 18: fstp qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x18
        ; Exact mapped bytes E9 68 04 00 00: jmp 0x41cd30
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 6
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 F2 B0 FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 96 F1 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 18: je 0x41c901
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + edx + 4]
        add eax, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x41c903
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes E9 1D 04 00 00: jmp 0x41cd30
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 5
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 A7 B0 FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 4B F1 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 F8 03 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea eax, [eax + eax*2]
        shl eax, 4
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x41c8b4
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 4
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 71 B0 FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 15 F1 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 C2 03 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea eax, [eax + eax*2]
        shl eax, 4
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x41ca47
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 3
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 3B B0 FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 DF F0 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 8C 03 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea eax, [eax + eax*2]
        shl eax, 4
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x41ca47
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 05 B0 FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 A9 F0 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 56 03 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea eax, [eax + eax*2]
        shl eax, 4
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x41ca8c
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0bh
        ; Exact mapped bytes 0F 84 8C 01 00 00: je 0x41cb80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 3
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x41cb2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x41cae2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x41caa2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 4C: je 0x41ca5b
        __asm _emit 0x74
        __asm _emit 0x4c
        dec eax
        ; Exact mapped bytes 0F 85 1A 03 00 00: jne 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 13h
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 A4 AF FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 48 F0 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 F5 02 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [eax + edx + 4]
        add eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes E9 D5 02 00 00: jmp 0x41cd30
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 12h
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 5F AF FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 03 F0 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 B0 02 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [eax + edx + 4]
        add eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 66 8B 4D D8: mov cx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes E9 8E 02 00 00: jmp 0x41cd30
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 11h
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 18 AF FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 BC EF FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 69 02 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + edx + 4]
        add eax, dword ptr [ecx + 8]
        mov cl, byte ptr [ebp - 28h]
        ; Exact mapped bytes EB 44: jmp 0x41cb26
        __asm _emit 0xeb
        __asm _emit 0x44
        push edi
        push 10h
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D8 AE FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp - 28h]
        mov ecx, dword ptr [ebx + 54h]
        mov byte ptr [ebp - 35h], al
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 76 EF FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 23 02 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + edx + 4]
        add eax, dword ptr [ecx + 8]
        mov cl, byte ptr [ebp - 35h]
        mov byte ptr [eax], cl
        ; Exact mapped bytes E9 03 02 00 00: jmp 0x41cd30
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 0eh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 8D AE FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 31 EF FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 DE 01 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp - 30h]
        lea edi, [ebp - 0c0h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov edx, dword ptr [ecx + 10h]
        lea eax, [eax + eax*2]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shl eax, 4
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov eax, dword ptr [eax + edx + 4]
        lea esi, [ebp - 0c0h]
        add eax, dword ptr [ecx + 8]
        ; Exact mapped bytes E9 4F 01 00 00: jmp 0x41cccf
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 0bh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 3A AE FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 DE EE FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 8B 01 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea eax, [eax + eax*2]
        shl eax, 4
        ; Exact mapped bytes E9 D6 FE FF FF: jmp 0x41ca8c
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 8
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 04 AE FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 A8 EE FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 18: je 0x41cbef
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + edx + 4]
        add eax, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x41cbf1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 54h]
        mov edx, dword ptr [ebp - 20h]
        push edi
        push edi
        mov ecx, dword ptr [ecx + 10h]
        push dword ptr [ecx + edx + 10h]
        push eax
        push -1
        push dword ptr [ebp - 28h]
        push edi
        push edi
        ; Exact mapped bytes FF 15 88 C2 43 00: call dword ptr [0x43c288]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x41cd30
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 82h
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x41ccdc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 7
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 93 AD FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        push 10h
        lea eax, [ebp - 68h]
        push edi
        push eax
        ; Exact mapped bytes E8 A2 1E 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 45 D8: fld qword ptr [ebp - 0x28]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xd8
        add esp, 0ch
        lea eax, [ebp - 58h]
        push eax
        push ecx
        push ecx
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes FF 15 5C C3 43 00: call dword ptr [0x43c35c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 A8: mov ax, word ptr [ebp - 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        mov ecx, 0f4240h
        ; Exact mapped bytes 66 89 45 98: mov word ptr [ebp - 0x68], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 66 8B 45 AA: mov ax, word ptr [ebp - 0x56]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xaa
        ; Exact mapped bytes 66 89 45 9A: mov word ptr [ebp - 0x66], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9a
        ; Exact mapped bytes 66 8B 45 AE: mov ax, word ptr [ebp - 0x52]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xae
        ; Exact mapped bytes 66 89 45 9C: mov word ptr [ebp - 0x64], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 66 8B 45 B0: mov ax, word ptr [ebp - 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 66 89 45 9E: mov word ptr [ebp - 0x62], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9e
        ; Exact mapped bytes 66 8B 45 B2: mov ax, word ptr [ebp - 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb2
        ; Exact mapped bytes 66 89 45 A0: mov word ptr [ebp - 0x60], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes 66 8B 45 B4: mov ax, word ptr [ebp - 0x4c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 66 89 45 A2: mov word ptr [ebp - 0x5e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa2
        mov dword ptr [ebp - 10h], esi
        movzx eax, word ptr [ebp - 4ah]
        cdq
        idiv ecx
        mov ecx, dword ptr [ebx + 54h]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 5ch], eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 D7 ED FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x41cd30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp - 68h]
        lea edi, [ebp - 78h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov edx, dword ptr [ecx + 10h]
        lea eax, [eax + eax*2]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        shl eax, 4
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov eax, dword ptr [eax + edx + 4]
        lea esi, [ebp - 78h]
        add eax, dword ptr [ecx + 8]
        mov edi, eax
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov esi, dword ptr [ebp - 34h]
        xor edi, edi
        ; Exact mapped bytes EB 54: jmp 0x41cd30
        __asm _emit 0xeb
        __asm _emit 0x54
        push edi
        push 8
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 DE AC FF FF: call 0x4179c5
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 54h]
        lea eax, [ebp - 10h]
        push eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 82 ED FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 18: je 0x41cd15
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + edx + 4]
        add eax, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x41cd17
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 54h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 10h]
        push dword ptr [ecx + edx + 10h]
        push dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 CE 4A 00 00: call 0x4217fb
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebx + 50h]
        lea ecx, [ebp - 0b0h]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [ebx + 50h]
        ; Exact mapped bytes E8 88 02 00 00: call 0x41cfcc
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 50h]
        mov eax, dword ptr [ebx + 54h]
        push dword ptr [ebp - 48h]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp - 0b0h]
        ; Exact mapped bytes E8 BE 02 00 00: call 0x41d023
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        inc dword ptr [ebp - 40h]
        ; Exact mapped bytes E9 64 F9 FF FF: jmp 0x41c6e2
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [ebp - 1ch], 28h
        add dword ptr [ebp - 20h], 30h
        inc esi
        cmp esi, dword ptr [ebx + 10h]
        mov dword ptr [ebp - 34h], esi
        ; Exact mapped bytes 0F 8E 42 F9 FF FF: jle 0x41c6d5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], edi
        ; Exact mapped bytes 7E 03: jle 0x41cd9b
        __asm _emit 0x7e
        __asm _emit 0x03
        mov dword ptr [ebx + 44h], edi
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
        cmp dword ptr [ebx + 0ch], edi
        lea ecx, [ebx + 0ch]
        ; Exact mapped bytes 75 12: jne 0x41cdc6
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebx + 8]
        push ecx
        push 440458h
        push eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp eax, edi
        ; Exact mapped bytes 7C D5: jl 0x41cd9b
        __asm _emit 0x7c
        __asm _emit 0xd5
        cmp dword ptr [ebx + 10h], edi
        mov dword ptr [ebp - 20h], edi
        ; Exact mapped bytes 0F 8E 42 01 00 00: jle 0x41cf14
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], edi
        mov eax, dword ptr [ebx + 14h]
        mov ecx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ecx + eax + 24h]
        mov eax, dword ptr [eax + 4]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 17 01 00 00: je 0x41cf01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40h]
        lea edx, [edx + edx*2]
        shl edx, 4
        mov dword ptr [ebp - 1ch], edx
        mov ecx, eax
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 10h], ecx
        add ecx, 0a4h
        cmp dword ptr [ecx], edi
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x41cef0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [ebp - 18h]
        push 1
        pop esi
        mov dword ptr [ecx], edi
        cmp dword ptr [ebp - 18h], esi
        ; Exact mapped bytes 75 2F: jne 0x41ce4d
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [ebx + 0ch]
        lea edx, [ebp - 44h]
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        cmp eax, edi
        ; Exact mapped bytes 0F 8C 6A FF FF FF: jl 0x41cd9d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 44h], esi
        ; Exact mapped bytes 75 12: jne 0x41ce4a
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebx + 0ch]
        push esi
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp eax, edi
        ; Exact mapped bytes 0F 8C 53 FF FF FF: jl 0x41cd9d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + 44h], esi
        push 10h
        lea eax, [ebp - 58h]
        pop esi
        push eax
        ; Exact mapped bytes E8 B1 AB FF FF: call 0x417a0a
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], 2
        lea ecx, [eax + 0a8h]
        mov dword ptr [ebp - 48h], ecx
        movzx eax, word ptr [ecx]
        cmp eax, edi
        ; Exact mapped bytes 7C 27: jl 0x41ce9a
        __asm _emit 0x7c
        __asm _emit 0x27
        cmp eax, 1
        ; Exact mapped bytes 7E 1F: jle 0x41ce97
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp eax, 8
        ; Exact mapped bytes 74 07: je 0x41ce84
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 0ah
        ; Exact mapped bytes 74 15: je 0x41ce97
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes EB 16: jmp 0x41ce9a
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 0b0h]
        ; Exact mapped bytes 66 39 38: cmp word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x38
        ; Exact mapped bytes 75 08: jne 0x41ce9a
        __asm _emit 0x75
        __asm _emit 0x08
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 0C: jmp 0x41cea3
        __asm _emit 0xeb
        __asm _emit 0x0c
        or esi, 0ffffffffh
        push ecx
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 4D AB FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 3ch]
        mov ecx, dword ptr [ebp - 1ch]
        add eax, ecx
        mov dword ptr [ebp - 80h], edi
        mov dword ptr [ebp - 7ch], 1
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [ebp - 70h], esi
        mov dword ptr [ebp - 78h], ecx
        lea ecx, [ebp - 58h]
        mov dword ptr [ebp - 6ch], ecx
        mov ecx, dword ptr [ebx + 0ch]
        lea esi, [ebp - 80h]
        mov dword ptr [ebp - 74h], edi
        mov edx, dword ptr [ecx]
        push esi
        push eax
        push ecx
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        push dword ptr [ebp - 48h]
        ; Exact mapped bytes 8B 35 48 C3 43 00: mov esi, dword ptr [0x43c348]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        or dword ptr [ebp - 4], 0ffffffffh
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 1ch]
        inc dword ptr [ebp - 40h]
        add edx, 30h
        cmp eax, edi
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 0F 85 F5 FE FF FF: jne 0x41cdf6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        inc dword ptr [ebp - 20h]
        add dword ptr [ebp - 34h], 28h
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebx + 10h]
        ; Exact mapped bytes 0F 8C C1 FE FF FF: jl 0x41cdd5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 1ch]
        cmp eax, edi
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 74 7E: je 0x41cf9c
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 1ch]
        mov esi, dword ptr [eax + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 4ch]
        cmp eax, edi
        ; Exact mapped bytes 74 65: je 0x41cf97
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, dword ptr [eax]
        lea edx, [ebp - 10h]
        push edx
        push 440820h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 53: jl 0x41cf97
        __asm _emit 0x7c
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 10h]
        push dword ptr [esi + 8]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x41cf8e
        __asm _emit 0x75
        __asm _emit 0x3a
        inc dword ptr [ebp - 18h]
        push 1
        pop esi
        cmp dword ptr [ebp - 18h], esi
        ; Exact mapped bytes 75 2F: jne 0x41cf8e
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [ebx + 0ch]
        lea edx, [ebp - 3ch]
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        cmp eax, edi
        ; Exact mapped bytes 0F 8C 29 FE FF FF: jl 0x41cd9d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 3ch], esi
        ; Exact mapped bytes 75 12: jne 0x41cf8b
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebx + 0ch]
        push esi
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp eax, edi
        ; Exact mapped bytes 0F 8C 12 FE FF FF: jl 0x41cd9d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + 44h], esi
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 1ch], edi
        ; Exact mapped bytes 75 82: jne 0x41cf1e
        __asm _emit 0x75
        __asm _emit 0x82
        cmp dword ptr [ebp - 18h], edi
        ; Exact mapped bytes 0F 8E F6 FD FF FF: jle 0x41cd9b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 0ch]
        push edi
        push edi
        push edi
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        mov esi, eax
        mov dword ptr [ebx + 44h], edi
        cmp esi, edi
        ; Exact mapped bytes 0F 8D DD FD FF FF: jge 0x41cd9b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov eax, esi
        ; Exact mapped bytes E9 D1 FD FF FF: jmp 0x41cd9d
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
