// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002A320 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_1002a320_1002A320() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        cmp esi, 1
        ; Exact mapped bytes 7D 05: jge 0x1002a32f
        __asm _emit 0x7d
        __asm _emit 0x05
        mov esi, 1
        mov eax, dword ptr [ecx + 70h]
        mov dword ptr [ecx + 54h], esi
        mov eax, dword ptr [eax + 58h]
        imul eax, dword ptr [ecx + 68h]
        cdq
        idiv esi
        pop esi
        mov dword ptr [ecx + 60h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
