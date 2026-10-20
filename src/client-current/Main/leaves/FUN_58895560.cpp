// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58895560 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_58895560() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 81 A4 00 00 00: mov dword ptr [ecx + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 78: mov ecx, dword ptr [ecx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x78
        ; Exact mapped bytes 89 44 24 04: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E9 CA 91 EE FF: jmp 0x5877e740
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x91
        __asm _emit 0xee
        __asm _emit 0xff
    }
}
