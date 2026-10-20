// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EA120 .. +0x160 bytes.
extern "C" __declspec(naked) void FUN_585ea120_585EA120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C C8 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 A8 E9 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 92 C8 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB B8 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb8
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0fa000h
        cdq
        idiv ecx
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 0ch]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10704h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 C8 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F B8 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb8
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0bb800h
        cdq
        idiv ecx
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 8]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10708h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10704h], 0
        ; Exact mapped bytes 7D 0F: jge 0x585ea1b9
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10704h], 0
        ; Exact mapped bytes EB 54: jmp 0x585ea20d
        __asm _emit 0xeb
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F C8 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 48 B8 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb8
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0fa000h
        cdq
        idiv ecx
        mov edx, 3200h
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10704h], edx
        ; Exact mapped bytes 7E 29: jle 0x585ea20d
        __asm _emit 0x7e
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 C7 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1D B8 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb8
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0fa000h
        cdq
        idiv ecx
        mov edx, 3200h
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10704h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10708h], 0
        ; Exact mapped bytes 7D 0F: jge 0x585ea228
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10708h], 0
        ; Exact mapped bytes EB 54: jmp 0x585ea27c
        __asm _emit 0xeb
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 C7 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 B7 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0bb800h
        cdq
        idiv ecx
        mov edx, 1900h
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10708h], edx
        ; Exact mapped bytes 7E 29: jle 0x585ea27c
        __asm _emit 0x7e
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 C7 E9 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AE B7 EA FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0bb800h
        cdq
        idiv ecx
        mov edx, 1900h
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10708h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
