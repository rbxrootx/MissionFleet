// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095A20 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_10095a20_10095A20() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        push edi
        xor edi, edi
        xor edx, edx
        mov eax, dword ptr [ecx]
        cmp eax, 190h
        ; Exact mapped bytes 7E 05: jle 0x10095a3a
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edi, 1
        mov ecx, dword ptr [ecx + 4]
        cmp ecx, 12ch
        ; Exact mapped bytes 7E 05: jle 0x10095a4a
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edx, 1
        test edi, edi
        ; Exact mapped bytes 75 36: jne 0x10095a84
        __asm _emit 0x75
        __asm _emit 0x36
        test edx, edx
        ; Exact mapped bytes 75 15: jne 0x10095a67
        __asm _emit 0x75
        __asm _emit 0x15
        add eax, 32h
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 72 92 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 BE B4 00 00 00: mov word ptr [esi + 0xb4], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 57: jmp 0x10095abe
        __asm _emit 0xeb
        __asm _emit 0x57
        add ecx, 0ffffff60h
        add eax, 32h
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 57 92 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 B4 00 00 00 01 00: mov word ptr [esi + 0xb4], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x10095abe
        __asm _emit 0xeb
        __asm _emit 0x3a
        test edx, edx
        ; Exact mapped bytes 75 19: jne 0x10095aa1
        __asm _emit 0x75
        __asm _emit 0x19
        add eax, 0ffffff42h
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3A 92 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 B4 00 00 00 02 00: mov word ptr [esi + 0xb4], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x10095abe
        __asm _emit 0xeb
        __asm _emit 0x1d
        add ecx, 0ffffff60h
        add eax, 0ffffff42h
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1B 92 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 B4 00 00 00 03 00: mov word ptr [esi + 0xb4], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], ecx
        mov edi, dword ptr [esi + 78h]
        mov eax, dword ptr [esi + 7ch]
        cmp edi, eax
        ; Exact mapped bytes 74 11: je 0x10095ae5
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 25 C7 FE FF: call 0x10082200
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 7ch]
        add edi, 4
        cmp edi, eax
        ; Exact mapped bytes 75 EF: jne 0x10095ad4
        __asm _emit 0x75
        __asm _emit 0xef
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
