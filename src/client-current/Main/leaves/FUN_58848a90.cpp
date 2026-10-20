// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58848A90 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58848a90() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        push edi
        push eax
        ; Exact mapped bytes E8 EE A7 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa7
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi + 54h], edi
        pop edi
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 0c8h], 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
