// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ABC70 .. +0x2B9 bytes.
extern "C" __declspec(naked) void FUN_004abc70_004ABC70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], 0
        push 9
        ; Exact mapped bytes E8 69 95 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 58c1b0h
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 8F 4E 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4abcaa
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4abc8a
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x4abcbe
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes A1 18 ED 5D 00: mov eax, dword ptr [0x5ded18]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 08: jmp 0x4abcd0
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 18 02 00 00: je 0x4abef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 84 0C 02 00 00: je 0x4abef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        cmp edx, 3
        ; Exact mapped bytes 74 2D: je 0x4abd24
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x4abd24
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 75 12: jne 0x4abd29
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D B0 12 5D 00: mov ecx, dword ptr [0x5d12b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x4abd29
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C4 01 00 00: jmp 0x4abeed
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 70: je 0x4abda2
        __asm _emit 0x74
        __asm _emit 0x70
        push 0
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 9E FA FF FF: call 0x4ab7e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x4abd73
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 58c19ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 CE 4D 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4abd6b
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4abd49
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes EB 2F: jmp 0x4abda2
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 58c190h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 9D 4D 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4abd9c
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x4abd73
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 58c188h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 75 4D 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4abdc4
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4abda2
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        cmp edx, 4
        ; Exact mapped bytes 75 71: jne 0x4abe4c
        __asm _emit 0x75
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        sar eax, 10h
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        push ecx
        push 58c154h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 26 4D 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4abe13
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C2: jne 0x4abddb
        __asm _emit 0x75
        __asm _emit 0xc2
        ; Exact mapped bytes 83 3D AC 04 5E 00 00: cmp dword ptr [0x5e04ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x4abe3b
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 20h
        push edx
        ; Exact mapped bytes FF 15 AC 04 5E 00: call dword ptr [0x5e04ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 0C: jmp 0x4abe47
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EC 00 00 00: call 0x4abf30
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4abeed
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 75 3D: jne 0x4abe92
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        push ecx
        push 58c12ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 BB 4C 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4abe7e
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x4abe55
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A3 00 00 00: call 0x4abf30
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 5B: jmp 0x4abeed
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        cmp edx, 2
        ; Exact mapped bytes 75 4A: jne 0x4abeed
        __asm _emit 0x75
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        sar eax, 10h
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        push ecx
        push 58c0f8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 5E 4C 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4abedb
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C2: jne 0x4abea3
        __asm _emit 0x75
        __asm _emit 0xc2
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 46 00 00 00: call 0x4abf30
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 D6 FD FF FF: jmp 0x4abcc8
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 9
        ; Exact mapped bytes E8 97 93 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 58c0e0h
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 1D 4C 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4abf1c
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4abefc
        __asm _emit 0x75
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
