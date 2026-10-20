// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1001CE40 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_1001ce40_1001CE40() {
    __asm {
        ; Exact mapped bytes 66 81 61 24 F0 FF: and word ptr [ecx + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes C7 41 60 00 00 00 00: mov dword ptr [ecx + 0x60], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
