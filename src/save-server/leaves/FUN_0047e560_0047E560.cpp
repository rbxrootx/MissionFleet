// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047E560 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_0047e560_0047E560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes 83 3D D4 75 68 00 00: cmp dword ptr [0x6875d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 23: jne 0x47e592
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes E8 BC 0A 00 00: call 0x47f030
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x47e582
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes A1 30 B8 68 00: mov eax, dword ptr [0x68b830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x47e589
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 47f080h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 0D D4 75 68 00: mov dword ptr [0x6875d4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0A: jne 0x47e5a2
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 E3 08 00 00: call 0x47ee80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x47e66e
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 15 C4 75 68 00: mov dword ptr [0x6875c4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C4 75 68 00 00: cmp dword ptr [0x6875c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x47e5d4
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes A1 C4 75 68 00: mov eax, dword ptr [0x6875c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x47e5d4
        __asm _emit 0x74
        __asm _emit 0x14
        push 6875c4h
        push 40h
        push 680e18h
        ; Exact mapped bytes E8 8F 01 00 00: call 0x47e760
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        add edx, 40h
        ; Exact mapped bytes 89 15 C8 75 68 00: mov dword ptr [0x6875c8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C8 75 68 00 00: cmp dword ptr [0x6875c8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x47e609
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes A1 C8 75 68 00: mov eax, dword ptr [0x6875c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x47e609
        __asm _emit 0x74
        __asm _emit 0x14
        push 6875c8h
        push 16h
        push 680d60h
        ; Exact mapped bytes E8 5A 01 00 00: call 0x47e760
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes C7 05 CC 75 68 00 00 00 00 00: mov dword ptr [0x6875cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C4 75 68 00 00: cmp dword ptr [0x6875c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 31: je 0x47e64d
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 8B 15 C4 75 68 00: mov edx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x47e64d
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 83 3D C8 75 68 00 00: cmp dword ptr [0x6875c8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x47e646
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D C8 75 68 00: mov ecx, dword ptr [0x6875c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x47e646
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 AC 01 00 00: call 0x47e7f0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x47e64b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 95 05 00 00: call 0x47ebe0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x47e66e
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 83 3D C8 75 68 00 00: cmp dword ptr [0x6875c8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x47e669
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes A1 C8 75 68 00: mov eax, dword ptr [0x6875c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x47e669
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 19 07 00 00: call 0x47ed80
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x47e66e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 12 08 00 00: call 0x47ee80
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D CC 75 68 00 00: cmp dword ptr [0x6875cc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x47e67e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x47e75c
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 80h
        push edx
        ; Exact mapped bytes E8 23 08 00 00: call 0x47eeb0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x47e6ac
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes FF 15 34 B8 68 00: call dword ptr [0x68b834]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x47e6b3
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x47e75c
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D B4 75 68 00: mov ecx, dword ptr [0x6875b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 38 B8 68 00: call dword ptr [0x68b838]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x47e6cd
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x47e75c
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x47e6f8
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 A1 B4 75 68 00: mov ax, word ptr [0x6875b4]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 15 D0 75 68 00: mov dx, word ptr [0x6875d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 51 02: mov word ptr [ecx + 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x02
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 48 04: mov word ptr [eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 59: je 0x47e757
        __asm _emit 0x74
        __asm _emit 0x59
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 1001h
        ; Exact mapped bytes A1 B4 75 68 00: mov eax, dword ptr [0x6875b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D4 75 68 00: call dword ptr [0x6875d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x47e71d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3F: jmp 0x47e75c
        __asm _emit 0xeb
        __asm _emit 0x3f
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 40h
        push ecx
        push 1002h
        ; Exact mapped bytes 8B 15 D0 75 68 00: mov edx, dword ptr [0x6875d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 D4 75 68 00: call dword ptr [0x6875d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x47e740
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1C: jmp 0x47e75c
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 0ah
        mov eax, dword ptr [ebp + 10h]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 5C F1 FE FF: call 0x46d8b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
