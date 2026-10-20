// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AC940 .. +0x61B bytes.
extern "C" __declspec(naked) void FUN_586ac940_586AC940() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 56: je 0x586ac9ae
        __asm _emit 0x74
        __asm _emit 0x56
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586ac96a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 3E: jge 0x586ac9ae
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 88 31 E0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x31
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x586ac9ac
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6C 31 E0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x31
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 9F DD FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x9f
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B3: jmp 0x586ac961
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 9ch], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 56 05 00 00: je 0x586acf1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 0E 80 DD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x80
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 40 05 00 00: je 0x586acf1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 3ch], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 B2 DD FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 40 0C: movsx eax, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x0c
        add eax, 1bch
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 B2 DD FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 48 0A: movsx ecx, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0a
        add ecx, 200h
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F8 8B 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8b
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 40h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 49 95 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x95
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 2A 95 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x95
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 0C 95 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x95
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 ED 94 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x94
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 CE 94 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x94
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 0
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 28h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 28h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586acafb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 D7 7E DD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x7e
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D 18 03 00 00: jge 0x586ace39
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 B1 7E DD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x7e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 270h]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes 0F 85 E9 02 00 00: jne 0x586ace34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 87 7E DD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x7e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 268h]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 63 7E DD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 26ch]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x586acc4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x586acc4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        cmp dword ptr [ebp + eax - 28h], 0
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x586acc4b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f8h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 B0 DD FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 54 48 4E: movsx edx, word ptr [eax + ecx*2 + 0x4e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x4e
        add edx, 1bch
        mov dword ptr [ebp - 58h], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 B0 DD FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 54 48 0E: movsx edx, word ptr [eax + ecx*2 + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x0e
        add edx, 200h
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 09 8A 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 60h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 5A 93 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x93
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov dword ptr [ebp + edx - 28h], 1
        ; Exact mapped bytes E9 E9 01 00 00: jmp 0x586ace34
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x586accfd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x586accfd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [ebp + ecx - 28h], 0
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x586accfd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 6ch], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 AF DD FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 54 48 4E: movsx edx, word ptr [eax + ecx*2 + 0x4e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x4e
        add edx, 1bch
        mov dword ptr [ebp - 64h], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 AF DD FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 54 48 0E: movsx edx, word ptr [eax + ecx*2 + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x0e
        add edx, 200h
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 57 89 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 70h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 A8 92 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [ebp + ecx - 28h], 1
        ; Exact mapped bytes E9 37 01 00 00: jmp 0x586ace34
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 7F: jne 0x586acd82
        __asm _emit 0x75
        __asm _emit 0x7f
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 79: je 0x586acd82
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 7ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB AE DD FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xae
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 44 50 4E: movsx eax, word ptr [eax + edx*2 + 0x4e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x4e
        add eax, 1bch
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 AE DD FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xae
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 54 48 0E: movsx edx, word ptr [eax + ecx*2 + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x0e
        add edx, 200h
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 C2 88 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 80h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 14 92 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x586ace34
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x586ace34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x586ace34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x586ace34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 8ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 AE DD FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xae
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 44 50 4E: movsx eax, word ptr [eax + edx*2 + 0x4e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x4e
        add eax, 1bch
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 AE DD FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xae
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 54 48 0E: movsx edx, word ptr [eax + ecx*2 + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x0e
        add edx, 200h
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 18 88 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 90h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 63 91 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x91
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes E9 B9 FC FF FF: jmp 0x586acaf2
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ace52
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 2D: jge 0x586ace85
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 9A 2C E0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2c
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x586ace83
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB C4: jmp 0x586ace49
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov dword ptr [ebp - 8], 5
        ; Exact mapped bytes EB 09: jmp 0x586ace97
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 3B 7B DD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7b
        __asm _emit 0xdd
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
        add ecx, 5
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7D 23: jge 0x586acedb
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f8h]
        mov dword ptr [ebp - 98h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 B8 90 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B3: jmp 0x586ace8e
        __asm _emit 0xeb
        __asm _emit 0xb3
        ; Exact mapped bytes EB 09: jmp 0x586acee6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 23: jge 0x586acf0f
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0f8h]
        mov dword ptr [ebp - 9ch], edx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 84 90 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x586acedd
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 EB FF FF: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3B: jmp 0x586acf55
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586acf2c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 7D 23: jge 0x586acf55
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0f8h]
        mov dword ptr [ebp - 0a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 3E 90 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x90
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x586acf23
        __asm _emit 0xeb
        __asm _emit 0xce
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
