// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883AC2 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58883ac2() {
    __asm {
        ; Exact mapped bytes 8D 8D 1C D8 FF FF: lea ecx, [ebp - 0x27e4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B3 D7 CE FF: jmp 0x58571280
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xd7
        __asm _emit 0xce
        __asm _emit 0xff
    }
}
