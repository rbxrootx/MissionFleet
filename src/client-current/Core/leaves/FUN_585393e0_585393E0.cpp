// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585393E0 .. +0x2F4 bytes.
extern "C" __declspec(naked) void FUN_585393e0_585393E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push 10h
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1D 3A 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3a
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 2B 0D 1C 8D 94 58: sub ecx, dword ptr [0x58948d1c]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        xor edx, edx
        mov ecx, 3ch
        div ecx
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 18h]
        xor edx, edx
        mov ecx, 3ch
        div ecx
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        movzx eax, word ptr [ebp - 8]
        cdq
        mov ecx, 3ch
        idiv ecx
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        movzx eax, word ptr [ebp - 8]
        cdq
        mov ecx, 3ch
        idiv ecx
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        movzx eax, word ptr [ebp - 0ch]
        cdq
        mov ecx, 18h
        idiv ecx
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        movzx eax, word ptr [ebp - 0ch]
        cdq
        mov ecx, 18h
        idiv ecx
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 0F B7 15 18 8D 94 58: movzx edx, word ptr [0x58948d18]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        movzx eax, word ptr [ebp - 14h]
        add edx, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 51 0C: mov word ptr [ecx + 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0ch]
        cmp eax, 3ch
        ; Exact mapped bytes 7C 28: jl 0x585394c2
        __asm _emit 0x7c
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 8]
        movzx eax, word ptr [ecx + 0ch]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 0C: mov word ptr [eax + 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 0A: mov word ptr [eax + 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes 0F B7 0D 16 8D 94 58: movzx ecx, word ptr [0x58948d16]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x16
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        movzx edx, word ptr [ebp - 8]
        add ecx, edx
        mov eax, dword ptr [ebp + 8]
        movzx edx, word ptr [eax + 0ah]
        add edx, ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 0A: mov word ptr [eax + 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0ah]
        cmp edx, 3ch
        ; Exact mapped bytes 7C 28: jl 0x58539513
        __asm _emit 0x7c
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        movzx eax, word ptr [eax + 0ah]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 0A: mov word ptr [eax + 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 08: mov word ptr [eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 0F B7 0D 14 8D 94 58: movzx ecx, word ptr [0x58948d14]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        movzx edx, word ptr [ebp - 0ch]
        add ecx, edx
        mov eax, dword ptr [ebp + 8]
        movzx edx, word ptr [eax + 8]
        add edx, ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 08: mov word ptr [eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 8]
        cmp edx, 18h
        ; Exact mapped bytes 7C 3A: jl 0x58539576
        __asm _emit 0x7c
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 8]
        movzx eax, word ptr [eax + 8]
        cdq
        mov ecx, 18h
        idiv ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 08: mov word ptr [eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 06: mov word ptr [eax + 6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 04: mov word ptr [eax + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 0F B7 0D 12 8D 94 58: movzx ecx, word ptr [0x58948d12]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x12
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        movzx edx, word ptr [ebp - 10h]
        add ecx, edx
        mov eax, dword ptr [ebp + 8]
        movzx edx, word ptr [eax + 6]
        add edx, ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 06: mov word ptr [eax + 6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x06
        ; Exact mapped bytes 0F B7 0D 10 8D 94 58: movzx ecx, word ptr [0x58948d10]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        movzx edx, word ptr [ebp - 10h]
        add ecx, edx
        mov eax, dword ptr [ebp + 8]
        movzx edx, word ptr [eax + 4]
        add edx, ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 04: mov word ptr [eax + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, 1fh
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F B7 15 0E 8D 94 58: movzx edx, word ptr [0x58948d0e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        cmp edx, 4
        ; Exact mapped bytes 74 24: je 0x585395e9
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 0F B7 05 0E 8D 94 58: movzx eax, word ptr [0x58948d0e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x0e
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        cmp eax, 6
        ; Exact mapped bytes 74 18: je 0x585395e9
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 0F B7 0D 0E 8D 94 58: movzx ecx, word ptr [0x58948d0e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x0e
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        cmp ecx, 9
        ; Exact mapped bytes 74 0C: je 0x585395e9
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 15 0E 8D 94 58: movzx edx, word ptr [0x58948d0e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        cmp edx, 0bh
        ; Exact mapped bytes 75 0B: jne 0x585395f4
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, 1eh
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 38: jmp 0x5853962c
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 0F B7 0D 0E 8D 94 58: movzx ecx, word ptr [0x58948d0e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x0e
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        cmp ecx, 2
        ; Exact mapped bytes 75 2C: jne 0x5853962c
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 0F B7 15 0C 8D 94 58: movzx edx, word ptr [0x58948d0c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58539614
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x58539623
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, 1dh
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x5853962c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 1ch
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 4]
        cdq
        mov ecx, 7
        idiv ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 04: mov word ptr [eax + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 6]
        movzx eax, word ptr [ebp - 4]
        cmp edx, eax
        ; Exact mapped bytes 7E 26: jle 0x58539677
        __asm _emit 0x7e
        __asm _emit 0x26
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 6]
        sub eax, ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 41 06: mov word ptr [ecx + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 41 02: mov word ptr [ecx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x02
        ; Exact mapped bytes 0F B7 15 0E 8D 94 58: movzx edx, word ptr [0x58948d0e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 2]
        add ecx, edx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 4A 02: mov word ptr [edx + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x02
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 0ch
        ; Exact mapped bytes 7E 21: jle 0x585396bb
        __asm _emit 0x7e
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 2]
        sub eax, 0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 41 02: mov word ptr [ecx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x02
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes 0F B7 15 0C 8D 94 58: movzx edx, word ptr [0x58948d0c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax]
        add ecx, edx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov esp, ebp
        pop ebp
        ret
    }
}
