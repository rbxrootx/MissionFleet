// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E500 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5876e500() {
    __asm {
        ; Exact mapped bytes C7 01 E8 5B 99 58: mov dword ptr [ecx], 0x58995be8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 95 7E 04 00: jmp 0x587b63a0
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
