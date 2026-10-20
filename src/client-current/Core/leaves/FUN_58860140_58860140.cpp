// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58860140 .. +0x4D7 bytes.
extern "C" __declspec(naked) void FUN_58860140_58860140() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 228h
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        mov esi, dword ptr [ebx]
        test esi, esi
        ; Exact mapped bytes 0F 84 B1 04 00 00: je 0x5886060c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov edi, dword ptr [eax]
        mov dword ptr [ebp - 28h], edi
        test edi, edi
        ; Exact mapped bytes 0F 84 A1 04 00 00: je 0x5886060c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi - 1]
        mov dword ptr [ebp - 8], ecx
        add edi, -1
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x588602ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 2ch], edx
        cmp edx, 1
        ; Exact mapped bytes 75 2F: jne 0x588601b4
        __asm _emit 0x75
        __asm _emit 0x2f
        mov esi, dword ptr [ebx + 4]
        lea eax, [ebp - 224h]
        push edi
        push eax
        lea ecx, [ebx + 4]
        mov dword ptr [ebp - 228h], edi
        push 1cch
        push ecx
        mov dword ptr [ebx], edi
        ; Exact mapped bytes E8 95 68 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov eax, esi
        xor edx, edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        test ecx, ecx
        ; Exact mapped bytes 75 40: jne 0x588601f8
        __asm _emit 0x75
        __asm _emit 0x40
        mov esi, dword ptr [ebx + 4]
        lea eax, [ebp - 224h]
        push ecx
        push eax
        lea edi, [ebx + 4]
        mov dword ptr [ebp - 228h], ecx
        push 1cch
        push edi
        mov dword ptr [ebx], ecx
        ; Exact mapped bytes E8 62 68 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov eax, esi
        div dword ptr [ebp - 2ch]
        add esp, 10h
        xor ecx, ecx
        cmp ecx, edx
        mov dword ptr [edi], edx
        sbb ecx, ecx
        pop edi
        neg ecx
        xor edx, edx
        pop esi
        mov dword ptr [ebx], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 F0: movlpd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf0
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 0F 13 45 AC: movlpd qword ptr [ebp - 0x54], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xac
        mov edi, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 4], eax
        cmp ecx, -1
        ; Exact mapped bytes 74 43: je 0x58860256
        __asm _emit 0x74
        __asm _emit 0x43
        inc ecx
        lea ecx, [ebx + ecx*4]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push 0
        push edx
        xor eax, eax
        or eax, dword ptr [ecx]
        push edi
        push eax
        ; Exact mapped bytes E8 F1 CD 01 00: call 0x5887d020
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], ebx
        pop ebx
        nop
        mov ebx, dword ptr [ebp - 4]
        xor edx, edx
        add edx, eax
        mov edi, ecx
        mov ecx, dword ptr [ebp - 8]
        adc ebx, 0
        mov dword ptr [ebp - 4], edx
        mov edx, dword ptr [ebp - 2ch]
        sub ecx, 4
        mov dword ptr [ebp - 8], ecx
        sub esi, 1
        ; Exact mapped bytes 75 CC: jne 0x58860220
        __asm _emit 0x75
        __asm _emit 0xcc
        ; Exact mapped bytes EB 09: jmp 0x5886025f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 50h]
        mov ebx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp + 8]
        push 0
        mov dword ptr [ebp - 228h], 0
        lea esi, [eax + 4]
        mov dword ptr [eax], 0
        lea eax, [ebp - 224h]
        push eax
        push 1cch
        push esi
        ; Exact mapped bytes E8 B2 67 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        add esp, 10h
        mov edx, dword ptr [ebp + 8]
        xor ecx, ecx
        cmp ecx, eax
        mov dword ptr [esi], edi
        sbb ecx, ecx
        neg ecx
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 4]
        inc ecx
        pop edi
        mov dword ptr [edx], ecx
        mov edx, ebx
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        cmp edi, ecx
        ; Exact mapped bytes 0F 87 56 03 00 00: ja 0x5886060c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        mov eax, ecx
        sub edx, edi
        cmp ecx, edx
        ; Exact mapped bytes 7C 25: jl 0x588602e5
        __asm _emit 0x7c
        __asm _emit 0x25
        mov esi, dword ptr [ebp + 0ch]
        inc ecx
        lea esi, [esi + edi*4]
        lea ecx, [ebx + ecx*4]
        add esi, 4
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, dword ptr [esi]
        cmp edi, dword ptr [ecx]
        ; Exact mapped bytes 75 0D: jne 0x588602e3
        __asm _emit 0x75
        __asm _emit 0x0d
        dec eax
        sub esi, 4
        sub ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 7D EF: jge 0x588602d0
        __asm _emit 0x7d
        __asm _emit 0xef
        ; Exact mapped bytes EB 02: jmp 0x588602e5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 73 01: jae 0x588602e6
        __asm _emit 0x73
        __asm _emit 0x01
        inc edx
        test edx, edx
        ; Exact mapped bytes 0F 84 1E 03 00 00: je 0x5886060c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 28h]
        mov edi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edi + esi*4 - 4]
        mov ebx, dword ptr [edi + esi*4]
        mov dword ptr [ebp - 4], eax
        bsr eax, ebx
        mov dword ptr [ebp - 38h], ebx
        ; Exact mapped bytes 74 09: je 0x5886030f
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, 1fh
        sub ecx, eax
        ; Exact mapped bytes EB 05: jmp 0x58860314
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ecx, 20h
        mov eax, 20h
        mov dword ptr [ebp - 30h], ecx
        sub eax, ecx
        mov dword ptr [ebp - 34h], eax
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x58860352
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 34h]
        shr eax, cl
        mov ecx, dword ptr [ebp - 30h]
        shl ebx, cl
        or ebx, eax
        mov dword ptr [ebp - 38h], ebx
        mov ebx, dword ptr [ebp - 4]
        shl ebx, cl
        mov dword ptr [ebp - 4], ebx
        cmp esi, 2
        ; Exact mapped bytes 76 0E: jbe 0x58860352
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [edi + esi*4 - 8]
        mov ecx, dword ptr [ebp - 34h]
        shr eax, cl
        or ebx, eax
        mov dword ptr [ebp - 4], ebx
        lea ebx, [edx - 1]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 F0: movlpd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf0
        mov dword ptr [ebp - 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 0F 88 5E 02 00 00: js 0x588605c6
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        lea edx, [ebx + esi]
        mov dword ptr [ebp - 40h], edx
        lea ecx, [eax + 4]
        lea ecx, [ecx + ebx*4]
        mov dword ptr [ebp - 44h], ecx
        lea ecx, [eax - 4]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [ecx + edx*4]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 77 05: ja 0x5886039a
        __asm _emit 0x77
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x5886039c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        cmp dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ecx + 4]
        mov ebx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 24h], ebx
        ; Exact mapped bytes 76 3C: jbe 0x588603f6
        __asm _emit 0x76
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 34h]
        mov edi, ebx
        shr edi, cl
        xor esi, esi
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F5 CC 01 00: call 0x5887d0c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        or eax, edi
        or edx, esi
        shl ebx, cl
        cmp dword ptr [ebp - 40h], 3
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 24h], ebx
        ; Exact mapped bytes 72 13: jb 0x588603f6
        __asm _emit 0x72
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 34h]
        mov eax, dword ptr [eax - 4]
        shr eax, cl
        or ebx, eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], ebx
        mov esi, dword ptr [ebp - 38h]
        push 0
        push esi
        push edx
        push eax
        ; Exact mapped bytes E8 9D 17 FD FF: call 0x58831ba0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push esi
        push dword ptr [ebp - 1ch]
        mov ebx, eax
        mov dword ptr [ebp - 14h], edx
        push dword ptr [ebp - 18h]
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 10h], ebx
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E8 F1 17 FD FF: call 0x58831c10
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edi, eax
        xor esi, esi
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], esi
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58860432
        __asm _emit 0x75
        __asm _emit 0x05
        cmp ebx, -1
        ; Exact mapped bytes 76 2A: jbe 0x5886045c
        __asm _emit 0x76
        __asm _emit 0x2a
        push 0
        push dword ptr [ebp - 38h]
        add ebx, 1
        adc eax, -1
        push eax
        push ebx
        ; Exact mapped bytes E8 0C 17 FD FF: call 0x58831b50
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        add edi, eax
        adc esi, edx
        or ebx, 0ffffffffh
        xor eax, eax
        mov dword ptr [ebp - 18h], esi
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 10h], ebx
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 0ch], eax
        test esi, esi
        ; Exact mapped bytes 77 50: ja 0x588604b0
        __asm _emit 0x77
        __asm _emit 0x50
        ; Exact mapped bytes 72 05: jb 0x58860467
        __asm _emit 0x72
        __asm _emit 0x05
        cmp edi, -1
        ; Exact mapped bytes 77 49: ja 0x588604b0
        __asm _emit 0x77
        __asm _emit 0x49
        push eax
        push ebx
        xor ecx, ecx
        mov esi, edi
        or ecx, dword ptr [ebp - 24h]
        push 0
        push dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E8 D3 16 FD FF: call 0x58831b50
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp edx, esi
        ; Exact mapped bytes 72 29: jb 0x588604aa
        __asm _emit 0x72
        __asm _emit 0x29
        ; Exact mapped bytes 77 05: ja 0x58860488
        __asm _emit 0x77
        __asm _emit 0x05
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 76 22: jbe 0x588604aa
        __asm _emit 0x76
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 14h]
        add ebx, -1
        mov dword ptr [ebp - 10h], ebx
        adc eax, -1
        add edi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 14h], eax
        adc dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 0A: jne 0x588604ad
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp edi, -1
        ; Exact mapped bytes 76 BF: jbe 0x58860467
        __asm _emit 0x76
        __asm _emit 0xbf
        ; Exact mapped bytes EB 03: jmp 0x588604ad
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 3ch], ebx
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x588604bc
        __asm _emit 0x75
        __asm _emit 0x08
        test ebx, ebx
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x58860592
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 0F 13 45 E0: movlpd qword ptr [ebp - 0x20], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xe0
        mov esi, dword ptr [ebp - 1ch]
        mov edi, dword ptr [ebp - 20h]
        test ecx, ecx
        ; Exact mapped bytes 74 55: je 0x58860529
        __asm _emit 0x74
        __asm _emit 0x55
        mov ebx, dword ptr [ebp - 44h]
        add eax, 4
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mul dword ptr [ebp - 1ch]
        mov ecx, eax
        mov eax, dword ptr [ebp - 10h]
        mul dword ptr [ebp - 1ch]
        add edx, ecx
        add edi, eax
        mov eax, dword ptr [ebx]
        mov ecx, edi
        adc esi, edx
        mov edi, esi
        xor esi, esi
        cmp eax, ecx
        ; Exact mapped bytes 73 05: jae 0x5886050a
        __asm _emit 0x73
        __asm _emit 0x05
        add edi, 1
        adc esi, esi
        sub eax, ecx
        mov dword ptr [ebx], eax
        add ebx, 4
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        sub dword ptr [ebp - 24h], 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 75 C0: jne 0x588604e0
        __asm _emit 0x75
        __asm _emit 0xc0
        mov eax, dword ptr [ebp + 0ch]
        mov ebx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 28h]
        add eax, 4
        mov dword ptr [ebp - 1ch], eax
        xor eax, eax
        cmp eax, esi
        ; Exact mapped bytes 77 52: ja 0x58860587
        __asm _emit 0x77
        __asm _emit 0x52
        ; Exact mapped bytes 72 05: jb 0x5886053c
        __asm _emit 0x72
        __asm _emit 0x05
        cmp dword ptr [ebp - 48h], edi
        ; Exact mapped bytes 73 4B: jae 0x58860587
        __asm _emit 0x73
        __asm _emit 0x4b
        test ecx, ecx
        ; Exact mapped bytes 74 44: je 0x58860584
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov esi, dword ptr [ebp - 1ch]
        mov edi, ecx
        ; Exact mapped bytes 66 0F 13 45 B4: movlpd qword ptr [ebp - 0x4c], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xb4
        mov ebx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx]
        lea esi, [esi + 4]
        xor eax, eax
        lea edx, [edx + 4]
        add ecx, dword ptr [esi - 4]
        adc eax, eax
        add ecx, dword ptr [ebp - 48h]
        mov dword ptr [edx - 4], ecx
        adc eax, ebx
        xor ebx, ebx
        mov dword ptr [ebp - 48h], eax
        sub edi, 1
        ; Exact mapped bytes 75 DF: jne 0x58860560
        __asm _emit 0x75
        __asm _emit 0xdf
        mov ebx, dword ptr [ebp - 3ch]
        add ebx, -1
        mov edx, dword ptr [ebp - 40h]
        lea eax, [edx - 1]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 03: jmp 0x58860595
        __asm _emit 0xeb
        __asm _emit 0x03
        mov edx, dword ptr [ebp - 40h]
        mov esi, dword ptr [ebp - 58h]
        xor eax, eax
        mov ecx, dword ptr [ebp - 2ch]
        add eax, ebx
        mov ebx, dword ptr [ebp - 50h]
        mov edi, eax
        adc esi, 0
        mov dword ptr [ebp - 58h], edi
        sub dword ptr [ebp - 44h], 4
        dec ebx
        dec edx
        mov dword ptr [ebp - 50h], ebx
        sub ecx, 4
        mov dword ptr [ebp - 40h], edx
        mov dword ptr [ebp - 2ch], ecx
        test ebx, ebx
        ; Exact mapped bytes 0F 89 CC FD FF FF: jns 0x58860390
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x588605cc
        __asm _emit 0xeb
        __asm _emit 0x06
        mov esi, dword ptr [ebp - 0ch]
        mov edi, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8]
        mov ebx, dword ptr [ebp + 8]
        inc ecx
        mov eax, ecx
        cmp eax, dword ptr [ebx]
        ; Exact mapped bytes 73 15: jae 0x588605ee
        __asm _emit 0x73
        __asm _emit 0x15
        lea edx, [ebx + 4]
        lea edx, [edx + eax*4]
        nop
        mov dword ptr [edx], 0
        lea edx, [edx + 4]
        inc eax
        cmp eax, dword ptr [ebx]
        ; Exact mapped bytes 72 F2: jb 0x588605e0
        __asm _emit 0x72
        __asm _emit 0xf2
        mov dword ptr [ebx], ecx
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x58860601
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebx + ecx*4], 0
        ; Exact mapped bytes 75 07: jne 0x58860601
        __asm _emit 0x75
        __asm _emit 0x07
        add ecx, -1
        mov dword ptr [ebx], ecx
        ; Exact mapped bytes 75 F3: jne 0x588605f4
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, edi
        mov edx, esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        pop edi
        pop esi
        xor eax, eax
        xor edx, edx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
