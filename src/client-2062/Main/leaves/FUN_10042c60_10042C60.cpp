// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042C60 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_10042c60_10042C60() {
    __asm {
        ; Exact mapped bytes C7 41 08 02 00 00 00: mov dword ptr [ecx + 8], 2
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
