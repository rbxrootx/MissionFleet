// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10070920 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10070920_10070920() {
    __asm {
        ; Exact mapped bytes C7 81 40 1A 02 00 00 00 00 00: mov dword ptr [ecx + 0x21a40], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x40
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
