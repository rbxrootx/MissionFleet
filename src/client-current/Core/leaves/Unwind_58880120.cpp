// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880120 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880120() {
    __asm {
        ; Exact mapped bytes 8D 4D C0: lea ecx, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes E9 78 EC C4 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xc4
        __asm _emit 0xff
    }
}
