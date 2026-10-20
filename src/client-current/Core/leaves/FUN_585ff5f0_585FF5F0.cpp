// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FF5F0 .. +0xC0C bytes.
extern "C" __declspec(naked) void FUN_585ff5f0_585FF5F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0f8h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ff60f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 8D 9A 00 00 00: jge 0x585ff6b3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 3b8h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A2 68 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3b8h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7D 68 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 58 68 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 3d8h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 33 68 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x585ff606
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3f8h]
        mov dword ptr [ebp - 40h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 17 68 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 394h]
        mov dword ptr [ebp - 44h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 01 68 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 42ch]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 0f3h
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 31 60 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x60
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 42ch]
        mov dword ptr [ebp - 4ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 7B 68 E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 430h]
        mov dword ptr [ebp - 50h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 65 68 E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ff73e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 1D: jge 0x585ff761
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 2f4h]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 82 67 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x67
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585ff735
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ff773
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 34: jge 0x585ff7ad
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 408h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 5
        push ecx
        ; Exact mapped bytes 8B 0D 84 07 96 58: mov ecx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 53 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 86 67 E8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x67
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BD: jmp 0x585ff76a
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 904h]
        mov dword ptr [ebp - 60h], ecx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 1D 67 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x67
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 908h]
        mov dword ptr [ebp - 64h], eax
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 07 67 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x67
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ff7f2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 38: jge 0x585ff830
        __asm _emit 0x7d
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx*4 + 58948c34h]
        ; Exact mapped bytes E8 A9 36 FD FF: call 0x585d2eb0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x585ff82e
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 374h]
        mov dword ptr [ebp - 68h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 6B 67 E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x67
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB B9: jmp 0x585ff7e9
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx*4 + 58948c34h]
        ; Exact mapped bytes E8 51 79 ED FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x79
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 0e8h], 0
        mov dword ptr [ebp - 0ech], 0
        mov dword ptr [ebp - 0f0h], 0
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], 0
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 3d8h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 4fch]
        imul edx, dword ptr [ebp + 8], 18h
        mov eax, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + edx + 43ch]
        sub ecx, edx
        imul eax, ecx, 0ah
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 A5 48 F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 4fdh]
        imul edx, dword ptr [ebp + 8], 18h
        mov eax, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + edx + 43dh]
        sub ecx, edx
        imul eax, ecx, 0ah
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 5E 48 F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 4feh]
        imul edx, dword ptr [ebp + 8], 18h
        mov eax, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + edx + 43eh]
        sub ecx, edx
        imul eax, ecx, 0ah
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 18 48 F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 4ffh]
        imul eax, dword ptr [ebp + 8], 18h
        mov ecx, dword ptr [ebp - 4]
        movzx eax, byte ptr [ecx + eax + 43fh]
        sub edx, eax
        imul ecx, edx, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 D1 47 F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x47
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 3b8h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 4fch]
        imul ecx, dword ptr [ebp + 8], 18h
        mov edx, dword ptr [ebp - 4]
        movzx ecx, byte ptr [edx + ecx + 43ch]
        sub eax, ecx
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 BD B7 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb7
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 3b8h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 4fdh]
        imul eax, dword ptr [ebp + 8], 18h
        mov ecx, dword ptr [ebp - 4]
        movzx eax, byte ptr [ecx + eax + 43dh]
        sub edx, eax
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 79 B7 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb7
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3b8h]
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 4feh]
        imul edx, dword ptr [ebp + 8], 18h
        mov eax, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + edx + 43eh]
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 30 B7 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb7
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 3b8h]
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 4ffh]
        imul edx, dword ptr [ebp + 8], 18h
        mov eax, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + edx + 43fh]
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E6 B6 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xb6
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 8ch], eax
        imul ecx, dword ptr [ebp - 1ch], 0ah
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 31 45 F0 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 10h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 3d8h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 90h], ecx
        imul edx, dword ptr [ebp - 1ch], 0ah
        push edx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 FC 44 F0 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 94h], edx
        imul eax, dword ptr [ebp - 1ch], 0ah
        push eax
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 C8 44 F0 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x44
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 3d8h]
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 98h], ecx
        imul edx, dword ptr [ebp - 1ch], 0ah
        push edx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 93 44 F0 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x44
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 9ch], eax
        imul ecx, dword ptr [ebp + 8], 18h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 43ch]
        imul ecx, eax, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 A2 45 F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 10h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 3d8h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0a0h], ecx
        imul edx, dword ptr [ebp + 8], 18h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 43dh]
        imul edx, ecx, 0ah
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 61 45 F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 0a4h], edx
        imul eax, dword ptr [ebp + 8], 18h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 43eh]
        imul eax, edx, 0ah
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 21 45 F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 3d8h]
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0a8h], ecx
        imul edx, dword ptr [ebp + 8], 18h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 43fh]
        imul edx, ecx, 0ah
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 E0 44 F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x44
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 3b8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 0ach], eax
        imul ecx, dword ptr [ebp + 8], 18h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 43ch]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 D2 B4 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb4
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 3b8h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0b0h], eax
        imul ecx, dword ptr [ebp + 8], 18h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 43dh]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 94 B4 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb4
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 3b8h]
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0b4h], eax
        imul ecx, dword ptr [ebp + 8], 18h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 43eh]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 57 B4 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb4
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 3b8h]
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0b8h], ecx
        imul edx, dword ptr [ebp + 8], 18h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 43fh]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 19 B4 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb4
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D A6 FF FF: call 0x585fa410
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB BB FF FF: call 0x585fb980
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A C1 E8 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x585ffdb6
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7D C3 E8 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 27: je 0x585ffde3
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 EC D1 E8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd1
        __asm _emit 0xe8
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 0bch]
        ; Exact mapped bytes 74 15: je 0x585ffde1
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7C 18 ED FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x585ffde1
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 02: jmp 0x585ffde3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C8: jmp 0x585ffdab
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ffdf5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes 7D 15: jge 0x585ffe18
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0d4h]
        ; Exact mapped bytes E8 7B 7E 13 00: call 0x58737c90
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x7e
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D4: jmp 0x585ffdec
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ffe2a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes 7D 15: jge 0x585ffe4a
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2d4h]
        ; Exact mapped bytes E8 49 7E 13 00: call 0x58737c90
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7e
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D7: jmp 0x585ffe21
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 394h]
        mov dword ptr [ebp - 0c0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 D5 F9 E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 C0 E8 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x585ffe8d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A6 C2 E8 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 5E 03 00 00: je 0x586001f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 81 D2 E8 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x585ffea5
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB DD: jmp 0x585ffe82
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 03 D1 E8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd1
        __asm _emit 0xe8
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 3A 03 00 00: jne 0x586001f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
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
        ; Exact mapped bytes E8 0F 74 ED FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x585ffed9
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 6A E8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6a
        __asm _emit 0xe8
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F 84 17 03 00 00: je 0x586001f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1F B7 F5 FF: call 0x5855b600
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb7
        __asm _emit 0xf5
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BB D0 E8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E BA FF FF: call 0x585fb980
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 43: jne 0x585fff49
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F B9 FF FF: call 0x585fb880
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x585fff3f
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 C0 E8 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 4A E8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 4B E8 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x4b
        __asm _emit 0xe8
        __asm _emit 0xff
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 08: je 0x585fff3f
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 08: jmp 0x585fff47
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 10h]
        shl eax, 1
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 78: jmp 0x585fffc1
        __asm _emit 0xeb
        __asm _emit 0x78
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 74 68: je 0x585fffc1
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 74 58: je 0x585fffc1
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 74 48: je 0x585fffc1
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 74 38: je 0x585fffc1
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 74 28: je 0x585fffc1
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 74 18: je 0x585fffc1
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 74 08: je 0x585fffc1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        shr ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 74 60: je 0x58600031
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 74 50: je 0x58600031
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 74 40: je 0x58600031
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 74 30: je 0x58600031
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 74 20: je 0x58600031
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 74 10: je 0x58600031
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 59 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 61: jne 0x58600092
        __asm _emit 0x75
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 77 CF E8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xcf
        __asm _emit 0xe8
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A B9 FF FF: call 0x585fb980
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 48: jne 0x58600092
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EE C3 E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A7 BE E8 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0xff
        add eax, 6
        mov dword ptr [ebp - 0f8h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 2A: je 0x58600092
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes F2 0F 2A 45 D8: cvtsi2sd xmm0, dword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 28h]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 A8 5A 89 58: mulsd xmm0, qword ptr [0x58895aa8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 15 23 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x15
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d4h]
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 63 2D FD FF: call 0x585d2e10
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        push 0bh
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C1 12 16 00: call 0x58761380
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x12
        __asm _emit 0x16
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x586000ea
        __asm _emit 0x74
        __asm _emit 0x27
        push 0bh
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B1 12 16 00: call 0x58761380
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x16
        __asm _emit 0x00
        imul esi, eax, 64h
        push 0bh
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A2 12 16 00: call 0x58761380
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x12
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586000f1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 37 55 E9 FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x55
        __asm _emit 0xe9
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D0 B4 F5 FF: call 0x5855b5e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 32 26 FD FF: call 0x585d2750
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 14 C3 E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2D 49 E8 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x49
        __asm _emit 0xe8
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BC 9F EA FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x9f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        push 0
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 DF 77 13 00: call 0x58737970
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x77
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0d4h]
        mov dword ptr [ebp - 0e0h], edx
        push 0ah
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 59 7C 13 00: call 0x58737e10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x7c
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d4h]
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        imul eax, dword ptr [ebp - 14h], 0eh
        lea ecx, [edx + eax + 123h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 49 55 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x55
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes E9 8D FC FF FF: jmp 0x585ffe82
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
