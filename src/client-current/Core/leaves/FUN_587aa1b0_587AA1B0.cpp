// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA1B0 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_587aa1b0_587AA1B0() {
    __asm {
        ; Exact mapped bytes 8B 15 98 9C 96 58: mov edx, dword ptr [0x58969c98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        sub esp, 0ch
        push esi
        xor esi, esi
        test edx, edx
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x587aa268
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 90 9C 96 58: mov eax, dword ptr [0x58969c90]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        push ebp
        mov ebp, dword ptr [esp + 18h]
        add eax, 14h
        movzx ecx, byte ptr [eax]
        shr ecx, 1
        and ecx, 1
        cmp ecx, ebp
        ; Exact mapped bytes 75 10: jne 0x587aa1ed
        __asm _emit 0x75
        __asm _emit 0x10
        inc esi
        add eax, 2ch
        cmp esi, edx
        ; Exact mapped bytes 72 EC: jb 0x587aa1d1
        __asm _emit 0x72
        __asm _emit 0xec
        pop ebp
        xor eax, eax
        pop esi
        add esp, 0ch
        ret
        xor eax, eax
        cmp esi, -1
        ; Exact mapped bytes 74 6E: je 0x587aa262
        __asm _emit 0x74
        __asm _emit 0x6e
        test ebp, ebp
        push edi
        setne al
        push eax
        lea eax, [esp + 10h]
        push -1
        push eax
        ; Exact mapped bytes E8 89 02 00 00: call 0x587aa490
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 75 51: jne 0x587aa261
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 98 9C 96 58: mov ecx, dword ptr [0x58969c98]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        cmp esi, ecx
        ; Exact mapped bytes 73 38: jae 0x587aa252
        __asm _emit 0x73
        __asm _emit 0x38
        push ebx
        imul ebx, esi, 2ch
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        ; Exact mapped bytes A1 90 9C 96 58: mov eax, dword ptr [0x58969c90]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        movzx eax, byte ptr [ebx + eax + 14h]
        shr eax, 1
        and eax, 1
        cmp eax, ebp
        ; Exact mapped bytes 74 16: je 0x587aa249
        __asm _emit 0x74
        __asm _emit 0x16
        push ebp
        push esi
        ; Exact mapped bytes E8 06 01 00 00: call 0x587aa340
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 8
        test edi, edi
        ; Exact mapped bytes 75 0E: jne 0x587aa251
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 98 9C 96 58: mov ecx, dword ptr [0x58969c98]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        inc esi
        add ebx, 2ch
        cmp esi, ecx
        ; Exact mapped bytes 72 CF: jb 0x587aa220
        __asm _emit 0x72
        __asm _emit 0xcf
        pop ebx
        lea eax, [esp + 0ch]
        push eax
        ; Exact mapped bytes E8 14 08 00 00: call 0x587aaa70
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        add esp, 0ch
        ret
        xor eax, eax
        pop esi
        add esp, 0ch
        ret
    }
}
