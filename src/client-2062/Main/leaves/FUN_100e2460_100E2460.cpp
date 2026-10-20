// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E2460 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100e2460_100E2460() {
    __asm {
        ; Exact mapped bytes C7 01 34 65 17 10: mov dword ptr [ecx], 0x10176534
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x34
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 25 C7 01 00: jmp 0x100feb90
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
