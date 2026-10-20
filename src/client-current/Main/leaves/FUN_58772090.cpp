// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58772090 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_58772090() {
    __asm {
        push esi
        xor edx, edx
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 400h], edx
        mov edi, edi
        mov eax, edx
        shl eax, 8
        movzx eax, ax
        mov esi, 8
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        test eax, 8000h
        ; Exact mapped bytes 74 09: je 0x587720c0
        __asm _emit 0x74
        __asm _emit 0x09
        add eax, eax
        xor eax, edi
        movzx eax, ax
        ; Exact mapped bytes EB 02: jmp 0x587720c2
        __asm _emit 0xeb
        __asm _emit 0x02
        add eax, eax
        sub esi, 1
        ; Exact mapped bytes 75 E9: jne 0x587720b0
        __asm _emit 0x75
        __asm _emit 0xe9
        movzx eax, ax
        mov dword ptr [ecx], eax
        inc edx
        mov eax, 100h
        add ecx, 4
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 72 C6: jb 0x587720a0
        __asm _emit 0x72
        __asm _emit 0xc6
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
