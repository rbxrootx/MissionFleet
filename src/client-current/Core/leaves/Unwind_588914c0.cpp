// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588914C0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588914c0() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 D8 66 F0 FF: jmp 0x58797ba0
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x66
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
