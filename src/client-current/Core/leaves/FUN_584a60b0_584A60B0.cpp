// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A60B0 .. +0x53E bytes.
extern "C" __declspec(naked) void FUN_584a60b0_584A60B0() {
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
        sub esp, 50h
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 53 DA 0B 00: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xda
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 3A 63 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D3 E8 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe8
        __asm _emit 0xfd
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
        ; Exact mapped bytes E8 32 63 FE FF: call 0x5848c460
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [esi + eax + 384h]
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 FD 62 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 E8 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe8
        __asm _emit 0xfd
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
        ; Exact mapped bytes E8 F5 62 FE FF: call 0x5848c460
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x62
        __asm _emit 0xfe
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
        ; Exact mapped bytes 0F BF 4C 10 18: movsx ecx, word ptr [eax + edx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x18
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 A5 01 00 00: jne 0x584a6350
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + edx + 44h], 0
        ; Exact mapped bytes 0F 84 81 01 00 00: je 0x584a633e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 44h]
        ; Exact mapped bytes E8 83 B4 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x584a632a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + eax + 44h]
        ; Exact mapped bytes E8 58 5D FE FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x584a61f1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F2 03 00 00: jmp 0x584a65e3
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 44h]
        ; Exact mapped bytes E8 7F F2 FF FF: call 0x584a5480
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x584a6230
        __asm _emit 0x75
        __asm _emit 0x2b
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 44h]
        ; Exact mapped bytes E8 AB 07 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + eax + 44h]
        ; Exact mapped bytes E8 88 5E FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x584a62fe
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 44h]
        ; Exact mapped bytes E8 80 07 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 44h]
        ; Exact mapped bytes E8 EE 5C FE FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 67 5C FE FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, eax, 0fh
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edi, eax
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 44h]
        ; Exact mapped bytes E8 AA 5A FE FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5a
        __asm _emit 0xfe
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
        mov dword ptr [ebp - 3ch], esi
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 44h]
        ; Exact mapped bytes E8 09 5E FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 44h]
        ; Exact mapped bytes E8 87 5C FE FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 00 5C FE FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, eax, 0fh
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edi, eax
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 44h]
        ; Exact mapped bytes E8 43 5A FE FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x5a
        __asm _emit 0xfe
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
        mov dword ptr [ebp - 38h], esi
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0d0h], 0
        ; Exact mapped bytes 74 1E: je 0x584a6328
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 12: jmp 0x584a633c
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 88h], 0ffh
        ; Exact mapped bytes E9 A7 02 00 00: jmp 0x584a65e3
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x584a6350
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 88h], 0ffh
        ; Exact mapped bytes E9 93 02 00 00: jmp 0x584a65e3
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 44h], ecx
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 9C E6 FD FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 50h], edx
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 7C DB 03 00: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 10h
        imul edx, eax, 0ah
        mov dword ptr [ebp - 20h], edx
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 54 01 18: movsx edx, word ptr [ecx + eax + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x18
        cmp edx, 1
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x584a64f1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 14 06 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 56 AC 3A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xac
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 E9 5C FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 3B AC 3A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xac
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ebp - 1ch]
        add edx, eax
        mov dword ptr [ebp - 28h], edx
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 2ch]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 72 14: jb 0x584a640f
        __asm _emit 0x72
        __asm _emit 0x14
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 44h]
        ; Exact mapped bytes E8 45 B2 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x584a6421
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 88h], 0ffh
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x584a65e3
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 4ch]
        test eax, eax
        ; Exact mapped bytes 7D 10: jge 0x584a6441
        __asm _emit 0x7d
        __asm _emit 0x10
        imul ecx, dword ptr [ebx + 10h], 38h
        xor edx, edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 54 08 4C: mov word ptr [eax + ecx + 0x4c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x4c
        ; Exact mapped bytes EB 33: jmp 0x584a6474
        __asm _emit 0xeb
        __asm _emit 0x33
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 4ch]
        imul ecx, dword ptr [ebx + 10h], 38h
        mov edx, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + ecx + 20h]
        ; Exact mapped bytes 7C 1A: jl 0x584a6474
        __asm _emit 0x7c
        __asm _emit 0x1a
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 20h]
        sub edx, 1
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 54 01 4C: mov word ptr [ecx + eax + 0x4c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x4c
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 80 E5 FD FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 9A 20 00 00: call 0x584a8520
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        add eax, 384h
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2a94h
        ; Exact mapped bytes 75 07: jne 0x584a64a1
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 0C: jge 0x584a64c1
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 14h]
        add edx, 0e10h
        mov dword ptr [ebp - 14h], edx
        imul eax, dword ptr [ebx + 10h], 38h
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax + 4ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 36 DE 0B 00: call 0x58564310
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xde
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 0E AE FE FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 E6 AD FE FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 1
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 8E 5B FE FF: call 0x5848c090
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x584a65e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x584a65e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 64 5E FE FF: call 0x5848c380
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x584a65e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 41 5B FE FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x584a65e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        cmp dword ptr [eax + 58947974h], 0
        ; Exact mapped bytes 75 09: jne 0x584a6551
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 00 DD 0B 00: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xdd
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0e0h
        ; Exact mapped bytes E8 91 1B FE FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0ch]
        and ecx, 1fh
        mov edx, dword ptr [ebp - 10h]
        and edx, 0ffffffe0h
        or edx, ecx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        and eax, 0fffh
        shl eax, 0fh
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0f8007fffh
        or ecx, eax
        mov dword ptr [ebp - 10h], ecx
        imul edx, dword ptr [ebx + 10h], 38h
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 4ch]
        and ecx, 3ffh
        shl ecx, 5
        mov edx, dword ptr [ebp - 10h]
        and edx, 0ffff801fh
        or edx, ecx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        and eax, 0e7ffffffh
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 9fffffffh
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebx + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 34h], ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        push 0
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 FE EB 0B 00: call 0x585651e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xeb
        __asm _emit 0x0b
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
