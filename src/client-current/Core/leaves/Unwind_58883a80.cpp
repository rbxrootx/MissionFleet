// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883A80 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58883a80() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 38 D8 CE FF: jmp 0x585712c0
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xd8
        __asm _emit 0xce
        __asm _emit 0xff
    }
}
