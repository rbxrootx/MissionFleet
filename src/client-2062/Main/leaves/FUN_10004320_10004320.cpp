// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10004320 .. +0x452 bytes.
extern "C" __declspec(naked) void FUN_10004320_10004320() {
    __asm {
        sub esp, 1ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 1ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 80 02 00 00: je 0x100045b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov ebx, dword ptr [ecx + 8]
        mov ecx, edx
        mov ebp, dword ptr [eax + 4]
        mov edi, dword ptr [eax + 8]
        sub ecx, ebp
        mov dword ptr [esp + 18h], edx
        mov eax, ebx
        mov edx, ecx
        sub eax, edi
        mov dword ptr [esp + 20h], ecx
        imul edx, ecx
        mov ecx, eax
        mov dword ptr [esp + 24h], ebp
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [esp + 3ch], edx
        mov dword ptr [esp + 28h], ebx
        ; Exact mapped bytes DB 44 24 3C: fild dword ptr [esp + 0x3c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes E8 26 84 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 18 84 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        cmp eax, 64h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8D EF 01 00 00: jge 0x1000458a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 0ch]
        mov ecx, 1
        mov dword ptr [esp + 40h], ecx
        mov edx, ecx
        mov esi, dword ptr [esi + 5c44h]
        cmp esi, 708h
        ; Exact mapped bytes 7D 07: jge 0x100043be
        __asm _emit 0x7d
        __asm _emit 0x07
        or ecx, 0ffffffffh
        mov dword ptr [esp + 40h], ecx
        cmp esi, 384h
        ; Exact mapped bytes 7E 0B: jle 0x100043d1
        __asm _emit 0x7e
        __asm _emit 0x0b
        cmp esi, 0a8ch
        ; Exact mapped bytes 7F 03: jg 0x100043d1
        __asm _emit 0x7f
        __asm _emit 0x03
        or edx, 0ffffffffh
        cmp ebp, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x1000447d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x1000448b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        sub edi, ebx
        sub esp, 8
        mov dword ptr [esp + 44h], edi
        ; Exact mapped bytes D9 5C 24 28: fstp dword ptr [esp + 0x28]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes DB 44 24 44: fild dword ptr [esp + 0x44]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D9 5C 24 44: fstp dword ptr [esp + 0x44]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D9 44 24 28: fld dword ptr [esp + 0x28]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes D8 74 24 44: fdiv dword ptr [esp + 0x44]
        __asm _emit 0xd8
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D9 5C 24 44: fstp dword ptr [esp + 0x44]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D9 44 24 44: fld dword ptr [esp + 0x44]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D8 4C 24 44: fmul dword ptr [esp + 0x44]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D8 05 28 52 17 10: fadd dword ptr [0x10175228]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 3D 24 52 17 10: fdivr dword ptr [0x10175224]
        __asm _emit 0xd8
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 05 28 52 17 10: fadd dword ptr [0x10175228]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 82 83 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes D9 5C 24 28: fstp dword ptr [esp + 0x28]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes DB 44 24 48: fild dword ptr [esp + 0x48]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        add esp, 8
        ; Exact mapped bytes D9 5C 24 40: fstp dword ptr [esp + 0x40]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes D9 44 24 40: fld dword ptr [esp + 0x40]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes D8 4C 24 20: fmul dword ptr [esp + 0x20]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes D9 5C 24 40: fstp dword ptr [esp + 0x40]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D9 5C 24 24: fstp dword ptr [esp + 0x24]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D9 44 24 24: fld dword ptr [esp + 0x24]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D8 44 24 40: fadd dword ptr [esp + 0x40]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes E8 4C 83 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 40: fld dword ptr [esp + 0x40]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes D8 4C 24 3C: fmul dword ptr [esp + 0x3c]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        mov ebx, eax
        ; Exact mapped bytes D9 5C 24 3C: fstp dword ptr [esp + 0x3c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes D8 44 24 3C: fadd dword ptr [esp + 0x3c]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes E8 31 83 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes EB 1D: jmp 0x1000449a
        __asm _emit 0xeb
        __asm _emit 0x1d
        lea ecx, [ecx + ecx*4]
        mov esi, edi
        lea ecx, [ecx + ecx*4]
        lea ebx, [ebp + ecx*4]
        ; Exact mapped bytes EB 0F: jmp 0x1000449a
        __asm _emit 0xeb
        __asm _emit 0x0f
        lea ecx, [edx + edx*4]
        mov esi, edi
        mov ebx, ebp
        lea edx, [ecx + ecx*4]
        shl edx, 2
        sub esi, edx
        mov ecx, dword ptr [esp + 38h]
        test ecx, ecx
        ; Exact mapped bytes 75 55: jne 0x100044f7
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 1047ch]
        mov edx, dword ptr [eax + 10474h]
        lea edi, [ecx + edx]
        ; Exact mapped bytes 8B 0D 5C 45 1C 10: mov ecx, dword ptr [0x101c455c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        lea eax, [edi + ebx]
        div ecx
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 14h
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        lea eax, [edi + esi]
        lea ebx, [ebx + edx - 0ah]
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        mov eax, dword ptr [esp + 10h]
        lea esi, [esi + edx - 0ah]
        cmp eax, 19h
        ; Exact mapped bytes 7D 7B: jge 0x10004577
        __asm _emit 0x7d
        __asm _emit 0x7b
        mov edx, dword ptr [esp + 18h]
        mov ecx, 1
        mov eax, 3
        cmp ebp, edx
        mov dword ptr [esp + 38h], ecx
        mov edi, eax
        ; Exact mapped bytes 75 07: jne 0x1000451b
        __asm _emit 0x75
        __asm _emit 0x07
        mov edi, 5
        ; Exact mapped bytes EB 05: jmp 0x10004520
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 7D 03: jge 0x10004520
        __asm _emit 0x7d
        __asm _emit 0x03
        or ecx, 0ffffffffh
        mov edx, dword ptr [esp + 1ch]
        mov ebp, dword ptr [esp + 28h]
        cmp edx, ebp
        ; Exact mapped bytes 75 07: jne 0x10004533
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5
        ; Exact mapped bytes EB 0A: jmp 0x1000453d
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 7D 08: jge 0x1000453d
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [esp + 38h], 0ffffffffh
        imul eax, ecx
        imul edi, dword ptr [esp + 38h]
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        mov eax, 2aaaaaabh
        shl ecx, 2
        imul ecx
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        lea eax, [edi + edi*4]
        add ebx, edx
        lea ecx, [eax + eax*4]
        mov eax, 2aaaaaabh
        shl ecx, 2
        imul ecx
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        add esi, edx
        mov eax, dword ptr [esp + 30h]
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        mov dword ptr [eax], ebx
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        cmp eax, 0c8h
        ; Exact mapped bytes 0F 8E D3 01 00 00: jle 0x10004768
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1ch]
        mov eax, dword ptr [esp + 30h]
        pop edi
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 1ch]
        pop esi
        pop ebp
        mov ecx, dword ptr [edx + 8]
        pop ebx
        mov dword ptr [eax + 4], ecx
        add esp, 1ch
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE E4 00 00 00 00: cmp word ptr [esi + 0xe4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 A6 01 00 00: jne 0x10004768
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 98 01 00 00: je 0x10004768
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 0F 85 8B 01 00 00: jne 0x10004768
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 28 04: cmp word ptr [esi + 0x28], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x28
        __asm _emit 0x04
        ; Exact mapped bytes 0F 83 80 01 00 00: jae 0x10004768
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 40h]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esi + 6ch]
        cmp edx, eax
        ; Exact mapped bytes 0F 87 6F 01 00 00: ja 0x10004768
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        mov esi, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        mov ebx, 1
        mov edi, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 5c44h]
        mov dword ptr [esp + 24h], edi
        cmp eax, 708h
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 40h], ebx
        mov ebp, ebx
        ; Exact mapped bytes 7D 07: jge 0x1000462f
        __asm _emit 0x7d
        __asm _emit 0x07
        or ebx, 0ffffffffh
        mov dword ptr [esp + 40h], ebx
        cmp eax, 384h
        ; Exact mapped bytes 7E 0A: jle 0x10004640
        __asm _emit 0x7e
        __asm _emit 0x0a
        cmp eax, 0a8ch
        ; Exact mapped bytes 7F 03: jg 0x10004640
        __asm _emit 0x7f
        __asm _emit 0x03
        or ebp, 0ffffffffh
        cmp edi, esi
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x100046ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, ecx
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x100046fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, edi
        sub edx, ecx
        mov dword ptr [esp + 3ch], esi
        sub esp, 8
        ; Exact mapped bytes DB 44 24 44: fild dword ptr [esp + 0x44]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        mov dword ptr [esp + 44h], edx
        ; Exact mapped bytes D9 5C 24 30: fstp dword ptr [esp + 0x30]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes DB 44 24 44: fild dword ptr [esp + 0x44]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D9 5C 24 44: fstp dword ptr [esp + 0x44]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D9 44 24 30: fld dword ptr [esp + 0x30]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes D8 74 24 44: fdiv dword ptr [esp + 0x44]
        __asm _emit 0xd8
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D9 5C 24 44: fstp dword ptr [esp + 0x44]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D9 44 24 44: fld dword ptr [esp + 0x44]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D8 4C 24 44: fmul dword ptr [esp + 0x44]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes D8 05 28 52 17 10: fadd dword ptr [0x10175228]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 3D 20 52 17 10: fdivr dword ptr [0x10175220]
        __asm _emit 0xd8
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 05 28 52 17 10: fadd dword ptr [0x10175228]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 0F 81 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes D9 5C 24 30: fstp dword ptr [esp + 0x30]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes DB 44 24 48: fild dword ptr [esp + 0x48]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        add esp, 8
        ; Exact mapped bytes D9 5C 24 40: fstp dword ptr [esp + 0x40]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes D9 44 24 40: fld dword ptr [esp + 0x40]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes D8 4C 24 28: fmul dword ptr [esp + 0x28]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes D9 5C 24 40: fstp dword ptr [esp + 0x40]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D9 5C 24 28: fstp dword ptr [esp + 0x28]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes D9 44 24 28: fld dword ptr [esp + 0x28]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes D8 44 24 40: fadd dword ptr [esp + 0x40]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes E8 D9 80 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 40: fld dword ptr [esp + 0x40]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes D8 4C 24 3C: fmul dword ptr [esp + 0x3c]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        mov esi, eax
        ; Exact mapped bytes D9 5C 24 3C: fstp dword ptr [esp + 0x3c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes D8 44 24 3C: fadd dword ptr [esp + 0x3c]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes E8 BE 80 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes EB 1D: jmp 0x10004709
        __asm _emit 0xeb
        __asm _emit 0x1d
        lea esi, [ebx + ebx*4]
        mov ecx, edx
        lea esi, [esi + esi*4]
        shl esi, 4
        add esi, edi
        ; Exact mapped bytes EB 0E: jmp 0x10004709
        __asm _emit 0xeb
        __asm _emit 0x0e
        lea ecx, [ebp + ebp*4]
        mov esi, edi
        lea ecx, [ecx + ecx*4]
        shl ecx, 4
        add ecx, edx
        mov eax, dword ptr [esp + 38h]
        test eax, eax
        ; Exact mapped bytes 75 4E: jne 0x1000475f
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 1D 5C 45 1C 10: mov ebx, dword ptr [0x101c455c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 8B 2D 64 45 1C 10: mov ebp, dword ptr [0x101c4564]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [eax + 107d8h]
        lea eax, [edi + esi]
        div ebx
        mov eax, dword ptr [ebp + edx*4]
        xor edx, edx
        mov ebp, 10ah
        div ebp
        lea eax, [edi + ecx]
        mov edi, ebp
        lea esi, [esi + edx - 85h]
        xor edx, edx
        div ebx
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div edi
        lea ecx, [ecx + edx - 85h]
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [eax], esi
        mov dword ptr [eax + 4], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
