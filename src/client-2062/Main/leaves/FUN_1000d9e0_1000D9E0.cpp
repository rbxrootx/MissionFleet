// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D9E0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_1000d9e0_1000D9E0() {
    __asm {
        ; Exact mapped bytes C7 01 E0 52 17 10: mov dword ptr [ecx], 0x101752e0
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 A5 11 0F 00: jmp 0x100feb90
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x11
        __asm _emit 0x0f
        __asm _emit 0x00
    }
}
