// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00510DD5 .. +0x1EB bytes.
extern "C" __declspec(naked) void FUN_00510dd5_00510DD5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1A: jne 0x510e01
        __asm _emit 0x75
        __asm _emit 0x1a
        push 41h
        push 0
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 85 51 02 00: call 0x535f78
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 22 BB 02 00: call 0x53c91e
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x510fb7
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 21eh
        push 5c84b0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4C A3 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 0F 87 38 01 00 00: ja 0x510f76
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 95 C0 0F 51 00: jmp dword ptr [edx*4 + 0x510fc0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x51
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x510e65
        __asm _emit 0x75
        __asm _emit 0x14
        push 225h
        push 5c84b0h
        ; Exact mapped bytes E8 A0 3B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510e65
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x510e48
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 8B 0D C8 E8 5D 00: mov ecx, dword ptr [0x5de8c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 C4 E8 5D 00: mov edx, dword ptr [0x5de8c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E9 50 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 1D 01 00: call 0x522c04
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        push -1
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 00 52 02 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 E8 5D 00: mov eax, dword ptr [0x5de8c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D D0 E8 5D 00: mov ecx, dword ptr [0x5de8d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BF 50 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 1D 01 00: call 0x522c04
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x510fb7
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x510ed6
        __asm _emit 0x74
        __asm _emit 0x14
        push 22ch
        push 5c84b0h
        ; Exact mapped bytes E8 2F 3B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510ed6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x510eb9
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x510f99
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 56: je 0x510f40
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes A1 D0 E8 5D 00: mov eax, dword ptr [0x5de8d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D C0 E8 5D 00: mov ecx, dword ptr [0x5de8c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6B 50 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 1C 01 00: call 0x522c04
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        push -1
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 82 51 02 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 E8 5D 00: mov edx, dword ptr [0x5de8c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes A1 C8 E8 5D 00: mov eax, dword ptr [0x5de8c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 41 50 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 1C 01 00: call 0x522c04
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        push -1
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 58 51 02 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 59: jmp 0x510f99
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2B: jne 0x510f74
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D C4 E8 5D 00: mov ecx, dword ptr [0x5de8c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 C8 E8 5D 00: mov edx, dword ptr [0x5de8c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0B 50 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 1C 01 00: call 0x522c04
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        push -1
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 22 51 02 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x510f99
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x510f93
        __asm _emit 0x74
        __asm _emit 0x14
        push 242h
        push 5c84b0h
        ; Exact mapped bytes E8 72 3A 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510f93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x510f76
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 8B 15 C0 E8 5D 00: mov edx, dword ptr [0x5de8c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BC 4F 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F 1B 01 00: call 0x522af6
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
