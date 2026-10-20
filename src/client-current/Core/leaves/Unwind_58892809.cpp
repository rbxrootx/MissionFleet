// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892809 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58892809() {
    __asm {
        ; Exact mapped bytes 8D 8D E8 FA FF FF: lea ecx, [ebp - 0x518]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 05 01 FA FF: jmp 0x58832919
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
