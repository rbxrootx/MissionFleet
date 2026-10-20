// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B4220B .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58b4220b() {
    __asm {
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 8D 3D 00: jmp 0x58f1b009
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x8d
        __asm _emit 0x3d
        __asm _emit 0x00
    }
}
