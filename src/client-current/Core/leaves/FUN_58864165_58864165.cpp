// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864165 .. +0x464 bytes.
extern "C" __declspec(naked) void FUN_58864165_58864165() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        mov ebx, dword ptr [ebp + 8]
        xor eax, eax
        push edi
        mov dword ptr [ebp - 34h], ebx
        mov edi, eax
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebx + 0a8h]
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 48h], ebx
        mov dword ptr [ebp - 44h], eax
        test edx, edx
        ; Exact mapped bytes 0F 84 DF 03 00 00: je 0x5886457f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebx + 8]
        mov dword ptr [ebp - 30h], eax
        push esi
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 75 1C: jne 0x588641c7
        __asm _emit 0x75
        __asm _emit 0x1c
        push ecx
        push 1004h
        push edx
        push eax
        lea eax, [ebp - 48h]
        push eax
        ; Exact mapped bytes E8 F2 F7 00 00: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 0F 85 86 03 00 00: jne 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 1
        ; Exact mapped bytes E8 40 B0 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        mov dword ptr [ebp - 30h], eax
        push esi
        ; Exact mapped bytes E8 35 8A 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov edi, 180h
        push edi
        ; Exact mapped bytes E8 28 B0 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E8 1F 8A 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push edi
        ; Exact mapped bytes E8 17 B0 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E8 0E 8A 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push edi
        ; Exact mapped bytes E8 06 B0 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        push esi
        mov dword ptr [ebp - 38h], edi
        ; Exact mapped bytes E8 FB 89 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 101h
        ; Exact mapped bytes E8 EF AF 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes E8 E6 89 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 3ch
        cmp dword ptr [ebp - 30h], esi
        ; Exact mapped bytes 0F 84 17 03 00 00: je 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], esi
        ; Exact mapped bytes 0F 84 0E 03 00 00: je 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 03 03 00 00: je 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], esi
        ; Exact mapped bytes 0F 84 FA 02 00 00: je 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 F2 02 00 00: je 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov byte ptr [eax + ecx], al
        inc eax
        cmp eax, 100h
        ; Exact mapped bytes 7C F5: jl 0x5886425d
        __asm _emit 0x7c
        __asm _emit 0xf5
        lea eax, [ebp - 18h]
        push eax
        push dword ptr [ebx + 8]
        ; Exact mapped bytes FF 15 AC 43 89 58: call dword ptr [0x588943ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 D0 02 00 00: je 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp eax, 5
        ; Exact mapped bytes 0F 87 C4 02 00 00: ja 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, ax
        mov dword ptr [ebp - 40h], eax
        cmp eax, 1
        ; Exact mapped bytes 76 56: jbe 0x588642ea
        __asm _emit 0x76
        __asm _emit 0x56
        cmp dword ptr [ebx + 8], 0fde9h
        ; Exact mapped bytes 75 18: jne 0x588642b5
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 24h]
        push 80h
        sub eax, -80h
        push 20h
        push eax
        ; Exact mapped bytes E8 60 8B FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 35: jmp 0x588642ea
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp byte ptr [ebp - 12h], 0
        lea edx, [ebp - 12h]
        ; Exact mapped bytes 74 2C: je 0x588642ea
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 24h]
        mov al, byte ptr [edx + 1]
        test al, al
        ; Exact mapped bytes 74 1F: je 0x588642e7
        __asm _emit 0x74
        __asm _emit 0x1f
        movzx ebx, byte ptr [edx]
        movzx eax, al
        cmp ebx, eax
        ; Exact mapped bytes 77 0D: ja 0x588642df
        __asm _emit 0x77
        __asm _emit 0x0d
        mov byte ptr [ebx + ecx], 20h
        inc ebx
        movzx eax, byte ptr [edx + 1]
        cmp ebx, eax
        ; Exact mapped bytes 7E F3: jle 0x588642d2
        __asm _emit 0x7e
        __asm _emit 0xf3
        add edx, 2
        cmp byte ptr [edx], 0
        ; Exact mapped bytes 75 DA: jne 0x588642c1
        __asm _emit 0x75
        __asm _emit 0xda
        mov ebx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 20h]
        mov edx, 0ffh
        mov ecx, dword ptr [ebp - 24h]
        add eax, 81h
        push esi
        push dword ptr [ebx + 8]
        inc ecx
        push edx
        push eax
        push edx
        push ecx
        push 100h
        push dword ptr [ebx + 0a8h]
        mov dword ptr [ebp - 28h], ecx
        push esi
        ; Exact mapped bytes E8 C5 E0 00 00: call 0x588723dc
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 0F 84 2B 02 00 00: je 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push dword ptr [ebx + 8]
        mov ecx, 0ffh
        lea eax, [edi + 81h]
        push ecx
        push eax
        push ecx
        push dword ptr [ebp - 28h]
        push 200h
        push dword ptr [ebx + 0a8h]
        push esi
        ; Exact mapped bytes E8 94 E0 00 00: call 0x588723dc
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 0F 84 FA 01 00 00: je 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push esi
        push dword ptr [ebx + 8]
        add eax, 100h
        push eax
        push 100h
        push dword ptr [ebp - 24h]
        push 1
        push esi
        ; Exact mapped bytes E8 EE F7 00 00: call 0x58873b5e
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 0F 84 D2 01 00 00: je 0x5886454d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 1ch]
        xor eax, eax
        cmp dword ptr [ebp - 40h], 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 89 87 FE 00 00 00: mov word ptr [edi + 0xfe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + 7fh], al
        mov byte ptr [edx + 7fh], al
        mov byte ptr [ecx + 80h], al
        mov byte ptr [edx + 80h], al
        ; Exact mapped bytes 0F 86 D6 00 00 00: jbe 0x5886447f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 8], 0fde9h
        ; Exact mapped bytes 75 62: jne 0x58864414
        __asm _emit 0x75
        __asm _emit 0x62
        lea eax, [edi + 200h]
        mov esi, ecx
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [edx + 100h]
        mov eax, 0fffffebeh
        sub esi, edx
        sub eax, edx
        mov dword ptr [ebp - 28h], eax
        mov edi, eax
        push -80h
        pop eax
        sub eax, edx
        mov dword ptr [ebp - 3ch], eax
        mov ebx, eax
        lea eax, [edi + ecx]
        push 32h
        pop edi
        cmp edi, eax
        mov edi, dword ptr [ebp - 2ch]
        sbb eax, eax
        add dword ptr [ebp - 2ch], 2
        and eax, 0ffff8000h
        add eax, 8000h
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        lea eax, [ecx + ebx]
        mov edi, dword ptr [ebp - 28h]
        mov byte ptr [esi + ecx], al
        mov byte ptr [ecx], al
        inc ecx
        lea eax, [ebx + ecx]
        cmp eax, 0ffh
        ; Exact mapped bytes 7E CC: jle 0x588643db
        __asm _emit 0x7e
        __asm _emit 0xcc
        mov edi, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 68: jmp 0x5886447c
        __asm _emit 0xeb
        __asm _emit 0x68
        cmp byte ptr [ebp - 12h], al
        ; Exact mapped bytes 74 66: je 0x5886447f
        __asm _emit 0x74
        __asm _emit 0x66
        lea ebx, [ebp - 12h]
        mov al, byte ptr [ebx + 1]
        test al, al
        ; Exact mapped bytes 74 59: je 0x5886447c
        __asm _emit 0x74
        __asm _emit 0x59
        movzx esi, byte ptr [ebx]
        movzx eax, al
        mov dword ptr [ebp - 3ch], esi
        cmp esi, eax
        ; Exact mapped bytes 77 44: ja 0x58864474
        __asm _emit 0x77
        __asm _emit 0x44
        lea eax, [edx + 80h]
        sub edi, 0ffffff00h
        add eax, esi
        sub ecx, edx
        mov dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 2ch]
        lea esi, [edi + esi*2]
        mov dword ptr [ebp - 28h], eax
        mov edi, eax
        mov eax, 8000h
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        lea esi, [esi + 2]
        mov byte ptr [edi + edx], cl
        mov byte ptr [edi], cl
        inc ecx
        movzx eax, byte ptr [ebx + 1]
        inc edi
        cmp ecx, eax
        ; Exact mapped bytes 7E E6: jle 0x58864451
        __asm _emit 0x7e
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 38h]
        mov edi, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 20h]
        add ebx, 2
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 75 A0: jne 0x5886441c
        __asm _emit 0x75
        __asm _emit 0xa0
        mov ebx, dword ptr [ebp - 34h]
        lea esi, [edi + 200h]
        mov eax, dword ptr [ebp - 20h]
        push 3fh
        pop ecx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 1fh
        pop ecx
        push 1fh
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        lea esi, [eax + 100h]
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop ecx
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        ; Exact mapped bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
        lea esi, [edx + 100h]
        mov edi, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        ; Exact mapped bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
        mov ecx, dword ptr [ebx + 8ch]
        test ecx, ecx
        ; Exact mapped bytes 74 4C: je 0x58864505
        __asm _emit 0x74
        __asm _emit 0x4c
        or eax, 0ffffffffh
        ; Exact mapped bytes F0 0F C1 01: lock xadd dword ptr [ecx], eax
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 75 43: jne 0x58864505
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [ebx + 90h]
        sub eax, 0feh
        push eax
        ; Exact mapped bytes E8 3D 87 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 94h]
        mov esi, 80h
        sub eax, esi
        push eax
        ; Exact mapped bytes E8 2A 87 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 98h]
        sub eax, esi
        push eax
        ; Exact mapped bytes E8 1C 87 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebx + 8ch]
        ; Exact mapped bytes E8 11 87 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        add esp, 10h
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], 1
        mov dword ptr [ebx + 8ch], eax
        lea eax, [ecx + 100h]
        mov dword ptr [ebx], eax
        lea eax, [ecx + 0feh]
        mov dword ptr [ebx + 90h], eax
        mov eax, dword ptr [ebp - 20h]
        sub eax, -80h
        xor esi, esi
        mov dword ptr [ebx + 94h], eax
        lea eax, [edx + 80h]
        mov dword ptr [ebx + 98h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebx + 4], eax
        ; Exact mapped bytes EB 24: jmp 0x58864571
        __asm _emit 0xeb
        __asm _emit 0x24
        push dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 BB 86 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B3 86 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AB 86 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 A5 86 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        add esp, 10h
        inc esi
        push dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 97 86 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, esi
        pop esi
        ; Exact mapped bytes EB 3C: jmp 0x588645bb
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebx + 8ch]
        test ecx, ecx
        ; Exact mapped bytes 74 03: je 0x5886458c
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes F0 FF 09: lock dec dword ptr [ecx]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x09
        mov dword ptr [ebx + 8ch], eax
        mov dword ptr [ebx + 90h], eax
        xor eax, eax
        mov dword ptr [ebx], 588c4328h
        mov dword ptr [ebx + 94h], 588c45a8h
        mov dword ptr [ebx + 98h], 588c4728h
        mov dword ptr [ebx + 4], 1
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 89 CA FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
