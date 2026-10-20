// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007E5B0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_1007e5b0_1007E5B0() {
    __asm {
        ; Exact mapped bytes C7 01 64 5D 17 10: mov dword ptr [ecx], 0x10175d64
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x64
        __asm _emit 0x5d
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 E5 48 08 00: jmp 0x10102ea0
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
