// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980420 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58980420() {
    __asm {
        ; Exact mapped bytes 8D 4D 80: lea ecx, [ebp - 0x80]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x80
        ; Exact mapped bytes E9 38 1F F8 FF: jmp 0x58902360
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
