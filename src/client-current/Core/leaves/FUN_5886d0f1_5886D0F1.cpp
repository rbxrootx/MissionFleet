// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D0F1 .. +0x33C bytes.
extern "C" __declspec(naked) void FUN_5886d0f1_5886D0F1() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        xor esi, esi
        cmp dword ptr [ebp + 1ch], esi
        push edi
        cmovge esi, dword ptr [ebp + 1ch]
        xor edx, edx
        mov edi, dword ptr [ebp + 0ch]
        lea eax, [esi + 0bh]
        mov byte ptr [edi], dl
        cmp dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 77 22: ja 0x5886d135
        __asm _emit 0x77
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 2ch]
        push 22h
        pop esi
        push ecx
        push edx
        push edx
        push edx
        push edx
        push edx
        mov byte ptr [ecx + 1ch], 1
        mov dword ptr [ecx + 18h], esi
        ; Exact mapped bytes E8 03 3E FE FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 18h
        mov eax, esi
        ; Exact mapped bytes E9 F4 02 00 00: jmp 0x5886d429
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [ebp + 8]
        mov ecx, 7ffh
        mov eax, dword ptr [ebx + 4]
        shr eax, 14h
        and eax, ecx
        cmp eax, ecx
        ; Exact mapped bytes 75 53: jne 0x5886d19d
        __asm _emit 0x75
        __asm _emit 0x53
        push dword ptr [ebp + 2ch]
        push dword ptr [ebp + 28h]
        push dword ptr [ebp + 24h]
        push edx
        push esi
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push edi
        push ebx
        ; Exact mapped bytes E8 C8 02 00 00: call 0x5886d42d
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x5886d174
        __asm _emit 0x74
        __asm _emit 0x08
        mov byte ptr [edi], 0
        ; Exact mapped bytes E9 B4 02 00 00: jmp 0x5886d428
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 65h
        push edi
        ; Exact mapped bytes E8 C4 16 FE FF: call 0x5884e840
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 A0 02 00 00: je 0x5886d426
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp + 20h]
        xor cl, 1
        shl cl, 5
        add cl, 50h
        mov byte ptr [eax], cl
        mov byte ptr [eax + 3], 0
        ; Exact mapped bytes E9 89 02 00 00: jmp 0x5886d426
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 4], edx
        ; Exact mapped bytes 7F 0A: jg 0x5886d1ac
        __asm _emit 0x7f
        __asm _emit 0x0a
        ; Exact mapped bytes 7C 04: jl 0x5886d1a8
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp dword ptr [ebx], edx
        ; Exact mapped bytes 73 04: jae 0x5886d1ac
        __asm _emit 0x73
        __asm _emit 0x04
        mov byte ptr [edi], 2dh
        inc edi
        mov al, byte ptr [ebp + 20h]
        mov ecx, dword ptr [ebx + 4]
        xor al, 1
        mov byte ptr [ebp - 1], al
        and ecx, 7ff00000h
        movzx eax, al
        shl eax, 5
        add eax, 7
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 24h], eax
        lea edx, [edi + 1]
        xor eax, eax
        mov dword ptr [ebp - 10h], 3ffh
        or eax, ecx
        mov dword ptr [ebp - 0ch], edx
        push 30h
        pop eax
        ; Exact mapped bytes 75 33: jne 0x5886d215
        __asm _emit 0x75
        __asm _emit 0x33
        mov byte ptr [edi], al
        mov eax, dword ptr [ebx + 4]
        mov ecx, dword ptr [ebx]
        and eax, 0fffffh
        or ecx, eax
        ; Exact mapped bytes 75 16: jne 0x5886d208
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 D4: movlpd qword ptr [ebp - 0x2c], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 10: jmp 0x5886d218
        __asm _emit 0xeb
        __asm _emit 0x10
        and dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 3feh
        ; Exact mapped bytes EB 03: jmp 0x5886d218
        __asm _emit 0xeb
        __asm _emit 0x03
        mov byte ptr [edi], 31h
        lea edi, [edx + 1]
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x5886d223
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 23: jmp 0x5886d246
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 2ch]
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 75 0D: jne 0x5886d239
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, eax
        ; Exact mapped bytes E8 6D 8C FE FF: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 2ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + 0ch]
        mov eax, dword ptr [eax + 88h]
        mov eax, dword ptr [eax]
        mov al, byte ptr [eax]
        mov byte ptr [edx], al
        mov eax, dword ptr [ebx + 4]
        and eax, 0fffffh
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 77 09: ja 0x5886d25e
        __asm _emit 0x77
        __asm _emit 0x09
        cmp dword ptr [ebx], 0
        ; Exact mapped bytes 0F 86 C2 00 00 00: jbe 0x5886d320
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        pop eax
        mov dword ptr [ebp - 8], eax
        mov ecx, 0f0000h
        xor eax, eax
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], eax
        mov ebx, dword ptr [ebp - 8]
        mov edx, edi
        movzx ebx, bx
        mov dword ptr [ebp - 20h], ebx
        mov ebx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], edx
        test esi, esi
        ; Exact mapped bytes 7E 50: jle 0x5886d2d6
        __asm _emit 0x7e
        __asm _emit 0x50
        mov edx, dword ptr [ebx + 4]
        and eax, dword ptr [ebx]
        and edx, ecx
        mov ecx, dword ptr [ebp - 20h]
        and edx, 0fffffh
        movzx ecx, cx
        ; Exact mapped bytes E8 B2 FF 00 00: call 0x5887d250
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        pop ecx
        ; Exact mapped bytes 66 03 C1: add ax, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc1
        movzx eax, ax
        cmp eax, 39h
        ; Exact mapped bytes 76 03: jbe 0x5886d2af
        __asm _emit 0x76
        __asm _emit 0x03
        add eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edi], al
        sub edx, 4
        mov eax, dword ptr [ebp - 18h]
        inc edi
        shrd eax, ecx, 4
        mov dword ptr [ebp - 8], edx
        shr ecx, 4
        dec esi
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 79 9D: jns 0x5886d271
        __asm _emit 0x79
        __asm _emit 0x9d
        ; Exact mapped bytes EB 4A: jmp 0x5886d320
        __asm _emit 0xeb
        __asm _emit 0x4a
        push dword ptr [ebp + 28h]
        mov edi, edx
        push dword ptr [ebp - 20h]
        push ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 13 06 00 00: call 0x5886d8f9
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test al, al
        ; Exact mapped bytes 74 47: je 0x5886d334
        __asm _emit 0x74
        __asm _emit 0x47
        mov edi, dword ptr [ebp - 28h]
        push 30h
        pop ebx
        lea eax, [edi - 1]
        mov cl, byte ptr [eax]
        cmp cl, 66h
        ; Exact mapped bytes 74 05: je 0x5886d302
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 46h
        ; Exact mapped bytes 75 05: jne 0x5886d307
        __asm _emit 0x75
        __asm _emit 0x05
        mov byte ptr [eax], bl
        dec eax
        ; Exact mapped bytes EB EF: jmp 0x5886d2f6
        __asm _emit 0xeb
        __asm _emit 0xef
        mov ebx, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 0E: je 0x5886d31d
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp cl, 39h
        ; Exact mapped bytes 75 03: jne 0x5886d317
        __asm _emit 0x75
        __asm _emit 0x03
        add cl, byte ptr [ebp - 24h]
        inc cl
        mov byte ptr [eax], cl
        ; Exact mapped bytes EB 03: jmp 0x5886d320
        __asm _emit 0xeb
        __asm _emit 0x03
        inc byte ptr [eax - 1]
        test esi, esi
        ; Exact mapped bytes 7E 10: jle 0x5886d334
        __asm _emit 0x7e
        __asm _emit 0x10
        push esi
        push 30h
        pop eax
        push eax
        push edi
        ; Exact mapped bytes E8 E1 FA FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        add edi, esi
        mov eax, dword ptr [ebp - 0ch]
        mov cl, 34h
        cmp byte ptr [eax], 0
        cmove edi, eax
        mov al, byte ptr [ebp - 1]
        shl al, 5
        add al, 50h
        mov byte ptr [edi], al
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [ebx + 4]
        ; Exact mapped bytes E8 FD FE 00 00: call 0x5887d250
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        lea ecx, [edi + 2]
        and ebx, 7ffh
        mov dword ptr [ebp - 24h], ecx
        xor esi, esi
        sub ebx, dword ptr [ebp - 10h]
        sbb esi, dword ptr [ebp - 14h]
        ; Exact mapped bytes 78 0A: js 0x5886d375
        __asm _emit 0x78
        __asm _emit 0x0a
        ; Exact mapped bytes 7F 04: jg 0x5886d371
        __asm _emit 0x7f
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 72 04: jb 0x5886d375
        __asm _emit 0x72
        __asm _emit 0x04
        mov al, 2bh
        ; Exact mapped bytes EB 0A: jmp 0x5886d37f
        __asm _emit 0xeb
        __asm _emit 0x0a
        neg ebx
        push 2dh
        adc esi, 0
        neg esi
        pop eax
        mov byte ptr [edi + 1], al
        mov edi, ecx
        push 30h
        pop eax
        mov byte ptr [ecx], al
        test esi, esi
        ; Exact mapped bytes 0F 8C 8A 00 00 00: jl 0x5886d41b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3e8h
        ; Exact mapped bytes 7F 04: jg 0x5886d39c
        __asm _emit 0x7f
        __asm _emit 0x04
        cmp ebx, eax
        ; Exact mapped bytes 72 22: jb 0x5886d3be
        __asm _emit 0x72
        __asm _emit 0x22
        push ebx
        push 0
        push eax
        push esi
        push ebx
        ; Exact mapped bytes E8 C9 FE 00 00: call 0x5887d270
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ebx
        pop ebx
        nop
        mov ebx, ecx
        push 30h
        pop ecx
        add al, cl
        mov ecx, dword ptr [ebp - 24h]
        lea edi, [ecx + 1]
        mov byte ptr [ecx], al
        cmp edi, ecx
        ; Exact mapped bytes 75 0B: jne 0x5886d3c9
        __asm _emit 0x75
        __asm _emit 0x0b
        test esi, esi
        ; Exact mapped bytes 7C 59: jl 0x5886d41b
        __asm _emit 0x7c
        __asm _emit 0x59
        ; Exact mapped bytes 7F 05: jg 0x5886d3c9
        __asm _emit 0x7f
        __asm _emit 0x05
        cmp ebx, 64h
        ; Exact mapped bytes 72 27: jb 0x5886d3f0
        __asm _emit 0x72
        __asm _emit 0x27
        push 0
        push 64h
        push esi
        push ebx
        ; Exact mapped bytes E8 0C FD 00 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        pop ecx
        push 0
        push 64h
        add al, cl
        push esi
        mov byte ptr [edi], al
        inc edi
        push ebx
        ; Exact mapped bytes E8 A9 FD 00 00: call 0x5887d190
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        mov esi, edx
        cmp edi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 0B: jne 0x5886d3fb
        __asm _emit 0x75
        __asm _emit 0x0b
        test esi, esi
        ; Exact mapped bytes 7C 27: jl 0x5886d41b
        __asm _emit 0x7c
        __asm _emit 0x27
        ; Exact mapped bytes 7F 05: jg 0x5886d3fb
        __asm _emit 0x7f
        __asm _emit 0x05
        cmp ebx, 0ah
        ; Exact mapped bytes 72 20: jb 0x5886d41b
        __asm _emit 0x72
        __asm _emit 0x20
        push 0
        push 0ah
        push esi
        push ebx
        ; Exact mapped bytes E8 DA FC 00 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        pop ecx
        push 0
        push 0ah
        add al, cl
        push esi
        mov byte ptr [edi], al
        inc edi
        push ebx
        ; Exact mapped bytes E8 77 FD 00 00: call 0x5887d190
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        push 30h
        pop eax
        add bl, al
        mov byte ptr [edi], bl
        mov byte ptr [edi + 1], 0
        xor eax, eax
        pop ebx
        pop edi
        pop esi
        leave
        ret
    }
}
