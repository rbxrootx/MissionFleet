// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FAD80 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_584fad80_584FAD80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        and ecx, 1
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x584faeb1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x584fadad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [eax + ecx + 5890c038h]
        ; Exact mapped bytes 0F 87 C9 00 00 00: ja 0x584faeb1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 4C 42 6A: mov cx, word ptr [edx + eax*2 + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x6a
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx ecx, dx
        imul edx, ecx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        imul ecx, ecx, 0e0h
        lea edx, [edx + ecx + 5890bfd0h]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 54 4A 6A: mov dx, word ptr [edx + ecx*2 + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x4a
        __asm _emit 0x6a
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov ecx, 3ffh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        movzx edx, dx
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
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
        movzx edx, cx
        xor edx, 55h
        mov eax, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [eax + 4ch]
        ; Exact mapped bytes 75 07: jne 0x584faeac
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x584faeb3
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 F3 FE FF FF: jmp 0x584fada4
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
