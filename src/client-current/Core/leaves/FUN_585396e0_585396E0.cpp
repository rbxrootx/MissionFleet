// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585396E0 .. +0x65F bytes.
extern "C" __declspec(naked) void FUN_585396e0_585396E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 E7 FC FF FF: call 0x585393e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 85 31 31 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, word ptr [eax + 0ch]
        movzx edx, word ptr [ebp - 8]
        cmp ecx, edx
        ; Exact mapped bytes 0F 8E 8F 01 00 00: jle 0x585398b0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 0ah]
        test eax, eax
        ; Exact mapped bytes 7E 1C: jle 0x58539745
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 4D F6: mov cx, word ptr [ebp - 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf6
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D F6: mov word ptr [ebp - 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf6
        movzx edx, word ptr [ebp - 8]
        add edx, 3ch
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x585398b0
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 0ch]
        test eax, eax
        ; Exact mapped bytes 7E 25: jle 0x58539772
        __asm _emit 0x7e
        __asm _emit 0x25
        ; Exact mapped bytes 66 8B 4D F4: mov cx, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, 3bh
        ; Exact mapped bytes 66 89 55 F6: mov word ptr [ebp - 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf6
        movzx eax, word ptr [ebp - 8]
        add eax, 3ch
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x585398b0
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 10h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x58539788
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 55 F0: mov dx, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes EB 09: jmp 0x58539791
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 6
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        movzx ecx, word ptr [ebp - 0eh]
        cmp ecx, 1
        ; Exact mapped bytes 7E 2E: jle 0x585397c8
        __asm _emit 0x7e
        __asm _emit 0x2e
        ; Exact mapped bytes 66 8B 55 F2: mov dx, word ptr [ebp - 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf2
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        mov eax, 17h
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, 3bh
        ; Exact mapped bytes 66 89 4D F6: mov word ptr [ebp - 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf6
        movzx edx, word ptr [ebp - 8]
        add edx, 3ch
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x585398b0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 12h]
        cmp eax, 1
        ; Exact mapped bytes 0F 8E A0 00 00 00: jle 0x58539875
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D EE: mov cx, word ptr [ebp - 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xee
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        movzx edx, word ptr [ebp - 12h]
        cmp edx, 4
        ; Exact mapped bytes 74 1B: je 0x58539805
        __asm _emit 0x74
        __asm _emit 0x1b
        movzx eax, word ptr [ebp - 12h]
        cmp eax, 6
        ; Exact mapped bytes 74 12: je 0x58539805
        __asm _emit 0x74
        __asm _emit 0x12
        movzx ecx, word ptr [ebp - 12h]
        cmp ecx, 9
        ; Exact mapped bytes 74 09: je 0x58539805
        __asm _emit 0x74
        __asm _emit 0x09
        movzx edx, word ptr [ebp - 12h]
        cmp edx, 0bh
        ; Exact mapped bytes 75 0B: jne 0x58539810
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, 1eh
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        ; Exact mapped bytes EB 46: jmp 0x58539856
        __asm _emit 0xeb
        __asm _emit 0x46
        movzx ecx, word ptr [ebp - 12h]
        cmp ecx, 2
        ; Exact mapped bytes 75 20: jne 0x58539839
        __asm _emit 0x75
        __asm _emit 0x20
        movzx edx, word ptr [ebp - 14h]
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x5853982a
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x58539839
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, 1dh
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        ; Exact mapped bytes EB 1D: jmp 0x58539856
        __asm _emit 0xeb
        __asm _emit 0x1d
        movzx ecx, word ptr [ebp - 12h]
        cmp ecx, 2
        ; Exact mapped bytes 75 0B: jne 0x5853984d
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, 1ch
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        ; Exact mapped bytes EB 09: jmp 0x58539856
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1fh
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, 17h
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, 3bh
        ; Exact mapped bytes 66 89 55 F6: mov word ptr [ebp - 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf6
        movzx eax, word ptr [ebp - 8]
        add eax, 3ch
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 3B: jmp 0x585398b0
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 66 8B 4D EC: mov cx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        mov edx, 0ch
        ; Exact mapped bytes 66 89 55 EE: mov word ptr [ebp - 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xee
        mov eax, 1fh
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, 17h
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, 3bh
        ; Exact mapped bytes 66 89 55 F6: mov word ptr [ebp - 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf6
        movzx eax, word ptr [ebp - 8]
        add eax, 3ch
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        movzx ecx, word ptr [ebp - 8]
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [edx + 0ch]
        cmp ecx, eax
        ; Exact mapped bytes 7C 16: jl 0x585398d5
        __asm _emit 0x7c
        __asm _emit 0x16
        movzx ecx, word ptr [ebp - 8]
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [edx + 0ch]
        sub ecx, eax
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 4A 0C: mov word ptr [edx + 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x0c
        ; Exact mapped bytes EB 09: jmp 0x585398de
        __asm _emit 0xeb
        __asm _emit 0x09
        xor eax, eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 41 0C: mov word ptr [ecx + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [edx + 0ah]
        movzx ecx, word ptr [ebp - 0ah]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8E 47 01 00 00: jle 0x58539a38
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 0ch]
        test edx, edx
        ; Exact mapped bytes 7E 1C: jle 0x58539915
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 45 F4: mov ax, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        movzx ecx, word ptr [ebp - 0ah]
        add ecx, 3ch
        ; Exact mapped bytes 66 89 4D F6: mov word ptr [ebp - 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf6
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x58539a38
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 10h]
        test edx, edx
        ; Exact mapped bytes 7E 0E: jle 0x5853992b
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 45 F0: mov ax, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes EB 09: jmp 0x58539934
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 6
        ; Exact mapped bytes 66 89 4D F0: mov word ptr [ebp - 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        movzx edx, word ptr [ebp - 0eh]
        cmp edx, 1
        ; Exact mapped bytes 7E 25: jle 0x58539962
        __asm _emit 0x7e
        __asm _emit 0x25
        ; Exact mapped bytes 66 8B 45 F2: mov ax, word ptr [ebp - 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf2
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, 17h
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        movzx edx, word ptr [ebp - 0ah]
        add edx, 3ch
        ; Exact mapped bytes 66 89 55 F6: mov word ptr [ebp - 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf6
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x58539a38
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 12h]
        cmp eax, 1
        ; Exact mapped bytes 0F 8E 97 00 00 00: jle 0x58539a06
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D EE: mov cx, word ptr [ebp - 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xee
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        movzx edx, word ptr [ebp - 12h]
        cmp edx, 4
        ; Exact mapped bytes 74 1B: je 0x5853999f
        __asm _emit 0x74
        __asm _emit 0x1b
        movzx eax, word ptr [ebp - 12h]
        cmp eax, 6
        ; Exact mapped bytes 74 12: je 0x5853999f
        __asm _emit 0x74
        __asm _emit 0x12
        movzx ecx, word ptr [ebp - 12h]
        cmp ecx, 9
        ; Exact mapped bytes 74 09: je 0x5853999f
        __asm _emit 0x74
        __asm _emit 0x09
        movzx edx, word ptr [ebp - 12h]
        cmp edx, 0bh
        ; Exact mapped bytes 75 0B: jne 0x585399aa
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, 1eh
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        ; Exact mapped bytes EB 46: jmp 0x585399f0
        __asm _emit 0xeb
        __asm _emit 0x46
        movzx ecx, word ptr [ebp - 12h]
        cmp ecx, 2
        ; Exact mapped bytes 75 20: jne 0x585399d3
        __asm _emit 0x75
        __asm _emit 0x20
        movzx edx, word ptr [ebp - 14h]
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x585399c4
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x585399d3
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, 1dh
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        ; Exact mapped bytes EB 1D: jmp 0x585399f0
        __asm _emit 0xeb
        __asm _emit 0x1d
        movzx ecx, word ptr [ebp - 12h]
        cmp ecx, 2
        ; Exact mapped bytes 75 0B: jne 0x585399e7
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, 1ch
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        ; Exact mapped bytes EB 09: jmp 0x585399f0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1fh
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, 17h
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        movzx edx, word ptr [ebp - 0ah]
        add edx, 3ch
        ; Exact mapped bytes 66 89 55 F6: mov word ptr [ebp - 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf6
        ; Exact mapped bytes EB 32: jmp 0x58539a38
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 66 8B 45 EC: mov ax, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        mov ecx, 0ch
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        mov edx, 1fh
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        mov eax, 17h
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        movzx ecx, word ptr [ebp - 0ah]
        add ecx, 3ch
        ; Exact mapped bytes 66 89 4D F6: mov word ptr [ebp - 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf6
        movzx edx, word ptr [ebp - 0ah]
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, word ptr [eax + 0ah]
        cmp edx, ecx
        ; Exact mapped bytes 7C 16: jl 0x58539a5d
        __asm _emit 0x7c
        __asm _emit 0x16
        movzx edx, word ptr [ebp - 0ah]
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, word ptr [eax + 0ah]
        sub edx, ecx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 50 0A: mov word ptr [eax + 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes EB 07: jmp 0x58539a64
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, word ptr [ecx + 8]
        movzx eax, word ptr [ebp - 0ch]
        cmp edx, eax
        ; Exact mapped bytes 0F 8E 07 01 00 00: jle 0x58539b7e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 10h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x58539a8d
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 55 F0: mov dx, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes EB 09: jmp 0x58539a96
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 6
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        movzx ecx, word ptr [ebp - 0eh]
        cmp ecx, 1
        ; Exact mapped bytes 7E 1C: jle 0x58539abb
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 55 F2: mov dx, word ptr [ebp - 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf2
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        movzx eax, word ptr [ebp - 0ch]
        add eax, 18h
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x58539b7e
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 12h]
        cmp ecx, 1
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x58539b55
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 55 EE: mov dx, word ptr [ebp - 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xee
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 EE: mov word ptr [ebp - 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xee
        movzx eax, word ptr [ebp - 12h]
        cmp eax, 4
        ; Exact mapped bytes 74 1B: je 0x58539af8
        __asm _emit 0x74
        __asm _emit 0x1b
        movzx ecx, word ptr [ebp - 12h]
        cmp ecx, 6
        ; Exact mapped bytes 74 12: je 0x58539af8
        __asm _emit 0x74
        __asm _emit 0x12
        movzx edx, word ptr [ebp - 12h]
        cmp edx, 9
        ; Exact mapped bytes 74 09: je 0x58539af8
        __asm _emit 0x74
        __asm _emit 0x09
        movzx eax, word ptr [ebp - 12h]
        cmp eax, 0bh
        ; Exact mapped bytes 75 0B: jne 0x58539b03
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, 1eh
        ; Exact mapped bytes 66 89 4D F2: mov word ptr [ebp - 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf2
        ; Exact mapped bytes EB 45: jmp 0x58539b48
        __asm _emit 0xeb
        __asm _emit 0x45
        movzx edx, word ptr [ebp - 12h]
        cmp edx, 2
        ; Exact mapped bytes 75 1F: jne 0x58539b2b
        __asm _emit 0x75
        __asm _emit 0x1f
        movzx eax, word ptr [ebp - 14h]
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58539b1c
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x58539b2b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, 1dh
        ; Exact mapped bytes 66 89 4D F2: mov word ptr [ebp - 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf2
        ; Exact mapped bytes EB 1D: jmp 0x58539b48
        __asm _emit 0xeb
        __asm _emit 0x1d
        movzx edx, word ptr [ebp - 12h]
        cmp edx, 2
        ; Exact mapped bytes 75 0B: jne 0x58539b3f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, 1ch
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        ; Exact mapped bytes EB 09: jmp 0x58539b48
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 1fh
        ; Exact mapped bytes 66 89 4D F2: mov word ptr [ebp - 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf2
        movzx edx, word ptr [ebp - 0ch]
        add edx, 18h
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes EB 29: jmp 0x58539b7e
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 66 8B 45 EC: mov ax, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        mov ecx, 0ch
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        mov edx, 1fh
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        movzx eax, word ptr [ebp - 0ch]
        add eax, 18h
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        movzx ecx, word ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [edx + 8]
        cmp ecx, eax
        ; Exact mapped bytes 7C 16: jl 0x58539ba3
        __asm _emit 0x7c
        __asm _emit 0x16
        movzx ecx, word ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [edx + 8]
        sub ecx, eax
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 4A 08: mov word ptr [edx + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x08
        ; Exact mapped bytes EB 09: jmp 0x58539bac
        __asm _emit 0xeb
        __asm _emit 0x09
        xor eax, eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 41 08: mov word ptr [ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [edx + 6]
        movzx ecx, word ptr [ebp - 0eh]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8E D7 00 00 00: jle 0x58539c96
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 10h]
        test edx, edx
        ; Exact mapped bytes 7E 0E: jle 0x58539bd5
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 45 F0: mov ax, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes EB 09: jmp 0x58539bde
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 6
        ; Exact mapped bytes 66 89 4D F0: mov word ptr [ebp - 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        movzx edx, word ptr [ebp - 12h]
        cmp edx, 1
        ; Exact mapped bytes 0F 8E 8B 00 00 00: jle 0x58539c76
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 EE: mov ax, word ptr [ebp - 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xee
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        movzx ecx, word ptr [ebp - 12h]
        cmp ecx, 4
        ; Exact mapped bytes 74 1B: je 0x58539c1b
        __asm _emit 0x74
        __asm _emit 0x1b
        movzx edx, word ptr [ebp - 12h]
        cmp edx, 6
        ; Exact mapped bytes 74 12: je 0x58539c1b
        __asm _emit 0x74
        __asm _emit 0x12
        movzx eax, word ptr [ebp - 12h]
        cmp eax, 9
        ; Exact mapped bytes 74 09: je 0x58539c1b
        __asm _emit 0x74
        __asm _emit 0x09
        movzx ecx, word ptr [ebp - 12h]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 0D: jne 0x58539c28
        __asm _emit 0x75
        __asm _emit 0x0d
        movzx edx, word ptr [ebp - 0eh]
        add edx, 1eh
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        ; Exact mapped bytes EB 4C: jmp 0x58539c74
        __asm _emit 0xeb
        __asm _emit 0x4c
        movzx eax, word ptr [ebp - 12h]
        cmp eax, 2
        ; Exact mapped bytes 75 22: jne 0x58539c53
        __asm _emit 0x75
        __asm _emit 0x22
        movzx ecx, word ptr [ebp - 14h]
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58539c42
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        test ecx, ecx
        ; Exact mapped bytes 75 0D: jne 0x58539c53
        __asm _emit 0x75
        __asm _emit 0x0d
        movzx edx, word ptr [ebp - 0eh]
        add edx, 1dh
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        ; Exact mapped bytes EB 21: jmp 0x58539c74
        __asm _emit 0xeb
        __asm _emit 0x21
        movzx eax, word ptr [ebp - 12h]
        cmp eax, 2
        ; Exact mapped bytes 75 0D: jne 0x58539c69
        __asm _emit 0x75
        __asm _emit 0x0d
        movzx ecx, word ptr [ebp - 0eh]
        add ecx, 1ch
        ; Exact mapped bytes 66 89 4D F2: mov word ptr [ebp - 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf2
        ; Exact mapped bytes EB 0B: jmp 0x58539c74
        __asm _emit 0xeb
        __asm _emit 0x0b
        movzx edx, word ptr [ebp - 0eh]
        add edx, 1fh
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        ; Exact mapped bytes EB 20: jmp 0x58539c96
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 66 8B 45 EC: mov ax, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        mov ecx, 0ch
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        movzx edx, word ptr [ebp - 0eh]
        add edx, 1fh
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        movzx eax, word ptr [ebp - 0eh]
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, word ptr [ecx + 6]
        sub eax, edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 41 06: mov word ptr [ecx + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x06
        movzx eax, word ptr [ebp - 0eh]
        mov edx, dword ptr [ebp + 0ch]
        movzx ecx, word ptr [edx + 6]
        sub eax, ecx
        cdq
        mov ecx, 7
        idiv ecx
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, word ptr [eax + 4]
        add ecx, edx
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 4A 04: mov word ptr [edx + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x04
        mov eax, dword ptr [ebp + 0ch]
        movzx eax, word ptr [eax + 4]
        cdq
        mov ecx, 7
        idiv ecx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 50 04: mov word ptr [eax + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, word ptr [ecx + 2]
        movzx eax, word ptr [ebp - 12h]
        cmp edx, eax
        ; Exact mapped bytes 7E 17: jle 0x58539d0b
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 4D EC: mov cx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        movzx edx, word ptr [ebp - 12h]
        add edx, 0ch
        ; Exact mapped bytes 66 89 55 EE: mov word ptr [ebp - 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xee
        movzx eax, word ptr [ebp - 12h]
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, word ptr [ecx + 2]
        sub eax, edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 41 02: mov word ptr [ecx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x02
        movzx edx, word ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, word ptr [eax]
        sub edx, ecx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 15 73 2F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x73
        __asm _emit 0x2f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
