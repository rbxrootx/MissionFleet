// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C2AF0 .. +0x2A6 bytes.
extern "C" __declspec(naked) void FUN_004c2af0_004C2AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes 66 A1 96 F0 5D 00: mov ax, word ptr [0x5df096]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x96
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 83 3D 1C F0 5D 00 00: cmp dword ptr [0x5df01c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x4c2c6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5df064h
        push 0eh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 1
        ; Exact mapped bytes E8 59 3C 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp - 8]
        or edx, eax
        mov dword ptr [ebp - 8], edx
        push 5df068h
        push 0fh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 3C 3C 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        push 5df06ch
        push 10h
        mov edx, dword ptr [ebp - 4]
        push edx
        push 1
        ; Exact mapped bytes E8 1F 3C 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 6C F0 5D 00: mov edx, dword ptr [0x5df06c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 28 02 00 00: call 0x4c2da0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 58: je 0x4c2bd9
        __asm _emit 0x74
        __asm _emit 0x58
        push 2
        ; Exact mapped bytes A1 64 F0 5D 00: mov eax, dword ptr [0x5df064]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 32 81 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes 8B 0D 68 F0 5D 00: mov ecx, dword ptr [0x5df068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 21 81 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes 8B 15 6C F0 5D 00: mov edx, dword ptr [0x5df06c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 10 81 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 64 F0 5D 00 00 00 00 00: mov dword ptr [0x5df064], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 68 F0 5D 00 00 00 00 00: mov dword ptr [0x5df068], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 6C F0 5D 00 00 00 00 00: mov dword ptr [0x5df06c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x4c2d92
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 2A 5D 00: mov eax, dword ptr [0x5d2aa8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [eax], 5d2a70h
        ; Exact mapped bytes 74 3A: je 0x4c2c20
        __asm _emit 0x74
        __asm _emit 0x3a
        push 2
        ; Exact mapped bytes 8B 0D A8 2A 5D 00: mov ecx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 CA 80 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes A1 A8 2A 5D 00: mov eax, dword ptr [0x5d2aa8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 B7 80 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes 8B 15 A8 2A 5D 00: mov edx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 A3 80 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 8B 0D A8 2A 5D 00: mov ecx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 64 F0 5D 00: mov edx, dword ptr [0x5df064]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx], edx
        ; Exact mapped bytes A1 A8 2A 5D 00: mov eax, dword ptr [0x5d2aa8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 68 F0 5D 00: mov ecx, dword ptr [0x5df068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes 8B 15 A8 2A 5D 00: mov edx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 6C F0 5D 00: mov eax, dword ptr [0x5df06c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes 8B 0D A8 2A 5D 00: mov ecx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        mov al, byte ptr [edx]
        ; Exact mapped bytes A2 8C 18 5D 00: mov byte ptr [0x5d188c], al
        __asm _emit 0xa2
        __asm _emit 0x8c
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 90 18 5D 00 01 00 00 00: mov dword ptr [0x5d1890], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x4c2d92
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D 64 F0 5D 00: mov ecx, dword ptr [0x5df064]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 48 80 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes 8B 15 68 F0 5D 00: mov edx, dword ptr [0x5df068]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 37 80 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes A1 6C F0 5D 00: mov eax, dword ptr [0x5df06c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 27 80 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 64 F0 5D 00 00 00 00 00: mov dword ptr [0x5df064], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 68 F0 5D 00 00 00 00 00: mov dword ptr [0x5df068], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 6C F0 5D 00 00 00 00 00: mov dword ptr [0x5df06c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 88h
        push 58ce50h
        push 2
        push 2
        ; Exact mapped bytes E8 63 75 FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes 8B 0D A8 2A 5D 00: mov ecx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx], eax
        ; Exact mapped bytes 8B 15 A8 2A 5D 00: mov edx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 08: jne 0x4c2ceb
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x4c2d92
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58cd28h
        ; Exact mapped bytes A1 A8 2A 5D 00: mov eax, dword ptr [0x5d2aa8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 43 71 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 8dh
        push 58ce50h
        push 2
        push 2
        ; Exact mapped bytes E8 1D 75 FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes 8B 15 A8 2A 5D 00: mov edx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes A1 A8 2A 5D 00: mov eax, dword ptr [0x5d2aa8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 05: jne 0x4c2d2f
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 63: jmp 0x4c2d92
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D A8 2A 5D 00: mov ecx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 4]
        mov byte ptr [edx], 0
        push 92h
        push 58ce50h
        push 2
        push 2
        ; Exact mapped bytes E8 E2 74 FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes 8B 0D A8 2A 5D 00: mov ecx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes 8B 15 A8 2A 5D 00: mov edx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x4c2d6b
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 27: jmp 0x4c2d92
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes A1 A8 2A 5D 00: mov eax, dword ptr [0x5d2aa8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 8]
        mov byte ptr [ecx], 0
        ; Exact mapped bytes 8B 15 A8 2A 5D 00: mov edx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx]
        mov cl, byte ptr [eax]
        ; Exact mapped bytes 88 0D 8C 18 5D 00: mov byte ptr [0x5d188c], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 90 18 5D 00 01 00 00 00: mov dword ptr [0x5d1890], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
