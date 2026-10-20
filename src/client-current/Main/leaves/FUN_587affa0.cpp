// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFFA0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_587affa0() {
    __asm {
        mov eax, dword ptr [ecx + 6ch]
        mov eax, dword ptr [eax + 1014h]
        push esi
        mov dword ptr [ecx + 14h], 40000000h
        movzx esi, word ptr [eax + 0ah]
        mov eax, 2710h
        cdq
        add esi, 64h
        idiv esi
        pop esi
        mov edx, eax
        imul edx, dword ptr [esp + 4]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 24h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
