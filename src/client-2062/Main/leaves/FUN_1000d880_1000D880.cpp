// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D880 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_1000d880_1000D880() {
    __asm {
        ; Exact mapped bytes C7 01 C4 52 17 10: mov dword ptr [ecx], 0x101752c4
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xc4
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 15 10 0F 00: jmp 0x100fe8a0
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x0f
        __asm _emit 0x00
    }
}
