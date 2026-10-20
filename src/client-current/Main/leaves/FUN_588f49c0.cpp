// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F49C0 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_588f49c0() {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx + 8]
        push esi
        push edi
        mov edi, dword ptr [ecx + 4]
        mov eax, 66666667h
        imul edi
        sar edx, 2
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        mov eax, 66666667h
        imul ebx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp dword ptr [ecx + 1a0h], edi
        ; Exact mapped bytes 75 08: jne 0x588f49fb
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [ecx + 1a4h], ebx
        ; Exact mapped bytes 74 72: je 0x588f4a6d
        __asm _emit 0x74
        __asm _emit 0x72
        mov dword ptr [ecx + 1a4h], eax
        mov eax, dword ptr [ecx + 3e8h]
        cdq
        idiv dword ptr [ecx + 3ech]
        mov dword ptr [ecx + 1a0h], esi
        mov dword ptr [ecx + edx*8 + 1a8h], edi
        mov eax, dword ptr [ecx + 3e8h]
        cdq
        idiv dword ptr [ecx + 3ech]
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [ecx + edx*8 + 1ach], eax
        inc dword ptr [ecx + 3e8h]
        cmp dword ptr [esp + 10h], 0
        mov edx, dword ptr [ecx + 3e8h]
        mov eax, dword ptr [ecx + 19ch]
        ; Exact mapped bytes 74 0B: je 0x588f4a56
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp eax, dword ptr [ecx + 3ech]
        ; Exact mapped bytes 7D 0E: jge 0x588f4a61
        __asm _emit 0x7d
        __asm _emit 0x0e
        inc eax
        ; Exact mapped bytes EB 05: jmp 0x588f4a5b
        __asm _emit 0xeb
        __asm _emit 0x05
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x588f4a61
        __asm _emit 0x7e
        __asm _emit 0x07
        dec eax
        mov dword ptr [ecx + 19ch], eax
        sub edx, dword ptr [ecx + 19ch]
        mov dword ptr [ecx + 198h], edx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
