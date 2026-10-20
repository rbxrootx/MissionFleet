// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F1D70 .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_585f1d70_585F1D70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2fch], 0
        ; Exact mapped bytes 74 0A: je 0x585f1d96
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x585f1f0e
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 110h]
        cmp edx, 6
        ; Exact mapped bytes 75 24: jne 0x585f1dc9
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2f0h], 6
        ; Exact mapped bytes 72 13: jb 0x585f1dc4
        __asm _emit 0x72
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2f4h], 14h
        ; Exact mapped bytes 72 07: jb 0x585f1dc4
        __asm _emit 0x72
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x585f1f0b
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 110h]
        cmp eax, 4
        ; Exact mapped bytes 75 24: jne 0x585f1dfc
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2f0h], 6
        ; Exact mapped bytes 72 13: jb 0x585f1df7
        __asm _emit 0x72
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2f4h], 14h
        ; Exact mapped bytes 72 07: jb 0x585f1df7
        __asm _emit 0x72
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x585f1f0b
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 110h]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 0C: jne 0x585f1e17
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x585f1f0b
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 110h]
        cmp eax, 0ah
        ; Exact mapped bytes 75 24: jne 0x585f1e4a
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2f0h], 6
        ; Exact mapped bytes 72 13: jb 0x585f1e45
        __asm _emit 0x72
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2f4h], 0eh
        ; Exact mapped bytes 72 07: jb 0x585f1e45
        __asm _emit 0x72
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x585f1f0b
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 110h]
        cmp ecx, 5
        ; Exact mapped bytes 75 24: jne 0x585f1e7d
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2f0h], 2
        ; Exact mapped bytes 72 13: jb 0x585f1e78
        __asm _emit 0x72
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2f4h], 4
        ; Exact mapped bytes 72 07: jb 0x585f1e78
        __asm _emit 0x72
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x585f1f0b
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 110h]
        cmp edx, 0dh
        ; Exact mapped bytes 75 21: jne 0x585f1ead
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2f0h], 6
        ; Exact mapped bytes 72 13: jb 0x585f1eab
        __asm _emit 0x72
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2f4h], 14h
        ; Exact mapped bytes 72 07: jb 0x585f1eab
        __asm _emit 0x72
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 5E: jmp 0x585f1f0b
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 110h]
        cmp eax, 0eh
        ; Exact mapped bytes 75 21: jne 0x585f1edd
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2f0h], 8
        ; Exact mapped bytes 72 13: jb 0x585f1edb
        __asm _emit 0x72
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2f4h], 10h
        ; Exact mapped bytes 72 07: jb 0x585f1edb
        __asm _emit 0x72
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 2E: jmp 0x585f1f0b
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 110h]
        cmp ecx, 10h
        ; Exact mapped bytes 75 1F: jne 0x585f1f0b
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2f0h], 6
        ; Exact mapped bytes 72 13: jb 0x585f1f0b
        __asm _emit 0x72
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2f4h], 14h
        ; Exact mapped bytes 72 07: jb 0x585f1f0b
        __asm _emit 0x72
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
