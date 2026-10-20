// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882EF20 .. +0x229 bytes.
extern "C" __declspec(naked) void FUN_5882ef20_5882EF20() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff0h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 68h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebx + 10h]
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebx + 0ch]
        push esi
        push edi
        mov edi, dword ptr [ebx + 14h]
        lea edx, [eax + eax]
        mov dword ptr [ebp - 44h], ecx
        mov eax, edx
        mov dword ptr [ebp - 64h], edx
        and eax, 0fh
        lea esi, [ecx + edx]
        mov dword ptr [ebp - 60h], eax
        add eax, ecx
        lea ecx, [edi + edi]
        mov dword ptr [ebp - 48h], eax
        cmp ecx, 10h
        ; Exact mapped bytes 0F 87 B9 00 00 00: ja 0x5882f032
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push dword ptr [ebp - 4ch]
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 0A D9 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 28 4D D0: movaps xmm1, xmmword ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x4d
        __asm _emit 0xd0
        add esp, 0ch
        ; Exact mapped bytes 0F 29 4D E0: movaps xmmword ptr [ebp - 0x20], xmm1
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x4d
        __asm _emit 0xe0
        cmp esi, dword ptr [ebp - 48h]
        ; Exact mapped bytes 74 1B: je 0x5882efb1
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 0F 10 46 F0: movups xmm0, xmmword ptr [esi - 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xf0
        sub esi, 10h
        mov eax, edi
        mov edx, 8
        ; Exact mapped bytes 66 0F 3A 61 C8 41: pcmpestri xmm1, xmm0, 0x41
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc8
        __asm _emit 0x41
        ; Exact mapped bytes 72 1E: jb 0x5882efca
        __asm _emit 0x72
        __asm _emit 0x1e
        cmp esi, dword ptr [ebp - 48h]
        ; Exact mapped bytes 75 E5: jne 0x5882ef96
        __asm _emit 0x75
        __asm _emit 0xe5
        mov esi, dword ptr [ebp - 60h]
        test esi, esi
        ; Exact mapped bytes 74 64: je 0x5882f01c
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 64h]
        mov edx, dword ptr [ebp - 44h]
        shr esi, 1
        cmp eax, 10h
        ; Exact mapped bytes 72 20: jb 0x5882efe5
        __asm _emit 0x72
        __asm _emit 0x20
        ; Exact mapped bytes 0F 10 02: movups xmm0, xmmword ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes EB 31: jmp 0x5882effb
        __asm _emit 0xeb
        __asm _emit 0x31
        sub esi, dword ptr [ebp - 44h]
        shr esi, 1
        lea eax, [ecx + esi]
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 72 20 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        push eax
        push edx
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 A0 D8 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 28 45 D0: movaps xmm0, xmmword ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xd0
        add esp, 0ch
        ; Exact mapped bytes 0F 28 4D E0: movaps xmm1, xmmword ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x4d
        __asm _emit 0xe0
        mov eax, edi
        mov edx, esi
        ; Exact mapped bytes 66 0F 3A 61 C8 41: pcmpestri xmm1, xmm0, 0x41
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc8
        __asm _emit 0x41
        ; Exact mapped bytes 73 15: jae 0x5882f01c
        __asm _emit 0x73
        __asm _emit 0x15
        mov eax, ecx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 3B 20 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        or eax, 0ffffffffh
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 25 20 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        mov eax, ecx
        and ecx, 0fh
        and eax, 0fffffff0h
        mov dword ptr [ebp - 54h], ecx
        add eax, dword ptr [ebp - 4ch]
        push ecx
        push eax
        mov dword ptr [ebp - 58h], eax
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 42 D8 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        or edi, 0ffffffffh
        ; Exact mapped bytes 0F 28 55 E0: movaps xmm2, xmmword ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x55
        __asm _emit 0xe0
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 3ch], eax
        lea eax, [ebp - 50h]
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 54h]
        shr eax, 1
        mov dword ptr [ebp - 50h], edi
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 0F 29 55 D0: movaps xmmword ptr [ebp - 0x30], xmm2
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x55
        __asm _emit 0xd0
        cmp esi, dword ptr [ebp - 48h]
        ; Exact mapped bytes 74 5F: je 0x5882f0e0
        __asm _emit 0x74
        __asm _emit 0x5f
        ; Exact mapped bytes 0F 10 4E F0: movups xmm1, xmmword ptr [esi - 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4e
        __asm _emit 0xf0
        sub esi, 10h
        mov dword ptr [ebp - 5ch], esi
        mov esi, ecx
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 06: movups xmm0, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        mov eax, 8
        mov edx, eax
        ; Exact mapped bytes 66 0F 3A 61 C1 41: pcmpestri xmm0, xmm1, 0x41
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc1
        __asm _emit 0x41
        ; Exact mapped bytes 73 09: jae 0x5882f0ab
        __asm _emit 0x73
        __asm _emit 0x09
        cmp ecx, edi
        ; Exact mapped bytes 7E 05: jle 0x5882f0ab
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edi, ecx
        mov dword ptr [ebp - 50h], edi
        add esi, 10h
        cmp esi, dword ptr [ebp - 58h]
        ; Exact mapped bytes 75 DD: jne 0x5882f090
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 54h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5882f0d0
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, 8
        ; Exact mapped bytes 66 0F 3A 61 D1 41: pcmpestri xmm2, xmm1, 0x41
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xd1
        __asm _emit 0x41
        ; Exact mapped bytes 73 09: jae 0x5882f0d0
        __asm _emit 0x73
        __asm _emit 0x09
        cmp ecx, edi
        ; Exact mapped bytes 7E 05: jle 0x5882f0d0
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edi, ecx
        mov dword ptr [ebp - 50h], edi
        cmp edi, -1
        ; Exact mapped bytes 75 24: jne 0x5882f0f9
        __asm _emit 0x75
        __asm _emit 0x24
        mov esi, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 4ch]
        cmp esi, dword ptr [ebp - 48h]
        ; Exact mapped bytes 75 A1: jne 0x5882f081
        __asm _emit 0x75
        __asm _emit 0xa1
        mov esi, dword ptr [ebp - 60h]
        test esi, esi
        ; Exact mapped bytes 74 4D: je 0x5882f134
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 64h]
        mov edx, dword ptr [ebp - 44h]
        shr esi, 1
        cmp eax, 10h
        ; Exact mapped bytes 72 22: jb 0x5882f116
        __asm _emit 0x72
        __asm _emit 0x22
        ; Exact mapped bytes 0F 10 02: movups xmm0, xmmword ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes EB 2F: jmp 0x5882f128
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 5ch]
        sub eax, dword ptr [ebp - 44h]
        shr eax, 1
        add eax, edi
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 41 1F 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        push eax
        push edx
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 6F D7 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 28 45 E0: movaps xmm0, xmmword ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xe0
        add esp, 0ch
        push esi
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 1F 11 00 00: call 0x58830250
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 4]
        mov eax, edi
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 0E 1F 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
