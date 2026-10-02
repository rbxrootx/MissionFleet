// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588721E0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_588721e0() {
    __asm {
        ; Exact mapped bytes E8 6B 1D 00 00: call 0x58873f50
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 35 1D 00 00: call 0x58873f20
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ret
    }
}
