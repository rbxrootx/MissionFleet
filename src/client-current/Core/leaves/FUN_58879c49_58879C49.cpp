// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879C49 .. +0x14CD bytes.
extern "C" __declspec(naked) void FUN_58879c49_58879C49() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0b44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 78ch], eax
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 764h], eax
        lea eax, [ebp - 7a0h]
        push ebx
        push eax
        ; Exact mapped bytes E8 33 24 00 00: call 0x5887c0b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 7a0h]
        xor ebx, ebx
        and eax, 1fh
        inc ebx
        pop ecx
        cmp al, 1fh
        ; Exact mapped bytes 75 09: jne 0x58879c97
        __asm _emit 0x75
        __asm _emit 0x09
        mov byte ptr [ebp - 798h], 0
        ; Exact mapped bytes EB 13: jmp 0x58879caa
        __asm _emit 0xeb
        __asm _emit 0x13
        lea eax, [ebp - 7a0h]
        push eax
        ; Exact mapped bytes E8 8D 24 00 00: call 0x5887c130
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov byte ptr [ebp - 798h], bl
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        push 20h
        pop esi
        test edi, edi
        ; Exact mapped bytes 7F 0D: jg 0x58879cc3
        __asm _emit 0x7f
        __asm _emit 0x0d
        ; Exact mapped bytes 7C 06: jl 0x58879cbe
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 73 05: jae 0x58879cc3
        __asm _emit 0x73
        __asm _emit 0x05
        push 2dh
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x58879cc5
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        mov ecx, dword ptr [ebp - 78ch]
        push 0
        push 0
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 764h]
        mov dword ptr [ecx + 8], eax
        lea eax, [ebp - 7a4h]
        push eax
        ; Exact mapped bytes E8 5A 23 00 00: call 0x5887c040
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        xor eax, eax
        and ecx, 7ff00000h
        add esp, 0ch
        or eax, ecx
        ; Exact mapped bytes 75 2C: jne 0x58879d23
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 8]
        mov ecx, edi
        and ecx, 0fffffh
        or eax, ecx
        ; Exact mapped bytes 74 0C: je 0x58879d12
        __asm _emit 0x74
        __asm _emit 0x0c
        test dword ptr [ebp - 7a4h], 1000000h
        ; Exact mapped bytes 74 11: je 0x58879d23
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 78ch]
        push 588ce390h
        and dword ptr [eax + 4], 0
        ; Exact mapped bytes EB 3E: jmp 0x58879d61
        __asm _emit 0xeb
        __asm _emit 0x3e
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B1 32 FF FF: call 0x5886cfdd
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 73: je 0x58879da4
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 78ch]
        mov dword ptr [ecx + 4], ebx
        sub eax, 1
        ; Exact mapped bytes 74 40: je 0x58879d7f
        __asm _emit 0x74
        __asm _emit 0x40
        sub eax, 1
        ; Exact mapped bytes 74 18: je 0x58879d5c
        __asm _emit 0x74
        __asm _emit 0x18
        sub eax, 1
        ; Exact mapped bytes 74 0C: je 0x58879d55
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, 1
        ; Exact mapped bytes 75 56: jne 0x58879da4
        __asm _emit 0x75
        __asm _emit 0x56
        push 588ce3ach
        ; Exact mapped bytes EB 0C: jmp 0x58879d61
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 588ce3a4h
        ; Exact mapped bytes EB 05: jmp 0x58879d61
        __asm _emit 0xeb
        __asm _emit 0x05
        push 588ce39ch
        push dword ptr [ebp + 20h]
        push dword ptr [ebp - 764h]
        ; Exact mapped bytes E8 21 DA FD FF: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 90 13 00 00: jne 0x5887b10a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 64 13 00 00: jmp 0x5887b0e3
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 588ce394h
        push dword ptr [ebp + 20h]
        push dword ptr [ebp - 764h]
        ; Exact mapped bytes E8 FE D9 FD FF: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 6D 13 00 00: jne 0x5887b10a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes E9 3F 13 00 00: jmp 0x5887b0e3
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and edi, 7fffffffh
        push 0
        mov dword ptr [ebp + 8], eax
        lea eax, [ebp - 794h]
        mov dword ptr [ebp + 0ch], edi
        mov edi, 8001fh
        push 0
        push eax
        mov dword ptr [ebp - 790h], edi
        ; Exact mapped bytes E8 72 22 00 00: call 0x5887c040
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 790h]
        lea eax, [ebp - 76ch]
        push edi
        push eax
        ; Exact mapped bytes E8 5F 22 00 00: call 0x5887c040
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 4D 08: movsd xmm1, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0x08
        add esp, 18h
        mov eax, dword ptr [ebp + 10h]
        xor edx, edx
        ; Exact mapped bytes F2 0F 11 8D 88 F8 FF FF: movsd qword ptr [ebp - 0x778], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        inc eax
        mov edi, dword ptr [ebp - 774h]
        mov ecx, edi
        mov dword ptr [ebp - 788h], eax
        shr ecx, 14h
        mov eax, ecx
        mov dword ptr [ebp - 76ch], edx
        and eax, 7ffh
        or eax, edx
        ; Exact mapped bytes 75 24: jne 0x58879e3d
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov eax, ebx
        ; Exact mapped bytes 66 0F 13 85 90 F8 FF FF: movlpd qword ptr [ebp - 0x770], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 770h]
        mov edx, dword ptr [ebp - 76ch]
        push 20h
        mov dword ptr [ebp - 754h], esi
        pop esi
        ; Exact mapped bytes EB 0D: jmp 0x58879e4a
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov dword ptr [ebp - 754h], edx
        xor eax, eax
        mov edx, 100000h
        mov esi, dword ptr [ebp - 778h]
        and edi, 0fffffh
        add esi, dword ptr [ebp - 754h]
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        mov dword ptr [ebp - 77ch], esi
        adc edi, edx
        and ecx, 7ffh
        add eax, ecx
        mov dword ptr [ebp - 748h], eax
        ; Exact mapped bytes E8 16 23 00 00: call 0x5887c190
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes F2 0F 11 85 90 F8 FF FF: movsd qword ptr [ebp - 0x770], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 85 90 F8 FF FF: fld qword ptr [ebp - 0x770]
        __asm _emit 0xdd
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 EE 25 00 00: call 0x5887c480
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes DD 9D 90 F8 FF FF: fstp qword ptr [ebp - 0x770]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2C 8D 90 F8 FF FF: cvttsd2si ecx, qword ptr [ebp - 0x770]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push 20h
        pop esi
        mov dword ptr [ebp - 760h], ecx
        cmp ecx, 7fffffffh
        ; Exact mapped bytes 74 08: je 0x58879ebb
        __asm _emit 0x74
        __asm _emit 0x08
        cmp ecx, 80000000h
        ; Exact mapped bytes 75 07: jne 0x58879ec2
        __asm _emit 0x75
        __asm _emit 0x07
        and dword ptr [ebp - 760h], 0
        mov eax, dword ptr [ebp - 77ch]
        xor edx, edx
        test edi, edi
        mov dword ptr [ebp - 1d0h], eax
        mov eax, dword ptr [ebp - 748h]
        setne dl
        mov dword ptr [ebp - 1cch], edi
        and dword ptr [ebp - 3a4h], 0
        inc edx
        mov dword ptr [ebp - 1d4h], edx
        cmp eax, 433h
        ; Exact mapped bytes 0F 82 BD 03 00 00: jb 0x5887a2b7
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 570h], 0
        mov dword ptr [ebp - 56ch], 100000h
        mov dword ptr [ebp - 574h], 2
        test edi, edi
        ; Exact mapped bytes 0F 84 F6 01 00 00: je 0x5887a113
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, dword ptr [ebp + ecx - 570h]
        cmp eax, dword ptr [ebp + ecx - 1d0h]
        ; Exact mapped bytes 0F 85 DA 01 00 00: jne 0x5887a10d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 4
        cmp ecx, 8
        ; Exact mapped bytes 75 E4: jne 0x58879f1f
        __asm _emit 0x75
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 748h]
        xor edi, edi
        add ecx, 0fffffbcfh
        mov eax, ecx
        and ecx, 1fh
        shr eax, 5
        mov dword ptr [ebp - 758h], eax
        mov eax, esi
        sub eax, ecx
        mov dword ptr [ebp - 75ch], ecx
        mov ecx, eax
        mov dword ptr [ebp - 780h], eax
        xor eax, eax
        bts edi, ecx
        cmp ecx, esi
        cmovae eax, edi
        and dword ptr [ebp - 76ch], 0
        xor edi, eax
        dec edi
        mov eax, edi
        mov dword ptr [ebp - 784h], edi
        not eax
        mov dword ptr [ebp - 77ch], eax
        mov eax, dword ptr [ebp + edx*4 - 1d4h]
        bsr eax, eax
        ; Exact mapped bytes 74 09: je 0x58879fa2
        __asm _emit 0x74
        __asm _emit 0x09
        inc eax
        mov dword ptr [ebp - 754h], eax
        ; Exact mapped bytes EB 07: jmp 0x58879fa9
        __asm _emit 0xeb
        __asm _emit 0x07
        and dword ptr [ebp - 754h], 0
        mov ecx, dword ptr [ebp - 758h]
        mov edi, 1cch
        lea eax, [ecx + edx]
        cmp eax, 73h
        ; Exact mapped bytes 76 2B: jbe 0x58879fe7
        __asm _emit 0x76
        __asm _emit 0x2b
        xor eax, eax
        push eax
        mov dword ptr [ebp - 574h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 570h]
        push eax
        lea eax, [ebp - 1d0h]
        push edi
        push eax
        ; Exact mapped bytes E8 5C CA FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x5887a0d4
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, dword ptr [ebp - 754h]
        cmp esi, dword ptr [ebp - 75ch]
        sbb esi, esi
        neg esi
        add esi, ecx
        add esi, edx
        mov dword ptr [ebp - 774h], esi
        cmp esi, 73h
        ; Exact mapped bytes 77 B6: ja 0x58879fbc
        __asm _emit 0x77
        __asm _emit 0xb6
        lea eax, [ecx - 1]
        mov dword ptr [ebp - 768h], eax
        lea eax, [esi - 1]
        mov dword ptr [ebp - 74ch], eax
        cmp eax, dword ptr [ebp - 768h]
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x5887a0bb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        sub esi, ecx
        lea ecx, [ebp - 1d4h]
        lea ecx, [ecx + esi*4]
        mov dword ptr [ebp - 748h], ecx
        cmp esi, edx
        ; Exact mapped bytes 73 05: jae 0x5887a040
        __asm _emit 0x73
        __asm _emit 0x05
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x5887a042
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp - 754h], eax
        lea eax, [esi - 1]
        cmp eax, edx
        ; Exact mapped bytes 73 04: jae 0x5887a053
        __asm _emit 0x73
        __asm _emit 0x04
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x5887a055
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        and eax, dword ptr [ebp - 77ch]
        mov ecx, dword ptr [ebp - 780h]
        mov edx, dword ptr [ebp - 754h]
        and edx, dword ptr [ebp - 784h]
        shr eax, cl
        mov ecx, dword ptr [ebp - 75ch]
        shl edx, cl
        mov ecx, dword ptr [ebp - 74ch]
        or eax, edx
        mov dword ptr [ebp + ecx*4 - 1d0h], eax
        mov eax, ecx
        mov ecx, dword ptr [ebp - 748h]
        dec eax
        sub ecx, 4
        mov dword ptr [ebp - 74ch], eax
        dec esi
        mov dword ptr [ebp - 748h], ecx
        cmp eax, dword ptr [ebp - 768h]
        ; Exact mapped bytes 74 08: je 0x5887a0af
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes EB 88: jmp 0x5887a037
        __asm _emit 0xeb
        __asm _emit 0x88
        mov esi, dword ptr [ebp - 774h]
        mov ecx, dword ptr [ebp - 758h]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x5887a0ce
        __asm _emit 0x74
        __asm _emit 0x0f
        xor eax, eax
        lea edi, [ebp - 1d0h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, 1cch
        mov dword ptr [ebp - 1d4h], esi
        push 4
        pop eax
        mov dword ptr [ebp - 570h], eax
        push eax
        and dword ptr [ebp - 56ch], 0
        lea eax, [ebp - 570h]
        push eax
        lea eax, [ebp - 3a0h]
        mov dword ptr [ebp - 3a4h], ebx
        push edi
        push eax
        mov dword ptr [ebp - 574h], ebx
        ; Exact mapped bytes E8 36 C9 FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 DD 03 00 00: jmp 0x5887a4ea
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 748h]
        lea ecx, [eax - 432h]
        xor edi, edi
        mov eax, ecx
        and ecx, 1fh
        shr eax, 5
        mov dword ptr [ebp - 748h], eax
        mov eax, esi
        sub eax, ecx
        mov dword ptr [ebp - 768h], ecx
        mov ecx, eax
        mov dword ptr [ebp - 784h], eax
        xor eax, eax
        bts edi, ecx
        cmp ecx, esi
        cmovae eax, edi
        and dword ptr [ebp - 76ch], 0
        xor edi, eax
        dec edi
        mov eax, edi
        mov dword ptr [ebp - 780h], edi
        not eax
        mov dword ptr [ebp - 774h], eax
        mov eax, dword ptr [ebp + edx*4 - 1d4h]
        bsr eax, eax
        ; Exact mapped bytes 74 09: je 0x5887a174
        __asm _emit 0x74
        __asm _emit 0x09
        inc eax
        mov dword ptr [ebp - 758h], eax
        ; Exact mapped bytes EB 07: jmp 0x5887a17b
        __asm _emit 0xeb
        __asm _emit 0x07
        and dword ptr [ebp - 758h], 0
        mov ecx, dword ptr [ebp - 748h]
        mov edi, 1cch
        lea eax, [ecx + edx]
        cmp eax, 73h
        ; Exact mapped bytes 76 2B: jbe 0x5887a1b9
        __asm _emit 0x76
        __asm _emit 0x2b
        xor eax, eax
        push eax
        mov dword ptr [ebp - 574h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 570h]
        push eax
        lea eax, [ebp - 1d0h]
        push edi
        push eax
        ; Exact mapped bytes E8 8A C8 FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x5887a2a6
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, dword ptr [ebp - 758h]
        cmp esi, dword ptr [ebp - 768h]
        sbb esi, esi
        neg esi
        add esi, ecx
        add esi, edx
        mov dword ptr [ebp - 77ch], esi
        cmp esi, 73h
        ; Exact mapped bytes 77 B6: ja 0x5887a18e
        __asm _emit 0x77
        __asm _emit 0xb6
        lea eax, [ecx - 1]
        mov dword ptr [ebp - 75ch], eax
        lea eax, [esi - 1]
        mov dword ptr [ebp - 74ch], eax
        cmp eax, dword ptr [ebp - 75ch]
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x5887a28d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        sub esi, ecx
        lea ecx, [ebp - 1d4h]
        lea ecx, [ecx + esi*4]
        mov dword ptr [ebp - 754h], ecx
        cmp esi, edx
        ; Exact mapped bytes 73 05: jae 0x5887a212
        __asm _emit 0x73
        __asm _emit 0x05
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x5887a214
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp - 758h], eax
        lea eax, [esi - 1]
        cmp eax, edx
        ; Exact mapped bytes 73 04: jae 0x5887a225
        __asm _emit 0x73
        __asm _emit 0x04
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x5887a227
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        and eax, dword ptr [ebp - 774h]
        mov ecx, dword ptr [ebp - 784h]
        mov edx, dword ptr [ebp - 758h]
        and edx, dword ptr [ebp - 780h]
        shr eax, cl
        mov ecx, dword ptr [ebp - 768h]
        shl edx, cl
        mov ecx, dword ptr [ebp - 74ch]
        or eax, edx
        mov dword ptr [ebp + ecx*4 - 1d0h], eax
        mov eax, ecx
        mov ecx, dword ptr [ebp - 754h]
        dec eax
        sub ecx, 4
        mov dword ptr [ebp - 74ch], eax
        dec esi
        mov dword ptr [ebp - 754h], ecx
        cmp eax, dword ptr [ebp - 75ch]
        ; Exact mapped bytes 74 08: je 0x5887a281
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes EB 88: jmp 0x5887a209
        __asm _emit 0xeb
        __asm _emit 0x88
        mov esi, dword ptr [ebp - 77ch]
        mov ecx, dword ptr [ebp - 748h]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x5887a2a0
        __asm _emit 0x74
        __asm _emit 0x0f
        xor eax, eax
        lea edi, [ebp - 1d0h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, 1cch
        mov dword ptr [ebp - 1d4h], esi
        mov dword ptr [ebp - 570h], 2
        push 4
        ; Exact mapped bytes E9 27 FE FF FF: jmp 0x5887a0de
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        pop ecx
        cmp eax, 35h
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x5887a3dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 570h], 0
        mov dword ptr [ebp - 56ch], 100000h
        mov dword ptr [ebp - 574h], 2
        test edi, edi
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x5887a3dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, dword ptr [ebp + ecx - 570h]
        cmp eax, dword ptr [ebp + ecx - 1d0h]
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x5887a3d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 4
        cmp ecx, 8
        ; Exact mapped bytes 75 E4: jne 0x5887a2e8
        __asm _emit 0x75
        __asm _emit 0xe4
        xor ecx, ecx
        bsr eax, edi
        mov dword ptr [ebp - 76ch], ecx
        ; Exact mapped bytes 74 03: je 0x5887a314
        __asm _emit 0x74
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x5887a316
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, ecx
        sub esi, eax
        cmp esi, 2
        sbb esi, esi
        neg esi
        add esi, edx
        cmp esi, 73h
        ; Exact mapped bytes 76 2A: jbe 0x5887a350
        __asm _emit 0x76
        __asm _emit 0x2a
        push ecx
        lea eax, [ebp - 570h]
        mov dword ptr [ebp - 574h], ecx
        push eax
        lea eax, [ebp - 1d0h]
        mov dword ptr [ebp - 1d4h], ecx
        push 1cch
        push eax
        ; Exact mapped bytes E8 F0 C6 FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 4F: jmp 0x5887a39f
        __asm _emit 0xeb
        __asm _emit 0x4f
        lea ecx, [esi - 1]
        cmp ecx, -1
        ; Exact mapped bytes 74 41: je 0x5887a399
        __asm _emit 0x74
        __asm _emit 0x41
        lea ebx, [ecx - 1]
        mov edi, ecx
        cmp ecx, edx
        ; Exact mapped bytes 73 09: jae 0x5887a36a
        __asm _emit 0x73
        __asm _emit 0x09
        mov eax, dword ptr [ebp + edi*4 - 1d0h]
        ; Exact mapped bytes EB 02: jmp 0x5887a36c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp ebx, edx
        ; Exact mapped bytes 73 09: jae 0x5887a379
        __asm _emit 0x73
        __asm _emit 0x09
        mov edx, dword ptr [ebp + edi*4 - 1d4h]
        ; Exact mapped bytes EB 02: jmp 0x5887a37b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        shr edx, 1eh
        shl eax, 2
        or edx, eax
        dec ecx
        dec ebx
        mov dword ptr [ebp + edi*4 - 1d0h], edx
        cmp ecx, -1
        ; Exact mapped bytes 74 08: je 0x5887a399
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes EB C2: jmp 0x5887a35b
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov dword ptr [ebp - 1d4h], esi
        mov ebx, 435h
        lea eax, [ebp - 570h]
        sub ebx, dword ptr [ebp - 748h]
        mov edi, ebx
        shr edi, 5
        mov esi, edi
        shl esi, 2
        push esi
        push 0
        push eax
        ; Exact mapped bytes E8 4D 2A FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        and ebx, 1fh
        xor eax, eax
        inc eax
        mov ecx, ebx
        shl eax, cl
        mov dword ptr [ebp + esi - 570h], eax
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x5887a4b9
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        pop ecx
        push 8
        test edi, edi
        pop eax
        cmove eax, ecx
        xor ecx, ecx
        mov dword ptr [ebp - 76ch], ecx
        mov eax, dword ptr [ebp + eax - 1d4h]
        bsr eax, eax
        ; Exact mapped bytes 74 03: je 0x5887a3fb
        __asm _emit 0x74
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x5887a3fd
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, ecx
        sub esi, eax
        cmp esi, ebx
        sbb esi, esi
        neg esi
        add esi, edx
        cmp esi, 73h
        ; Exact mapped bytes 76 2A: jbe 0x5887a436
        __asm _emit 0x76
        __asm _emit 0x2a
        push ecx
        lea eax, [ebp - 570h]
        mov dword ptr [ebp - 574h], ecx
        push eax
        lea eax, [ebp - 1d0h]
        mov dword ptr [ebp - 1d4h], ecx
        push 1cch
        push eax
        ; Exact mapped bytes E8 0A C6 FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 4E: jmp 0x5887a484
        __asm _emit 0xeb
        __asm _emit 0x4e
        lea ecx, [esi - 1]
        cmp ecx, -1
        ; Exact mapped bytes 74 40: je 0x5887a47e
        __asm _emit 0x74
        __asm _emit 0x40
        lea ebx, [ecx - 1]
        mov edi, ecx
        cmp ecx, edx
        ; Exact mapped bytes 73 09: jae 0x5887a450
        __asm _emit 0x73
        __asm _emit 0x09
        mov eax, dword ptr [ebp + edi*4 - 1d0h]
        ; Exact mapped bytes EB 02: jmp 0x5887a452
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp ebx, edx
        ; Exact mapped bytes 73 09: jae 0x5887a45f
        __asm _emit 0x73
        __asm _emit 0x09
        mov edx, dword ptr [ebp + edi*4 - 1d4h]
        ; Exact mapped bytes EB 02: jmp 0x5887a461
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        shr edx, 1fh
        add eax, eax
        or edx, eax
        dec ecx
        dec ebx
        mov dword ptr [ebp + edi*4 - 1d0h], edx
        cmp ecx, -1
        ; Exact mapped bytes 74 08: je 0x5887a47e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes EB C3: jmp 0x5887a441
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 1d4h], esi
        mov ebx, 434h
        lea eax, [ebp - 570h]
        sub ebx, dword ptr [ebp - 748h]
        mov edi, ebx
        shr edi, 5
        mov esi, edi
        shl esi, 2
        push esi
        push 0
        push eax
        ; Exact mapped bytes E8 68 29 FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        and ebx, 1fh
        xor eax, eax
        inc eax
        mov ecx, ebx
        shl eax, cl
        mov dword ptr [ebp + esi - 570h], eax
        lea eax, [edi + 1]
        mov dword ptr [ebp - 574h], eax
        mov dword ptr [ebp - 3a4h], eax
        shl eax, 2
        push eax
        lea eax, [ebp - 570h]
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 57 C5 FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ebx, ebx
        add esp, 1ch
        inc ebx
        mov eax, dword ptr [ebp - 760h]
        xor edx, edx
        push 0ah
        pop edi
        mov dword ptr [ebp - 77ch], edi
        test eax, eax
        ; Exact mapped bytes 0F 88 92 04 00 00: js 0x5887a995
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        div edi
        mov ecx, dword ptr [ebp - 3a4h]
        mov dword ptr [ebp - 768h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 B1 03 00 00: je 0x5887a8ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 748h], ecx
        push 26h
        pop edx
        cmp eax, edx
        mov ecx, eax
        cmova ecx, edx
        mov dword ptr [ebp - 758h], ecx
        movzx esi, byte ptr [ecx*4 + 588c3c2fh]
        movzx ecx, byte ptr [ecx*4 + 588c3c2eh]
        mov edi, ecx
        shl edi, 2
        push edi
        lea eax, [ecx + esi]
        mov dword ptr [ebp - 574h], eax
        lea eax, [ebp - 570h]
        push 0
        push eax
        ; Exact mapped bytes E8 B4 28 FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        shl eax, 2
        push eax
        mov eax, dword ptr [ebp - 758h]
        movzx eax, word ptr [eax*4 + 588c3c2ch]
        lea eax, [eax*4 + 588c3328h]
        push eax
        lea eax, [ebp - 570h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 0A 23 FD FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 574h]
        add esp, 18h
        cmp edx, ebx
        ; Exact mapped bytes 0F 87 CA 00 00 00: ja 0x5887a661
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 570h], 0
        ; Exact mapped bytes 75 1A: jne 0x5887a5ba
        __asm _emit 0x75
        __asm _emit 0x1a
        xor eax, eax
        mov dword ptr [ebp - 574h], eax
        mov dword ptr [ebp - 3a4h], eax
        push eax
        lea eax, [ebp - 570h]
        ; Exact mapped bytes E9 CA 02 00 00: jmp 0x5887a884
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 748h]
        cmp dword ptr [ebp - 570h], ebx
        ; Exact mapped bytes 0F 84 D9 02 00 00: je 0x5887a8a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D1 02 00 00: je 0x5887a8a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        xor edi, edi
        mov eax, dword ptr [ebp - 570h]
        mul dword ptr [ebp + edi*4 - 3a0h]
        add eax, esi
        mov dword ptr [ebp + edi*4 - 3a0h], eax
        adc edx, 0
        inc edi
        mov esi, edx
        cmp edi, ecx
        ; Exact mapped bytes 75 E0: jne 0x5887a5d8
        __asm _emit 0x75
        __asm _emit 0xe0
        test esi, esi
        ; Exact mapped bytes 0F 84 99 02 00 00: je 0x5887a899
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3a4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 19: jae 0x5887a624
        __asm _emit 0x73
        __asm _emit 0x19
        mov dword ptr [ebp + eax*4 - 3a0h], esi
        mov ecx, dword ptr [ebp - 3a4h]
        inc ecx
        mov dword ptr [ebp - 3a4h], ecx
        ; Exact mapped bytes E9 7B 02 00 00: jmp 0x5887a89f
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push eax
        mov dword ptr [ebp - 574h], eax
        mov dword ptr [ebp - 3a4h], eax
        lea eax, [ebp - 570h]
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 F0 C3 FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3a4h]
        add esp, 10h
        xor al, al
        mov dword ptr [ebp - 748h], ecx
        ; Exact mapped bytes E9 46 02 00 00: jmp 0x5887a8a7
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 748h]
        cmp ecx, ebx
        ; Exact mapped bytes 0F 87 80 00 00 00: ja 0x5887a6ef
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 3a0h]
        mov eax, edx
        shl eax, 2
        push eax
        lea eax, [ebp - 570h]
        mov dword ptr [ebp - 774h], esi
        push eax
        lea eax, [ebp - 3a0h]
        mov dword ptr [ebp - 3a4h], edx
        push 1cch
        push eax
        ; Exact mapped bytes E8 9C C3 FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        test esi, esi
        ; Exact mapped bytes 0F 84 F6 FE FF FF: je 0x5887a5a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3a4h]
        mov dword ptr [ebp - 748h], ecx
        cmp esi, ebx
        ; Exact mapped bytes 0F 84 E7 01 00 00: je 0x5887a8a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 DF 01 00 00: je 0x5887a8a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        xor edi, edi
        mov eax, dword ptr [ebp - 774h]
        mul dword ptr [ebp + edi*4 - 3a0h]
        add eax, esi
        mov dword ptr [ebp + edi*4 - 3a0h], eax
        adc edx, 0
        inc edi
        mov esi, edx
        cmp edi, ecx
        ; Exact mapped bytes 75 E0: jne 0x5887a6ca
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E9 09 FF FF FF: jmp 0x5887a5f8
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, ecx
        lea edi, [ebp - 3a0h]
        lea esi, [ebp - 570h]
        cmovae esi, edi
        setb al
        mov dword ptr [ebp - 75ch], esi
        mov esi, edi
        lea edi, [ebp - 570h]
        cmovae esi, edi
        mov dword ptr [ebp - 774h], esi
        mov esi, ecx
        cmovb esi, edx
        test al, al
        mov dword ptr [ebp - 780h], esi
        cmovne edx, ecx
        xor eax, eax
        xor edi, edi
        mov dword ptr [ebp - 784h], edx
        mov dword ptr [ebp - 744h], eax
        test esi, esi
        ; Exact mapped bytes 0F 84 32 01 00 00: je 0x5887a874
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 75ch]
        cmp dword ptr [ecx + edi*4], 0
        ; Exact mapped bytes 75 1E: jne 0x5887a76c
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp edi, eax
        ; Exact mapped bytes 0F 85 15 01 00 00: jne 0x5887a86b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp + edi*4 - 740h], 0
        lea eax, [edi + 1]
        mov dword ptr [ebp - 744h], eax
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x5887a86b
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 748h], 0
        mov esi, edi
        and dword ptr [ebp - 74ch], 0
        test edx, edx
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x5887a856
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 73h
        ; Exact mapped bytes 74 6B: je 0x5887a7f4
        __asm _emit 0x74
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 74ch]
        mov ecx, esi
        shl ecx, 2
        cmp esi, eax
        ; Exact mapped bytes 75 13: jne 0x5887a7ab
        __asm _emit 0x75
        __asm _emit 0x13
        and dword ptr [ebp + ecx - 740h], 0
        lea eax, [edx + 1]
        add eax, edi
        mov dword ptr [ebp - 744h], eax
        mov eax, dword ptr [ebp - 774h]
        mov eax, dword ptr [eax + edx*4]
        mov edx, dword ptr [ebp - 75ch]
        mul dword ptr [edx + edi*4]
        add eax, dword ptr [ebp - 748h]
        adc edx, 0
        add dword ptr [ebp + ecx - 740h], eax
        mov ecx, dword ptr [ebp - 74ch]
        mov eax, dword ptr [ebp - 744h]
        adc edx, 0
        inc ecx
        mov dword ptr [ebp - 748h], edx
        mov edx, dword ptr [ebp - 784h]
        inc esi
        mov dword ptr [ebp - 74ch], ecx
        cmp ecx, edx
        ; Exact mapped bytes 75 90: jne 0x5887a784
        __asm _emit 0x75
        __asm _emit 0x90
        cmp dword ptr [ebp - 748h], 0
        ; Exact mapped bytes 74 59: je 0x5887a856
        __asm _emit 0x74
        __asm _emit 0x59
        lea ecx, [ebp - 740h]
        lea ecx, [ecx + esi*4]
        mov dword ptr [ebp - 74ch], ecx
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x5887a94a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1]
        cmp esi, eax
        mov eax, dword ptr [ebp - 74ch]
        mov esi, ecx
        ; Exact mapped bytes 75 09: jne 0x5887a82d
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [eax], 0
        mov dword ptr [ebp - 744h], ecx
        mov ecx, eax
        add eax, 4
        mov dword ptr [ebp - 74ch], eax
        mov eax, dword ptr [ebp - 748h]
        and dword ptr [ebp - 748h], 0
        add dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 744h]
        adc dword ptr [ebp - 748h], 0
        ; Exact mapped bytes 75 B6: jne 0x5887a80c
        __asm _emit 0x75
        __asm _emit 0xb6
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x5887a94a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 780h]
        mov ecx, dword ptr [ebp - 75ch]
        inc edi
        cmp edi, esi
        ; Exact mapped bytes 0F 85 D4 FE FF FF: jne 0x5887a748
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3a4h], eax
        shl eax, 2
        push eax
        lea eax, [ebp - 740h]
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 A5 C1 FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 3a4h]
        mov dword ptr [ebp - 748h], ecx
        mov al, bl
        test al, al
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x5887a974
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 768h]
        sub eax, dword ptr [ebp - 758h]
        mov dword ptr [ebp - 768h], eax
        ; Exact mapped bytes 0F 85 58 FC FF FF: jne 0x5887a51f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ah
        pop edi
        mov eax, dword ptr [ebp - 760h]
        xor edx, edx
        div edi
        test edx, edx
        ; Exact mapped bytes 0F 84 3E 05 00 00: je 0x5887ae1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx*4 + 588c3cc4h]
        mov dword ptr [ebp - 774h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5887a974
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 21 05 00 00: je 0x5887ae1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 19 05 00 00: je 0x5887ae1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        xor edi, edi
        mul dword ptr [ebp + edi*4 - 3a0h]
        add eax, esi
        mov dword ptr [ebp + edi*4 - 3a0h], eax
        mov eax, dword ptr [ebp - 774h]
        adc edx, 0
        inc edi
        mov esi, edx
        cmp edi, ecx
        ; Exact mapped bytes 75 E0: jne 0x5887a905
        __asm _emit 0x75
        __asm _emit 0xe0
        test esi, esi
        ; Exact mapped bytes 0F 84 ED 04 00 00: je 0x5887ae1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3a4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 3C: jae 0x5887a974
        __asm _emit 0x73
        __asm _emit 0x3c
        mov dword ptr [ebp + eax*4 - 3a0h], esi
        inc dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E9 D0 04 00 00: jmp 0x5887ae1a
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push eax
        mov dword ptr [ebp - 0b44h], eax
        mov dword ptr [ebp - 3a4h], eax
        lea eax, [ebp - 0b40h]
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 CA C0 FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        xor eax, eax
        push eax
        mov dword ptr [ebp - 974h], eax
        mov dword ptr [ebp - 3a4h], eax
        lea eax, [ebp - 970h]
        push eax
        lea eax, [ebp - 3a0h]
        ; Exact mapped bytes E9 77 04 00 00: jmp 0x5887ae0c
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        mov dword ptr [ebp - 76ch], eax
        div edi
        mov dword ptr [ebp - 768h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 9A 03 00 00: je 0x5887ad47
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 26h
        pop edx
        cmp eax, edx
        mov ecx, eax
        cmova ecx, edx
        mov dword ptr [ebp - 758h], ecx
        movzx esi, byte ptr [ecx*4 + 588c3c2fh]
        movzx ecx, byte ptr [ecx*4 + 588c3c2eh]
        mov edi, ecx
        shl edi, 2
        push edi
        lea eax, [ecx + esi]
        mov dword ptr [ebp - 574h], eax
        lea eax, [ebp - 570h]
        push 0
        push eax
        ; Exact mapped bytes E8 26 24 FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        shl eax, 2
        push eax
        mov eax, dword ptr [ebp - 758h]
        movzx eax, word ptr [eax*4 + 588c3c2ch]
        lea eax, [eax*4 + 588c3328h]
        push eax
        lea eax, [ebp - 570h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 7C 1E FD FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 574h]
        add esp, 18h
        cmp edx, ebx
        ; Exact mapped bytes 0F 87 BF 00 00 00: ja 0x5887aae4
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 570h]
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x5887aa49
        __asm _emit 0x75
        __asm _emit 0x1a
        xor eax, eax
        mov dword ptr [ebp - 974h], eax
        mov dword ptr [ebp - 1d4h], eax
        push eax
        lea eax, [ebp - 970h]
        ; Exact mapped bytes E9 C4 02 00 00: jmp 0x5887ad0d
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, ebx
        ; Exact mapped bytes 0F 84 D1 02 00 00: je 0x5887ad22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 0F 84 C4 02 00 00: je 0x5887ad22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1d4h]
        xor ecx, ecx
        mov dword ptr [ebp - 774h], eax
        xor edi, edi
        mov eax, esi
        mul dword ptr [ebp + edi*4 - 1d0h]
        add eax, ecx
        mov dword ptr [ebp + edi*4 - 1d0h], eax
        adc edx, 0
        inc edi
        mov ecx, edx
        cmp edi, dword ptr [ebp - 774h]
        ; Exact mapped bytes 75 E0: jne 0x5887aa6e
        __asm _emit 0x75
        __asm _emit 0xe0
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8C 02 00 00: je 0x5887ad22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1d4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 12: jae 0x5887aab3
        __asm _emit 0x73
        __asm _emit 0x12
        mov dword ptr [ebp + eax*4 - 1d0h], ecx
        inc dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E9 6F 02 00 00: jmp 0x5887ad22
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push eax
        mov dword ptr [ebp - 974h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 970h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 61 BF FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        xor al, al
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x5887ad24
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1d4h], ebx
        ; Exact mapped bytes 77 7F: ja 0x5887ab6b
        __asm _emit 0x77
        __asm _emit 0x7f
        mov edi, dword ptr [ebp - 1d0h]
        mov eax, edx
        shl eax, 2
        push eax
        lea eax, [ebp - 570h]
        mov dword ptr [ebp - 1d4h], edx
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 25 BF FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        test edi, edi
        ; Exact mapped bytes 0F 84 0E FF FF FF: je 0x5887aa2f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 F9 01 00 00: je 0x5887ad22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 0F 84 EC 01 00 00: je 0x5887ad22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1d4h]
        xor ecx, ecx
        mov dword ptr [ebp - 774h], eax
        xor esi, esi
        mov eax, edi
        mul dword ptr [ebp + esi*4 - 1d0h]
        add eax, ecx
        mov dword ptr [ebp + esi*4 - 1d0h], eax
        adc edx, 0
        inc esi
        mov ecx, edx
        cmp esi, dword ptr [ebp - 774h]
        ; Exact mapped bytes 75 E0: jne 0x5887ab46
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x5887aa8e
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d4h]
        lea edi, [ebp - 1d0h]
        cmp edx, ecx
        lea esi, [ebp - 570h]
        cmovae esi, edi
        setb al
        mov dword ptr [ebp - 754h], esi
        mov esi, edi
        lea edi, [ebp - 570h]
        cmovae esi, edi
        mov dword ptr [ebp - 774h], esi
        mov esi, ecx
        cmovb esi, edx
        test al, al
        mov dword ptr [ebp - 780h], esi
        cmovne edx, ecx
        xor eax, eax
        xor edi, edi
        mov dword ptr [ebp - 784h], edx
        mov dword ptr [ebp - 744h], eax
        test esi, esi
        ; Exact mapped bytes 0F 84 39 01 00 00: je 0x5887acfd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 754h]
        cmp dword ptr [ecx + edi*4], 0
        ; Exact mapped bytes 75 1E: jne 0x5887abee
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp edi, eax
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x5887acf4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp + edi*4 - 740h], 0
        lea eax, [edi + 1]
        mov dword ptr [ebp - 744h], eax
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x5887acf4
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 748h], 0
        mov esi, edi
        and dword ptr [ebp - 74ch], 0
        test edx, edx
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x5887acdf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 73h
        ; Exact mapped bytes 74 72: je 0x5887ac7d
        __asm _emit 0x74
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 74ch]
        mov ecx, esi
        shl ecx, 2
        cmp esi, eax
        ; Exact mapped bytes 75 13: jne 0x5887ac2d
        __asm _emit 0x75
        __asm _emit 0x13
        and dword ptr [ebp + ecx - 740h], 0
        lea eax, [edx + 1]
        add eax, edi
        mov dword ptr [ebp - 744h], eax
        mov eax, dword ptr [ebp - 774h]
        mov eax, dword ptr [eax + edx*4]
        mov edx, dword ptr [ebp - 754h]
        mul dword ptr [edx + edi*4]
        add eax, dword ptr [ebp + ecx - 740h]
        adc edx, 0
        add eax, dword ptr [ebp - 748h]
        mov dword ptr [ebp + ecx - 740h], eax
        mov ecx, dword ptr [ebp - 74ch]
        adc edx, 0
        mov eax, dword ptr [ebp - 744h]
        inc ecx
        mov dword ptr [ebp - 748h], edx
        inc esi
        mov edx, dword ptr [ebp - 784h]
        mov dword ptr [ebp - 74ch], ecx
        cmp ecx, edx
        ; Exact mapped bytes 75 89: jne 0x5887ac06
        __asm _emit 0x75
        __asm _emit 0x89
        cmp dword ptr [ebp - 748h], 0
        ; Exact mapped bytes 74 59: je 0x5887acdf
        __asm _emit 0x74
        __asm _emit 0x59
        lea ecx, [ebp - 740h]
        lea ecx, [ecx + esi*4]
        mov dword ptr [ebp - 75ch], ecx
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x5887adc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1]
        cmp esi, eax
        mov eax, dword ptr [ebp - 75ch]
        mov esi, ecx
        ; Exact mapped bytes 75 09: jne 0x5887acb6
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [eax], 0
        mov dword ptr [ebp - 744h], ecx
        mov ecx, eax
        add eax, 4
        mov dword ptr [ebp - 75ch], eax
        mov eax, dword ptr [ebp - 748h]
        and dword ptr [ebp - 748h], 0
        add dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 744h]
        adc dword ptr [ebp - 748h], 0
        ; Exact mapped bytes 75 B6: jne 0x5887ac95
        __asm _emit 0x75
        __asm _emit 0xb6
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x5887adc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 780h]
        mov ecx, dword ptr [ebp - 754h]
        inc edi
        cmp edi, esi
        ; Exact mapped bytes 0F 85 CD FE FF FF: jne 0x5887abca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        shl eax, 2
        push eax
        lea eax, [ebp - 740h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 1C BD FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        mov al, bl
        test al, al
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x5887adf0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 768h]
        sub eax, dword ptr [ebp - 758h]
        mov dword ptr [ebp - 768h], eax
        ; Exact mapped bytes 0F 85 69 FC FF FF: jne 0x5887a9ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ah
        pop edi
        mov eax, dword ptr [ebp - 76ch]
        xor edx, edx
        div edi
        test edx, edx
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x5887ae1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx*4 + 588c3cc4h]
        mov dword ptr [ebp - 76ch], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5887adf0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x5887ae1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1d4h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x5887ae1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        xor edi, edi
        mul dword ptr [ebp + edi*4 - 1d0h]
        add eax, esi
        mov dword ptr [ebp + edi*4 - 1d0h], eax
        mov eax, dword ptr [ebp - 76ch]
        adc edx, 0
        inc edi
        mov esi, edx
        cmp edi, ecx
        ; Exact mapped bytes 75 E0: jne 0x5887ad88
        __asm _emit 0x75
        __asm _emit 0xe0
        test esi, esi
        ; Exact mapped bytes 74 6E: je 0x5887ae1a
        __asm _emit 0x74
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 1d4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 39: jae 0x5887adf0
        __asm _emit 0x73
        __asm _emit 0x39
        mov dword ptr [ebp + eax*4 - 1d0h], esi
        inc dword ptr [ebp - 1d4h]
        ; Exact mapped bytes EB 54: jmp 0x5887ae1a
        __asm _emit 0xeb
        __asm _emit 0x54
        xor eax, eax
        push eax
        mov dword ptr [ebp - 0b44h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 0b40h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 4E BC FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        xor eax, eax
        push eax
        mov dword ptr [ebp - 974h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 970h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 24 BC FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        mov edi, dword ptr [ebp - 764h]
        mov esi, edi
        mov ecx, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 748h], esi
        test ecx, ecx
        ; Exact mapped bytes 74 73: je 0x5887aea5
        __asm _emit 0x74
        __asm _emit 0x73
        xor edi, edi
        xor esi, esi
        mov eax, dword ptr [ebp + esi*4 - 1d0h]
        push 0ah
        pop edx
        mul edx
        add eax, edi
        mov dword ptr [ebp + esi*4 - 1d0h], eax
        adc edx, 0
        inc esi
        mov edi, edx
        cmp esi, ecx
        ; Exact mapped bytes 75 E1: jne 0x5887ae36
        __asm _emit 0x75
        __asm _emit 0xe1
        mov esi, dword ptr [ebp - 748h]
        test edi, edi
        ; Exact mapped bytes 74 44: je 0x5887aea3
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 1d4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 0F: jae 0x5887ae79
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp + eax*4 - 1d0h], edi
        inc dword ptr [ebp - 1d4h]
        ; Exact mapped bytes EB 2A: jmp 0x5887aea3
        __asm _emit 0xeb
        __asm _emit 0x2a
        xor eax, eax
        push eax
        mov dword ptr [ebp - 974h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 970h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 9B BB FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        mov edi, esi
        lea eax, [ebp - 3a4h]
        push eax
        lea eax, [ebp - 1d4h]
        push eax
        ; Exact mapped bytes E8 88 52 FE FF: call 0x58860140
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 0ah
        pop edx
        cmp eax, edx
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x5887af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [ebp - 760h]
        lea esi, [edi + 1]
        mov eax, dword ptr [ebp - 3a4h]
        mov byte ptr [edi], 31h
        mov dword ptr [ebp - 748h], esi
        test eax, eax
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x5887af74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov esi, eax
        xor edi, edi
        mov eax, dword ptr [ebp + edi*4 - 3a0h]
        mul edx
        push 0ah
        add eax, ecx
        mov dword ptr [ebp + edi*4 - 3a0h], eax
        adc edx, 0
        inc edi
        mov ecx, edx
        pop edx
        cmp edi, esi
        ; Exact mapped bytes 75 E1: jne 0x5887aeeb
        __asm _emit 0x75
        __asm _emit 0xe1
        mov esi, dword ptr [ebp - 748h]
        test ecx, ecx
        ; Exact mapped bytes 74 60: je 0x5887af74
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 3a4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 0F: jae 0x5887af2e
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp + eax*4 - 3a0h], ecx
        inc dword ptr [ebp - 3a4h]
        ; Exact mapped bytes EB 46: jmp 0x5887af74
        __asm _emit 0xeb
        __asm _emit 0x46
        xor eax, eax
        push eax
        mov dword ptr [ebp - 974h], eax
        mov dword ptr [ebp - 3a4h], eax
        lea eax, [ebp - 970h]
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 E6 BA FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 1A: jmp 0x5887af74
        __asm _emit 0xeb
        __asm _emit 0x1a
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5887af67
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 760h]
        dec eax
        ; Exact mapped bytes EB 13: jmp 0x5887af7a
        __asm _emit 0xeb
        __asm _emit 0x13
        add al, 30h
        lea esi, [edi + 1]
        mov byte ptr [edi], al
        mov dword ptr [ebp - 748h], esi
        mov eax, dword ptr [ebp - 760h]
        mov ecx, dword ptr [ebp - 78ch]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 788h]
        test eax, eax
        ; Exact mapped bytes 78 10: js 0x5887af9d
        __asm _emit 0x78
        __asm _emit 0x10
        cmp ecx, 7fffffffh
        ; Exact mapped bytes 77 08: ja 0x5887af9d
        __asm _emit 0x77
        __asm _emit 0x08
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 02: jne 0x5887af9d
        __asm _emit 0x75
        __asm _emit 0x02
        add ecx, eax
        mov eax, dword ptr [ebp + 20h]
        dec eax
        cmp eax, ecx
        cmovb ecx, eax
        xor dl, dl
        add ecx, dword ptr [ebp - 764h]
        mov dword ptr [ebp - 788h], ecx
        mov byte ptr [ebp - 74dh], dl
        cmp esi, ecx
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x5887b0b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1d4h]
        test eax, eax
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x5887b0b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov esi, eax
        xor edi, edi
        mov eax, dword ptr [ebp + edi*4 - 1d0h]
        mov edx, 3b9aca00h
        mul edx
        add eax, ecx
        mov dword ptr [ebp + edi*4 - 1d0h], eax
        adc edx, 0
        inc edi
        mov ecx, edx
        cmp edi, esi
        ; Exact mapped bytes 75 DF: jne 0x5887afd6
        __asm _emit 0x75
        __asm _emit 0xdf
        mov esi, dword ptr [ebp - 748h]
        test ecx, ecx
        ; Exact mapped bytes 74 44: je 0x5887b045
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 1d4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 0F: jae 0x5887b01b
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp + eax*4 - 1d0h], ecx
        inc dword ptr [ebp - 1d4h]
        ; Exact mapped bytes EB 2A: jmp 0x5887b045
        __asm _emit 0xeb
        __asm _emit 0x2a
        xor eax, eax
        push eax
        mov dword ptr [ebp - 974h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 970h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 F9 B9 FD FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 3a4h]
        push eax
        lea eax, [ebp - 1d4h]
        push eax
        ; Exact mapped bytes E8 E8 50 FE FF: call 0x58860140
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 788h]
        pop ecx
        pop ecx
        push 8
        pop ecx
        sub edi, esi
        xor edx, edx
        div dword ptr [ebp - 77ch]
        add dl, 30h
        cmp edi, ecx
        ; Exact mapped bytes 77 0F: ja 0x5887b083
        __asm _emit 0x77
        __asm _emit 0x0f
        cmp dl, 30h
        ; Exact mapped bytes 74 0D: je 0x5887b086
        __asm _emit 0x74
        __asm _emit 0x0d
        mov dl, bl
        mov byte ptr [ebp - 74dh], dl
        ; Exact mapped bytes EB 09: jmp 0x5887b08c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov byte ptr [ecx + esi], dl
        mov dl, byte ptr [ebp - 74dh]
        dec ecx
        cmp ecx, -1
        ; Exact mapped bytes 75 D3: jne 0x5887b065
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 788h]
        sub eax, esi
        push 9
        pop edi
        cmp eax, edi
        cmova eax, edi
        add esi, eax
        mov dword ptr [ebp - 748h], esi
        cmp esi, dword ptr [ebp - 788h]
        ; Exact mapped bytes 0F 85 0C FF FF FF: jne 0x5887afc2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [esi], 0
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 75 04: jne 0x5887b0c6
        __asm _emit 0x75
        __asm _emit 0x04
        test dl, dl
        ; Exact mapped bytes 74 02: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x02
        xor ebx, ebx
        push dword ptr [ebp - 790h]
        lea eax, [ebp - 76ch]
        push dword ptr [ebp - 794h]
        push eax
        ; Exact mapped bytes E8 60 0F 00 00: call 0x5887c040
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp byte ptr [ebp - 798h], 0
        pop edi
        pop esi
        ; Exact mapped bytes 74 0D: je 0x5887b0fb
        __asm _emit 0x74
        __asm _emit 0x0d
        lea eax, [ebp - 7a0h]
        push eax
        ; Exact mapped bytes E8 D6 0F 00 00: call 0x5887c0d0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        mov eax, ebx
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 48 5F FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5f
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 C3 5E FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
