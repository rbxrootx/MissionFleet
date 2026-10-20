// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AA300 .. +0x313 bytes.
extern "C" __declspec(naked) void FUN_004aa300_004AA300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes A1 B0 12 5D 00: mov eax, dword ptr [0x5d12b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x4aa34c
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes E8 AF 10 00 00: call 0x4ab3d0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x4aa346
        __asm _emit 0x75
        __asm _emit 0x21
        push 58bc14h
        push 0
        push 141h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 F3 67 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa346
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4aa31c
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 15 B4 12 5D 00: mov edx, dword ptr [0x5d12b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 3B 05 B8 12 5D 00: cmp eax, dword ptr [0x5d12b8]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 01: jne 0x4aa361
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 1
        ; Exact mapped bytes FF 15 88 1A 5D 00: call dword ptr [0x5d1a88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 5E: jne 0x4aa3e4
        __asm _emit 0x75
        __asm _emit 0x5e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2B: je 0x4aa3b7
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 58bbd0h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 8A 67 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa3af
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x4aa38c
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes EB 26: jmp 0x4aa3dd
        __asm _emit 0xeb
        __asm _emit 0x26
        push 58bbach
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 62 67 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa3d7
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4aa3b7
        __asm _emit 0x75
        __asm _emit 0xda
        xor eax, eax
        ; Exact mapped bytes E9 28 02 00 00: jmp 0x4aa60c
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 74 14: je 0x4aa406
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 B0 12 5D 00: mov edx, dword ptr [0x5d12b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x4aa406
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        cmp dword ptr [ebp + 8], -20h
        ; Exact mapped bytes 77 0B: ja 0x4aa417
        __asm _emit 0x77
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        add eax, 24h
        cmp eax, -20h
        ; Exact mapped bytes 76 2C: jbe 0x4aa443
        __asm _emit 0x76
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 58bb84h
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 03 67 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa436
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x4aa417
        __asm _emit 0x75
        __asm _emit 0xdb
        xor eax, eax
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x4aa60c
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        cmp eax, 4
        ; Exact mapped bytes 74 40: je 0x4aa490
        __asm _emit 0x74
        __asm _emit 0x40
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 3A: je 0x4aa490
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 74 2C: je 0x4aa490
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 74 26: je 0x4aa490
        __asm _emit 0x74
        __asm _emit 0x26
        push 58bb50h
        push 58bba8h
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 AF 66 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa48a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4aa46a
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 8]
        add eax, 24h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 6E B1 00 00: call 0x4b5610
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x4aa4b5
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x4aa60c
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 12 5D 00: mov edx, dword ptr [0x5d12b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, 1
        ; Exact mapped bytes 89 15 B4 12 5D 00: mov dword ptr [0x5d12b4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 49: je 0x4aa513
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0fedcbabch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 0
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x4aa5b3
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 14 ED 5D 00: mov edx, dword ptr [0x5ded14]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 15 14 ED 5D 00: mov dword ptr [0x5ded14], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 1C ED 5D 00: mov eax, dword ptr [0x5ded1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        add eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 1C ED 5D 00: mov dword ptr [0x5ded1c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C ED 5D 00: mov ecx, dword ptr [0x5ded1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 3B 0D 20 ED 5D 00: cmp ecx, dword ptr [0x5ded20]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 76 0C: jbe 0x4aa549
        __asm _emit 0x76
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 15 1C ED 5D 00: mov edx, dword ptr [0x5ded1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 20 ED 5D 00: mov dword ptr [0x5ded20], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 18 ED 5D 00 00: cmp dword ptr [0x5ded18], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x4aa55f
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes A1 18 ED 5D 00: mov eax, dword ptr [0x5ded18]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x4aa568
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 15 10 ED 5D 00: mov dword ptr [0x5ded10], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 18 ED 5D 00: mov ecx, dword ptr [0x5ded18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 18h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 0D 18 ED 5D 00: mov dword ptr [0x5ded18], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        push 4
        xor edx, edx
        ; Exact mapped bytes 8A 15 BC 12 5D 00: mov dl, byte ptr [0x5d12bc]
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 A6 ED FF FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push 4
        xor ecx, ecx
        ; Exact mapped bytes 8A 0D BC 12 5D 00: mov cl, byte ptr [0x5d12bc]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 20h]
        push ecx
        ; Exact mapped bytes E8 88 ED FF FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        xor eax, eax
        ; Exact mapped bytes A0 BE 12 5D 00: mov al, byte ptr [0x5d12be]
        __asm _emit 0xa0
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes E8 6D ED FF FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        add eax, 20h
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
