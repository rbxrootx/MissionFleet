// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004E580 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_1004e580_1004E580() {
    __asm {
        ; Exact mapped bytes C7 41 60 00 00 00 40: mov dword ptr [ecx + 0x60], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
