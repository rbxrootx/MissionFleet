// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58848FA6 .. +0x51A bytes.
extern "C" __declspec(naked) void FUN_58848fa6_58848FA6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 490h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        push edi
        mov edi, ecx
        mov dword ptr [ebp - 490h], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [edi + 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x58848fd8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 40000h
        ; Exact mapped bytes E9 D7 04 00 00: jmp 0x588494af
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi + 24h], 0
        ; Exact mapped bytes 74 0A: je 0x58848fe8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 50000h
        ; Exact mapped bytes E9 C7 04 00 00: jmp 0x588494af
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        lea eax, [ebp - 128h]
        push eax
        ; Exact mapped bytes E8 AB 0A 01 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        cmp byte ptr [ebp - 128h], 0
        pop ecx
        pop ecx
        ; Exact mapped bytes 75 0A: jne 0x5884900a
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 10000h
        ; Exact mapped bytes E9 A5 04 00 00: jmp 0x588494af
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        cmp byte ptr [eax], 5ch
        ; Exact mapped bytes 75 03: jne 0x58849018
        __asm _emit 0x75
        __asm _emit 0x03
        mov byte ptr [eax], 2fh
        inc eax
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 75 F2: jne 0x58849010
        __asm _emit 0x75
        __asm _emit 0xf2
        push ebx
        mov ebx, dword ptr [ebp + 14h]
        push esi
        push 8
        pop esi
        cmp ebx, 4
        ; Exact mapped bytes 75 23: jne 0x5884904e
        __asm _emit 0x75
        __asm _emit 0x23
        lea eax, [ebp - 128h]
        push eax
        ; Exact mapped bytes E8 49 81 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        lea ecx, [ebp - 128h]
        cmp byte ptr [eax + ecx - 1], 2fh
        ; Exact mapped bytes 74 09: je 0x5884904e
        __asm _emit 0x74
        __asm _emit 0x09
        mov byte ptr [ebp - 489h], 1
        ; Exact mapped bytes EB 1D: jmp 0x5884906b
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov byte ptr [ebp - 489h], 0
        cmp ebx, 4
        ; Exact mapped bytes 74 11: je 0x5884906b
        __asm _emit 0x74
        __asm _emit 0x11
        lea eax, [ebp - 128h]
        push eax
        ; Exact mapped bytes E8 A4 09 00 00: call 0x58849a0a
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test al, al
        ; Exact mapped bytes 74 02: je 0x5884906d
        __asm _emit 0x74
        __asm _emit 0x02
        xor esi, esi
        cmp ebx, 2
        ; Exact mapped bytes 75 0F: jne 0x58849081
        __asm _emit 0x75
        __asm _emit 0x0f
        push dword ptr [ebp - 490h]
        mov ecx, edi
        ; Exact mapped bytes E8 18 27 00 00: call 0x5884b797
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3E: jmp 0x588490bf
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp ebx, 1
        ; Exact mapped bytes 75 12: jne 0x58849098
        __asm _emit 0x75
        __asm _emit 0x12
        push dword ptr [ebp + 10h]
        mov ecx, edi
        push dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 76 27 00 00: call 0x5884b80c
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 27: jmp 0x588490bf
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp ebx, 3
        ; Exact mapped bytes 75 12: jne 0x588490af
        __asm _emit 0x75
        __asm _emit 0x12
        push dword ptr [ebp + 10h]
        mov ecx, edi
        push dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 6D 28 00 00: call 0x5884b91a
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x588490bf
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp ebx, 4
        ; Exact mapped bytes 0F 85 F0 03 00 00: jne 0x588494a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 38 26 00 00: call 0x5884b6f7
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 E6 03 00 00: jne 0x588494ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 450h]
        xor ebx, ebx
        push 588c1cf9h
        push eax
        mov dword ptr [ebp - 12ch], ebx
        ; Exact mapped bytes E8 C0 09 01 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        push eax
        lea eax, [ebp - 340h]
        push eax
        ; Exact mapped bytes E8 AD 09 01 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 340h]
        push eax
        ; Exact mapped bytes E8 81 80 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 470h], eax
        cmp byte ptr [ebp - 489h], bl
        ; Exact mapped bytes 74 19: je 0x58849129
        __asm _emit 0x74
        __asm _emit 0x19
        lea eax, [ebp - 340h]
        push 588c2580h
        push eax
        ; Exact mapped bytes E8 8F 09 01 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        inc dword ptr [ebp - 470h]
        pop ecx
        pop ecx
        lea eax, [ebp - 23ch]
        push 588c1cf9h
        push eax
        ; Exact mapped bytes E8 66 09 01 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [ebp - 344h], ebx
        ; Exact mapped bytes 66 89 85 A2 FB FF FF: mov word ptr [ebp - 0x45e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 0b17h
        ; Exact mapped bytes 66 89 85 78 FB FF FF: mov word ptr [ebp - 0x488], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 464h], ebx
        mov dword ptr [ebp - 138h], 1
        mov dword ptr [ebp - 130h], ebx
        mov dword ptr [ebp - 47ch], ebx
        ; Exact mapped bytes 66 89 B5 7E FB FF FF: mov word ptr [ebp - 0x482], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 14h
        pop eax
        ; Exact mapped bytes 66 89 85 7A FB FF FF: mov word ptr [ebp - 0x486], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 48h]
        mov dword ptr [ebp - 480h], eax
        push 8
        pop eax
        ; Exact mapped bytes 66 89 85 7C FB FF FF: mov word ptr [ebp - 0x484], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 A4 FB FF FF: mov word ptr [ebp - 0x45c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 75 0D: jne 0x588491af
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [edi + 50h]
        mov dword ptr [ebp - 478h], eax
        test eax, eax
        ; Exact mapped bytes 79 06: jns 0x588491b5
        __asm _emit 0x79
        __asm _emit 0x06
        mov dword ptr [ebp - 478h], ebx
        mov eax, dword ptr [edi + 50h]
        mov dword ptr [ebp - 474h], eax
        xor eax, eax
        ; Exact mapped bytes 66 89 85 A0 FB FF FF: mov word ptr [ebp - 0x460], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 2ch]
        mov dword ptr [ebp - 458h], eax
        mov eax, dword ptr [edi + 10h]
        add eax, dword ptr [edi + 8]
        mov ebx, dword ptr [edi + 38h]
        mov ecx, ebx
        mov edx, dword ptr [edi + 3ch]
        mov dword ptr [ebp - 454h], eax
        lea eax, [ebp - 18h]
        mov dword ptr [ebp - 34ch], eax
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 348h], eax
        mov al, byte ptr [edi + 38h]
        mov byte ptr [ebp - 13h], al
        mov eax, edx
        shrd ecx, eax, 8
        push 9
        sar eax, 8
        mov byte ptr [ebp - 12h], cl
        mov eax, edx
        mov ecx, ebx
        mov dword ptr [ebp - 46ch], 11h
        shrd ecx, eax, 10h
        shrd ebx, edx, 18h
        sar eax, 10h
        mov al, byte ptr [edi + 30h]
        mov byte ptr [ebp - 0fh], al
        mov byte ptr [ebp - 11h], cl
        sar edx, 18h
        mov edx, dword ptr [edi + 34h]
        mov eax, edx
        mov byte ptr [ebp - 10h], bl
        mov ebx, dword ptr [edi + 30h]
        mov ecx, ebx
        shrd ecx, eax, 8
        mov dword ptr [ebp - 468h], 9
        sar eax, 8
        mov byte ptr [ebp - 0eh], cl
        mov eax, edx
        mov ecx, ebx
        mov dword ptr [ebp - 18h], 0d5455h
        shrd ecx, eax, 10h
        shrd ebx, edx, 18h
        sar eax, 10h
        mov al, byte ptr [edi + 40h]
        mov byte ptr [ebp - 0bh], al
        sar edx, 18h
        mov edx, dword ptr [edi + 44h]
        mov eax, edx
        mov byte ptr [ebp - 0dh], cl
        mov byte ptr [ebp - 0ch], bl
        mov ebx, dword ptr [edi + 40h]
        mov ecx, ebx
        shrd ecx, eax, 8
        mov byte ptr [ebp - 14h], 7
        sar eax, 8
        mov byte ptr [ebp - 0ah], cl
        mov eax, edx
        mov ecx, ebx
        shrd ecx, eax, 10h
        shrd ebx, edx, 18h
        sar eax, 10h
        lea eax, [ebp - 18h]
        sar edx, 18h
        push eax
        lea eax, [ebp - 24h]
        mov byte ptr [ebp - 9], cl
        push eax
        mov byte ptr [ebp - 8], bl
        ; Exact mapped bytes E8 DE 35 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 348h]
        push edi
        push 5884c800h
        mov byte ptr [eax + 2], 5
        lea eax, [ebp - 488h]
        push eax
        ; Exact mapped bytes E8 F1 2D 00 00: call 0x5884c0bf
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x588492e1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, edi
        ; Exact mapped bytes E8 3B 1F 00 00: call 0x5884b217
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x5884941f
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 46ch]
        add eax, 1eh
        add eax, dword ptr [ebp - 470h]
        add dword ptr [edi + 10h], eax
        cmp dword ptr [edi + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x58849308
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, edi
        ; Exact mapped bytes E8 17 1F 00 00: call 0x5884b217
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x588494ad
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp dword ptr [ebp + 14h], 4
        ; Exact mapped bytes 74 24: je 0x58849334
        __asm _emit 0x74
        __asm _emit 0x24
        cmp esi, 8
        ; Exact mapped bytes 75 10: jne 0x58849325
        __asm _emit 0x75
        __asm _emit 0x10
        lea eax, [ebp - 488h]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 34 1F 00 00: call 0x5884b257
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x58849330
        __asm _emit 0xeb
        __asm _emit 0x0b
        test esi, esi
        ; Exact mapped bytes 75 0E: jne 0x58849337
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, edi
        ; Exact mapped bytes E8 76 20 00 00: call 0x5884b3a6
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB 03: jmp 0x58849337
        __asm _emit 0xeb
        __asm _emit 0x03
        and dword ptr [edi + 70h], ebx
        mov ecx, edi
        ; Exact mapped bytes E8 D9 1E 00 00: call 0x5884b217
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 70h]
        add dword ptr [edi + 10h], ecx
        mov eax, dword ptr [edi + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 5E 01 00 00: jne 0x588494ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x5884941f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 478h], ecx
        mov eax, dword ptr [edi + 58h]
        sete dl
        mov dword ptr [ebp - 47ch], eax
        mov eax, dword ptr [edi + 50h]
        mov dword ptr [ebp - 478h], ecx
        mov dword ptr [ebp - 474h], eax
        cmp byte ptr [edi + 14h], bl
        ; Exact mapped bytes 74 6E: je 0x588493eb
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 66 8B 85 7C FB FF FF: mov ax, word ptr [ebp - 0x484]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 B5 7E FB FF FF: mov word ptr [ebp - 0x482], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test al, 1
        ; Exact mapped bytes 75 0F: jne 0x5884939e
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, 0fff7h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes 66 89 85 7C FB FF FF: mov word ptr [ebp - 0x484], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 A4 FB FF FF: mov word ptr [ebp - 0x45c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        mov eax, dword ptr [ebp - 454h]
        sub eax, dword ptr [edi + 8]
        push eax
        ; Exact mapped bytes E8 22 26 00 00: call 0x5884b9d8
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 27: je 0x588493e1
        __asm _emit 0x74
        __asm _emit 0x27
        push edi
        lea eax, [ebp - 488h]
        push 5884c800h
        push eax
        ; Exact mapped bytes E8 F3 2C 00 00: call 0x5884c0bf
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 4C: jne 0x5884941f
        __asm _emit 0x75
        __asm _emit 0x4c
        push dword ptr [edi + 10h]
        mov ecx, edi
        ; Exact mapped bytes E8 FB 25 00 00: call 0x5884b9d8
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 5A: jne 0x5884943b
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, 2000000h
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x588494ad
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 B5 7E FB FF FF: cmp word ptr [ebp - 0x482], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xb5
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 08: jne 0x588493fc
        __asm _emit 0x75
        __asm _emit 0x08
        test esi, esi
        ; Exact mapped bytes 75 0E: jne 0x58849406
        __asm _emit 0x75
        __asm _emit 0x0e
        test dl, dl
        ; Exact mapped bytes 75 0A: jne 0x58849406
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 4000000h
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x588494ad
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea eax, [ebp - 488h]
        push 5884c800h
        push eax
        ; Exact mapped bytes E8 95 2B 00 00: call 0x5884bfad
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58849429
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 400h
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x588494ad
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 85 A4 FB FF FF: mov ax, word ptr [ebp - 0x45c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [edi + 10h], 10h
        ; Exact mapped bytes 66 89 85 7C FB FF FF: mov word ptr [ebp - 0x484], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 6B: jne 0x588494ad
        __asm _emit 0x75
        __asm _emit 0x6b
        push dword ptr [ebp - 468h]
        ; Exact mapped bytes E8 F5 7B FE FF: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        push dword ptr [ebp - 468h]
        mov esi, eax
        push dword ptr [ebp - 348h]
        push esi
        ; Exact mapped bytes E8 2F 34 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 360h
        mov dword ptr [ebp - 348h], esi
        push ebx
        ; Exact mapped bytes E8 92 7B FE FF: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        lea eax, [ebp - 488h]
        push ebx
        push eax
        push esi
        ; Exact mapped bytes E8 0E 34 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 28h]
        add esp, 20h
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x58849493
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [edi + 28h], esi
        ; Exact mapped bytes EB 13: jmp 0x588494a4
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [eax]
        lea eax, [ecx + 35ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 F3: jne 0x58849491
        __asm _emit 0x75
        __asm _emit 0xf3
        mov dword ptr [ecx + 35ch], esi
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x588494ad
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 10000h
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop edi
        ; Exact mapped bytes E8 96 7B FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
