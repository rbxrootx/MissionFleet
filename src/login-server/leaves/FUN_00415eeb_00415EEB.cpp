// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415EEB .. +0x61F bytes.
extern "C" __declspec(naked) void FUN_00415eeb_00415EEB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp + 8]
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AA F5 FF FF: call 0x4154ab
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 1E 05 00 00: je 0x416427
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 65 ED FF FF: call 0x414c7e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        mov eax, dword ptr [esi]
        cmp eax, 0eh
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 0F 87 EA 04 00 00: ja 0x416413
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 0A 65 41 00: jmp dword ptr [eax*4 + 0x41650a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x65
        __asm _emit 0x41
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 20h], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 05 EE FF FF: call 0x414d4c
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x415f5a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        xor edi, edi
        xor ebx, ebx
        or dword ptr [eax], 0ffffffffh
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x416030
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        xor edi, edi
        cmp dword ptr [eax + 7ch], edi
        ; Exact mapped bytes 75 34: jne 0x415f98
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [eax + 18h]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 7C 79 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [ecx + 7ch], eax
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 18h]
        shl ecx, 2
        push ecx
        push edi
        push dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 57 8B 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        add esp, 10h
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [eax + 84h], ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 7ch]
        mov ebx, dword ptr [eax + ecx*4 - 4]
        cmp ebx, edi
        ; Exact mapped bytes 75 17: jne 0x415fc0
        __asm _emit 0x75
        __asm _emit 0x17
        push 10h
        ; Exact mapped bytes E8 3C 79 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, eax
        mov eax, dword ptr [esi + 4]
        pop ecx
        mov eax, dword ptr [eax + 7ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + ecx*4 - 4], ebx
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes E8 6C 6C 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 14h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, 76ch
        push edi
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes E8 58 6C 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        mov ecx, dword ptr [ebp + 10h]
        inc eax
        push edi
        ; Exact mapped bytes 66 89 43 02: mov word ptr [ebx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x02
        ; Exact mapped bytes E8 47 6C 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes 66 89 43 04: mov word ptr [ebx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes E8 37 6C 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes 66 89 43 06: mov word ptr [ebx + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x06
        ; Exact mapped bytes E8 27 6C 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes 66 89 43 08: mov word ptr [ebx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        ; Exact mapped bytes E8 17 6C 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebx + 0ch], edi
        ; Exact mapped bytes 66 89 43 0A: mov word ptr [ebx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 10h
        push dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 46 08: mov ax, word ptr [esi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        push edi
        push ebx
        push edi
        push 17h
        push 0bh
        push 0bh
        push eax
        push dword ptr [ebp + 8]
        push dword ptr [esi + 2ch]
        ; Exact mapped bytes E8 A8 65 01 00: call 0x42c5f4
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 0C: je 0x41605d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 4]
        push dword ptr [esi + 2ch]
        mov edx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes FF 52 54: call dword ptr [edx + 0x54]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x54
        mov ecx, dword ptr [esi + 4]
        mov edi, dword ptr [ebp + 8]
        add ecx, 5ch
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x416146
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 D4 EC FF FF: call 0x414d4c
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        xor edi, edi
        and al, 0efh
        add eax, 10h
        mov dword ptr [ebx], eax
        mov esi, dword ptr [esi + 4]
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 0F 84 93 03 00 00: je 0x416427
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        mov ecx, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 10h]
        push edi
        mov esi, dword ptr [eax + ecx*4 - 4]
        ; Exact mapped bytes E9 D8 03 00 00: jmp 0x41647f
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        xor edi, edi
        cmp dword ptr [eax + 78h], edi
        ; Exact mapped bytes 75 34: jne 0x4160e5
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [eax + 14h]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 2F 78 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [ecx + 78h], eax
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 14h]
        shl ecx, 2
        push ecx
        push edi
        push dword ptr [eax + 78h]
        ; Exact mapped bytes E8 0A 8A 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        add esp, 10h
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [eax + 80h], ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 78h]
        cmp dword ptr [eax + ecx*4 - 4], edi
        ; Exact mapped bytes 75 18: jne 0x41610c
        __asm _emit 0x75
        __asm _emit 0x18
        push 10h
        ; Exact mapped bytes E8 F1 77 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        pop ecx
        mov ecx, dword ptr [esi + 4]
        mov ecx, dword ptr [ecx + 78h]
        mov dword ptr [ecx + edx*4 - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [esi + 4]
        push ebx
        push 10h
        mov edx, dword ptr [eax + 78h]
        push dword ptr [edx + ecx*4 - 4]
        push 0bh
        push ecx
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 DA B7 FF FF: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4]
        mov ebx, eax
        push ebx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x41613d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 4]
        push edi
        push ebx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov ecx, dword ptr [esi + 4]
        mov edi, dword ptr [ebp + 8]
        add ecx, 40h
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 80 76 01 00: call 0x42d7ce
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], edi
        ; Exact mapped bytes E9 D2 02 00 00: jmp 0x416427
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        xor edi, edi
        cmp dword ptr [eax + 80h], edi
        ; Exact mapped bytes 0F 84 C1 02 00 00: je 0x416427
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 78h]
        mov ecx, dword ptr [ebp + 8]
        push edi
        mov ebx, dword ptr [eax + ecx*4 - 4]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 BC 6A 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 14h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, 76ch
        push edi
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes E8 A8 6A 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        mov ecx, dword ptr [ebp + 10h]
        inc eax
        push edi
        ; Exact mapped bytes 66 89 43 02: mov word ptr [ebx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x02
        ; Exact mapped bytes E8 97 6A 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes 66 89 43 04: mov word ptr [ebx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes E8 87 6A 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes 66 89 43 06: mov word ptr [ebx + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x06
        ; Exact mapped bytes E8 77 6A 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes 66 89 43 08: mov word ptr [ebx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        ; Exact mapped bytes E8 67 6A 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        push 17h
        push 10h
        push 0bh
        push dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 43 0A: mov word ptr [ebx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0a
        mov dword ptr [ebx + 0ch], edi
        push ebx
        ; Exact mapped bytes E9 37 02 00 00: jmp 0x41641d
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx], -1
        ; Exact mapped bytes 75 18: jne 0x416203
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 30 EB FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        and dword ptr [eax], 0
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x416427
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 78h]
        mov eax, dword ptr [eax + esi*4 - 4]
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 FA B2 07: cmp dx, 0x7b2
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xb2
        __asm _emit 0x07
        ; Exact mapped bytes 7C 3A: jl 0x416254
        __asm _emit 0x7c
        __asm _emit 0x3a
        ; Exact mapped bytes 66 81 FA F6 07: cmp dx, 0x7f6
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0x07
        ; Exact mapped bytes 7F 33: jg 0x416254
        __asm _emit 0x7f
        __asm _emit 0x33
        movzx ecx, word ptr [eax + 0ah]
        push -1
        push ecx
        movzx ecx, word ptr [eax + 8]
        push ecx
        movzx ecx, word ptr [eax + 6]
        push ecx
        movzx ecx, word ptr [eax + 4]
        movzx eax, word ptr [eax + 2]
        push ecx
        push eax
        ; Exact mapped bytes 0F BF C2: movsx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc2
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 F6 68 01 00: call 0x42cb3e
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [eax]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 D3 01 00 00: jmp 0x416427
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec esi
        push esi
        ; Exact mapped bytes EB 9B: jmp 0x4161f3
        __asm _emit 0xeb
        __asm _emit 0x9b
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 79 EA FF FF: call 0x414cde
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x41627e
        __asm _emit 0x74
        __asm _emit 0x15
        push dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        ; Exact mapped bytes E8 AD 7C 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10h]
        push 3dh
        ; Exact mapped bytes E8 CA 7C 01 00: call 0x42df48
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 53 EA FF FF: call 0x414cde
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 94 01 00 00: je 0x416427
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [ebp + 8]
        dec eax
        mov edx, dword ptr [ecx + 78h]
        push eax
        mov ebx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 6F EA FF FF: call 0x414d15
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4162b4
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        or dword ptr [eax], 0ffffffffh
        ; Exact mapped bytes EB 70: jmp 0x416324
        __asm _emit 0xeb
        __asm _emit 0x70
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes E8 78 69 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 14h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, 76ch
        push edi
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes E8 64 69 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        mov ecx, dword ptr [ebp + 10h]
        inc eax
        push edi
        ; Exact mapped bytes 66 89 43 02: mov word ptr [ebx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x02
        ; Exact mapped bytes E8 53 69 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes 66 89 43 04: mov word ptr [ebx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes E8 43 69 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes 66 89 43 06: mov word ptr [ebx + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x06
        ; Exact mapped bytes E8 33 69 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes 66 89 43 08: mov word ptr [ebx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        ; Exact mapped bytes E8 23 69 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebx + 0ch], edi
        ; Exact mapped bytes 66 89 43 0A: mov word ptr [ebx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 10h
        mov eax, dword ptr [esi + 4]
        test byte ptr [eax + 2dh], 40h
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x416427
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10h]
        push 3fh
        ; Exact mapped bytes E8 0D 7C 01 00: call 0x42df48
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [esi + 1ch]
        mov ecx, dword ptr [esi + 10h]
        ; Exact mapped bytes E8 DB 7B 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        push dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        inc dword ptr [esi + 28h]
        mov eax, dword ptr [eax + 38h]
        push edi
        shl ecx, 4
        push ebx
        push edi
        ; Exact mapped bytes 66 8B 44 08 F4: mov ax, word ptr [eax + ecx - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0xf4
        push 17h
        push eax
        ; Exact mapped bytes 66 8B 46 28: mov ax, word ptr [esi + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x28
        push 0bh
        push 1
        push eax
        push dword ptr [esi + 2ch]
        ; Exact mapped bytes E8 80 62 01 00: call 0x42c5f4
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x416427
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 18h]
        xor edi, edi
        cmp eax, edi
        ; Exact mapped bytes 75 05: jne 0x416387
        __asm _emit 0x75
        __asm _emit 0x05
        cmp dword ptr [esi + 8], edi
        ; Exact mapped bytes 74 09: je 0x416390
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x416427
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 14h], edi
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4163ac
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 86 E9 FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edi
        or dword ptr [ebx], 0ffffffffh
        ; Exact mapped bytes EB 7B: jmp 0x416427
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 84 E9 FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx], 10h
        ; Exact mapped bytes EB 69: jmp 0x416427
        __asm _emit 0xeb
        __asm _emit 0x69
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        mov eax, esp
        xor edi, edi
        mov dword ptr [ebp + 0ch], esp
        mov dword ptr [eax], edi
        ; Exact mapped bytes E8 76 01 00 00: call 0x416546
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 74 53: je 0x416427
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 10 E9 FF FF: call 0x414cf1
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 4C E9 FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 37: jmp 0x416427
        __asm _emit 0xeb
        __asm _emit 0x37
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        mov eax, esp
        xor edi, edi
        mov dword ptr [ebp - 8], esp
        mov dword ptr [eax], edi
        ; Exact mapped bytes E8 44 01 00 00: call 0x416546
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 74 0D: je 0x416413
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 27 E9 FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        push 17h
        push 4
        push 0bh
        push ebx
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes E8 C1 F0 FF FF: call 0x4154e8
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        mov edx, eax
        mov edi, dword ptr [ecx + 3ch]
        shl edx, 4
        dec eax
        lea edi, [edi + edx - 10h]
        mov dl, byte ptr [edi + 0ch]
        push edx
        push eax
        ; Exact mapped bytes E8 6A E8 FF FF: call 0x414cb5
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 BD E8 FF FF: call 0x414d15
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 47 FF FF FF: jne 0x4163a7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [edi + 8]
        push ebx
        mov ebx, dword ptr [ebp + 10h]
        push ebx
        push dword ptr [edi]
        ; Exact mapped bytes E8 27 03 00 00: call 0x416796
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp + 8]
        xor edi, edi
        mov eax, dword ptr [eax + 78h]
        push edi
        mov esi, dword ptr [eax + ecx*4 - 4]
        mov ecx, ebx
        ; Exact mapped bytes E8 AF 67 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 14h]
        push edi
        add eax, 76ch
        mov ecx, ebx
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        ; Exact mapped bytes E8 9C 67 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        push edi
        inc eax
        mov ecx, ebx
        ; Exact mapped bytes 66 89 46 02: mov word ptr [esi + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes E8 8C 67 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ch]
        push edi
        mov ecx, ebx
        ; Exact mapped bytes 66 89 46 04: mov word ptr [esi + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes E8 7D 67 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        push edi
        mov ecx, ebx
        ; Exact mapped bytes 66 89 46 06: mov word ptr [esi + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x06
        ; Exact mapped bytes E8 6E 67 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        push edi
        mov ecx, ebx
        ; Exact mapped bytes 66 89 46 08: mov word ptr [esi + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes E8 5F 67 01 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 66 89 46 0A: mov word ptr [esi + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0a
        mov dword ptr [esi + 0ch], edi
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x416427
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 4
        mov eax, dword ptr [eax + 3ch]
        push 4
        lea esi, [eax + ecx - 10h]
        ; Exact mapped bytes E8 F1 73 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi], eax
        mov dword ptr [esi + 8], 8
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x416427
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
