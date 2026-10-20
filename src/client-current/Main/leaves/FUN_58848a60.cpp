// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58848A60 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58848a60() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        push eax
        push edi
        ; Exact mapped bytes E8 1E A8 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 50h], edi
        pop edi
        mov dword ptr [esi + 54h], ecx
        mov dword ptr [esi + 0c8h], 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
