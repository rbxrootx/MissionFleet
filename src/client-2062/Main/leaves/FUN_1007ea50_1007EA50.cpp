// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007EA50 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_1007ea50_1007EA50() {
    __asm {
        ; Exact mapped bytes C7 01 80 5D 17 10: mov dword ptr [ecx], 0x10175d80
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x80
        __asm _emit 0x5d
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 45 44 08 00: jmp 0x10102ea0
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
