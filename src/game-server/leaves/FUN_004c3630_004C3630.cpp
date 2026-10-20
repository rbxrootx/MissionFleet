// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C3630 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_004c3630_004C3630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes 83 3D C0 F0 5D 00 00: cmp dword ptr [0x5df0c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 23: jne 0x4c3662
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes E8 BC 0A 00 00: call 0x4c4100
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4c3652
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes A1 20 22 5E 00: mov eax, dword ptr [0x5e2220]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x4c3659
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 4c4150h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 0D C0 F0 5D 00: mov dword ptr [0x5df0c0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0A: jne 0x4c3672
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 E3 08 00 00: call 0x4c3f50
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x4c373e
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 15 B0 F0 5D 00: mov dword ptr [0x5df0b0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B0 F0 5D 00 00: cmp dword ptr [0x5df0b0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x4c36a4
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes A1 B0 F0 5D 00: mov eax, dword ptr [0x5df0b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4c36a4
        __asm _emit 0x74
        __asm _emit 0x14
        push 5df0b0h
        push 40h
        push 5d2860h
        ; Exact mapped bytes E8 8F 01 00 00: call 0x4c3830
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        add edx, 40h
        ; Exact mapped bytes 89 15 B4 F0 5D 00: mov dword ptr [0x5df0b4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B4 F0 5D 00 00: cmp dword ptr [0x5df0b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x4c36d9
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes A1 B4 F0 5D 00: mov eax, dword ptr [0x5df0b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4c36d9
        __asm _emit 0x74
        __asm _emit 0x14
        push 5df0b4h
        push 16h
        push 5d27a8h
        ; Exact mapped bytes E8 5A 01 00 00: call 0x4c3830
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes C7 05 B8 F0 5D 00 00 00 00 00: mov dword ptr [0x5df0b8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B0 F0 5D 00 00: cmp dword ptr [0x5df0b0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 31: je 0x4c371d
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 8B 15 B0 F0 5D 00: mov edx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x4c371d
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 83 3D B4 F0 5D 00 00: cmp dword ptr [0x5df0b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x4c3716
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D B4 F0 5D 00: mov ecx, dword ptr [0x5df0b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x4c3716
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 AC 01 00 00: call 0x4c38c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x4c371b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 95 05 00 00: call 0x4c3cb0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x4c373e
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 83 3D B4 F0 5D 00 00: cmp dword ptr [0x5df0b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x4c3739
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes A1 B4 F0 5D 00: mov eax, dword ptr [0x5df0b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x4c3739
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 19 07 00 00: call 0x4c3e50
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x4c373e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 12 08 00 00: call 0x4c3f50
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B8 F0 5D 00 00: cmp dword ptr [0x5df0b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x4c374e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x4c382c
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 80h
        push edx
        ; Exact mapped bytes E8 23 08 00 00: call 0x4c3f80
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x4c377c
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes FF 15 24 22 5E 00: call dword ptr [0x5e2224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4c3783
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x4c382c
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D A0 F0 5D 00: mov ecx, dword ptr [0x5df0a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 28 22 5E 00: call dword ptr [0x5e2228]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4c379d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x4c382c
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x4c37c8
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 A1 A0 F0 5D 00: mov ax, word ptr [0x5df0a0]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 15 BC F0 5D 00: mov dx, word ptr [0x5df0bc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
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
        ; Exact mapped bytes 74 59: je 0x4c3827
        __asm _emit 0x74
        __asm _emit 0x59
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 1001h
        ; Exact mapped bytes A1 A0 F0 5D 00: mov eax, dword ptr [0x5df0a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 C0 F0 5D 00: call dword ptr [0x5df0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4c37ed
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3F: jmp 0x4c382c
        __asm _emit 0xeb
        __asm _emit 0x3f
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 40h
        push ecx
        push 1002h
        ; Exact mapped bytes 8B 15 BC F0 5D 00: mov edx, dword ptr [0x5df0bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 C0 F0 5D 00: call dword ptr [0x5df0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4c3810
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1C: jmp 0x4c382c
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 0ah
        mov eax, dword ptr [ebp + 10h]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 4C DB FE FF: call 0x4b1370
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
