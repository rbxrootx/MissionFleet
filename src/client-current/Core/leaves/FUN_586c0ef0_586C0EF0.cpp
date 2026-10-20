// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C0EF0 .. +0x61D bytes.
extern "C" __declspec(naked) void FUN_586c0ef0_586C0EF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ach]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 58h
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FC 47 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 0f0h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DC 47 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 19ch]
        mov dword ptr [ebp - 14h], edx
        push 588b0e13h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 33 51 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 45 F9 0F 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FF A1 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa1
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 250h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E9 A1 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 B0 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xb0
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 0d8h
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 61 47 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD B0 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb0
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 0ech
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 39 47 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D3 4E DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 250h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BD 4E DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F7 4E DC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c104c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0bh
        ; Exact mapped bytes 7D 20: jge 0x586c1072
        __asm _emit 0x7d
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1b0h]
        mov dword ptr [ebp - 3ch], edx
        push 588b0e27h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 31 50 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x50
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x586c1043
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c1084
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 8D 92 00 00 00: jge 0x586c1120
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A B0 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb0
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 0d4h
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 76 46 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x46
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1e8h]
        mov dword ptr [ebp - 4ch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE AF DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xaf
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 0e8h
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 4A 46 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x46
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1dch]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E0 4D DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x4d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1e8h]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C6 4D DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4d
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x586c107b
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c1132
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 9
        ; Exact mapped bytes 7D 1D: jge 0x586c1155
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1f4h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 8E 4D DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4d
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586c1129
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21ch]
        mov dword ptr [ebp - 5ch], edx
        push 588b0e35h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 32 4F DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 60h]
        ; Exact mapped bytes E8 6E 3C 07 00: call 0x58734df0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c1195
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        ; Exact mapped bytes E8 07 46 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x46
        __asm _emit 0xdd
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 83 E2 00 00 00: jae 0x586c1294
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A0 27 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 57 DC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x57
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 19fh
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 C1 44 0F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 63 27 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 AE DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xae
        __asm _emit 0xdc
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 8], 14h
        lea edx, [eax + ecx + 113h]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 FE 44 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 20 27 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 83 4C DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 F5 26 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 52 4B DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x4b
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F8 FE FF FF: jmp 0x586c118c
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        ; Exact mapped bytes E8 48 3B 07 00: call 0x58734df0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c12bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        ; Exact mapped bytes E8 E1 44 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x44
        __asm _emit 0xdd
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 83 18 01 00 00: jae 0x586c13f0
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 74 26 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 56 DC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x56
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 19fh
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 89 43 0F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 25 26 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 AD DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 8], 14h
        lea edx, [eax + ecx + 163h]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 B4 43 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 D0 25 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 2D 4B DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 0a8h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 99 25 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 F6 49 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x49
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C2 FE FF FF: jmp 0x586c12b2
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 0b4h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 55 DC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x55
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 2a8h
        mov dword ptr [ebp - 0b0h], eax
        mov edx, dword ptr [ebp - 0b0h]
        push edx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 8C 42 0F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 0bch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 AC DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xac
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 18bh
        mov dword ptr [ebp - 0b8h], eax
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 D8 42 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 38 00 00: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 38 00 00: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c1483
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 53: jge 0x586c14dc
        __asm _emit 0x7d
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 258h]
        mov dword ptr [ebp - 0c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 E7 4A DC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 258h]
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 4
        add ecx, 186h
        push ecx
        push 1deh
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 47 41 0F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 9E: jmp 0x586c147a
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c14ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 15: jge 0x586c1509
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 22ch]
        ; Exact mapped bytes E8 BA F3 0F 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x586c14e5
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov esp, ebp
        pop ebp
        ret
    }
}
