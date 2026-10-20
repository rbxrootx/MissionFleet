// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58909AC0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58909ac0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [ecx + 5ch]
        push esi
        push edi
        ; Exact mapped bytes 7D 1D: jge 0x58909ae8
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov esi, dword ptr [ecx + 90h]
        imul eax, eax, 7ch
        add esi, eax
        mov eax, dword ptr [esp + 0ch]
        mov ecx, 1fh
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        xor esi, esi
        mov ecx, 1fh
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
