// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980428 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58980428() {
    __asm {
        ; Exact mapped bytes 8D 4D 9C: lea ecx, [ebp - 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes E9 50 7D DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x7d
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
