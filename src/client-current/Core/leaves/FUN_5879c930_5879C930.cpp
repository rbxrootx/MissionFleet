// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879C930 .. +0x2AC bytes.
extern "C" __declspec(naked) void FUN_5879c930_5879C930() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891e2dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 4D 0C: movsd xmm1, qword ptr [ebp + 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0x0c
        mov edi, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 30h], esi
        mov dword ptr [ebp - 34h], esi
        mov dword ptr [ebp - 30h], edi
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes E8 75 58 0C 00: call 0x588621f0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 75: jne 0x5879c9f7
        __asm _emit 0x75
        __asm _emit 0x75
        ; Exact mapped bytes F2 0F 10 45 0C: movsd xmm0, qword ptr [ebp + 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x0c
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 4C 59 0C 00: call 0x588622e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5879c99f
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0E: jmp 0x5879c9ad
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor eax, eax
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 2F 45 0C: comisd xmm0, xmmword ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0x0c
        setbe al
        inc eax
        movzx ecx, byte ptr [ebp + 14h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        xor ecx, 1
        ; Exact mapped bytes 0F 11 06: movups xmmword ptr [esi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        mov dword ptr [esi + 10h], 0
        mov dword ptr [esi + 14h], 0
        lea eax, [eax + ecx*2]
        add eax, ecx
        mov edx, dword ptr [eax*4 + 588b7320h]
        mov ecx, edx
        lea edi, [ecx + 1]
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x5879c9e0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edi
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 DE C7 D0 FF: call 0x584a91d0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc7
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes E9 C8 01 00 00: jmp 0x5879cbbf
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 2ch]
        mov dword ptr [ebp - 18h], 0
        push eax
        lea eax, [ebp - 28h]
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [ebp - 2ch], 2fh
        push eax
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes E8 10 C7 D0 FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [ebp - 28h], eax
        add esp, 8
        mov dword ptr [ebp - 18h], 24h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 0F 11 00: movups xmmword ptr [eax], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 0F 11 40 10: movups xmmword ptr [eax + 0x10], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x40
        __asm _emit 0x10
        mov dword ptr [eax + 20h], 0
        mov byte ptr [eax + 24h], 0
        cmp dword ptr [ebp + 1ch], 0
        mov esi, 588b7370h
        mov eax, 588b7378h
        mov dword ptr [ebp - 4], 0
        cmovne esi, eax
        cmp dword ptr [ebp - 14h], 0fh
        lea eax, [ebp - 28h]
        ; Exact mapped bytes F2 0F 10 45 0C: movsd xmm0, qword ptr [ebp + 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x0c
        cmova eax, dword ptr [ebp - 28h]
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        push edi
        push esi
        push dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 ED 11 00 00: call 0x5879dc70
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        lea ecx, [ebp - 28h]
        push 0
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 72 09: jb 0x5879ca99
        __asm _emit 0x72
        __asm _emit 0x09
        inc eax
        push eax
        ; Exact mapped bytes E8 99 F2 D6 FF: call 0x5850bd30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf2
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes EB C7: jmp 0x5879ca60
        __asm _emit 0xeb
        __asm _emit 0xc7
        push eax
        ; Exact mapped bytes E8 91 F2 D6 FF: call 0x5850bd30
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf2
        __asm _emit 0xd6
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 14h]
        lea edi, [ebp - 28h]
        mov edx, dword ptr [ebp - 28h]
        lea eax, [ebp - 28h]
        cmp esi, 0fh
        lea ecx, [ebp - 28h]
        cmova edi, edx
        add edi, dword ptr [ebp - 18h]
        cmp esi, 0fh
        cmova eax, edx
        add eax, dword ptr [ebp - 18h]
        cmp esi, 0fh
        push eax
        cmova ecx, edx
        lea eax, [ebp - 2ch]
        push ecx
        push eax
        ; Exact mapped bytes E8 CF E7 FF FF: call 0x5879b2a0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 28h]
        push edi
        push dword ptr [eax]
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 2D EB FF FF: call 0x5879b610
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        lea edi, [ebp - 28h]
        mov edx, dword ptr [ebp - 28h]
        cmp ecx, 0fh
        mov eax, dword ptr [ebp - 18h]
        cmova edi, edx
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5879cb19
        __asm _emit 0x74
        __asm _emit 0x20
        push 2eh
        lea esi, [eax + edi]
        push esi
        push edi
        ; Exact mapped bytes E8 CB 38 09 00: call 0x588303d0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 74 07: je 0x5879cb10
        __asm _emit 0x74
        __asm _emit 0x07
        sub eax, edi
        cmp eax, -1
        ; Exact mapped bytes 75 3C: jne 0x5879cb4c
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 28h]
        cmp ecx, 0fh
        lea edi, [ebp - 28h]
        cmova edi, edx
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5879cb3d
        __asm _emit 0x74
        __asm _emit 0x17
        push 65h
        lea esi, [eax + edi]
        push esi
        push edi
        ; Exact mapped bytes E8 9E 38 09 00: call 0x588303d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 74 07: je 0x5879cb3d
        __asm _emit 0x74
        __asm _emit 0x07
        sub eax, edi
        cmp eax, -1
        ; Exact mapped bytes 75 0F: jne 0x5879cb4c
        __asm _emit 0x75
        __asm _emit 0x0f
        push 2
        push 588b7380h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 54 91 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x91
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp + 1ch], 1
        ; Exact mapped bytes 75 47: jne 0x5879cb99
        __asm _emit 0x75
        __asm _emit 0x47
        mov esi, dword ptr [ebp - 14h]
        lea edi, [ebp - 28h]
        mov edx, dword ptr [ebp - 28h]
        lea eax, [ebp - 28h]
        push dword ptr [ebp - 30h]
        cmp esi, 0fh
        lea ecx, [ebp - 28h]
        cmova edi, edx
        add edi, dword ptr [ebp - 18h]
        cmp esi, 0fh
        cmova eax, edx
        add eax, dword ptr [ebp - 18h]
        cmp esi, 0fh
        push eax
        cmova ecx, edx
        lea eax, [ebp - 38h]
        push ecx
        push eax
        ; Exact mapped bytes E8 49 E7 FF FF: call 0x5879b2d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 28h]
        push edi
        push dword ptr [eax]
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 77 EA FF FF: call 0x5879b610
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 34h]
        lea eax, [ebp - 28h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 09 87 D2 FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x87
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        cmp eax, 0fh
        ; Exact mapped bytes 76 10: jbe 0x5879cbbf
        __asm _emit 0x76
        __asm _emit 0x10
        push eax
        push dword ptr [ebp - 28h]
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 74 D8 D0 FF: call 0x584aa430
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd8
        __asm _emit 0xd0
        __asm _emit 0xff
        add esp, 0ch
        mov eax, esi
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 78 44 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
