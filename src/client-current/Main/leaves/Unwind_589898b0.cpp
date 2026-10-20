// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589898B0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_589898b0() {
    __asm {
        ; Exact mapped bytes 8D 8D E8 FE FF FF: lea ecx, [ebp - 0x118]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 95 52 E4 FF: jmp 0x587ceb50
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x52
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
