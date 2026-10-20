// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B22B0 .. +0x432 bytes.
extern "C" __declspec(naked) void FUN_587b22b0_587B22B0() {
    __asm {
        sub esp, 38h
        push ebx
        mov ebx, dword ptr [esp + 40h]
        push ebp
        push esi
        push edi
        mov ecx, dword ptr [ebx + 1ch]
        mov eax, dword ptr [ebx + 4]
        mov edx, dword ptr [ebx]
        add eax, -5
        mov esi, dword ptr [ebx + 0ch]
        add eax, edx
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [ebx + 10h]
        mov ebx, eax
        sub ebx, dword ptr [esp + 50h]
        add eax, 0fffffeffh
        mov edi, dword ptr [ecx + 3ch]
        add eax, esi
        mov ebp, dword ptr [ecx + 40h]
        add ebx, esi
        mov dword ptr [esp + 30h], eax
        mov eax, dword ptr [ecx + 2ch]
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [ecx + 30h]
        mov dword ptr [esp + 40h], eax
        mov eax, dword ptr [ecx + 34h]
        mov dword ptr [esp + 44h], eax
        mov eax, dword ptr [ecx + 38h]
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [ecx + 50h]
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [ecx + 54h]
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 3ch], ebx
        mov ebx, 1
        mov dword ptr [esp + 14h], ecx
        mov eax, ebx
        mov ecx, dword ptr [ecx + 58h]
        shl eax, cl
        dec eax
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 34h], eax
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [eax + 5ch]
        mov eax, ebx
        shl eax, cl
        dec eax
        mov dword ptr [esp + 38h], eax
        cmp ebp, 0fh
        ; Exact mapped bytes 73 1E: jae 0x587b2365
        __asm _emit 0x73
        __asm _emit 0x1e
        movzx eax, byte ptr [edx]
        mov ecx, ebp
        shl eax, cl
        lea ecx, [ebp + 8]
        add edi, eax
        movzx eax, byte ptr [edx + 1]
        shl eax, cl
        add edx, 2
        add edi, eax
        mov dword ptr [esp + 10h], edx
        add ebp, 10h
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 1ch]
        and eax, edi
        lea eax, [ecx + eax*4]
        movzx ecx, byte ptr [eax + 1]
        shr edi, cl
        sub ebp, ecx
        movzx ecx, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 36: je 0x587b23b7
        __asm _emit 0x74
        __asm _emit 0x36
        test cl, 10h
        ; Exact mapped bytes 75 3C: jne 0x587b23c2
        __asm _emit 0x75
        __asm _emit 0x3c
        test cl, 40h
        ; Exact mapped bytes 0F 85 F3 02 00 00: jne 0x587b2682
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [eax + 2]
        mov edx, ebx
        shl edx, cl
        dec edx
        and edx, edi
        add edx, eax
        mov eax, dword ptr [esp + 1ch]
        movzx ecx, byte ptr [eax + edx*4 + 1]
        lea eax, [eax + edx*4]
        shr edi, cl
        sub ebp, ecx
        movzx ecx, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 CE: jne 0x587b2381
        __asm _emit 0x75
        __asm _emit 0xce
        mov edx, dword ptr [esp + 10h]
        mov al, byte ptr [eax + 2]
        mov byte ptr [esi], al
        inc esi
        ; Exact mapped bytes E9 63 02 00 00: jmp 0x587b2625
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ebx, word ptr [eax + 2]
        and ecx, 0fh
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 50h], ecx
        ; Exact mapped bytes 74 29: je 0x587b23fc
        __asm _emit 0x74
        __asm _emit 0x29
        cmp ebp, ecx
        ; Exact mapped bytes 73 15: jae 0x587b23ec
        __asm _emit 0x73
        __asm _emit 0x15
        movzx eax, byte ptr [edx]
        mov ecx, ebp
        shl eax, cl
        inc edx
        mov ecx, dword ptr [esp + 50h]
        add edi, eax
        mov dword ptr [esp + 10h], edx
        add ebp, 8
        mov eax, 1
        shl eax, cl
        dec eax
        and eax, edi
        shr edi, cl
        add ebx, eax
        sub ebp, ecx
        cmp ebp, 0fh
        ; Exact mapped bytes 73 1E: jae 0x587b241f
        __asm _emit 0x73
        __asm _emit 0x1e
        movzx eax, byte ptr [edx]
        mov ecx, ebp
        shl eax, cl
        lea ecx, [ebp + 8]
        add edi, eax
        movzx eax, byte ptr [edx + 1]
        shl eax, cl
        add edx, 2
        add edi, eax
        mov dword ptr [esp + 10h], edx
        add ebp, 10h
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 20h]
        and eax, edi
        lea eax, [ecx + eax*4]
        movzx ecx, byte ptr [eax + 1]
        shr edi, cl
        sub ebp, ecx
        movzx ecx, byte ptr [eax]
        test cl, 10h
        ; Exact mapped bytes 75 39: jne 0x587b2475
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        test cl, 40h
        ; Exact mapped bytes 0F 85 63 02 00 00: jne 0x587b26ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [eax + 2]
        mov edx, 1
        shl edx, cl
        dec edx
        and edx, edi
        add edx, eax
        mov eax, dword ptr [esp + 20h]
        movzx ecx, byte ptr [eax + edx*4 + 1]
        lea eax, [eax + edx*4]
        shr edi, cl
        sub ebp, ecx
        movzx ecx, byte ptr [eax]
        test cl, 10h
        ; Exact mapped bytes 74 CF: je 0x587b2440
        __asm _emit 0x74
        __asm _emit 0xcf
        mov edx, dword ptr [esp + 10h]
        movzx eax, word ptr [eax + 2]
        and ecx, 0fh
        mov dword ptr [esp + 50h], eax
        mov dword ptr [esp + 18h], ecx
        cmp ebp, ecx
        ; Exact mapped bytes 73 2E: jae 0x587b24b6
        __asm _emit 0x73
        __asm _emit 0x2e
        movzx eax, byte ptr [edx]
        mov ecx, ebp
        shl eax, cl
        inc edx
        mov ecx, dword ptr [esp + 18h]
        add ebp, 8
        add edi, eax
        mov dword ptr [esp + 10h], edx
        cmp ebp, ecx
        ; Exact mapped bytes 73 15: jae 0x587b24b6
        __asm _emit 0x73
        __asm _emit 0x15
        movzx eax, byte ptr [edx]
        mov ecx, ebp
        shl eax, cl
        inc edx
        mov ecx, dword ptr [esp + 18h]
        add edi, eax
        mov dword ptr [esp + 10h], edx
        add ebp, 8
        mov eax, 1
        sub ebp, ecx
        shl eax, cl
        dec eax
        and eax, edi
        shr edi, cl
        add dword ptr [esp + 50h], eax
        mov eax, esi
        sub eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 50h]
        mov dword ptr [esp + 18h], edi
        cmp ecx, eax
        ; Exact mapped bytes 0F 86 F6 00 00 00: jbe 0x587b25d4
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        cmp ecx, dword ptr [esp + 40h]
        ; Exact mapped bytes 76 11: jbe 0x587b24f7
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [esp + 14h]
        cmp dword ptr [eax + 1bc4h], 0
        ; Exact mapped bytes 0F 85 D4 01 00 00: jne 0x587b26cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 44h]
        sub eax, ecx
        test edx, edx
        ; Exact mapped bytes 75 1B: jne 0x587b2520
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edi, dword ptr [esp + 24h]
        add edi, eax
        cmp ecx, ebx
        ; Exact mapped bytes 73 69: jae 0x587b2578
        __asm _emit 0x73
        __asm _emit 0x69
        sub ebx, ecx
        mov al, byte ptr [edi]
        lea edi, [edi + 1]
        mov byte ptr [esi], al
        inc esi
        sub ecx, 1
        ; Exact mapped bytes 75 F3: jne 0x587b2511
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes EB 52: jmp 0x587b2572
        __asm _emit 0xeb
        __asm _emit 0x52
        lea edi, [eax + edx]
        cmp edx, ecx
        ; Exact mapped bytes 73 38: jae 0x587b255f
        __asm _emit 0x73
        __asm _emit 0x38
        add edi, dword ptr [esp + 24h]
        sub ecx, edx
        cmp ecx, ebx
        ; Exact mapped bytes 73 47: jae 0x587b2578
        __asm _emit 0x73
        __asm _emit 0x47
        sub ebx, ecx
        sub edi, esi
        mov al, byte ptr [edi + esi]
        mov byte ptr [esi], al
        inc esi
        sub ecx, 1
        ; Exact mapped bytes 75 F5: jne 0x587b2535
        __asm _emit 0x75
        __asm _emit 0xf5
        mov edi, dword ptr [esp + 28h]
        cmp edx, ebx
        ; Exact mapped bytes 73 30: jae 0x587b2578
        __asm _emit 0x73
        __asm _emit 0x30
        mov ecx, edx
        sub ebx, edx
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov al, byte ptr [edi]
        lea edi, [edi + 1]
        mov byte ptr [esi], al
        inc esi
        sub ecx, 1
        ; Exact mapped bytes 75 F3: jne 0x587b2550
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes EB 13: jmp 0x587b2572
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp ecx, ebx
        ; Exact mapped bytes 73 15: jae 0x587b2578
        __asm _emit 0x73
        __asm _emit 0x15
        sub ebx, ecx
        mov al, byte ptr [edi]
        lea edi, [edi + 1]
        mov byte ptr [esi], al
        inc esi
        sub ecx, 1
        ; Exact mapped bytes 75 F3: jne 0x587b2565
        __asm _emit 0x75
        __asm _emit 0xf3
        mov edi, esi
        sub edi, dword ptr [esp + 50h]
        cmp ebx, 2
        ; Exact mapped bytes 76 34: jbe 0x587b25b1
        __asm _emit 0x76
        __asm _emit 0x34
        lea ecx, [ebx - 3]
        mov eax, 0aaaaaaabh
        mul ecx
        shr edx, 1
        inc edx
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edi]
        sub ebx, 3
        mov byte ptr [esi], al
        movzx eax, byte ptr [edi + 1]
        mov byte ptr [esi + 1], al
        movzx eax, byte ptr [edi + 2]
        add edi, 3
        mov byte ptr [esi + 2], al
        add esi, 3
        sub edx, 1
        ; Exact mapped bytes 75 DF: jne 0x587b2590
        __asm _emit 0x75
        __asm _emit 0xdf
        mov edx, dword ptr [esp + 10h]
        test ebx, ebx
        ; Exact mapped bytes 74 63: je 0x587b261c
        __asm _emit 0x74
        __asm _emit 0x63
        mov al, byte ptr [edi]
        mov byte ptr [esi], al
        inc esi
        cmp ebx, 1
        mov ebx, 1
        ; Exact mapped bytes 76 06: jbe 0x587b25ce
        __asm _emit 0x76
        __asm _emit 0x06
        mov al, byte ptr [edi + 1]
        mov byte ptr [esi], al
        inc esi
        mov edi, dword ptr [esp + 18h]
        ; Exact mapped bytes EB 51: jmp 0x587b2625
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, esi
        sub ecx, dword ptr [esp + 50h]
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ecx]
        lea ecx, [ecx + 3]
        mov byte ptr [esi], al
        sub ebx, 3
        movzx eax, byte ptr [ecx - 2]
        mov byte ptr [esi + 1], al
        movzx eax, byte ptr [ecx - 1]
        mov byte ptr [esi + 2], al
        add esi, 3
        cmp ebx, 2
        ; Exact mapped bytes 77 DF: ja 0x587b25e0
        __asm _emit 0x77
        __asm _emit 0xdf
        test ebx, ebx
        ; Exact mapped bytes 74 1B: je 0x587b2620
        __asm _emit 0x74
        __asm _emit 0x1b
        mov al, byte ptr [ecx]
        mov byte ptr [esi], al
        inc esi
        cmp ebx, 1
        mov ebx, 1
        ; Exact mapped bytes 76 11: jbe 0x587b2625
        __asm _emit 0x76
        __asm _emit 0x11
        mov al, byte ptr [ecx + 1]
        mov byte ptr [esi], al
        inc esi
        ; Exact mapped bytes EB 09: jmp 0x587b2625
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edi, dword ptr [esp + 18h]
        mov ebx, 1
        cmp edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 73 0A: jae 0x587b2635
        __asm _emit 0x73
        __asm _emit 0x0a
        cmp esi, dword ptr [esp + 30h]
        ; Exact mapped bytes 0F 82 0D FD FF FF: jb 0x587b2342
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 4ch]
        mov ebx, 1
        mov eax, ebp
        mov dword ptr [ecx + 0ch], esi
        shr eax, 3
        sub edx, eax
        shl eax, 3
        sub ebp, eax
        mov dword ptr [ecx], edx
        mov eax, dword ptr [esp + 2ch]
        sub eax, edx
        add eax, 5
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [esp + 30h]
        sub eax, esi
        add eax, 101h
        mov dword ptr [ecx + 10h], eax
        mov ecx, ebp
        mov eax, dword ptr [esp + 14h]
        shl ebx, cl
        dec ebx
        and ebx, edi
        pop edi
        pop esi
        mov dword ptr [eax + 40h], ebp
        pop ebp
        mov dword ptr [eax + 3ch], ebx
        pop ebx
        add esp, 38h
        ret
        mov eax, dword ptr [esp + 14h]
        test cl, 20h
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 4ch]
        ; Exact mapped bytes 74 09: je 0x587b269c
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [eax + 4], 3f3fh
        ; Exact mapped bytes EB A2: jmp 0x587b263e
        __asm _emit 0xeb
        __asm _emit 0xa2
        mov dword ptr [ecx + 18h], 588b9bdch
        mov dword ptr [eax + 4], 3f51h
        ; Exact mapped bytes EB 92: jmp 0x587b263e
        __asm _emit 0xeb
        __asm _emit 0x92
        mov ecx, dword ptr [esp + 4ch]
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [ecx + 18h], 588b9bf8h
        mov dword ptr [eax + 4], 3f51h
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x587b2639
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 4ch]
        mov dword ptr [ecx + 18h], 588b9c10h
        mov dword ptr [eax + 4], 3f51h
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x587b2639
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
