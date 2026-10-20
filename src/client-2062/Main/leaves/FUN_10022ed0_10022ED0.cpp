// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10022ED0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10022ed0_10022ED0() {
    __asm {
        ; Exact mapped bytes C7 01 E4 55 17 10: mov dword ptr [ecx], 0x101755e4
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0x55
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 95 B8 0D 00: jmp 0x100fe770
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
    }
}
