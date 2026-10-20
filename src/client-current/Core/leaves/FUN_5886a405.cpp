// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A405 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_5886a405() {
    __asm {
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 81 E2 00 03 00 00: and edx, 0x300
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 CA 7F: or edx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x7f
        ; Exact mapped bytes 66 89 54 24 06: mov word ptr [esp + 6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x06
        ; Exact mapped bytes D9 6C 24 06: fldcw word ptr [esp + 6]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x06
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
