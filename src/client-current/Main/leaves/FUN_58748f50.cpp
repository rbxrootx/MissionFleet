// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748F50 .. +0x576 bytes.
extern "C" __declspec(naked) void FUN_58748f50() {
    __asm {
        sub esp, 68h
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 60 05 00 00: je 0x587494c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 7ch]
        push edi
        mov edi, dword ptr [esi + 4ch]
        mov dword ptr [esp + 0ch], edi
        test edi, edi
        ; Exact mapped bytes 74 26: je 0x58748f99
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1B: jge 0x58748f95
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 7ch]
        mov ecx, dword ptr [esp + 78h]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push ebx
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 DE: jne 0x58748f73
        __asm _emit 0x75
        __asm _emit 0xde
        mov dword ptr [esp + 0ch], edi
        cmp dword ptr [esi + 50h], 0
        ; Exact mapped bytes 0F 84 FE 04 00 00: je 0x587494a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        add eax, dword ptr [esi + 4]
        mov edx, dword ptr [ebx + 4]
        add eax, dword ptr [ebx]
        mov ebx, dword ptr [esi + 1ch]
        add edx, dword ptr [esi + 10h]
        mov edi, dword ptr [esi + 14h]
        add edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 18h]
        add ebx, eax
        mov dword ptr [esp + 5ch], ebx
        mov ebx, dword ptr [esp + 7ch]
        mov ebx, dword ptr [ebx]
        push ebp
        mov ebp, dword ptr [esi + 20h]
        add edi, eax
        add ecx, edx
        add ebp, edx
        cmp edi, ebx
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 58h], edi
        mov dword ptr [esp + 5ch], ecx
        mov dword ptr [esp + 64h], ebp
        ; Exact mapped bytes 7D 06: jge 0x58748ff1
        __asm _emit 0x7d
        __asm _emit 0x06
        mov edi, ebx
        mov dword ptr [esp + 58h], edi
        mov ebx, dword ptr [esp + 80h]
        mov ebx, dword ptr [ebx + 4]
        cmp ecx, ebx
        ; Exact mapped bytes 7D 04: jge 0x58749003
        __asm _emit 0x7d
        __asm _emit 0x04
        mov dword ptr [esp + 5ch], ebx
        mov ecx, dword ptr [esp + 80h]
        mov ecx, dword ptr [ecx + 8]
        cmp dword ptr [esp + 60h], ecx
        ; Exact mapped bytes 7E 04: jle 0x58749017
        __asm _emit 0x7e
        __asm _emit 0x04
        mov dword ptr [esp + 60h], ecx
        mov ecx, dword ptr [esp + 80h]
        mov ecx, dword ptr [ecx + 0ch]
        cmp ebp, ecx
        ; Exact mapped bytes 7E 06: jle 0x5874902b
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ebp, ecx
        mov dword ptr [esp + 64h], ebp
        movzx ebx, word ptr [esi + 9ch]
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 4D: jne 0x58749084
        __asm _emit 0x75
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 0fch]
        cmp ecx, dword ptr [esi + 0f8h]
        mov dword ptr [esp + 44h], edx
        mov edx, dword ptr [esp + 5ch]
        mov dword ptr [esp + 74h], ebp
        mov dword ptr [esp + 6ch], edx
        ; Exact mapped bytes 7D 0E: jge 0x58749063
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 0f4h]
        mov edx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes EB 0C: jmp 0x5874906f
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 0f0h]
        mov edx, dword ptr [esi + 0f4h]
        add eax, ecx
        mov dword ptr [esp + 40h], eax
        lea eax, [ecx + edi]
        sub edx, ecx
        add edx, eax
        mov dword ptr [esp + 70h], edx
        mov dword ptr [esp + 68h], eax
        cmp edi, dword ptr [esp + 60h]
        ; Exact mapped bytes 0F 8D 07 04 00 00: jge 0x58749495
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 5ch], ebp
        ; Exact mapped bytes 0F 8D FD 03 00 00: jge 0x58749495
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 F3 02 00 00: je 0x58749394
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        push eax
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 34h]
        mov dword ptr [esp + 3ch], ecx
        mov dword ptr [esp + 4ch], ecx
        movzx ecx, word ptr [esi + 9ch]
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [esp + 30h]
        inc ecx
        push ecx
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 4ch], eax
        ; Exact mapped bytes E8 56 84 22 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x00
        movzx edx, word ptr [esi + 9ch]
        mov ebx, eax
        mov byte ptr [edx + ebx], 0
        movzx eax, word ptr [esi + 9ch]
        inc eax
        push eax
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes E8 37 84 22 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 9ch]
        inc ecx
        push ecx
        push 0
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes E8 3C 3B 23 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3b
        __asm _emit 0x23
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 80h]
        xor edi, edi
        add esp, 14h
        cmp dword ptr [esp + 24h], edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 0F 8E C4 01 00 00: jle 0x587492e9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebp
        lea edx, [eax + 1]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58749130
        __asm _emit 0x75
        __asm _emit 0xf9
        movzx ecx, word ptr [esi + 9ch]
        sub eax, edx
        lea edx, [ecx + edi - 1]
        cmp eax, edx
        ; Exact mapped bytes 0F 82 AD 00 00 00: jb 0x587491f9
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + edi]
        test byte ptr [eax + ebp - 1], 80h
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x587491f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx - 1]
        lea ebx, [eax + edi]
        test byte ptr [ebx + ebp], 80h
        mov dword ptr [esp + 20h], eax
        mov edx, eax
        ; Exact mapped bytes 74 12: je 0x5874917e
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 0A: jl 0x5874917e
        __asm _emit 0x7c
        __asm _emit 0x0a
        dec eax
        lea ebx, [eax + edi]
        test byte ptr [ebx + ebp], 80h
        ; Exact mapped bytes 75 F2: jne 0x58749170
        __asm _emit 0x75
        __asm _emit 0xf2
        inc eax
        sub edx, eax
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5874918e
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        mov ebx, dword ptr [esp + 20h]
        ; Exact mapped bytes 74 02: je 0x58749196
        __asm _emit 0x74
        __asm _emit 0x02
        mov ebx, ecx
        lea eax, [esp + 14h]
        push eax
        lea ecx, [esp + 24h]
        push ecx
        lea edx, [esp + 70h]
        push edx
        lea eax, [esp + 64h]
        push eax
        lea ecx, [esp + 48h]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        lea edx, [esp + 54h]
        push edx
        lea eax, [esp + 48h]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        mov dword ptr [esp + 44h], ebx
        ; Exact mapped bytes E8 26 6F 01 00: call 0x587600f0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        movzx edx, word ptr [esi + 9ch]
        mov eax, dword ptr [esp + 1ch]
        inc edx
        push edx
        push 0
        push eax
        ; Exact mapped bytes E8 69 3A 23 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3a
        __asm _emit 0x23
        __asm _emit 0x00
        mov edx, dword ptr [esp + 28h]
        push ebx
        lea ecx, [edi + ebp]
        push ecx
        push edx
        ; Exact mapped bytes E8 5E 3B 23 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3b
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 18h
        add edi, ebx
        mov ebx, dword ptr [esp + 1ch]
        ; Exact mapped bytes EB 63: jmp 0x5874925c
        __asm _emit 0xeb
        __asm _emit 0x63
        mov dword ptr [esp + 2ch], ecx
        lea eax, [esp + 14h]
        push eax
        lea ecx, [esp + 30h]
        push ecx
        lea edx, [esp + 70h]
        push edx
        lea eax, [esp + 64h]
        push eax
        lea ecx, [esp + 48h]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        lea edx, [esp + 54h]
        push edx
        lea eax, [esp + 48h]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 C3 6E 01 00: call 0x587600f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        movzx edx, word ptr [esi + 9ch]
        inc edx
        push edx
        push 0
        push ebx
        ; Exact mapped bytes E8 0A 3A 23 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x23
        __asm _emit 0x00
        movzx eax, word ptr [esi + 9ch]
        push eax
        lea ecx, [edi + ebp]
        push ecx
        push ebx
        ; Exact mapped bytes E8 FC 3A 23 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3a
        __asm _emit 0x23
        __asm _emit 0x00
        movzx edx, word ptr [esi + 9ch]
        add esp, 18h
        add edi, edx
        mov edx, dword ptr [esi + 54h]
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [ecx]
        push edx
        mov eax, dword ptr [eax + 8]
        lea edx, [esp + 5ch]
        push edx
        mov edx, dword ptr [esi + 68h]
        push edx
        mov edx, dword ptr [esi + 64h]
        push edx
        mov edx, dword ptr [esi + 60h]
        push edx
        push ebx
        lea edx, [esp + 50h]
        push edx
        mov edx, dword ptr [esp + 98h]
        mov edx, dword ptr [edx + 50h]
        push edx
        mov dword ptr [esp + 34h], edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esp + 18h]
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58749297
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        ; Exact mapped bytes 74 33: je 0x587492d5
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [esi + 54h]
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [edx + 8]
        lea eax, [esp + 6ch]
        push eax
        mov eax, dword ptr [esi + 68h]
        push eax
        mov eax, dword ptr [esp + 24h]
        push 0d2d2d2h
        push 0
        push eax
        lea eax, [esp + 58h]
        push eax
        mov eax, dword ptr [esp + 98h]
        mov eax, dword ptr [eax + 50h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 50h]
        mov ecx, dword ptr [eax + 8]
        add dword ptr [esp + 3ch], ecx
        cmp edi, dword ptr [esp + 24h]
        ; Exact mapped bytes 0F 8C 3C FE FF FF: jl 0x58749125
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 50h]
        mov eax, dword ptr [edx + 8]
        sub dword ptr [esp + 3ch], eax
        inc dword ptr [esi + 6ch]
        mov ecx, dword ptr [esi + 6ch]
        mov eax, 0cccccccdh
        mul ecx
        shr edx, 3
        test dl, 1
        ; Exact mapped bytes 74 7E: je 0x58749386
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 2
        ; Exact mapped bytes 74 75: je 0x58749386
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 94h]
        movzx ebp, word ptr [esi + 9ch]
        lea edx, [esp + 50h]
        push edx
        cdq
        idiv ebp
        mov ecx, dword ptr [esi + 50h]
        mov edi, dword ptr [ecx]
        mov eax, dword ptr [edi + 4]
        push edx
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        movzx ecx, word ptr [esi + 9ch]
        mov eax, dword ptr [esi + 94h]
        cdq
        idiv ecx
        mov edi, dword ptr [esi + 50h]
        mov ebp, dword ptr [edi + 8]
        mov ecx, dword ptr [esp + 7ch]
        imul eax, ebp
        add eax, dword ptr [esp + 34h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 2D: je 0x58749386
        __asm _emit 0x74
        __asm _emit 0x2d
        mov esi, dword ptr [esi + 60h]
        mov edx, dword ptr [esp + 48h]
        mov ecx, dword ptr [ecx + 50h]
        push 0
        push 100h
        push esi
        mov esi, dword ptr [edi + 4]
        lea eax, [eax + ebp - 3]
        push eax
        mov eax, dword ptr [esp + 60h]
        add esi, eax
        add esi, edx
        add eax, edx
        push esi
        push eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 10h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push ebx
        ; Exact mapped bytes E8 9A 3A 23 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x3a
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x58749495
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        push edx
        mov ecx, dword ptr [esi + 50h]
        mov edi, dword ptr [esp + 80h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 8]
        lea edx, [esp + 5ch]
        push edx
        mov edx, dword ptr [esi + 68h]
        push edx
        mov edx, dword ptr [esi + 64h]
        push edx
        mov edx, dword ptr [esi + 60h]
        push edx
        mov edx, dword ptr [esi + 80h]
        add edx, dword ptr [esi + 98h]
        push edx
        lea edx, [esp + 48h]
        push edx
        mov edx, dword ptr [edi + 50h]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [esi + 100h]
        mov eax, edx
        lea ebx, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587493e0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587493e0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, ebx
        ; Exact mapped bytes 74 28: je 0x58749413
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [esi + 54h]
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 8]
        push ebx
        lea ebx, [esp + 6ch]
        push ebx
        mov ebx, dword ptr [esi + 68h]
        push ebx
        push 0d2d2d2h
        push 0
        push edx
        lea edx, [esp + 58h]
        push edx
        mov edx, dword ptr [edi + 50h]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        inc dword ptr [esi + 6ch]
        mov ecx, dword ptr [esi + 6ch]
        mov eax, 0cccccccdh
        mul ecx
        shr edx, 3
        test dl, 1
        ; Exact mapped bytes 74 6D: je 0x58749495
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 2
        ; Exact mapped bytes 74 64: je 0x58749495
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        lea ebx, [esp + 24h]
        push ebx
        mov ebx, dword ptr [esi + 94h]
        sub ebx, eax
        push ebx
        mov ebx, dword ptr [esi + 80h]
        add ebx, eax
        mov eax, dword ptr [edx + 4]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp dword ptr [edi + 50h], 0
        ; Exact mapped bytes 74 37: je 0x58749495
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [esi + 60h]
        mov eax, dword ptr [esi + 50h]
        mov esi, dword ptr [esp + 34h]
        mov ecx, dword ptr [edi + 50h]
        mov edi, dword ptr [ecx]
        push 0
        push 100h
        push edx
        mov edx, dword ptr [eax + 8]
        lea edx, [edx + esi - 3]
        mov esi, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 30h]
        push edx
        mov edx, dword ptr [esp + 40h]
        add esi, eax
        add esi, edx
        add eax, edx
        push esi
        push eax
        mov eax, dword ptr [edi + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebx, dword ptr [esp + 84h]
        mov edi, dword ptr [esp + 10h]
        pop ebp
        test edi, edi
        ; Exact mapped bytes 74 1B: je 0x587494c0
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 7ch]
        mov ecx, dword ptr [esp + 78h]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push ebx
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E5: jne 0x587494a5
        __asm _emit 0x75
        __asm _emit 0xe5
        pop edi
        pop ebx
        pop esi
        add esp, 68h
    }
}
