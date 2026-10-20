// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892A7C .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58892a7c() {
    __asm {
        ; Exact mapped bytes 8D 8D 70 FF FF FF: lea ecx, [ebp - 0x90]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5C 81 FA FF: jmp 0x5883abe3
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
