// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508E70 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_00508e70_00508E70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        ; Exact mapped bytes 83 3D F8 CB 5D 00 00: cmp dword ptr [0x5dcbf8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x508e8c
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes A1 94 EB 5D 00: mov eax, dword ptr [0x5deb94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x508fd0
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 F8 CB 5D 00 01 00 00 00: mov dword ptr [0x5dcbf8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 A1 90 EB 5D 00: mov ax, word ptr [0x5deb90]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x508ecf
        __asm _emit 0x75
        __asm _emit 0x2d
        push 5cb46ch
        ; Exact mapped bytes FF 15 F4 25 5E 00: call dword ptr [0x5e25f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 8C EB 5D 00: mov dword ptr [0x5deb8c], eax
        __asm _emit 0xa3
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 8C EB 5D 00 00: cmp dword ptr [0x5deb8c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x508ec6
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 66 C7 05 90 EB 5D 00 01 00: mov word ptr [0x5deb90], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x508ecf
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 66 C7 05 90 EB 5D 00 02 00: mov word ptr [0x5deb90], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 90 EB 5D 00: mov cx, word ptr [0x5deb90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 75 4D: jne 0x508f2a
        __asm _emit 0x75
        __asm _emit 0x4d
        mov dword ptr [ebp - 4], 0
        push 5cb484h
        push 5cb498h
        ; Exact mapped bytes FF 15 E8 26 5E 00: call dword ptr [0x5e26e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2D: je 0x508f2a
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 83 3D 8C EB 5D 00 00: cmp dword ptr [0x5deb8c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 24: je 0x508f2a
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        push 0
        ; Exact mapped bytes 8B 15 8C EB 5D 00: mov edx, dword ptr [0x5deb8c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 94 EB 5D 00: mov dword ptr [0x5deb94], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 94 EB 5D 00: mov eax, dword ptr [0x5deb94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x508fd0
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 94 EB 5D 00 03 00 00 00: mov dword ptr [0x5deb94], 3
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x03
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
        ; Exact mapped bytes 75 74: jne 0x508fb1
        __asm _emit 0x75
        __asm _emit 0x74
        lea ecx, [ebp - 8]
        push ecx
        push 1
        push 0
        push 5cb4a0h
        push 80000001h
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x508faf
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
        push 5cb4b8h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 08 1E 5E 00: call dword ptr [0x5e1e08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x508fa5
        __asm _emit 0x75
        __asm _emit 0x18
        push 0ah
        push 0
        lea eax, [ebp - 88h]
        push eax
        ; Exact mapped bytes E8 33 7A FA FF: call 0x4b09d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7a
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes A3 94 EB 5D 00: mov dword ptr [0x5deb94], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x508fcb
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 83 3D F0 E8 5D 00 00: cmp dword ptr [0x5de8f0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x508fcb
        __asm _emit 0x75
        __asm _emit 0x11
        push 0
        push 5deb94h
        push 0
        push 68h
        ; Exact mapped bytes FF 15 F8 25 5E 00: call dword ptr [0x5e25f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A1 94 EB 5D 00: mov eax, dword ptr [0x5deb94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
