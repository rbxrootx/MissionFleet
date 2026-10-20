// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B6790 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_587b6790() {
    __asm {
        ; Exact mapped bytes C7 01 CC A0 99 58: mov dword ptr [ecx], 0x5899a0cc
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xcc
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 15 D1 14 00: jmp 0x589038b0
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xd1
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
