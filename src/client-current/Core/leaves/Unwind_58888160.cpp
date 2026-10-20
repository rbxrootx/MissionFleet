// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58888160 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58888160() {
    __asm {
        ; Exact mapped bytes 8D 4D CC: lea ecx, [ebp - 0x34]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E9 48 EA DB FF: jmp 0x58646bb0
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xea
        __asm _emit 0xdb
        __asm _emit 0xff
    }
}
