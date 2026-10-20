// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100183B0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100183b0_100183B0() {
    __asm {
        ; Exact mapped bytes C7 01 18 55 17 10: mov dword ptr [ecx], 0x10175518
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x18
        __asm _emit 0x55
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 B5 63 0E 00: jmp 0x100fe770
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x63
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}
