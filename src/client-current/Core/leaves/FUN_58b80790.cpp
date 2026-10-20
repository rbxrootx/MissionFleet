// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B80790 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58b80790() {
    __asm {
        ; Exact mapped bytes 81 F9 04 01 00 00: cmp ecx, 0x104
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9F 8D 3D 00: jmp 0x58f5953a
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x8d
        __asm _emit 0x3d
        __asm _emit 0x00
    }
}
