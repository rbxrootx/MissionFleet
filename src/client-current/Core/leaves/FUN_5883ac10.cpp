// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AC10 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_5883ac10() {
    __asm {
        ; Exact mapped bytes C7 01 28 1D 8C 58: mov dword ptr [ecx], 0x588c1d28
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x28
        __asm _emit 0x1d
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
