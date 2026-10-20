// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006AD80 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_1006ad80_1006AD80() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 81 80 03 00 00: mov dword ptr [ecx + 0x380], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
