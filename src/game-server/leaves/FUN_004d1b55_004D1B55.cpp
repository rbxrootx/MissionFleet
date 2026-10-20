// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1B55 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_004d1b55_004D1B55() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57dcf0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4d1b8d
        __asm _emit 0x75
        __asm _emit 0x11
        push 69h
        push 5c8e64h
        ; Exact mapped bytes E8 78 2E 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d1b8d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4d1b76
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 75 11: jne 0x4d1bad
        __asm _emit 0x75
        __asm _emit 0x11
        push 6bh
        push 5c8e64h
        ; Exact mapped bytes E8 58 2E 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d1bad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4d1b93
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 40h]
        add eax, 3ch
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d1be3
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 74 0B: je 0x4d1be3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 40h]
        add edx, 44h
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 3A: jmp 0x4d1c1d
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 34h]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d1c01
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 0B: je 0x4d1c01
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 40h]
        add edx, 4ch
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 1C: jmp 0x4d1c1d
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 34h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4d1c1d
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 09: je 0x4d1c1d
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 40h]
        add edx, 54h
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 CB F1 02 00: call 0x500df4
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 3B F0 02 00: call 0x500c6f
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 3ch]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 66 5D 06 00: call 0x5379ad
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 DB 5F 06 00: call 0x537c2e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 11: jne 0x4d1c6d
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 2C F3 02 00: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 61: jmp 0x4d1cce
        __asm _emit 0xeb
        __asm _emit 0x61
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 DC 40 06 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1ch
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 DC 43 06 00: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        push 0cc0020h
        push 0
        push 0
        lea edx, [ebp - 2ch]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 B7 41 06 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 98 41 06 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 D7 76 06 00: call 0x53938a
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 6F 5F 06 00: call 0x537c2e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 C9 F2 02 00: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
