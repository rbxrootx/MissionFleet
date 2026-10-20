// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890CFA0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5890cfa0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        lea eax, [esi - 1f4h]
        cmp eax, 5dch
        ; Exact mapped bytes 77 30: ja 0x5890cfe2
        __asm _emit 0x77
        __asm _emit 0x30
        mov eax, dword ptr [ecx + 1ch]
        sub eax, dword ptr [ecx + 14h]
        mov dword ptr [ecx + 114h], esi
        imul eax, eax, 3e8h
        cdq
        idiv esi
        mov dword ptr [ecx + 124h], eax
        mov eax, dword ptr [ecx + 20h]
        sub eax, dword ptr [ecx + 18h]
        imul eax, eax, 3e8h
        cdq
        idiv esi
        mov dword ptr [ecx + 128h], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
