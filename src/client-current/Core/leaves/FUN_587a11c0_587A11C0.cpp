// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A11C0 .. +0x1FE bytes.
extern "C" __declspec(naked) void FUN_587a11c0_587A11C0() {
    __asm {
        sub esp, 18h
        push ebx
        mov ebx, dword ptr [esp + 20h]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 E9 01 00 00: je 0x587a13b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esp + 28h]
        test edi, edi
        ; Exact mapped bytes 0F 84 DB 01 00 00: je 0x587a13b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        cdq
        sub eax, edx
        xor edx, edx
        sar eax, 1
        cmp eax, 0ffffh
        movzx ecx, ax
        push ebp
        cmova ecx, edx
        mov ebp, 1
        movzx ecx, cx
        mov dword ptr [esp + 28h], ecx
        mov ecx, 0ffffh
        cmp ecx, eax
        mov eax, dword ptr [esp + 3ch]
        cdq
        push esi
        sbb esi, esi
        sub eax, edx
        mov ecx, eax
        neg esi
        sar ecx, 1
        cmp ecx, 0ffffh
        movzx eax, cx
        cmovbe ebp, esi
        xor edx, edx
        cmp ecx, 0ffffh
        mov esi, 1
        cmova eax, edx
        movzx eax, ax
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [esp + 44h]
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        cmp ecx, 0ffffh
        movzx eax, cx
        cmova ebp, esi
        xor edx, edx
        cmp ecx, 0ffffh
        cmova eax, edx
        movzx eax, ax
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 48h]
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        cmp ecx, 0ffffh
        movzx eax, cx
        cmova ebp, esi
        xor edx, edx
        cmp ecx, 0ffffh
        cmova eax, edx
        movzx eax, ax
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esp + 4ch]
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        cmp ecx, 0ffffh
        movzx eax, cx
        cmova ebp, esi
        xor edx, edx
        cmp ecx, 0ffffh
        cmova eax, edx
        movzx eax, ax
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esp + 50h]
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        cmp ecx, 0ffffh
        movzx eax, cx
        cmova ebp, esi
        xor edx, edx
        cmp ecx, 0ffffh
        cmova eax, edx
        movzx eax, ax
        mov dword ptr [esp + 20h], eax
        mov eax, dword ptr [esp + 34h]
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        cmp ecx, 0ffffh
        movzx eax, cx
        cmova ebp, esi
        xor edx, edx
        cmp ecx, 0ffffh
        cmova eax, edx
        movzx eax, ax
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [esp + 38h]
        cdq
        sub eax, edx
        sar eax, 1
        cmp eax, 0ffffh
        ; Exact mapped bytes 0F 87 8B 00 00 00: ja 0x587a13a6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, ax
        test ebp, ebp
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x587a13a6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 54h]
        cmp eax, 7fffffffh
        ; Exact mapped bytes 77 5D: ja 0x587a138e
        __asm _emit 0x77
        __asm _emit 0x5d
        mov ecx, dword ptr [esp + 58h]
        cmp ecx, 7fffffffh
        ; Exact mapped bytes 77 51: ja 0x587a138e
        __asm _emit 0x77
        __asm _emit 0x51
        mov esi, dword ptr [esp + 2ch]
        or dword ptr [edi + 8], 80000h
        ; Exact mapped bytes 66 89 77 40: mov word ptr [edi + 0x40], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x40
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 89 77 42: mov word ptr [edi + 0x42], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x42
        mov esi, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 89 77 44: mov word ptr [edi + 0x44], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x44
        mov esi, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 89 77 46: mov word ptr [edi + 0x46], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x46
        mov esi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 89 77 48: mov word ptr [edi + 0x48], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x48
        mov esi, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 89 77 4A: mov word ptr [edi + 0x4a], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x4a
        mov esi, dword ptr [esp + 24h]
        ; Exact mapped bytes 66 89 77 4C: mov word ptr [edi + 0x4c], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x4c
        pop esi
        pop ebp
        ; Exact mapped bytes 66 89 57 4E: mov word ptr [edi + 0x4e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x4e
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], ecx
        pop edi
        pop ebx
        add esp, 18h
        ret
        push 1
        push 588b8644h
        push ebx
        ; Exact mapped bytes E8 55 D9 FF FF: call 0x5879ecf0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop esi
        pop ebp
        pop edi
        pop ebx
        add esp, 18h
        ret
        push 1
        push 588b8614h
        push ebx
        ; Exact mapped bytes E8 3D D9 FF FF: call 0x5879ecf0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop esi
        pop ebp
        pop edi
        pop ebx
        add esp, 18h
        ret
    }
}
