// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58895510 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58895510() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 81 B0 00 00 00: mov dword ptr [ecx + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
