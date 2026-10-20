// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58691950 .. +0x527 bytes.
extern "C" __declspec(naked) void FUN_58691950_58691950() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 118h], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5869197b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 8D FD 00 00 00: jge 0x58691a84
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6e8h]
        mov dword ptr [ebp - 10h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EF 45 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x45
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6e8h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        imul eax, dword ptr [ebp - 8], 27h
        lea ecx, [edx + eax + 0fh]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E8 3C 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6c0h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        imul ecx, dword ptr [ebp - 8], 27h
        lea edx, [eax + ecx + 5]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C1 3C 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3c
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6ach]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        imul edx, dword ptr [ebp - 8], 27h
        lea eax, [ecx + edx + 5]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9A 3C 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x3c
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6d4h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        imul eax, dword ptr [ebp - 8], 27h
        lea ecx, [edx + eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 73 3C 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3c
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6d4h]
        mov dword ptr [ebp - 24h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 39 45 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 67ch]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        imul ecx, dword ptr [ebp - 8], 27h
        lea edx, [eax + ecx + 5]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 32 3C 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x3c
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EE FE FF FF: jmp 0x58691972
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x58691a95
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 8D CB 00 00 00: jge 0x58691b6a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6e8h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D7 44 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x44
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6e8h]
        mov dword ptr [ebp - 30h], ecx
        push 500h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 DA 3B 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3b
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6c0h]
        mov dword ptr [ebp - 34h], ecx
        push 500h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BD 3B 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x3b
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ach]
        mov dword ptr [ebp - 38h], ecx
        push 500h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A0 3B 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3b
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6d4h]
        mov dword ptr [ebp - 3ch], ecx
        push 500h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 83 3B 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3b
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6d4h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 49 44 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x44
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 67ch]
        mov dword ptr [ebp - 44h], ecx
        push 500h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 4C 3B 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3b
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 22 FF FF FF: jmp 0x58691a8c
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58691b83
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 7A: jge 0x58691c03
        __asm _emit 0x7d
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 70ch]
        mov dword ptr [ebp - 48h], edx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 3D 43 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x43
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx*4 + 5e4h]
        mov dword ptr [ecx + eax*4 + 5f4h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5e4h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 5f4h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC C1 EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5f4h]
        xor edx, 55h
        ; Exact mapped bytes 74 07: je 0x58691bfe
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x58691b7a
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 70ch]
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BE 42 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 700h]
        mov dword ptr [ebp - 50h], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 58 95 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 708h]
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 4D DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x4d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA A7 DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 2D DF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x2d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 50 10: and dx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x10
        movzx eax, dx
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 18 95 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E F6 FF FF: call 0x586912f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x58691d6f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 71ch]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 34 42 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x42
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 71ch]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 15 42 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x42
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 71ch]
        mov dword ptr [ebp - 64h], edx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 F7 41 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 740h]
        mov dword ptr [ebp - 68h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 E1 41 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 754h]
        mov dword ptr [ebp - 6ch], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 CB 41 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 758h]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 B5 41 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 744h]
        mov dword ptr [ebp - 74h], eax
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 96 41 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 744h]
        mov dword ptr [ebp - 78h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 77 41 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x58691e70
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 71ch]
        mov dword ptr [ebp - 7ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 52 41 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 71ch]
        mov dword ptr [ebp - 80h], ecx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 33 41 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 71ch]
        mov dword ptr [ebp - 84h], ecx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 0F 41 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 740h]
        mov dword ptr [ebp - 88h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 F3 40 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 754h]
        mov dword ptr [ebp - 8ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 D7 40 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 758h]
        mov dword ptr [ebp - 90h], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 BB 40 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 744h]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 96 40 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 744h]
        mov dword ptr [ebp - 98h], edx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 71 40 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
