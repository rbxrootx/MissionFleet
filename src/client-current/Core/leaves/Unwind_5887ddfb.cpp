// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DDFB .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887ddfb() {
    __asm {
        ; Exact mapped bytes 8D 4D C8: lea ecx, [ebp - 0x38]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes E9 CD 47 C2 FF: jmp 0x584a25d0
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x47
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
