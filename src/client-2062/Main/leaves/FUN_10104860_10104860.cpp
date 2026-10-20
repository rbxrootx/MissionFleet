// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104860 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10104860_10104860() {
    __asm {
        ; Exact mapped bytes C7 01 5C 68 17 10: mov dword ptr [ecx], 0x1017685c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x5c
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 55 08 00 00: jmp 0x101050c0
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
