// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587045B0 .. +0x342 bytes.
extern "C" __declspec(naked) void FUN_587045b0_587045B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov edx, 2
        shl edx, 0
        movzx eax, word ptr [ecx + edx + 8]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        add edx, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov eax, 2
        shl eax, 1
        movzx ecx, word ptr [ecx + eax + 8]
        xor ecx, 55h
        add edx, ecx
        mov dword ptr [ebp - 0ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AB 92 DA FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax + 8]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes 7E 71: jle 0x587046ab
        __asm _emit 0x7e
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax + 8]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        sub ecx, dword ptr [edx + 84h]
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        movzx ecx, word ptr [eax + 50h]
        xor ecx, 55h
        mov eax, ecx
        imul eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 92 DA FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 1ch], eax
        imul ecx, dword ptr [ebp - 18h], 0ah
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1B 92 DA FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F5 01 00 00: jmp 0x587048a0
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 8]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        sub edx, eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        movzx ecx, word ptr [eax + 50h]
        xor ecx, 55h
        mov eax, ecx
        imul eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BE 91 DA FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 75 42: jne 0x5870475e
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx eax, cx
        xor eax, 55h
        cdq
        mov ecx, 5
        idiv ecx
        add eax, 5
        imul eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 68 91 DA FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x587048a0
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 42: jne 0x587047b9
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx eax, cx
        xor eax, 55h
        cdq
        mov ecx, 6
        idiv ecx
        add eax, 0ch
        imul eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0D 91 DA FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x587048a0
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 3
        ; Exact mapped bytes 75 3C: jne 0x5870480e
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx eax, cx
        xor eax, 55h
        cdq
        sub eax, edx
        sar eax, 1
        imul eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B8 90 DA FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x587048a0
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 75 3C: jne 0x58704863
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx eax, cx
        xor eax, 55h
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 0ah
        imul eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 60 90 DA FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x587048a0
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx eax, ax
        xor eax, 55h
        cdq
        mov ecx, 3
        idiv ecx
        add eax, 2
        imul eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 21 90 DA FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 8]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 84h]
        ; Exact mapped bytes 74 16: je 0x587048da
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 69 AF D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xaf
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 14: jmp 0x587048ee
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 53 AF D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xaf
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
