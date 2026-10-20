// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849A0A .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_58849a0a_58849A0A() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes E8 68 77 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        lea esi, [edi + eax]
        ; Exact mapped bytes EB 06: jmp 0x58849a24
        __asm _emit 0xeb
        __asm _emit 0x06
        cmp byte ptr [esi], 2eh
        ; Exact mapped bytes 74 05: je 0x58849a28
        __asm _emit 0x74
        __asm _emit 0x05
        dec esi
        cmp esi, edi
        ; Exact mapped bytes 77 F6: ja 0x58849a1e
        __asm _emit 0x77
        __asm _emit 0xf6
        cmp esi, edi
        ; Exact mapped bytes 75 0C: jne 0x58849a38
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp byte ptr [esi], 2eh
        ; Exact mapped bytes 74 07: je 0x58849a38
        __asm _emit 0x74
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58849ac6
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588c2548h
        push esi
        ; Exact mapped bytes E8 7D 80 01 00: call 0x58861ac0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58849a4d
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 79: jmp 0x58849ac6
        __asm _emit 0xeb
        __asm _emit 0x79
        push 588c254ch
        push esi
        ; Exact mapped bytes E8 68 80 01 00: call 0x58861ac0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 EB: je 0x58849a49
        __asm _emit 0x74
        __asm _emit 0xeb
        push 588c2554h
        push esi
        ; Exact mapped bytes E8 57 80 01 00: call 0x58861ac0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 DA: je 0x58849a49
        __asm _emit 0x74
        __asm _emit 0xda
        push 588c255ch
        push esi
        ; Exact mapped bytes E8 46 80 01 00: call 0x58861ac0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 C9: je 0x58849a49
        __asm _emit 0x74
        __asm _emit 0xc9
        push 588c2564h
        push esi
        ; Exact mapped bytes E8 35 80 01 00: call 0x58861ac0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 B8: je 0x58849a49
        __asm _emit 0x74
        __asm _emit 0xb8
        push 588c256ch
        push esi
        ; Exact mapped bytes E8 24 80 01 00: call 0x58861ac0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 A7: je 0x58849a49
        __asm _emit 0x74
        __asm _emit 0xa7
        push 588c2574h
        push esi
        ; Exact mapped bytes E8 13 80 01 00: call 0x58861ac0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 96: je 0x58849a49
        __asm _emit 0x74
        __asm _emit 0x96
        push 588c2578h
        push esi
        ; Exact mapped bytes E8 02 80 01 00: call 0x58861ac0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        neg eax
        pop ecx
        sbb al, al
        pop ecx
        inc al
        pop edi
        pop esi
        pop ebp
        ret
    }
}
