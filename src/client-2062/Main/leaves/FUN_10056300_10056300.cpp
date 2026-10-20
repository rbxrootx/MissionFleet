// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10056300 .. +0x3F2 bytes.
extern "C" __declspec(naked) void FUN_10056300_10056300() {
    __asm {
        push ecx
        mov dl, byte ptr [esp + 8]
        push ebx
        push ebp
        mov ebp, ecx
        mov cl, byte ptr [esp + 14h]
        xor eax, eax
        mov ah, dl
        push esi
        mov al, cl
        push edi
        test dl, dl
        ; Exact mapped bytes 66 89 85 16 01 00 00: mov word ptr [ebp + 0x116], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 16: jne 0x10056336
        __asm _emit 0x75
        __asm _emit 0x16
        cmp cl, 1
        ; Exact mapped bytes 75 11: jne 0x10056336
        __asm _emit 0x75
        __asm _emit 0x11
        push 0
        mov ecx, ebp
        ; Exact mapped bytes E8 42 FB FF FF: call 0x10055e70
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        xor esi, esi
        mov eax, 1019b024h
        mov edi, dword ptr [eax - 1ch]
        test edi, edi
        ; Exact mapped bytes 74 1A: je 0x1005635e
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp byte ptr [eax], dl
        ; Exact mapped bytes 75 16: jne 0x1005635e
        __asm _emit 0x75
        __asm _emit 0x16
        mov dl, byte ptr [eax + 2]
        mov bl, byte ptr [eax + 1]
        and dl, 0fh
        shl bl, 4
        or dl, bl
        cmp dl, cl
        ; Exact mapped bytes 74 11: je 0x1005636b
        __asm _emit 0x74
        __asm _emit 0x11
        mov dl, byte ptr [esp + 18h]
        add eax, 0cb8h
        inc esi
        cmp eax, 101a7ba4h
        ; Exact mapped bytes 7C D2: jl 0x1005633d
        __asm _emit 0x7c
        __asm _emit 0xd2
        cmp esi, 10h
        ; Exact mapped bytes 75 11: jne 0x10056381
        __asm _emit 0x75
        __asm _emit 0x11
        push 0
        mov ecx, ebp
        ; Exact mapped bytes E8 F7 FA FF FF: call 0x10055e70
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi*4 + 101c5658h]
        mov dword ptr [esp + 1ch], edx
        cmp dword ptr [edx + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x100563a4
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [edx + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100563a4
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x100563a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 344h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100563db
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp + 3f4h]
        test ecx, ecx
        ; Exact mapped bytes 74 49: je 0x1005642e
        __asm _emit 0x74
        __asm _emit 0x49
        cmp dword ptr [edx + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100563fd
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [edx + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100563fd
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100563ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1005642e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        lea eax, [esi + esi*4]
        xor ebx, ebx
        lea ecx, [eax + eax*4]
        lea eax, [esi + ecx*4]
        lea ecx, [esi + eax*2]
        xor eax, eax
        lea esi, [esi + ecx*2]
        shl esi, 3
        mov dword ptr [esp + 10h], esi
        mov al, byte ptr [esi + 1019b0a4h]
        test eax, eax
        mov dword ptr [ebp + 120h], eax
        ; Exact mapped bytes 0F 8E D3 00 00 00: jle 0x1005652f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea esi, [esi + 1019b1ach]
        mov dword ptr [esp + 18h], eax
        lea edi, [ebp + 198h]
        ; Exact mapped bytes EB 08: jmp 0x10056478
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 18h]
        cmp dword ptr [edx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x10056492
        __asm _emit 0x7e
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7C 0E: jl 0x10056492
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov ecx, dword ptr [edx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10056492
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x10056494
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100564c5
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi - 100h]
        mov edx, dword ptr [esi - 104h]
        push ecx
        mov ecx, dword ptr [edi]
        push edx
        ; Exact mapped bytes E8 F6 87 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        or byte ptr [eax + 24h], 0fh
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 F9 13 FC FF: call 0x100178e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi - 4]
        push eax
        push ecx
        mov ecx, dword ptr [edi + 80h]
        ; Exact mapped bytes E8 D7 87 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi - 4]
        mov ecx, dword ptr [edi + 80h]
        push edx
        push eax
        ; Exact mapped bytes E8 95 B3 FB FF: call 0x100118a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [ebp + 120h]
        inc ebx
        add esi, 8
        add edi, 4
        add ecx, 40h
        cmp ebx, eax
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 0F 8C 45 FF FF FF: jl 0x10056470
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0c0h
        ; Exact mapped bytes 7E 11: jle 0x10056551
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10056551
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 3000h
        ; Exact mapped bytes EB 02: jmp 0x10056553
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 3ech]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10056588
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0bdh
        ; Exact mapped bytes 7E 11: jle 0x100565aa
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100565aa
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 2f40h
        ; Exact mapped bytes EB 02: jmp 0x100565ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 3e8h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100565e1
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 1019b2b4h]
        mov edx, dword ptr [esi + 1019b2b0h]
        push ecx
        mov ecx, dword ptr [ebp + 3e8h]
        push edx
        ; Exact mapped bytes E8 76 14 FF FF: call 0x10047a70
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 3e8h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esp + 1ch]
        mov edi, 20h
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x10056627
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10056627
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 800h
        ; Exact mapped bytes EB 02: jmp 0x10056629
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 194h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005665e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [eax + 1019b2ach]
        mov edx, dword ptr [eax + 1019b2a8h]
        push ecx
        mov ecx, dword ptr [ebp + 194h]
        push edx
        ; Exact mapped bytes E8 35 12 FC FF: call 0x100178b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 194h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [ebp + 3e4h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 120h]
        cmp eax, edi
        ; Exact mapped bytes 7D 4E: jge 0x100566ea
        __asm _emit 0x7d
        __asm _emit 0x4e
        lea esi, [ebp + eax*4 + 198h]
        sub edi, eax
        mov ebx, 0fff0h
        mov ecx, dword ptr [esi]
        push 12ch
        push 320h
        ; Exact mapped bytes E8 15 86 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x86
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 1E 12 FC FF: call 0x100178e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        push 0
        push 320h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 F6 85 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        add esi, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edi
        ; Exact mapped bytes 75 C0: jne 0x100566aa
        __asm _emit 0x75
        __asm _emit 0xc0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
