// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58987458 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58987458() {
    __asm {
        ; Exact mapped bytes 8D 4D AC: lea ecx, [ebp - 0x54]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes E9 90 23 F1 FF: jmp 0x588997f0
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
