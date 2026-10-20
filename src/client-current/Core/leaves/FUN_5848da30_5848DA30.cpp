// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848DA30 .. +0x740 bytes.
extern "C" __declspec(naked) void FUN_5848da30_5848DA30() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 68h
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 D3 60 0D 00: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x60
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 B9 E9 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 52 6F FF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0ch]
        lea edx, [eax + ecx*4 + 168h]
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 0F BF 14 0A: movsx edx, word ptr [edx + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x0a
        imul esi, edx, 0ah
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 B1 E9 FF FF: call 0x5848c460
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + eax + 384h]
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 7B E9 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 14 6F FF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebx + 0ch]
        lea eax, [eax + edx*4 + 168h]
        mov ecx, 2
        shl ecx, 0
        ; Exact mapped bytes 0F BF 14 08: movsx edx, word ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x08
        imul esi, edx, 0ah
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 73 E9 FF FF: call 0x5848c460
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + eax + 384h]
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        cdq
        mov ecx, 0e10h
        idiv ecx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 45 F8: movsx eax, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xf8
        cdq
        mov ecx, 0e10h
        idiv ecx
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 4C 10 5C: movsx ecx, word ptr [eax + edx + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x5c
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 50 01 00 00: jne 0x5848dc7d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + edx + 88h], 0
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x5848dc6c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 88h]
        ; Exact mapped bytes E8 FB 3A 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x3a
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x5848dc5e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + eax + 88h]
        ; Exact mapped bytes E8 CD E3 FF FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5848db7c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E9 05 00 00: jmp 0x5848e165
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 88h]
        ; Exact mapped bytes E8 31 8E FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 88h]
        ; Exact mapped bytes E8 9C E3 FF FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 E3 FF FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 0fh
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edi, eax
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 88h]
        ; Exact mapped bytes E8 55 E1 FF FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax*4 + 589490f0h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        imul edi, edx
        mov eax, edi
        cdq
        mov ecx, 3e8h
        idiv ecx
        sub esi, eax
        mov dword ptr [ebp - 58h], esi
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 88h]
        ; Exact mapped bytes E8 B1 E4 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 88h]
        ; Exact mapped bytes E8 2C E3 FF FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A5 E2 FF FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 0fh
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edi, eax
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 88h]
        ; Exact mapped bytes E8 E5 E0 FF FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax*4 + 5894c930h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        imul edi, edx
        mov eax, edi
        cdq
        mov ecx, 3e8h
        idiv ecx
        sub esi, eax
        mov dword ptr [ebp - 54h], esi
        ; Exact mapped bytes EB 0C: jmp 0x5848dc6a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx + 30h], 0ffh
        ; Exact mapped bytes E9 FB 04 00 00: jmp 0x5848e165
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5848dc78
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax + 30h], 0ffh
        ; Exact mapped bytes E9 ED 04 00 00: jmp 0x5848e165
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x5848dd59
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 44 0A 5C: movsx eax, word ptr [edx + ecx + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x5c
        cmp eax, 2
        ; Exact mapped bytes 0F 85 C7 00 00 00: jne 0x5848dd59
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + ecx + 8ch], 0
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5848dd54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
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
        ; Exact mapped bytes E8 AE E2 FF FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 1E F5 FF FF: call 0x5848d1f0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x5848dd4d
        __asm _emit 0x74
        __asm _emit 0x77
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 8ch]
        ; Exact mapped bytes E8 F7 F3 FF FF: call 0x5848d0e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + eax + 8ch]
        ; Exact mapped bytes E8 F1 F2 FF FF: call 0x5848cff0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        add eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 58h], eax
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 8ch]
        ; Exact mapped bytes E8 DE F3 FF FF: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 8ch]
        ; Exact mapped bytes E8 B8 F2 FF FF: call 0x5848cff0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        cdq
        mov ecx, 5dch
        idiv ecx
        mov edx, dword ptr [ebp - 54h]
        sub edx, eax
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes EB 05: jmp 0x5848dd52
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 13 04 00 00: jmp 0x5848e165
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x5848dd59
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 0C 04 00 00: jmp 0x5848e165
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 5ch], ecx
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 93 6C FF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 68h], edx
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 73 61 05 00: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 10h
        imul edx, eax, 0ah
        mov dword ptr [ebp - 30h], edx
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 54 01 5C: movsx edx, word ptr [ecx + eax + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x5c
        cmp edx, 1
        ; Exact mapped bytes 0F 85 5D 01 00 00: jne 0x5848df08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 0A 8C FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 58h]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 4C 32 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x32
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 DE E2 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 30 32 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x32
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 28h]
        imul edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 2ch]
        imul eax, dword ptr [ebp - 2ch]
        add edx, eax
        mov dword ptr [ebp - 44h], edx
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 70h]
        cmp eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes 72 17: jb 0x5848de1d
        __asm _emit 0x72
        __asm _emit 0x17
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 88h]
        ; Exact mapped bytes E8 37 38 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5848de29
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax + 30h], 0ffh
        ; Exact mapped bytes E9 3C 03 00 00: jmp 0x5848e165
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 90h]
        test eax, eax
        ; Exact mapped bytes 7D 13: jge 0x5848de4f
        __asm _emit 0x7d
        __asm _emit 0x13
        imul ecx, dword ptr [ebx + 10h], 38h
        xor edx, edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 94 08 90 00 00 00: mov word ptr [eax + ecx + 0x90], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 39: jmp 0x5848de88
        __asm _emit 0xeb
        __asm _emit 0x39
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 90h]
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + ecx + 64h]
        ; Exact mapped bytes 7C 1D: jl 0x5848de88
        __asm _emit 0x7c
        __asm _emit 0x1d
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 64h]
        sub edx, 1
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 94 01 90 00 00 00: mov word ptr [ecx + eax + 0x90], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 6C 6B FF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A3 DE FF FF: call 0x5848bd40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 384h
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2a94h
        ; Exact mapped bytes 75 07: jne 0x5848deb5
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 0C: jge 0x5848ded5
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 18h]
        add edx, 0e10h
        mov dword ptr [ebp - 18h], edx
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax + 90h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 1F 64 0D 00: call 0x58564310
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 F7 33 00 00: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 CF 33 00 00: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 1
        mov ecx, dword ptr [ebp - 30h]
        sub ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], ecx
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 4C 10 5C: movsx ecx, word ptr [eax + edx + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x5c
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x5848e030
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 CE 6A FF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 05 DE FF FF: call 0x5848bd40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 384h
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2a94h
        ; Exact mapped bytes 75 07: jne 0x5848df53
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 0C: jge 0x5848df73
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 14h]
        add edx, 0e10h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 42 8A FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 58h]
        sub ecx, eax
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 1F E1 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        sub ecx, eax
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 34h]
        imul edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 38h]
        imul eax, dword ptr [ebp - 38h]
        add edx, eax
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes F2 0F 2A 45 E0: cvtsi2sd xmm0, dword ptr [ebp - 0x20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 62 30 3C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x30
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 CA 32 3A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x32
        __asm _emit 0x3a
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 8ch]
        ; Exact mapped bytes E8 74 E0 FF FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe0
        __asm _emit 0xff
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
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 EA F6 0B 00: call 0x5854d6e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 64h
        ; Exact mapped bytes 7D 07: jge 0x5848e009
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 64h
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 F7 62 0D 00: call 0x58564310
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 CF 32 00 00: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 A7 32 00 00: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 1
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 58 E0 FF FF: call 0x5848c090
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 25 01 00 00: jne 0x5848e165
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x5848e165
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 91 EE 00 00 00: movsx edx, word ptr [ecx + 0xee]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x5848e165
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 1C E3 FF FF: call 0x5848c380
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x5848e165
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 F9 DF FF FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x5848e165
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        cmp dword ptr [ecx + 58947974h], 0
        ; Exact mapped bytes 75 09: jne 0x5848e099
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 B8 61 0D 00: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebx + 0ch]
        and edx, 1fh
        mov eax, dword ptr [ebp - 10h]
        and eax, 0ffffffe0h
        or eax, edx
        mov dword ptr [ebp - 10h], eax
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 44 0A 5C: movsx eax, word ptr [edx + ecx + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x5c
        cmp eax, 2
        ; Exact mapped bytes 75 35: jne 0x5848e0f0
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0fffh
        shl ecx, 0fh
        mov edx, dword ptr [ebp - 10h]
        and edx, 0f8007fffh
        or edx, ecx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 1ch]
        and eax, 3ffh
        shl eax, 5
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffff801fh
        or ecx, eax
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 3E: jmp 0x5848e12e
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 18h]
        and edx, 0fffh
        shl edx, 0fh
        mov eax, dword ptr [ebp - 10h]
        and eax, 0f8007fffh
        or eax, edx
        mov dword ptr [ebp - 10h], eax
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 90h]
        and eax, 3ffh
        shl eax, 5
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffff801fh
        or ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        and edx, 0e7ffffffh
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        and eax, 9fffffffh
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebx + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 50h], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        push 0
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 7C 70 0D 00: call 0x585651e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x70
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
