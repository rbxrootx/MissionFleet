// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C890 .. +0x537 bytes.
extern "C" __declspec(naked) void FUN_5884c890() {
    __asm {
        push edi
        push esi
        mov esi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 0ch]
        mov eax, ecx
        mov edx, ecx
        add eax, esi
        cmp edi, esi
        ; Exact mapped bytes 76 08: jbe 0x5884c8b0
        __asm _emit 0x76
        __asm _emit 0x08
        cmp edi, eax
        ; Exact mapped bytes 0F 82 94 02 00 00: jb 0x5884cb44
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 20h
        ; Exact mapped bytes 0F 82 D2 04 00 00: jb 0x5884cd8b
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 80h
        ; Exact mapped bytes 73 13: jae 0x5884c8d4
        __asm _emit 0x73
        __asm _emit 0x13
        ; Exact mapped bytes 0F BA 25 B8 60 90 58 01: bt dword ptr [0x589060b8], 1
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0x25
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 0F 82 8E 04 00 00: jb 0x5884cd5d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 01 00 00: jmp 0x5884cab7
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BA 25 20 67 96 58 01: bt dword ptr [0x58966720], 1
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0x25
        __asm _emit 0x20
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 73 09: jae 0x5884c8e7
        __asm _emit 0x73
        __asm _emit 0x09
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov eax, dword ptr [esp + 0ch]
        pop esi
        pop edi
        ret
        mov eax, edi
        xor eax, esi
        test eax, 0fh
        ; Exact mapped bytes 75 0E: jne 0x5884c900
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 0F BA 25 B8 60 90 58 01: bt dword ptr [0x589060b8], 1
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0x25
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 0F 82 E0 03 00 00: jb 0x5884cce0
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BA 25 20 67 96 58 00: bt dword ptr [0x58966720], 0
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0x25
        __asm _emit 0x20
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 A9 01 00 00: jae 0x5884cab7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, 3
        ; Exact mapped bytes 0F 85 9D 01 00 00: jne 0x5884cab7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, 3
        ; Exact mapped bytes 0F 85 AC 01 00 00: jne 0x5884cad2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        bt edi, 2
        ; Exact mapped bytes 73 0D: jae 0x5884c939
        __asm _emit 0x73
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        sub ecx, 4
        lea esi, [esi + 4]
        mov dword ptr [edi], eax
        lea edi, [edi + 4]
        bt edi, 3
        ; Exact mapped bytes 73 11: jae 0x5884c950
        __asm _emit 0x73
        __asm _emit 0x11
        ; Exact mapped bytes F3 0F 7E 0E: movq xmm1, qword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x0e
        sub ecx, 8
        lea esi, [esi + 8]
        ; Exact mapped bytes 66 0F D6 0F: movq qword ptr [edi], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x0f
        lea edi, [edi + 8]
        test esi, 7
        ; Exact mapped bytes 74 65: je 0x5884c9bd
        __asm _emit 0x74
        __asm _emit 0x65
        bt esi, 3
        ; Exact mapped bytes 0F 83 B4 00 00 00: jae 0x5884ca16
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 6F 4E F4: movdqa xmm1, xmmword ptr [esi - 0xc]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0xf4
        lea esi, [esi - 0ch]
        mov edi, edi
        ; Exact mapped bytes 66 0F 6F 5E 10: movdqa xmm3, xmmword ptr [esi + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x10
        sub ecx, 30h
        ; Exact mapped bytes 66 0F 6F 46 20: movdqa xmm0, xmmword ptr [esi + 0x20]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 6F 6E 30: movdqa xmm5, xmmword ptr [esi + 0x30]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x6e
        __asm _emit 0x30
        lea esi, [esi + 30h]
        cmp ecx, 30h
        ; Exact mapped bytes 66 0F 6F D3: movdqa xmm2, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F 3A 0F D9 0C: palignr xmm3, xmm1, 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0xd9
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 7F 1F: movdqa xmmword ptr [edi], xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0F 6F E0: movdqa xmm4, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F 3A 0F C2 0C: palignr xmm0, xmm2, 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0xc2
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 7F 47 10: movdqa xmmword ptr [edi + 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 6F CD: movdqa xmm1, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcd
        ; Exact mapped bytes 66 0F 3A 0F EC 0C: palignr xmm5, xmm4, 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 7F 6F 20: movdqa xmmword ptr [edi + 0x20], xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x6f
        __asm _emit 0x20
        lea edi, [edi + 30h]
        ; Exact mapped bytes 73 B7: jae 0x5884c96c
        __asm _emit 0x73
        __asm _emit 0xb7
        lea esi, [esi + 0ch]
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x5884ca6c
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 6F 4E F8: movdqa xmm1, xmmword ptr [esi - 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0xf8
        lea esi, [esi - 8]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 6F 5E 10: movdqa xmm3, xmmword ptr [esi + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x10
        sub ecx, 30h
        ; Exact mapped bytes 66 0F 6F 46 20: movdqa xmm0, xmmword ptr [esi + 0x20]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 6F 6E 30: movdqa xmm5, xmmword ptr [esi + 0x30]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x6e
        __asm _emit 0x30
        lea esi, [esi + 30h]
        cmp ecx, 30h
        ; Exact mapped bytes 66 0F 6F D3: movdqa xmm2, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F 3A 0F D9 08: palignr xmm3, xmm1, 8
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0xd9
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 7F 1F: movdqa xmmword ptr [edi], xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0F 6F E0: movdqa xmm4, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F 3A 0F C2 08: palignr xmm0, xmm2, 8
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0xc2
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 7F 47 10: movdqa xmmword ptr [edi + 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 6F CD: movdqa xmm1, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcd
        ; Exact mapped bytes 66 0F 3A 0F EC 08: palignr xmm5, xmm4, 8
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 7F 6F 20: movdqa xmmword ptr [edi + 0x20], xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x6f
        __asm _emit 0x20
        lea edi, [edi + 30h]
        ; Exact mapped bytes 73 B7: jae 0x5884c9c8
        __asm _emit 0x73
        __asm _emit 0xb7
        lea esi, [esi + 8]
        ; Exact mapped bytes EB 56: jmp 0x5884ca6c
        __asm _emit 0xeb
        __asm _emit 0x56
        ; Exact mapped bytes 66 0F 6F 4E FC: movdqa xmm1, xmmword ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0xfc
        lea esi, [esi - 4]
        mov edi, edi
        ; Exact mapped bytes 66 0F 6F 5E 10: movdqa xmm3, xmmword ptr [esi + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x10
        sub ecx, 30h
        ; Exact mapped bytes 66 0F 6F 46 20: movdqa xmm0, xmmword ptr [esi + 0x20]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 6F 6E 30: movdqa xmm5, xmmword ptr [esi + 0x30]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x6e
        __asm _emit 0x30
        lea esi, [esi + 30h]
        cmp ecx, 30h
        ; Exact mapped bytes 66 0F 6F D3: movdqa xmm2, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F 3A 0F D9 04: palignr xmm3, xmm1, 4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0xd9
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 7F 1F: movdqa xmmword ptr [edi], xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0F 6F E0: movdqa xmm4, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F 3A 0F C2 04: palignr xmm0, xmm2, 4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0xc2
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 7F 47 10: movdqa xmmword ptr [edi + 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 6F CD: movdqa xmm1, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xcd
        ; Exact mapped bytes 66 0F 3A 0F EC 04: palignr xmm5, xmm4, 4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0xec
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 7F 6F 20: movdqa xmmword ptr [edi + 0x20], xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x6f
        __asm _emit 0x20
        lea edi, [edi + 30h]
        ; Exact mapped bytes 73 B7: jae 0x5884ca20
        __asm _emit 0x73
        __asm _emit 0xb7
        lea esi, [esi + 4]
        cmp ecx, 10h
        ; Exact mapped bytes 72 13: jb 0x5884ca84
        __asm _emit 0x72
        __asm _emit 0x13
        ; Exact mapped bytes F3 0F 6F 0E: movdqu xmm1, xmmword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        sub ecx, 10h
        lea esi, [esi + 10h]
        ; Exact mapped bytes 66 0F 7F 0F: movdqa xmmword ptr [edi], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x0f
        lea edi, [edi + 10h]
        ; Exact mapped bytes EB E8: jmp 0x5884ca6c
        __asm _emit 0xeb
        __asm _emit 0xe8
        bt ecx, 2
        ; Exact mapped bytes 73 0D: jae 0x5884ca97
        __asm _emit 0x73
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        sub ecx, 4
        lea esi, [esi + 4]
        mov dword ptr [edi], eax
        lea edi, [edi + 4]
        bt ecx, 3
        ; Exact mapped bytes 73 11: jae 0x5884caae
        __asm _emit 0x73
        __asm _emit 0x11
        ; Exact mapped bytes F3 0F 7E 0E: movq xmm1, qword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x0e
        sub ecx, 8
        lea esi, [esi + 8]
        ; Exact mapped bytes 66 0F D6 0F: movq qword ptr [edi], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x0f
        lea edi, [edi + 8]
        mov eax, dword ptr [ecx*4 + 5884caf4h]
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        test edi, 3
        ; Exact mapped bytes 74 13: je 0x5884cad2
        __asm _emit 0x74
        __asm _emit 0x13
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        dec ecx
        add esi, 1
        add edi, 1
        test edi, 3
        ; Exact mapped bytes 75 ED: jne 0x5884cabf
        __asm _emit 0x75
        __asm _emit 0xed
        mov edx, ecx
        cmp ecx, 20h
        ; Exact mapped bytes 0F 82 AE 02 00 00: jb 0x5884cd8b
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        and edx, 3
        ; Exact mapped bytes FF 24 95 F4 CA 84 58: jmp dword ptr [edx*4 + 0x5884caf4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xca
        __asm _emit 0x84
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 8D 04 CB 84 58: jmp dword ptr [ecx*4 + 0x5884cb04]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xcb
        __asm _emit 0x84
        __asm _emit 0x58
        nop
        add al, 0cbh
        test byte ptr [eax + 0ch], bl
        ; Exact mapped bytes CB: retf
        __asm _emit 0xcb
        test byte ptr [eax + 18h], bl
        ; Exact mapped bytes CB: retf
        __asm _emit 0xcb
        test byte ptr [eax + 2ch], bl
        ; Exact mapped bytes CB: retf
        __asm _emit 0xcb
        test byte ptr [eax - 75h], bl
        inc esp
        and al, 0ch
        pop esi
        pop edi
        ret
        nop
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        mov eax, dword ptr [esp + 0ch]
        pop esi
        pop edi
        ret
        nop
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        mov al, byte ptr [esi + 1]
        mov byte ptr [edi + 1], al
        mov eax, dword ptr [esp + 0ch]
        pop esi
        pop edi
        ret
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        mov al, byte ptr [esi + 1]
        mov byte ptr [edi + 1], al
        mov al, byte ptr [esi + 2]
        mov byte ptr [edi + 2], al
        mov eax, dword ptr [esp + 0ch]
        pop esi
        pop edi
        ret
        nop
        lea esi, [esi + ecx]
        lea edi, [edi + ecx]
        cmp ecx, 20h
        ; Exact mapped bytes 0F 82 51 01 00 00: jb 0x5884cca4
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BA 25 B8 60 90 58 01: bt dword ptr [0x589060b8], 1
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0x25
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 0F 82 94 00 00 00: jb 0x5884cbf5
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, 3
        ; Exact mapped bytes 74 14: je 0x5884cb7d
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, edi
        and edx, 3
        sub ecx, edx
        mov al, byte ptr [esi - 1]
        mov byte ptr [edi - 1], al
        dec esi
        dec edi
        sub edx, 1
        ; Exact mapped bytes 75 F3: jne 0x5884cb70
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp ecx, 20h
        ; Exact mapped bytes 0F 82 1E 01 00 00: jb 0x5884cca4
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        shr ecx, 2
        and edx, 3
        sub esi, 4
        sub edi, 4
        std
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cld
        ; Exact mapped bytes FF 24 95 A0 CB 84 58: jmp dword ptr [edx*4 + 0x5884cba0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xcb
        __asm _emit 0x84
        __asm _emit 0x58
        nop
        mov al, 0cbh
        test byte ptr [eax - 48h], bl
        ; Exact mapped bytes CB: retf
        __asm _emit 0xcb
        test byte ptr [eax - 38h], bl
        ; Exact mapped bytes CB: retf
        __asm _emit 0xcb
        test byte ptr [eax - 24h], bl
        ; Exact mapped bytes CB: retf
        __asm _emit 0xcb
        test byte ptr [eax - 75h], bl
        inc esp
        and al, 0ch
        pop esi
        pop edi
        ret
        nop
        mov al, byte ptr [esi + 3]
        mov byte ptr [edi + 3], al
        mov eax, dword ptr [esp + 0ch]
        pop esi
        pop edi
        ret
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov al, byte ptr [esi + 3]
        mov byte ptr [edi + 3], al
        mov al, byte ptr [esi + 2]
        mov byte ptr [edi + 2], al
        mov eax, dword ptr [esp + 0ch]
        pop esi
        pop edi
        ret
        nop
        mov al, byte ptr [esi + 3]
        mov byte ptr [edi + 3], al
        mov al, byte ptr [esi + 2]
        mov byte ptr [edi + 2], al
        mov al, byte ptr [esi + 1]
        mov byte ptr [edi + 1], al
        mov eax, dword ptr [esp + 0ch]
        pop esi
        pop edi
        ret
        test edi, 0fh
        ; Exact mapped bytes 74 0F: je 0x5884cc0c
        __asm _emit 0x74
        __asm _emit 0x0f
        dec ecx
        dec esi
        dec edi
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        test edi, 0fh
        ; Exact mapped bytes 75 F1: jne 0x5884cbfd
        __asm _emit 0x75
        __asm _emit 0xf1
        cmp ecx, 80h
        ; Exact mapped bytes 72 68: jb 0x5884cc7c
        __asm _emit 0x72
        __asm _emit 0x68
        sub esi, 80h
        sub edi, 80h
        ; Exact mapped bytes F3 0F 6F 06: movdqu xmm0, xmmword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes F3 0F 6F 4E 10: movdqu xmm1, xmmword ptr [esi + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 6F 56 20: movdqu xmm2, xmmword ptr [esi + 0x20]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x20
        ; Exact mapped bytes F3 0F 6F 5E 30: movdqu xmm3, xmmword ptr [esi + 0x30]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x30
        ; Exact mapped bytes F3 0F 6F 66 40: movdqu xmm4, xmmword ptr [esi + 0x40]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x40
        ; Exact mapped bytes F3 0F 6F 6E 50: movdqu xmm5, xmmword ptr [esi + 0x50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x6e
        __asm _emit 0x50
        ; Exact mapped bytes F3 0F 6F 76 60: movdqu xmm6, xmmword ptr [esi + 0x60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x76
        __asm _emit 0x60
        ; Exact mapped bytes F3 0F 6F 7E 70: movdqu xmm7, xmmword ptr [esi + 0x70]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x7e
        __asm _emit 0x70
        ; Exact mapped bytes F3 0F 7F 07: movdqu xmmword ptr [edi], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes F3 0F 7F 4F 10: movdqu xmmword ptr [edi + 0x10], xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 7F 57 20: movdqu xmmword ptr [edi + 0x20], xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes F3 0F 7F 5F 30: movdqu xmmword ptr [edi + 0x30], xmm3
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x30
        ; Exact mapped bytes F3 0F 7F 67 40: movdqu xmmword ptr [edi + 0x40], xmm4
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x67
        __asm _emit 0x40
        ; Exact mapped bytes F3 0F 7F 6F 50: movdqu xmmword ptr [edi + 0x50], xmm5
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes F3 0F 7F 77 60: movdqu xmmword ptr [edi + 0x60], xmm6
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x77
        __asm _emit 0x60
        ; Exact mapped bytes F3 0F 7F 7F 70: movdqu xmmword ptr [edi + 0x70], xmm7
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x70
        sub ecx, 80h
        test ecx, 0ffffff80h
        ; Exact mapped bytes 75 90: jne 0x5884cc0c
        __asm _emit 0x75
        __asm _emit 0x90
        cmp ecx, 20h
        ; Exact mapped bytes 72 23: jb 0x5884cca4
        __asm _emit 0x72
        __asm _emit 0x23
        sub esi, 20h
        sub edi, 20h
        ; Exact mapped bytes F3 0F 6F 06: movdqu xmm0, xmmword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes F3 0F 6F 4E 10: movdqu xmm1, xmmword ptr [esi + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 7F 07: movdqu xmmword ptr [edi], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes F3 0F 7F 4F 10: movdqu xmmword ptr [edi + 0x10], xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x10
        sub ecx, 20h
        test ecx, 0ffffffe0h
        ; Exact mapped bytes 75 DD: jne 0x5884cc81
        __asm _emit 0x75
        __asm _emit 0xdd
        test ecx, 0fffffffch
        ; Exact mapped bytes 74 15: je 0x5884ccc1
        __asm _emit 0x74
        __asm _emit 0x15
        sub edi, 4
        sub esi, 4
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        sub ecx, 4
        test ecx, 0fffffffch
        ; Exact mapped bytes 75 EB: jne 0x5884ccac
        __asm _emit 0x75
        __asm _emit 0xeb
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x5884ccd4
        __asm _emit 0x74
        __asm _emit 0x0f
        sub edi, 1
        sub esi, 1
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        sub ecx, 1
        ; Exact mapped bytes 75 F1: jne 0x5884ccc5
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esp + 0ch]
        pop esi
        pop edi
        ret
        ; Exact mapped bytes EB 03: jmp 0x5884cce0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        mov eax, esi
        and eax, 0fh
        test eax, eax
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x5884cdd0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        and ecx, 7fh
        shr edx, 7
        ; Exact mapped bytes 74 66: je 0x5884cd5d
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, edi
        ; Exact mapped bytes 66 0F 6F 06: movdqa xmm0, xmmword ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes 66 0F 6F 4E 10: movdqa xmm1, xmmword ptr [esi + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 6F 56 20: movdqa xmm2, xmmword ptr [esi + 0x20]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 6F 5E 30: movdqa xmm3, xmmword ptr [esi + 0x30]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5e
        __asm _emit 0x30
        ; Exact mapped bytes 66 0F 7F 07: movdqa xmmword ptr [edi], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 66 0F 7F 4F 10: movdqa xmmword ptr [edi + 0x10], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 7F 57 20: movdqa xmmword ptr [edi + 0x20], xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 7F 5F 30: movdqa xmmword ptr [edi + 0x30], xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x30
        ; Exact mapped bytes 66 0F 6F 66 40: movdqa xmm4, xmmword ptr [esi + 0x40]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0x40
        ; Exact mapped bytes 66 0F 6F 6E 50: movdqa xmm5, xmmword ptr [esi + 0x50]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x6e
        __asm _emit 0x50
        ; Exact mapped bytes 66 0F 6F 76 60: movdqa xmm6, xmmword ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x76
        __asm _emit 0x60
        ; Exact mapped bytes 66 0F 6F 7E 70: movdqa xmm7, xmmword ptr [esi + 0x70]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x7e
        __asm _emit 0x70
        ; Exact mapped bytes 66 0F 7F 67 40: movdqa xmmword ptr [edi + 0x40], xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x67
        __asm _emit 0x40
        ; Exact mapped bytes 66 0F 7F 6F 50: movdqa xmmword ptr [edi + 0x50], xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 66 0F 7F 77 60: movdqa xmmword ptr [edi + 0x60], xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x77
        __asm _emit 0x60
        ; Exact mapped bytes 66 0F 7F 7F 70: movdqa xmmword ptr [edi + 0x70], xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0x70
        lea esi, [esi + 80h]
        lea edi, [edi + 80h]
        dec edx
        ; Exact mapped bytes 75 A3: jne 0x5884cd00
        __asm _emit 0x75
        __asm _emit 0xa3
        test ecx, ecx
        ; Exact mapped bytes 74 5F: je 0x5884cdc0
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, ecx
        shr edx, 5
        test edx, edx
        ; Exact mapped bytes 74 21: je 0x5884cd8b
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 6F 06: movdqu xmm0, xmmword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x06
        ; Exact mapped bytes F3 0F 6F 4E 10: movdqu xmm1, xmmword ptr [esi + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 7F 07: movdqu xmmword ptr [edi], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes F3 0F 7F 4F 10: movdqu xmmword ptr [edi + 0x10], xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0x10
        lea esi, [esi + 20h]
        lea edi, [edi + 20h]
        dec edx
        ; Exact mapped bytes 75 E5: jne 0x5884cd70
        __asm _emit 0x75
        __asm _emit 0xe5
        and ecx, 1fh
        ; Exact mapped bytes 74 30: je 0x5884cdc0
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, ecx
        shr ecx, 2
        ; Exact mapped bytes 74 0F: je 0x5884cda6
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [esi]
        mov dword ptr [edi], edx
        add edi, 4
        add esi, 4
        sub ecx, 1
        ; Exact mapped bytes 75 F1: jne 0x5884cd97
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes 74 13: je 0x5884cdc0
        __asm _emit 0x74
        __asm _emit 0x13
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        inc esi
        inc edi
        dec ecx
        ; Exact mapped bytes 75 F7: jne 0x5884cdad
        __asm _emit 0x75
        __asm _emit 0xf7
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        pop esi
        pop edi
        ret
    }
}
