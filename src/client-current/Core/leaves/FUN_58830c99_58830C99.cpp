// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830C99 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_58830c99_58830C99() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, ecx
        push ebx
        mov ebx, ecx
        or edx, 1
        shr ebx, 2
        and bl, 1
        test cl, 40h
        push esi
        cmove edx, ecx
        mov ecx, edx
        or ecx, 2
        test dl, 8
        cmove ecx, edx
        xor eax, eax
        and ecx, 0ffffffbbh
        ; Exact mapped bytes 39 0D D0 5F 90 58: cmp dword ptr [0x58905fd0], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 74 0F: je 0x58830cdb
        __asm _emit 0x74
        __asm _emit 0x0f
        inc eax
        cmp eax, 14h
        ; Exact mapped bytes 74 24: je 0x58830cf6
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [eax*4 + 58905fd0h], ecx
        ; Exact mapped bytes 75 F1: jne 0x58830ccc
        __asm _emit 0x75
        __asm _emit 0xf1
        push dword ptr [ebp + 10h]
        push dword ptr [eax*4 + 588c1a10h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 06 02 00: call 0x5885130a
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, eax
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x58830cfa
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 20: jmp 0x58830d1a
        __asm _emit 0xeb
        __asm _emit 0x20
        test bl, bl
        ; Exact mapped bytes 74 1A: je 0x58830d18
        __asm _emit 0x74
        __asm _emit 0x1a
        push 2
        push 0
        push esi
        ; Exact mapped bytes E8 38 9A 02 00: call 0x5885a740
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58830d18
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 6C 07 02 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB DE: jmp 0x58830cf6
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
