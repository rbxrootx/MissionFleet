// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D16A0 .. +0xBB6 bytes.
extern "C" __declspec(naked) void FUN_584d16a0_584D16A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b8h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 48 08: movsx ecx, byte ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x08
        cmp ecx, 8
        ; Exact mapped bytes 0F 85 86 04 00 00: jne 0x584d1b43
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0fch]
        cmp ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes 0F 84 4E 01 00 00: je 0x584d1823
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0f8h]
        cmp ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes 7D 1A: jge 0x584d170a
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 18: jmp 0x584d1722
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 12: jmp 0x584d173c
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC FE FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 7D 23: jge 0x584d176c
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 80h]
        mov esi, dword ptr [ebp - 1ch]
        mov dl, byte ptr [edx + esi]
        mov byte ptr [ecx + eax], dl
        ; Exact mapped bytes EB BE: jmp 0x584d172a
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov byte ptr [edx + eax], 0
        mov eax, dword ptr [ebp - 30h]
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0fch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 94h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        add edx, 1
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 100h]
        push ecx
        ; Exact mapped bytes E8 19 B6 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb6
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E FE FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 94h], eax
        ; Exact mapped bytes 7E 11: jle 0x584d181e
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B FE FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 94h], eax
        ; Exact mapped bytes E9 14 03 00 00: jmp 0x584d1b37
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 FE FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 04 03 00 00: je 0x584d1b37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 0F 84 F4 02 00 00: je 0x584d1b37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 05 80 BF 90 58: movzx eax, word ptr [0x5890bf80]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        cmp eax, 804h
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x584d190d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584d1867
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 57: jge 0x584d18c4
        __asm _emit 0x7d
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0bch], 0
        ; Exact mapped bytes 74 45: je 0x584d18c2
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0bch]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 17: je 0x584d18aa
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584d18b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 0bch], 0
        ; Exact mapped bytes EB 9A: jmp 0x584d185e
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 3D: je 0x584d190d
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 17: je 0x584d18f9
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 50h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d1900
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 0b8h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 94h], 1
        ; Exact mapped bytes 0F 8E D8 00 00 00: jle 0x584d1a04
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        movzx edx, byte ptr [ecx + edx - 1]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 FD FF FF: call 0x584d1690
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x584d1a04
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes 0F BE 54 11 FF: movsx edx, byte ptr [ecx + edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0xff
        and edx, 80h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x584d1a04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC FC FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        lea eax, [edx + eax - 2]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 C1 AE 37 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xae
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        sub edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], 0
        push -2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 23 00 00: call 0x584d3d20
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x584d1a97
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 0F 8E 83 00 00 00: jle 0x584d1a97
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 FC FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        lea eax, [edx + eax - 1]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        ; Exact mapped bytes E8 29 AE 37 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xae
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], 0
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 22 00 00: call 0x584d3d20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 FB FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 70h]
        add ecx, dword ptr [ebp - 74h]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 7E 74: jle 0x584d1b37
        __asm _emit 0x7e
        __asm _emit 0x74
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        movzx ecx, byte ptr [eax + ecx - 1]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB FB FF FF: call 0x584d1690
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 36: jne 0x584d1b22
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 0F BE 4C 08 FF: movsx ecx, byte ptr [eax + ecx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0xff
        and ecx, 80h
        ; Exact mapped bytes 74 17: je 0x584d1b22
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        sub eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], eax
        ; Exact mapped bytes EB 15: jmp 0x584d1b37
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], eax
        xor eax, eax
        ; Exact mapped bytes E9 1B 07 00 00: jmp 0x584d2259
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 03 00 00: jmp 0x584d1f08
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 42 08: movsx eax, byte ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x08
        cmp eax, 0dh
        ; Exact mapped bytes 75 17: jne 0x584d1b66
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 F8 06 00 00: jmp 0x584d2259
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A2 03 00 00: jmp 0x584d1f08
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 51 08: movsx edx, byte ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x08
        cmp edx, 1bh
        ; Exact mapped bytes 75 05: jne 0x584d1b77
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 91 03 00 00: jmp 0x584d1f08
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 48 08: movsx ecx, byte ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x08
        cmp ecx, 9
        ; Exact mapped bytes 75 05: jne 0x584d1b88
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 80 03 00 00: jmp 0x584d1f08
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 FA FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        sub ecx, 1
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 64 03 00 00: jge 0x584d1f08
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ech], 0
        ; Exact mapped bytes 0F 85 54 03 00 00: jne 0x584d1f08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 80h
        ; Exact mapped bytes 0F 83 3D 03 00 00: jae 0x584d1f01
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ech], 0
        ; Exact mapped bytes 0F 85 2D 03 00 00: jne 0x584d1f01
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0fch]
        cmp ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x584d1d14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0f8h]
        cmp ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes 7D 1A: jge 0x584d1c21
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 18: jmp 0x584d1c39
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 12: jmp 0x584d1c53
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 F9 FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 7D 23: jge 0x584d1c83
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 80h]
        mov esi, dword ptr [ebp - 24h]
        mov dl, byte ptr [edx + esi]
        mov byte ptr [ecx + eax], dl
        ; Exact mapped bytes EB BE: jmp 0x584d1c41
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov byte ptr [edx + eax], 0
        mov eax, dword ptr [ebp - 3ch]
        sub eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0fch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 94h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 F9 FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 94h], eax
        ; Exact mapped bytes 7E 11: jle 0x584d1d14
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 F9 FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 94h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 F9 FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 94h], eax
        ; Exact mapped bytes 7D 48: jge 0x584d1d6f
        __asm _emit 0x7d
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 F9 FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 09: jmp 0x584d1d40
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes 7C 21: jl 0x584d1d6f
        __asm _emit 0x7c
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov ecx, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 14h]
        mov al, byte ptr [eax + esi]
        mov byte ptr [edx + ecx + 1], al
        ; Exact mapped bytes EB C8: jmp 0x584d1d37
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov eax, dword ptr [ebp + 8]
        mov al, byte ptr [eax + 8]
        mov byte ptr [ecx + edx], al
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [eax + 8ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 40h]
        add eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 78h]
        add ecx, dword ptr [ebp - 7ch]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 84h], ecx
        lea edx, [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 94h]
        sub edx, dword ptr [ecx + 98h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 98h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 7C FF FF FF: call dword ptr [ebp - 0x84]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 79 4B FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, eax
        add esi, dword ptr [ebp - 0ach]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 3A FC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 8C A2 00 00 00: jl 0x584d1f01
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 0F BE 14 0A: movsx edx, byte ptr [edx + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x0a
        test edx, edx
        ; Exact mapped bytes 7D 17: jge 0x584d1e90
        __asm _emit 0x7d
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        add ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], ecx
        ; Exact mapped bytes EB 15: jmp 0x584d1ea5
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8ch], edx
        lea eax, [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 94h]
        sub eax, dword ptr [edx + 98h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 98h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 74 FF FF FF: call dword ptr [ebp - 0x8c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3B FF FF FF: jmp 0x584d1e3c
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 51 03 00 00: jmp 0x584d2259
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ech], 0
        ; Exact mapped bytes 0F 84 3B 03 00 00: je 0x584d2253
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 3
        ; Exact mapped bytes 75 4A: jne 0x584d1f6b
        __asm _emit 0x75
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        push eax
        ; Exact mapped bytes E8 D1 AE 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xae
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 100h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        push eax
        ; Exact mapped bytes E8 18 22 2E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 16h
        ; Exact mapped bytes 0F 85 D7 02 00 00: jne 0x584d224f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        push eax
        ; Exact mapped bytes E8 F9 F1 37 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf1
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C F6 FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, eax
        mov ecx, dword ptr [ebp - 4]
        cmp esi, dword ptr [ecx + 90h]
        ; Exact mapped bytes 72 07: jb 0x584d1fa8
        __asm _emit 0x72
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B1 02 00 00: jmp 0x584d2259
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584d1fba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        push ecx
        ; Exact mapped bytes E8 B7 F1 37 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf1
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 0F 83 09 01 00 00: jae 0x584d20de
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 94h]
        cmp ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 0F 8D EC 00 00 00: jge 0x584d20d9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3B F6 FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 94h], eax
        ; Exact mapped bytes 7D 48: jge 0x584d2048
        __asm _emit 0x7d
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 F6 FF FF: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 09: jmp 0x584d2019
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        sub eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 7C 21: jl 0x584d2048
        __asm _emit 0x7c
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov edx, dword ptr [ebp - 18h]
        mov esi, dword ptr [ebp - 18h]
        mov cl, byte ptr [ecx + esi]
        mov byte ptr [eax + edx + 1], cl
        ; Exact mapped bytes EB C8: jmp 0x584d2010
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 80h]
        mov esi, dword ptr [ebp - 2ch]
        mov al, byte ptr [eax + esi]
        mov byte ptr [ecx + edx], al
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        add edx, 1
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [eax + 8ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 44h]
        add eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 90h]
        add ecx, dword ptr [ebp - 94h]
        mov byte ptr [ecx], 0
        ; Exact mapped bytes E9 D3 FE FF FF: jmp 0x584d1fb1
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0fch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f0h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        push eax
        ; Exact mapped bytes E8 E0 AC 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xac
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 9ch], eax
        lea ecx, [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 94h]
        sub ecx, dword ptr [eax + 98h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 98h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 64 FF FF FF: call dword ptr [ebp - 0x9c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 2B 48 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, eax
        add esi, dword ptr [ebp - 0b4h]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 37 FC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 8C A2 00 00 00: jl 0x584d224f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        ; Exact mapped bytes 0F BE 0C 01: movsx ecx, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x01
        test ecx, ecx
        ; Exact mapped bytes 7D 17: jge 0x584d21de
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        add eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], eax
        ; Exact mapped bytes EB 15: jmp 0x584d21f3
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0a4h], ecx
        lea edx, [ebp - 0b4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 94h]
        sub edx, dword ptr [ecx + 98h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 98h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 5C FF FF FF: call dword ptr [ebp - 0xa4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3B FF FF FF: jmp 0x584d218a
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x584d2259
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
    }
}
