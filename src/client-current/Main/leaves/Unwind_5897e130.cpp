// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E130 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897e130() {
    __asm {
        ; Exact mapped bytes 8D 4D B8: lea ecx, [ebp - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes E9 88 55 DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x55
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
