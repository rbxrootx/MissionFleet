// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58885C6A .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58885c6a() {
    __asm {
        ; Exact mapped bytes 8D 8D D8 FD FF FF: lea ecx, [ebp - 0x228]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BB 40 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x40
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
