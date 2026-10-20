// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDE50 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_004ede50_004EDE50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        ; Exact mapped bytes 83 3D 10 51 68 00 00: cmp dword ptr [0x685110], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x51
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x4ede6c
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes A1 B8 70 68 00: mov eax, dword ptr [0x6870b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x4edfb0
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 10 51 68 00 01 00 00 00: mov dword ptr [0x685110], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x51
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 A1 B4 70 68 00: mov ax, word ptr [0x6870b4]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x4edeaf
        __asm _emit 0x75
        __asm _emit 0x2d
        push 677c44h
        ; Exact mapped bytes FF 15 58 BF 68 00: call dword ptr [0x68bf58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 B0 70 68 00: mov dword ptr [0x6870b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B0 70 68 00 00: cmp dword ptr [0x6870b0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x4edea6
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 66 C7 05 B4 70 68 00 01 00: mov word ptr [0x6870b4], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x4edeaf
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 66 C7 05 B4 70 68 00 02 00: mov word ptr [0x6870b4], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D B4 70 68 00: mov cx, word ptr [0x6870b4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 75 4D: jne 0x4edf0a
        __asm _emit 0x75
        __asm _emit 0x4d
        mov dword ptr [ebp - 4], 0
        push 677c5ch
        push 677c70h
        ; Exact mapped bytes FF 15 9C BD 68 00: call dword ptr [0x68bd9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2D: je 0x4edf0a
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 83 3D B0 70 68 00 00: cmp dword ptr [0x6870b0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 24: je 0x4edf0a
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        push 0
        ; Exact mapped bytes 8B 15 B0 70 68 00: mov edx, dword ptr [0x6870b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 B8 70 68 00: mov dword ptr [0x6870b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 70 68 00: mov eax, dword ptr [0x6870b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x4edfb0
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 B8 70 68 00 03 00 00 00: mov dword ptr [0x6870b8], 3
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 74: jne 0x4edf91
        __asm _emit 0x75
        __asm _emit 0x74
        lea ecx, [ebp - 8]
        push ecx
        push 1
        push 0
        push 677c78h
        push 80000001h
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x4edf8f
        __asm _emit 0x75
        __asm _emit 0x56
        mov dword ptr [ebp - 90h], 80h
        lea edx, [ebp - 90h]
        push edx
        lea eax, [ebp - 88h]
        push eax
        lea ecx, [ebp - 8ch]
        push ecx
        push 0
        push 677c90h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 9C B2 68 00: call dword ptr [0x68b29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x4edf85
        __asm _emit 0x75
        __asm _emit 0x18
        push 0ah
        push 0
        lea eax, [ebp - 88h]
        push eax
        ; Exact mapped bytes E8 93 C7 F7 FF: call 0x46a710
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes A3 B8 70 68 00: mov dword ptr [0x6870b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x4edfab
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 83 3D 08 6E 68 00 00: cmp dword ptr [0x686e08], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x4edfab
        __asm _emit 0x75
        __asm _emit 0x11
        push 0
        push 6870b8h
        push 0
        push 68h
        ; Exact mapped bytes FF 15 64 BF 68 00: call dword ptr [0x68bf64]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 70 68 00: mov eax, dword ptr [0x6870b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
