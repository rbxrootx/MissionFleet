// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58841720 .. +0x39E bytes.
extern "C" __declspec(naked) void FUN_58841720() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 8F 03 00 00: je 0x58841abe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x58841760
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5884175a
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 10h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0A: je 0x58841760
        __asm _emit 0x74
        __asm _emit 0x0a
        test eax, eax
        ; Exact mapped bytes 75 E6: jne 0x58841740
        __asm _emit 0x75
        __asm _emit 0xe6
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [edx + 4]
        add eax, 0fffffe00h
        cmp eax, 0ah
        ; Exact mapped bytes 0F 87 49 03 00 00: ja 0x58841abe
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 58841adch]
        push ebx
        push ebp
        push edi
        ; Exact mapped bytes FF 24 85 C8 1A 84 58: jmp dword ptr [eax*4 + 0x58841ac8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x1a
        __asm _emit 0x84
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D C8 84 A2 58: mov ebp, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edi, edi
        add ebp, 4
        lea ebx, [esi + 0b8h]
        mov ecx, dword ptr [ebx]
        push ebp
        ; Exact mapped bytes E8 A1 FD EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x588417ac
        __asm _emit 0x75
        __asm _emit 0x09
        inc edi
        add ebx, 4
        cmp edi, 3
        ; Exact mapped bytes 7C EB: jl 0x58841797
        __asm _emit 0x7c
        __asm _emit 0xeb
        cmp edi, 3
        ; Exact mapped bytes 74 40: je 0x588417f1
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 83 79 0A 00: cmp word ptr [ecx + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes 7E 02: jle 0x588417c3
        __asm _emit 0x7e
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 0d0h]
        test byte ptr [edx + 24h], 0fh
        ; Exact mapped bytes 75 22: jne 0x588417f1
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 0f0h]
        cmp ecx, 2
        ; Exact mapped bytes 75 0A: jne 0x588417e4
        __asm _emit 0x75
        __asm _emit 0x0a
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BE D7 FF FF: call 0x5883efa0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x588417f1
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 1
        ; Exact mapped bytes 75 08: jne 0x588417f1
        __asm _emit 0x75
        __asm _emit 0x08
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4F D8 FF FF: call 0x5883f040
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0c4h]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 3B FD EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AE 02 00 00: je 0x58841abb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 83 79 0A 00: cmp word ptr [ecx + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes 7E 02: jle 0x5884181f
        __asm _emit 0x7e
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 0d0h]
        mov cl, byte ptr [edx + 24h]
        and cl, 0fh
        cmp cl, 0fh
        ; Exact mapped bytes 0F 85 87 02 00 00: jne 0x58841abb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58841849
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes E8 D1 DB FF FF: call 0x5883f410
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop ebp
        pop ebx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 12 DB FF FF: call 0x5883f360
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop ebp
        pop ebx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ach]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x58841937
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f0h]
        cmp eax, 2
        ; Exact mapped bytes 75 64: jne 0x588418d9
        __asm _emit 0x75
        __asm _emit 0x64
        xor ebp, ebp
        ; Exact mapped bytes EB 07: jmp 0x58841880
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [esi + ebp*4 + 0b8h]
        add edi, 4
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 A8 FC EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfc
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x588418d1
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [edi]
        mov edi, dword ptr [edi + 4]
        push edi
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 A6 6E 0C 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 22: jne 0x588418d1
        __asm _emit 0x75
        __asm _emit 0x22
        mov ebx, 3
        lea edi, [esi + 0b8h]
        mov ebp, ebx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push -1
        ; Exact mapped bytes E8 67 6F 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EF: jne 0x588418c0
        __asm _emit 0x75
        __asm _emit 0xef
        inc ebp
        cmp ebp, 3
        ; Exact mapped bytes 7C A9: jl 0x58841880
        __asm _emit 0x7c
        __asm _emit 0xa9
        ; Exact mapped bytes EB 5E: jmp 0x58841937
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp eax, 1
        ; Exact mapped bytes 75 59: jne 0x58841937
        __asm _emit 0x75
        __asm _emit 0x59
        xor ebp, ebp
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [esi + ebp*4 + 0a0h]
        add edi, 4
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 48 FC EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x58841931
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [edi]
        mov edi, dword ptr [edi + 4]
        push edi
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 46 6E 0C 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 22: jne 0x58841931
        __asm _emit 0x75
        __asm _emit 0x22
        mov ebx, 3
        lea edi, [esi + 0a0h]
        mov ebp, ebx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push -1
        ; Exact mapped bytes E8 07 6F 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EF: jne 0x58841920
        __asm _emit 0x75
        __asm _emit 0xef
        inc ebp
        cmp ebp, 3
        ; Exact mapped bytes 7C A9: jl 0x588418e0
        __asm _emit 0x7c
        __asm _emit 0xa9
        mov eax, dword ptr [esi + 4]
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 4]
        lea edx, [eax + 216h]
        cmp ecx, edx
        ; Exact mapped bytes 0F 8E 6A 01 00 00: jle 0x58841abb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 220h
        cmp ecx, eax
        ; Exact mapped bytes 0F 8D 5D 01 00 00: jge 0x58841abb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ech]
        cmp dword ptr [eax + 50h], 2
        ; Exact mapped bytes 0F 85 4D 01 00 00: jne 0x58841abb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop ebp
        mov dword ptr [eax + 50h], 3
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ech]
        pop edi
        pop ebp
        mov dword ptr [eax + 50h], 1
        mov eax, dword ptr [esi + 34h]
        pop ebx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 0ech]
        cmp dword ptr [ebp + 50h], 3
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x58841aa0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        mov ebx, dword ptr [ecx + 88h]
        sub ebx, 8
        test ebx, ebx
        ; Exact mapped bytes 0F 8E FE 00 00 00: jle 0x58841abb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edi, [eax + 0a2h]
        lea ecx, [eax + 12eh]
        mov eax, dword ptr [edx + 8]
        cmp eax, edi
        ; Exact mapped bytes 7F 03: jg 0x588419dc
        __asm _emit 0x7f
        __asm _emit 0x03
        push edi
        ; Exact mapped bytes EB 08: jmp 0x588419e4
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp eax, ecx
        ; Exact mapped bytes 7C 03: jl 0x588419e3
        __asm _emit 0x7c
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 01: jmp 0x588419e4
        __asm _emit 0xeb
        __asm _emit 0x01
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 75 19 0C 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ech]
        mov ecx, dword ptr [eax + 8]
        sub ecx, edi
        imul ecx, ebx
        mov eax, 0ea0ea0ebh
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 0c4h]
        sar edx, 7
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        ; Exact mapped bytes E8 59 67 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 7E 36: jle 0x58841a51
        __asm _emit 0x7e
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 0c4h]
        xor ebx, ebx
        ; Exact mapped bytes E8 48 67 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 1E: jle 0x58841a51
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, esi
        ; Exact mapped bytes E8 26 D9 FF FF: call 0x5883f360
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0c4h]
        inc ebx
        ; Exact mapped bytes E8 2A 67 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        cmp ebx, eax
        ; Exact mapped bytes 7C E2: jl 0x58841a33
        __asm _emit 0x7c
        __asm _emit 0xe2
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 14 67 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 7D 5B: jge 0x58841abb
        __asm _emit 0x7d
        __asm _emit 0x5b
        mov ecx, dword ptr [esi + 0c4h]
        xor ebx, ebx
        ; Exact mapped bytes E8 03 67 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 43: jle 0x58841abb
        __asm _emit 0x7e
        __asm _emit 0x43
        mov ecx, esi
        ; Exact mapped bytes E8 91 D9 FF FF: call 0x5883f410
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0c4h]
        inc ebx
        ; Exact mapped bytes E8 E5 66 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x66
        __asm _emit 0x0c
        __asm _emit 0x00
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        cmp ebx, eax
        ; Exact mapped bytes 7C E2: jl 0x58841a78
        __asm _emit 0x7c
        __asm _emit 0xe2
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop ebp
        pop ebx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 4
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 8F FA EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfa
        __asm _emit 0xee
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        neg eax
        inc eax
        mov dword ptr [ebp + 50h], eax
        pop edi
        pop ebp
        pop ebx
    }
}
