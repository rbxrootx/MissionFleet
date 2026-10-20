// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898ADD0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898add0() {
    __asm {
        ; Exact mapped bytes 8D 4D 90: lea ecx, [ebp - 0x70]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes E9 D8 7F FE FF: jmp 0x58972db0
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
