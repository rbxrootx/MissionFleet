// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002C360 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_1002c360_1002C360() {
    __asm {
        ; Exact mapped bytes C7 01 70 57 17 10: mov dword ptr [ecx], 0x10175770
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 C5 78 0D 00: jmp 0x10103c30
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
    }
}
