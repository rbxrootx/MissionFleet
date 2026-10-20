// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882ED00 .. +0x213 bytes.
extern "C" __declspec(naked) void FUN_5882ed00_5882ED00() {
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
        sub esp, 58h
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
        mov edx, dword ptr [ebx + 0ch]
        push esi
        mov dword ptr [ebp - 4ch], eax
        mov eax, edx
        push edi
        mov edi, dword ptr [ebx + 14h]
        lea esi, [ecx + edx]
        and eax, 0fh
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 48h], eax
        cmp edi, 10h
        ; Exact mapped bytes 0F 87 C1 00 00 00: ja 0x5882ee0c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push dword ptr [ebp - 4ch]
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 38 DB 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        add esp, 0ch
        mov ecx, dword ptr [ebp - 44h]
        add eax, ecx
        ; Exact mapped bytes 0F 28 4D D0: movaps xmm1, xmmword ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 29 4D E0: movaps xmmword ptr [ebp - 0x20], xmm1
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x4d
        __asm _emit 0xe0
        cmp esi, eax
        ; Exact mapped bytes 74 23: je 0x5882ed92
        __asm _emit 0x74
        __asm _emit 0x23
        nop
        ; Exact mapped bytes 0F 10 46 F0: movups xmm0, xmmword ptr [esi - 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xf0
        sub esi, 10h
        mov eax, edi
        mov edx, 10h
        ; Exact mapped bytes 66 0F 3A 61 C8 40: pcmpestri xmm1, xmm0, 0x40
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc8
        __asm _emit 0x40
        ; Exact mapped bytes 72 20: jb 0x5882eda6
        __asm _emit 0x72
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 44h]
        add eax, ecx
        cmp esi, eax
        ; Exact mapped bytes 75 DE: jne 0x5882ed70
        __asm _emit 0x75
        __asm _emit 0xde
        mov esi, dword ptr [ebp - 48h]
        test esi, esi
        ; Exact mapped bytes 74 5D: je 0x5882edf6
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebx + 0ch]
        cmp eax, 10h
        ; Exact mapped bytes 72 1E: jb 0x5882edbf
        __asm _emit 0x72
        __asm _emit 0x1e
        ; Exact mapped bytes 0F 10 01: movups xmm0, xmmword ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x01
        ; Exact mapped bytes EB 2F: jmp 0x5882edd5
        __asm _emit 0xeb
        __asm _emit 0x2f
        sub esi, dword ptr [ebp - 44h]
        lea eax, [ecx + esi]
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 98 22 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        push eax
        push ecx
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 C6 DA 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xda
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
        ; Exact mapped bytes 66 0F 3A 61 C8 40: pcmpestri xmm1, xmm0, 0x40
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc8
        __asm _emit 0x40
        ; Exact mapped bytes 73 15: jae 0x5882edf6
        __asm _emit 0x73
        __asm _emit 0x15
        mov eax, ecx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 61 22 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x22
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
        ; Exact mapped bytes E8 4B 22 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        mov eax, edi
        and edi, 0fh
        and eax, 0fffffff0h
        mov dword ptr [ebx + 14h], edi
        add eax, dword ptr [ebp - 4ch]
        push edi
        push eax
        mov dword ptr [ebp - 54h], eax
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 68 DA 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        or edi, 0ffffffffh
        mov ecx, dword ptr [ebp - 44h]
        add esp, 0ch
        ; Exact mapped bytes 0F 28 55 E0: movaps xmm2, xmmword ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x55
        __asm _emit 0xe0
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 3ch], eax
        lea eax, [ebp - 50h]
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebx + 14h]
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 48h]
        add eax, ecx
        mov dword ptr [ebp - 50h], edi
        ; Exact mapped bytes 0F 29 55 D0: movaps xmmword ptr [ebp - 0x30], xmm2
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x55
        __asm _emit 0xd0
        cmp esi, eax
        ; Exact mapped bytes 74 67: je 0x5882eec4
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 4E F0: movups xmm1, xmmword ptr [esi - 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4e
        __asm _emit 0xf0
        sub esi, 10h
        mov dword ptr [ebp - 58h], esi
        mov esi, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 06: movups xmm0, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        mov eax, 10h
        mov edx, eax
        ; Exact mapped bytes 66 0F 3A 61 C1 40: pcmpestri xmm0, xmm1, 0x40
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc1
        __asm _emit 0x40
        ; Exact mapped bytes 73 09: jae 0x5882ee8b
        __asm _emit 0x73
        __asm _emit 0x09
        cmp ecx, edi
        ; Exact mapped bytes 7E 05: jle 0x5882ee8b
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edi, ecx
        mov dword ptr [ebp - 50h], edi
        add esi, 10h
        cmp esi, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 DD: jne 0x5882ee70
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebx + 14h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5882eeb0
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, 10h
        ; Exact mapped bytes 66 0F 3A 61 D1 40: pcmpestri xmm2, xmm1, 0x40
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xd1
        __asm _emit 0x40
        ; Exact mapped bytes 73 09: jae 0x5882eeb0
        __asm _emit 0x73
        __asm _emit 0x09
        cmp ecx, edi
        ; Exact mapped bytes 7E 05: jle 0x5882eeb0
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edi, ecx
        mov dword ptr [ebp - 50h], edi
        cmp edi, -1
        ; Exact mapped bytes 75 23: jne 0x5882eed8
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 44h]
        add eax, ecx
        mov esi, dword ptr [ebp - 58h]
        cmp esi, eax
        ; Exact mapped bytes 75 9C: jne 0x5882ee60
        __asm _emit 0x75
        __asm _emit 0x9c
        mov esi, dword ptr [ebp - 48h]
        test esi, esi
        ; Exact mapped bytes 74 33: je 0x5882eefe
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebx + 0ch]
        cmp eax, 10h
        ; Exact mapped bytes 72 0D: jb 0x5882eee0
        __asm _emit 0x72
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 10 01: movups xmm0, xmmword ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x01
        ; Exact mapped bytes EB 1A: jmp 0x5882eef2
        __asm _emit 0xeb
        __asm _emit 0x1a
        sub edi, dword ptr [ebp - 44h]
        add edi, dword ptr [ebp - 58h]
        ; Exact mapped bytes EB 1E: jmp 0x5882eefe
        __asm _emit 0xeb
        __asm _emit 0x1e
        push eax
        push ecx
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 A5 D9 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd9
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
        ; Exact mapped bytes E8 F5 12 00 00: call 0x588301f0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 4]
        mov eax, edi
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 44 21 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
