// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892AB7 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892ab7() {
    __asm {
        ; Exact mapped bytes 8D 4D 8C: lea ecx, [ebp - 0x74]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x8c
        ; Exact mapped bytes E9 4A 81 FA FF: jmp 0x5883ac09
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
