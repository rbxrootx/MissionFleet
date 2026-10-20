// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A88B0 .. +0x1ED bytes.
extern "C" __declspec(naked) void FUN_587a88b0_587A88B0() {
    __asm {
        sub esp, 34h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 30h], eax
        mov eax, dword ptr [esp + 3ch]
        push ebx
        mov ebx, dword ptr [esp + 3ch]
        mov dword ptr [esp + 8], ebx
        mov dword ptr [esp + 14h], eax
        test ebx, ebx
        ; Exact mapped bytes 74 1D: je 0x587a88f0
        __asm _emit 0x74
        __asm _emit 0x1d
        push 18h
        lea eax, [esp + 20h]
        push eax
        push ebx
        ; Exact mapped bytes E8 10 EA FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push 18h
        lea eax, [esp + 2ch]
        push eax
        push ebx
        ; Exact mapped bytes E8 C3 6C FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        push 0
        push 0
        push ebx
        ; Exact mapped bytes E8 36 10 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x587a8913
        __asm _emit 0x74
        __asm _emit 0x12
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 30h]
        xor ecx, esp
        ; Exact mapped bytes E8 41 87 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 34h
        ret
        movzx ecx, byte ptr [esp + 1ch]
        movzx eax, byte ptr [esp + 1dh]
        push ebp
        push esi
        mov esi, 100h
        imul ecx, esi
        push edi
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        movzx eax, cx
        movzx ecx, byte ptr [esp + 2ah]
        add eax, eax
        imul ecx, esi
        mov dword ptr [esp + 10h], eax
        movzx eax, byte ptr [esp + 2bh]
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        movzx eax, cx
        movzx ecx, byte ptr [esp + 2ch]
        add eax, eax
        imul ecx, esi
        mov dword ptr [esp + 18h], eax
        movzx eax, byte ptr [esp + 2dh]
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        movzx eax, cx
        movzx ecx, byte ptr [esp + 2eh]
        add eax, eax
        imul ecx, esi
        mov dword ptr [esp + 1ch], eax
        movzx eax, byte ptr [esp + 2fh]
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        movzx eax, cx
        movzx ecx, byte ptr [esp + 30h]
        imul ecx, esi
        lea edx, [eax + eax]
        movzx eax, byte ptr [esp + 31h]
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        movzx eax, cx
        movzx ecx, byte ptr [esp + 32h]
        imul ecx, esi
        lea ebp, [eax + eax]
        movzx eax, byte ptr [esp + 33h]
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        movzx eax, cx
        movzx ecx, byte ptr [esp + 34h]
        imul ecx, esi
        lea ebx, [eax + eax]
        movzx eax, byte ptr [esp + 35h]
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        movzx eax, cx
        movzx ecx, byte ptr [esp + 36h]
        imul ecx, esi
        lea edi, [eax + eax]
        movzx eax, byte ptr [esp + 37h]
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        movzx eax, cx
        movzx ecx, byte ptr [esp + 3ch]
        shl ecx, 8
        lea esi, [eax + eax]
        movzx eax, byte ptr [esp + 3dh]
        add ecx, eax
        movzx eax, byte ptr [esp + 3eh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 3fh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 39h]
        push ecx
        movzx ecx, byte ptr [esp + 3ch]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 3eh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 3fh]
        shl ecx, 8
        add ecx, eax
        push ecx
        push ebx
        push ebp
        push edx
        push dword ptr [esp + 30h]
        push dword ptr [esp + 30h]
        push dword ptr [esp + 2ch]
        push esi
        push edi
        push dword ptr [esp + 48h]
        push dword ptr [esp + 40h]
        ; Exact mapped bytes E8 82 87 FF FF: call 0x587a11c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 44h]
        add esp, 30h
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [ecx + 188h], eax
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [ecx + 18ch], eax
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 190h], eax
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [ecx + 194h], eax
        mov eax, 3
        mov dword ptr [ecx + 198h], ebp
        mov dword ptr [ecx + 19ch], ebx
        mov dword ptr [ecx + 1a0h], edi
        pop edi
        mov dword ptr [ecx + 1a4h], esi
        mov ecx, dword ptr [esp + 3ch]
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 B7 85 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 34h
        ret
    }
}
