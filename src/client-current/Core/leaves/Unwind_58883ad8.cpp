// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883AD8 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58883ad8() {
    __asm {
        ; Exact mapped bytes 8D 8D A0 EC FF FF: lea ecx, [ebp - 0x1360]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4D 62 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
