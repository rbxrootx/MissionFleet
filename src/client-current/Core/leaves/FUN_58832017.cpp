// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832017 .. +0x6 bytes.
extern "C" __declspec(naked) void FUN_58832017() {
    __asm {
        ; Exact mapped bytes E8 F6 F7 FF FF: call 0x58831812
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
