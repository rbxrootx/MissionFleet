// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862A530 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_5862a530_5862A530() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 270h]
        ; Exact mapped bytes 75 2B: jne 0x5862a570
        __asm _emit 0x75
        __asm _emit 0x2b
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 20: jne 0x5862a56b
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 60h]
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x5862a56b
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 60h]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 04 00 00: call 0x5862a9e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x5862a633
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 274h]
        ; Exact mapped bytes 75 2B: jne 0x5862a5a9
        __asm _emit 0x75
        __asm _emit 0x2b
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 20: jne 0x5862a5a4
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 60h]
        cmp eax, 2
        ; Exact mapped bytes 74 14: je 0x5862a5a4
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 60h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D 04 00 00: call 0x5862a9e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x5862a633
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 60h]
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x5862a5cc
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 10 00 00: call 0x5862b630
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 67: jmp 0x5862a633
        __asm _emit 0xeb
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 60h]
        cmp eax, 2
        ; Exact mapped bytes 75 17: jne 0x5862a5ef
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 2F 00 00: call 0x5862d500
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 44: jmp 0x5862a633
        __asm _emit 0xeb
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 60h]
        cmp edx, 3
        ; Exact mapped bytes 75 17: jne 0x5862a612
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 20 00 00: call 0x5862c700
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x5862a633
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 60h]
        cmp ecx, 4
        ; Exact mapped bytes 75 15: jne 0x5862a633
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E 04 00 00: call 0x5862aa90
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
