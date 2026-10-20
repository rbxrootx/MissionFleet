// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883ACD .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58883acd() {
    __asm {
        ; Exact mapped bytes 8D 8D 88 EC FF FF: lea ecx, [ebp - 0x1378]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 58 62 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x62
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
