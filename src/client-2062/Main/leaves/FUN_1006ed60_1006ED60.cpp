// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006ED60 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_1006ed60_1006ED60() {
    __asm {
        ; Exact mapped bytes C7 81 74 03 00 00 01 00 00 00: mov dword ptr [ecx + 0x374], 1
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
