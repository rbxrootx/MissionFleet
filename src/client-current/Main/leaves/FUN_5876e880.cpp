// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E880 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5876e880() {
    __asm {
        ; Exact mapped bytes C7 01 04 5C 99 58: mov dword ptr [ecx], 0x58995c04
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x5c
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 05 7F 04 00: jmp 0x587b6790
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
