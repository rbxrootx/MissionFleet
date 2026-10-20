// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004176C6 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_004176c6_004176C6() {
    __asm {
        ; Exact mapped bytes C7 01 C8 E9 43 00: mov dword ptr [ecx], 0x43e9c8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
