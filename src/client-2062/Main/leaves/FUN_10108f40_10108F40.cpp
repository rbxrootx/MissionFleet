// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10108F40 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_10108f40_10108F40() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [ecx + 5ch]
        push esi
        cmp eax, edx
        push edi
        ; Exact mapped bytes 7D 22: jge 0x10108f6f
        __asm _emit 0x7d
        __asm _emit 0x22
        mov edx, eax
        shl edx, 5
        sub edx, eax
        mov eax, dword ptr [ecx + 90h]
        mov ecx, 1fh
        lea esi, [eax + edx*4]
        mov eax, dword ptr [esp + 0ch]
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
        mov ecx, 1fh
        xor esi, esi
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
