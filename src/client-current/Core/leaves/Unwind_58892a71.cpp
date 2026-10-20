// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892A71 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58892a71() {
    __asm {
        ; Exact mapped bytes 8D 8D 6C FF FF FF: lea ecx, [ebp - 0x94]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8D 81 FA FF: jmp 0x5883ac09
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
