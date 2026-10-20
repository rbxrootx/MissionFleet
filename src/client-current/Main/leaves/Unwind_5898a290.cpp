// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898A290 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898a290() {
    __asm {
        ; Exact mapped bytes 8D 4D B0: lea ecx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes E9 E8 DE DB FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xdb
        __asm _emit 0xff
    }
}
