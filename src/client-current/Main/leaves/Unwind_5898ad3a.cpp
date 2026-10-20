// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898AD3A .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898ad3a() {
    __asm {
        ; Exact mapped bytes 8D 4D F0: lea ecx, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 E6 69 FE FF: jmp 0x58971728
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
