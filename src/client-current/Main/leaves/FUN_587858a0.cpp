// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587858A0 .. +0x505 bytes.
extern "C" __declspec(naked) void FUN_587858a0() {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esi + 70h]
        xor edi, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes E8 F9 AE 02 00: call 0x587b07b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [esi + 74h]
        cmp eax, edi
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x58785974
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, edi
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x58785966
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 07 0E 15 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0e
        __asm _emit 0x15
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x58785966
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0ach]
        mov eax, dword ptr [ebx + 23ch]
        mov eax, dword ptr [eax + 50h]
        mov ebp, dword ptr [ebx + 6060h]
        xor eax, 0aaaaaaaah
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        add ebp, ebp
        mov edx, dword ptr [ebp + ebp + 58a0b4d8h]
        add ebp, ebp
        imul edx, ecx
        mov ebp, dword ptr [ebp + 58a0ed18h]
        mov edi, dword ptr [ebx + 4]
        imul ebp, ecx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebx, dword ptr [ebx + 8]
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub edi, eax
        mov eax, 10624dd3h
        imul ebp
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        sub ebx, ecx
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x587859f5
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0b4h], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
        cmp eax, 1
        ; Exact mapped bytes 75 74: jne 0x587859ed
        __asm _emit 0x75
        __asm _emit 0x74
        mov eax, dword ptr [esi + 0b0h]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 16 04 00 00: je 0x58785d9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 21c48h]
        push eax
        ; Exact mapped bytes E8 C7 32 FB FF: call 0x58738c60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 FC 03 00 00: je 0x58785d9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        mov edx, dword ptr [ecx + 308h]
        mov ebx, dword ptr [ecx + 500h]
        mov ecx, dword ptr [ecx + 30ch]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        add edi, dword ptr [ebx + 4]
        mov ebx, dword ptr [ebx + 8]
        mov eax, 57619f1h
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub ebx, eax
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes EB 08: jmp 0x587859f5
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ebx, dword ptr [esp + 1ch]
        mov edi, dword ptr [esp + 18h]
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push ebx
        push edi
        push ecx
        push edx
        ; Exact mapped bytes E8 0C 66 FE FF: call 0x5876c010
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [eax + eax*4]
        add ecx, ecx
        sub ecx, dword ptr [esp + 20h]
        add esp, 10h
        cmp ecx, 708h
        ; Exact mapped bytes 7E 08: jle 0x58785a20
        __asm _emit 0x7e
        __asm _emit 0x08
        sub ecx, 0e10h
        ; Exact mapped bytes EB 0E: jmp 0x58785a2e
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp ecx, 0fffff8f8h
        ; Exact mapped bytes 7D 06: jge 0x58785a2e
        __asm _emit 0x7d
        __asm _emit 0x06
        add ecx, 0e10h
        mov eax, ecx
        cdq
        mov ebp, eax
        xor ebp, edx
        sub ebp, edx
        cmp ebp, 8
        ; Exact mapped bytes 7E 61: jle 0x58785a9d
        __asm _emit 0x7e
        __asm _emit 0x61
        mov edx, dword ptr [esi + 70h]
        mov eax, dword ptr [edx + 0cch]
        xor ebx, ebx
        add eax, 2
        cmp ebp, eax
        setg bl
        mov edi, 40000000h
        dec ebx
        and ebx, edi
        mov dword ptr [edx + 118h], ebx
        test ecx, ecx
        ; Exact mapped bytes 7E 1B: jle 0x58785a7c
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov esi, dword ptr [esi + 70h]
        mov dword ptr [esi + 108h], edi
        pop edi
        mov dword ptr [esi + 124h], 1
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
        ; Exact mapped bytes 0F 8D 1B 03 00 00: jge 0x58785d9d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 70h]
        mov dword ptr [esi + 108h], edi
        pop edi
        mov dword ptr [esi + 124h], 0ffffffffh
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
        mov ecx, dword ptr [esi + 70h]
        xor eax, eax
        mov dword ptr [ecx + 118h], eax
        mov edx, dword ptr [esi + 70h]
        mov dword ptr [edx + 108h], eax
        cmp dword ptr [esi + 74h], eax
        ; Exact mapped bytes 0F 85 68 01 00 00: jne 0x58785c22
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        sub eax, dword ptr [esi + 8]
        cdq
        mov ecx, eax
        xor ecx, edx
        sub ecx, edx
        mov eax, edi
        sub eax, dword ptr [esi + 4]
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 A7 71 1F 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x71
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes E8 B2 71 1F 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x71
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ebp, eax
        cmp dword ptr [esi + 80h], ebp
        ; Exact mapped bytes 73 12: jae 0x58785b0a
        __asm _emit 0x73
        __asm _emit 0x12
        pop edi
        mov dword ptr [esi + 0b4h], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
        mov ecx, dword ptr [esi + 0ach]
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0dh
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, dword ptr [ecx + 10488h]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        mov eax, 88888889h
        mul ecx
        shr edx, 4
        mov eax, edx
        shl eax, 4
        sub eax, edx
        add eax, eax
        sub ecx, eax
        add ecx, 64h
        imul ecx, ebp
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esi + 0b4h]
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cdq
        mov ebp, 5
        idiv ebp
        test edx, edx
        ; Exact mapped bytes 75 24: jne 0x58785b9a
        __asm _emit 0x75
        __asm _emit 0x24
        xor eax, eax
        ; Exact mapped bytes 66 3B 56 7C: cmp dx, word ptr [esi + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x7c
        ; Exact mapped bytes 73 1C: jae 0x58785b9a
        __asm _emit 0x73
        __asm _emit 0x1c
        mov edx, dword ptr [esi + 78h]
        cmp dword ptr [edx], ecx
        ; Exact mapped bytes 77 0E: ja 0x58785b93
        __asm _emit 0x77
        __asm _emit 0x0e
        movzx ebp, word ptr [esi + 7ch]
        inc eax
        add edx, 4
        cmp eax, ebp
        ; Exact mapped bytes 7C F0: jl 0x58785b81
        __asm _emit 0x7c
        __asm _emit 0xf0
        ; Exact mapped bytes EB 07: jmp 0x58785b9a
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 66 89 86 B8 00 00 00: mov word ptr [esi + 0xb8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 7ch]
        ; Exact mapped bytes 66 39 86 B8 00 00 00: cmp word ptr [esi + 0xb8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 08: jb 0x58785baf
        __asm _emit 0x72
        __asm _emit 0x08
        dec eax
        ; Exact mapped bytes 66 89 86 B8 00 00 00: mov word ptr [esi + 0xb8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        lea ecx, [esp + 18h]
        push ecx
        add eax, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9E 02 FB FF: call 0x58735e60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        add ecx, 384h
        cmp ecx, 2a94h
        ; Exact mapped bytes 75 0C: jne 0x58785bde
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esp + 10h], 0
        mov ecx, dword ptr [esp + 10h]
        mov eax, 6e5d4c3bh
        imul ecx
        sub edx, ecx
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add ecx, eax
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 79 0A: jns 0x58785c09
        __asm _emit 0x79
        __asm _emit 0x0a
        add ecx, 0e10h
        mov dword ptr [esp + 10h], ecx
        movzx edx, word ptr [esi + 0b8h]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 76 B4 02 00: call 0x587b1090
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esp + 14h], 1
        cmp dword ptr [esi + 74h], 1
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x58785cf2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 18h]
        push eax
        lea eax, [esi + 4]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 24 02 FB FF: call 0x58735e60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ebp, eax
        add ebp, 384h
        cmp ebp, 2a94h
        ; Exact mapped bytes 75 02: jne 0x58785c4e
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, 6e5d4c3bh
        imul ebp
        sub edx, ebp
        sar edx, 0bh
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        imul ecx, ecx, 0e10h
        add ebp, ecx
        ; Exact mapped bytes 79 06: jns 0x58785c71
        __asm _emit 0x79
        __asm _emit 0x06
        add ebp, 0e10h
        mov edx, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [edx + 340h]
        sub edi, dword ptr [esi + 4]
        sub ebx, dword ptr [esi + 8]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DC 0D 18 CB 98 58: fmul qword ptr [0x5898cb18]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 6F 1F 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, ebx
        mov edx, edi
        imul ecx, ebx
        imul edx, edi
        add ecx, edx
        mov dword ptr [esp + 14h], ecx
        push eax
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 CF 6F 1F 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6f
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes E8 DA 6F 1F 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6f
        __asm _emit 0x1f
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 74 AA 01 00: call 0x587a0740
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        add esp, 8
        cmp edi, 96h
        ; Exact mapped bytes 7D 05: jge 0x58785cde
        __asm _emit 0x7d
        __asm _emit 0x05
        mov edi, 96h
        mov ecx, dword ptr [esi + 70h]
        push edi
        push ebp
        ; Exact mapped bytes E8 A8 B3 02 00: call 0x587b1090
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esp + 14h], 1
        ; Exact mapped bytes EB 08: jmp 0x58785cfa
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ebp, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 70h]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x58785d9d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x58785d9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 104h]
        xor eax, 0aaaaaaaah
        cmp eax, 40000000h
        ; Exact mapped bytes 75 76: jne 0x58785d9d
        __asm _emit 0x75
        __asm _emit 0x76
        cmp dword ptr [ecx + 0f4h], 0
        ; Exact mapped bytes 74 6D: je 0x58785d9d
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 83 3D 08 45 A2 58 00: cmp dword ptr [0x58a24508], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x58785d3e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 12 BB 02 00: call 0x587b1850
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        and eax, 0ffffffe0h
        and eax, 0f800001fh
        cmp dword ptr [esi + 74h], 1
        ; Exact mapped bytes 75 13: jne 0x58785d63
        __asm _emit 0x75
        __asm _emit 0x13
        and ebp, 0fffh
        shl ebp, 0ah
        and edi, 3ffh
        or ebp, edi
        ; Exact mapped bytes EB 1C: jmp 0x58785d7f
        __asm _emit 0xeb
        __asm _emit 0x1c
        movzx ebp, word ptr [esi + 0b8h]
        mov ecx, dword ptr [esp + 10h]
        and ecx, 0fffh
        and ebp, 3ffh
        shl ecx, 0ah
        or ebp, ecx
        mov ecx, dword ptr [esi + 70h]
        shl ebp, 5
        or ebp, eax
        and ebp, 87ffffffh
        mov dword ptr [esp + 14h], ebp
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 3ch]
        lea eax, [esp + 14h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
