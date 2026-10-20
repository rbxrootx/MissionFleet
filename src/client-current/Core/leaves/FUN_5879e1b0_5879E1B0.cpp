// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879E1B0 .. +0x3C0 bytes.
extern "C" __declspec(naked) void FUN_5879e1b0_5879E1B0() {
    __asm {
        sub esp, 2ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 28h], eax
        push ebx
        mov ebx, dword ptr [esp + 38h]
        push esi
        mov esi, dword ptr [esp + 38h]
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 1ch], ebx
        test esi, esi
        ; Exact mapped bytes 0F 84 71 03 00 00: je 0x5879e549
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 E2 85 00 00: call 0x587a67c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [esp + 24h], eax
        add esp, 4
        mov dword ptr [esp + 14h], ecx
        test eax, eax
        ; Exact mapped bytes 0F 8E 56 03 00 00: jle 0x5879e549
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push edi
        cmp dword ptr [esi + 108h], 0
        mov eax, ebx
        mov dword ptr [esp + 14h], 0
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 0F 86 28 03 00 00: jbe 0x5879e538
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 11ch], 0
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes 75 1F: jne 0x5879e23a
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp byte ptr [esi + 151h], 0
        ; Exact mapped bytes 75 16: jne 0x5879e23a
        __asm _emit 0x75
        __asm _emit 0x16
        test dword ptr [esi + 74h], 400h
        ; Exact mapped bytes 0F 84 34 03 00 00: je 0x5879e565
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 09 78 00 00: call 0x587a5a40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov bl, byte ptr [esi + 150h]
        test bl, bl
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x5879e300
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 7ch], 2
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x5879e300
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 151h]
        cmp eax, 6
        ; Exact mapped bytes 0F 87 9E 00 00 00: ja 0x5879e300
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 70 E5 79 58: jmp dword ptr [eax*4 + 0x5879e570]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xe5
        __asm _emit 0x79
        __asm _emit 0x58
        test byte ptr [esi + 11ch], 7
        ; Exact mapped bytes 0F 85 1D 01 00 00: jne 0x5879e393
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x5879e300
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 11ch], 7
        ; Exact mapped bytes 0F 85 0B 01 00 00: jne 0x5879e393
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 104h], 5
        ; Exact mapped bytes 0F 82 FE 00 00 00: jb 0x5879e393
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 69: jmp 0x5879e300
        __asm _emit 0xeb
        __asm _emit 0x69
        mov eax, dword ptr [esi + 11ch]
        and al, 7
        cmp al, 4
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x5879e393
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 57: jmp 0x5879e300
        __asm _emit 0xeb
        __asm _emit 0x57
        test byte ptr [esi + 11ch], 3
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x5879e393
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 104h], 3
        ; Exact mapped bytes 0F 82 D0 00 00 00: jb 0x5879e393
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3B: jmp 0x5879e300
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, dword ptr [esi + 11ch]
        and al, 3
        cmp al, 2
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x5879e393
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x5879e300
        __asm _emit 0xeb
        __asm _emit 0x29
        test byte ptr [esi + 11ch], 1
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x5879e393
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 104h], 2
        ; Exact mapped bytes 0F 82 A2 00 00 00: jb 0x5879e393
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x5879e300
        __asm _emit 0xeb
        __asm _emit 0x0d
        test byte ptr [esi + 11ch], 1
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5879e393
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 153h]
        mov cl, byte ptr [esi + 155h]
        mov edi, dword ptr [esi + 110h]
        mov byte ptr [esp + 34h], al
        mov al, byte ptr [esi + 158h]
        mov byte ptr [esp + 35h], cl
        mov byte ptr [esp + 36h], al
        movzx eax, al
        movzx ecx, cl
        imul ecx, eax
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 37h], cl
        movzx edx, cl
        cmp cl, 8
        ; Exact mapped bytes 72 08: jb 0x5879e346
        __asm _emit 0x72
        __asm _emit 0x08
        shr edx, 3
        imul edx, edi
        ; Exact mapped bytes EB 09: jmp 0x5879e34f
        __asm _emit 0xeb
        __asm _emit 0x09
        imul edx, edi
        add edx, 7
        shr edx, 3
        mov edi, dword ptr [esi + 128h]
        push edx
        inc edi
        mov dword ptr [esp + 34h], edx
        push ebp
        push edi
        ; Exact mapped bytes E8 2E E5 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        test bl, bl
        ; Exact mapped bytes 74 38: je 0x5879e3a1
        __asm _emit 0x74
        __asm _emit 0x38
        mov al, byte ptr [esi + 151h]
        cmp al, 6
        ; Exact mapped bytes 73 2E: jae 0x5879e3a1
        __asm _emit 0x73
        __asm _emit 0x2e
        test byte ptr [esi + 7ch], 2
        ; Exact mapped bytes 74 28: je 0x5879e3a1
        __asm _emit 0x74
        __asm _emit 0x28
        movzx eax, al
        push eax
        lea eax, [esp + 30h]
        push edi
        push eax
        ; Exact mapped bytes E8 C8 41 00 00: call 0x587a2550
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 38h]
        add esp, 0ch
        test ebx, ebx
        ; Exact mapped bytes 75 12: jne 0x5879e3a5
        __asm _emit 0x75
        __asm _emit 0x12
        push esi
        ; Exact mapped bytes E8 47 64 00 00: call 0x587a47e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 6F 01 00 00: jmp 0x5879e510
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 2ch]
        cmp dword ptr [esi + 7ch], 0
        ; Exact mapped bytes 74 12: je 0x5879e3bd
        __asm _emit 0x74
        __asm _emit 0x12
        lea eax, [esp + 2ch]
        push eax
        push esi
        ; Exact mapped bytes E8 3A 8D 00 00: call 0x587a70f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 34h]
        add esp, 8
        mov al, byte ptr [esp + 37h]
        cmp al, byte ptr [esi + 156h]
        ; Exact mapped bytes 0F 85 8D 01 00 00: jne 0x5879e55a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, byte ptr [esi + 15bh]
        ; Exact mapped bytes 0F 85 81 01 00 00: jne 0x5879e55a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 284h], 4
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x5879e4c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 288h], 40h
        ; Exact mapped bytes 0F 85 D2 00 00 00: jne 0x5879e4c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 34h]
        mov ebp, dword ptr [esi + 128h]
        test al, 2
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x5879e4c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esp + 35h]
        cmp cl, 8
        ; Exact mapped bytes 75 37: jne 0x5879e445
        __asm _emit 0x75
        __asm _emit 0x37
        cmp al, 2
        ; Exact mapped bytes 75 07: jne 0x5879e419
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, 3
        ; Exact mapped bytes EB 0D: jmp 0x5879e426
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp al, 6
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x5879e4c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        test ebx, ebx
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x5879e4c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 3]
        mov al, byte ptr [ecx - 1]
        sub byte ptr [ecx - 2], al
        sub byte ptr [ecx], al
        add ecx, edx
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879e431
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x5879e4c5
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp cl, 10h
        ; Exact mapped bytes 0F 85 7B 00 00 00: jne 0x5879e4c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 75 0A: jne 0x5879e45c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esp + 10h], 6
        ; Exact mapped bytes EB 0C: jmp 0x5879e468
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp al, 6
        ; Exact mapped bytes 75 69: jne 0x5879e4c9
        __asm _emit 0x75
        __asm _emit 0x69
        mov dword ptr [esp + 10h], 8
        test ebx, ebx
        ; Exact mapped bytes 74 5D: je 0x5879e4c9
        __asm _emit 0x74
        __asm _emit 0x5d
        mov esi, dword ptr [esp + 10h]
        add ebp, 2
        movzx edi, byte ptr [ebp + 1]
        movzx eax, byte ptr [ebp + 2]
        movzx ecx, byte ptr [ebp - 1]
        shl ecx, 8
        shl edi, 8
        or edi, eax
        movzx eax, byte ptr [ebp]
        or ecx, eax
        movzx eax, byte ptr [ebp + 4]
        sub ecx, edi
        movzx edx, cx
        movzx ecx, byte ptr [ebp + 3]
        shl ecx, 8
        or ecx, eax
        mov byte ptr [ebp], dl
        sub ecx, edi
        mov eax, edx
        shr eax, 8
        movzx ecx, cx
        mov byte ptr [ebp - 1], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [ebp + 3], al
        mov byte ptr [ebp + 4], cl
        add ebp, esi
        sub ebx, 1
        ; Exact mapped bytes 75 B2: jne 0x5879e473
        __asm _emit 0x75
        __asm _emit 0xb2
        mov esi, dword ptr [esp + 20h]
        mov al, byte ptr [esp + 34h]
        cmp al, 3
        ; Exact mapped bytes 75 17: jne 0x5879e4e4
        __asm _emit 0x75
        __asm _emit 0x17
        cmp dword ptr [esi + 148h], 0
        ; Exact mapped bytes 7C 0E: jl 0x5879e4e4
        __asm _emit 0x7c
        __asm _emit 0x0e
        lea eax, [esp + 2ch]
        push eax
        push esi
        ; Exact mapped bytes E8 8F 7E 00 00: call 0x587a6370
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        lea eax, [esp + 2ch]
        push eax
        push esi
        ; Exact mapped bytes E8 71 5C 00 00: call 0x587a4160
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1f4h]
        add esp, 8
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x5879e510
        __asm _emit 0x74
        __asm _emit 0x14
        movzx eax, byte ptr [esi + 151h]
        push eax
        push dword ptr [esi + 11ch]
        push esi
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        add esp, 0ch
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 18h]
        inc ecx
        add eax, 4
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 18h], eax
        cmp ecx, dword ptr [esi + 108h]
        ; Exact mapped bytes 0F 82 E0 FC FF FF: jb 0x5879e210
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
        mov ebx, dword ptr [esp + 24h]
        inc ecx
        mov dword ptr [esp + 1ch], ecx
        cmp ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 0F 8C AE FC FF FF: jl 0x5879e1f5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebp
        mov ecx, dword ptr [esp + 30h]
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 FA 2A 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 2ch
        ret
        push 588b75d4h
        push esi
        ; Exact mapped bytes E8 1B 09 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b759ch
        push esi
        ; Exact mapped bytes E8 10 09 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
