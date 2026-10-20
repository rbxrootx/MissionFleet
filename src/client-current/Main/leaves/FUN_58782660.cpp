// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58782660 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58782660() {
    __asm {
        ; Exact mapped bytes 83 81 D4 00 00 00 FF: add dword ptr [ecx + 0xd4], -1
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 79 0A: jns 0x58782673
        __asm _emit 0x79
        __asm _emit 0x0a
        ; Exact mapped bytes C7 81 D4 00 00 00 00 00 00 00: mov dword ptr [ecx + 0xd4], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
