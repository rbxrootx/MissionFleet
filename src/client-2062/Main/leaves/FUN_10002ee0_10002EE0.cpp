// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10002EE0 .. +0x4B9 bytes.
extern "C" __declspec(naked) void FUN_10002ee0_10002EE0() {
    __asm {
        sub esp, 1ch
        mov eax, ecx
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes 66 83 78 28 01: cmp word ptr [eax + 0x28], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x28
        __asm _emit 0x01
        push edi
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 77 46: ja 0x10002f3a
        __asm _emit 0x77
        __asm _emit 0x46
        mov ecx, dword ptr [esp + 38h]
        xor ebp, ebp
        cmp ecx, ebp
        ; Exact mapped bytes 74 3C: je 0x10002f3a
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ebx, dword ptr [esp + 30h]
        xor edi, edi
        cmp dword ptr [ebx + 8], ebp
        ; Exact mapped bytes 7E 31: jle 0x10002f3a
        __asm _emit 0x7e
        __asm _emit 0x31
        lea esi, [ebx + 10h]
        ; Exact mapped bytes EB 04: jmp 0x10002f12
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi]
        mov eax, dword ptr [eax + 0ch]
        push edx
        mov ecx, dword ptr [ecx + 21a4ch]
        push eax
        ; Exact mapped bytes E8 16 11 02 00: call 0x10024040
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 74 17: je 0x10002f46
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebx + 8]
        inc edi
        add esi, 4
        cmp edi, eax
        ; Exact mapped bytes 7C D4: jl 0x10002f0e
        __asm _emit 0x7c
        __asm _emit 0xd4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 83 BA E4 00 00 00 01: cmp word ptr [edx + 0xe4], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 BE 03 00 00: jne 0x10003316
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7A 28 06: cmp word ptr [edx + 0x28], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7a
        __asm _emit 0x28
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 DA 02 00 00: je 0x1000323d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 3ch]
        mov dword ptr [esp + 1ch], ebp
        cmp ebx, ebp
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esp + 28h], ebp
        mov dword ptr [esp + 30h], 0ffffffffh
        ; Exact mapped bytes 7E 47: jle 0x10002fca
        __asm _emit 0x7e
        __asm _emit 0x47
        mov esi, dword ptr [esp + 38h]
        mov edi, ebx
        mov ecx, dword ptr [esi + 4]
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        mov eax, 51eb851fh
        sar ecx, 0ah
        mov edx, ecx
        add esi, 90h
        shr edx, 1fh
        add ecx, edx
        mov edx, dword ptr [esi - 90h]
        imul edx
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        dec edi
        lea ecx, [edx + ecx*2]
        mov dword ptr [esp + ecx*4 + 1ch], 1
        ; Exact mapped bytes 75 BF: jne 0x10002f89
        __asm _emit 0x75
        __asm _emit 0xbf
        xor ecx, ecx
        lea eax, [esp + 1ch]
        mov edx, 4
        cmp dword ptr [eax], ebp
        ; Exact mapped bytes 74 01: je 0x10002fda
        __asm _emit 0x74
        __asm _emit 0x01
        inc ecx
        add eax, 4
        dec edx
        ; Exact mapped bytes 75 F5: jne 0x10002fd5
        __asm _emit 0x75
        __asm _emit 0xf5
        cmp ecx, 1
        ; Exact mapped bytes 75 28: jne 0x1000300d
        __asm _emit 0x75
        __asm _emit 0x28
        xor eax, eax
        lea ecx, [esp + 1ch]
        cmp dword ptr [ecx], ebp
        ; Exact mapped bytes 75 0E: jne 0x10002ffd
        __asm _emit 0x75
        __asm _emit 0x0e
        inc eax
        add ecx, 4
        cmp eax, 4
        ; Exact mapped bytes 7C F3: jl 0x10002feb
        __asm _emit 0x7c
        __asm _emit 0xf3
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x100030e1
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 3
        sub ecx, eax
        mov dword ptr [esp + 30h], ecx
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x100030e1
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x100030bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        xor edi, edi
        lea ebp, [esp + 1ch]
        cmp dword ptr [ebp], 0
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x100030b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov eax, edi
        and eax, 80000001h
        mov esi, dword ptr [edx + 0ch]
        ; Exact mapped bytes 79 05: jns 0x1000303d
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        lea eax, [eax + eax*4]
        mov ecx, dword ptr [esi + 4]
        lea eax, [eax + eax*4]
        shl eax, 9
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        mov eax, edi
        cdq
        sub eax, edx
        sub ecx, 0c80h
        sar eax, 1
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 8
        cdq
        sub eax, edx
        mov edx, eax
        mov eax, dword ptr [esi + 8]
        sar edx, 1
        sub eax, edx
        sub eax, 640h
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes DB 44 24 38: fild dword ptr [esp + 0x38]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        push ecx
        push edx
        ; Exact mapped bytes E8 0E 97 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 00 97 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 7E 06: jle 0x100030b0
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ebx, eax
        mov dword ptr [esp + 30h], edi
        inc edi
        add ebp, 4
        cmp edi, 4
        ; Exact mapped bytes 0F 8C 61 FF FF FF: jl 0x1000301e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x100030e1
        __asm _emit 0xeb
        __asm _emit 0x22
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x10003185
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea ecx, [esp + 1ch]
        cmp dword ptr [ecx], ebp
        ; Exact mapped bytes 74 0B: je 0x100030dd
        __asm _emit 0x74
        __asm _emit 0x0b
        inc eax
        add ecx, 4
        cmp eax, 4
        ; Exact mapped bytes 7C F3: jl 0x100030ce
        __asm _emit 0x7c
        __asm _emit 0xf3
        ; Exact mapped bytes EB 04: jmp 0x100030e1
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 30h], eax
        mov esi, dword ptr [esp + 30h]
        mov eax, esi
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100030f3
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 9
        cdq
        sub eax, edx
        mov ecx, eax
        mov eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        sar ecx, 1
        lea eax, [eax + eax*4]
        add ecx, 0c80h
        lea eax, [eax + eax*4]
        shl eax, 8
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 640h
        cmp ecx, 64h
        ; Exact mapped bytes 7D 07: jge 0x1000312f
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ecx, 64h
        ; Exact mapped bytes EB 0D: jmp 0x1000313c
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 319ch
        ; Exact mapped bytes 7E 05: jle 0x1000313c
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ecx, 319ch
        cmp eax, 64h
        ; Exact mapped bytes 7D 07: jge 0x10003148
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 64h
        ; Exact mapped bytes EB 0C: jmp 0x10003154
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 189ch
        ; Exact mapped bytes 7E 05: jle 0x10003154
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 189ch
        mov esi, dword ptr [esp + 10h]
        and ecx, 7fffh
        shl eax, 0fh
        or eax, ecx
        mov ecx, dword ptr [esi + 0ch]
        shl eax, 2
        mov dword ptr [esp + 38h], eax
        lea eax, [esp + 38h]
        push eax
        ; Exact mapped bytes E8 49 80 0E 00: call 0x100eb1c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x80
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10h]
        ; Exact mapped bytes 66 C7 46 28 01 00: mov word ptr [esi + 0x28], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 F7 01 00 00: jmp 0x1000337c
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        or esi, 0ffffffffh
        or ecx, 0ffffffffh
        xor eax, eax
        cmp ebx, ebp
        ; Exact mapped bytes 7E 21: jle 0x100031b2
        __asm _emit 0x7e
        __asm _emit 0x21
        mov edx, dword ptr [esp + 38h]
        lea edi, [edx + 0ch]
        mov edx, dword ptr [edi]
        cmp edx, esi
        ; Exact mapped bytes 72 05: jb 0x100031a3
        __asm _emit 0x72
        __asm _emit 0x05
        cmp ecx, -1
        ; Exact mapped bytes 75 04: jne 0x100031a7
        __asm _emit 0x75
        __asm _emit 0x04
        mov esi, edx
        mov ecx, eax
        inc eax
        add edi, 90h
        cmp eax, ebx
        ; Exact mapped bytes 7C E6: jl 0x10003198
        __asm _emit 0x7c
        __asm _emit 0xe6
        lea eax, [ecx + ecx*8]
        mov ecx, dword ptr [esp + 38h]
        shl eax, 4
        add eax, ecx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        cmp ecx, 64h
        ; Exact mapped bytes 7D 07: jge 0x100031cf
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ecx, 64h
        ; Exact mapped bytes EB 0D: jmp 0x100031dc
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 319ch
        ; Exact mapped bytes 7E 05: jle 0x100031dc
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ecx, 319ch
        cmp eax, 64h
        ; Exact mapped bytes 7D 07: jge 0x100031e8
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 64h
        ; Exact mapped bytes EB 0C: jmp 0x100031f4
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 189ch
        ; Exact mapped bytes 7E 05: jle 0x100031f4
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 189ch
        mov esi, dword ptr [esp + 10h]
        and ecx, 7fffh
        shl eax, 0fh
        or eax, ecx
        mov ecx, dword ptr [esi + 0ch]
        lea edx, [esp + 38h]
        shl eax, 2
        push edx
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 A9 7F 0E 00: call 0x100eb1c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        ; Exact mapped bytes 66 C7 46 28 01 00: mov word ptr [esi + 0x28], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 48 70: mov cx, word ptr [eax + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x70
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 30 1C 02 00: call 0x10024e60
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 0ch]
        mov eax, 3200h
        mov ebx, dword ptr [ebp + 4]
        sub eax, ebx
        cmp ebx, eax
        ; Exact mapped bytes 7D 06: jge 0x10003254
        __asm _emit 0x7d
        __asm _emit 0x06
        mov ecx, ebx
        xor edx, edx
        ; Exact mapped bytes EB 07: jmp 0x1000325b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, eax
        mov edx, 1
        mov edi, dword ptr [ebp + 8]
        mov eax, 1900h
        sub eax, edi
        cmp edi, eax
        ; Exact mapped bytes 7D 06: jge 0x1000326f
        __asm _emit 0x7d
        __asm _emit 0x06
        mov esi, edi
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x1000327b
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov esi, 3200h
        mov eax, 1
        sub esi, edi
        cmp ecx, esi
        ; Exact mapped bytes 7E 12: jle 0x10003291
        __asm _emit 0x7e
        __asm _emit 0x12
        neg eax
        sbb eax, eax
        mov edx, ebx
        and eax, 1a90h
        add eax, 0ffffff38h
        ; Exact mapped bytes EB 12: jmp 0x100032a3
        __asm _emit 0xeb
        __asm _emit 0x12
        neg edx
        sbb edx, edx
        mov eax, edi
        and edx, 3390h
        add edx, 0ffffff38h
        cmp edx, 64h
        ; Exact mapped bytes 7D 07: jge 0x100032af
        __asm _emit 0x7d
        __asm _emit 0x07
        mov edx, 64h
        ; Exact mapped bytes EB 0D: jmp 0x100032bc
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp edx, 319ch
        ; Exact mapped bytes 7E 05: jle 0x100032bc
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edx, 319ch
        cmp eax, 64h
        ; Exact mapped bytes 7D 07: jge 0x100032c8
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 64h
        ; Exact mapped bytes EB 0C: jmp 0x100032d4
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 189ch
        ; Exact mapped bytes 7E 05: jle 0x100032d4
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 189ch
        shl eax, 0fh
        and edx, 7fffh
        lea ecx, [esp + 38h]
        or eax, edx
        push ecx
        shl eax, 2
        mov ecx, ebp
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 CE 7E 0E 00: call 0x100eb1c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x7e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 8B 48 70: mov cx, word ptr [eax + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x70
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 57 1B 02 00: call 0x10024e60
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        cmp ecx, 64h
        ; Exact mapped bytes 7D 07: jge 0x1000332b
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ecx, 64h
        ; Exact mapped bytes EB 0D: jmp 0x10003338
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 319ch
        ; Exact mapped bytes 7E 05: jle 0x10003338
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ecx, 319ch
        cmp eax, 64h
        ; Exact mapped bytes 7D 07: jge 0x10003344
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 64h
        ; Exact mapped bytes EB 0C: jmp 0x10003350
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 189ch
        ; Exact mapped bytes 7E 05: jle 0x10003350
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 189ch
        shl eax, 0fh
        and ecx, 7fffh
        or eax, ecx
        mov ecx, dword ptr [edx + 0ch]
        shl eax, 2
        mov dword ptr [esp + 38h], eax
        lea eax, [esp + 38h]
        push eax
        ; Exact mapped bytes E8 51 7E 0E 00: call 0x100eb1c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x7e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 C7 40 28 01 00: mov word ptr [eax + 0x28], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 70: mov dx, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x70
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 D4 1A 02 00: call 0x10024e60
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
