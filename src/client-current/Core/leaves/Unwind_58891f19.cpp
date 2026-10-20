// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891F19 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891f19() {
    __asm {
        ; Exact mapped bytes 8D 8D 44 FF FF FF: lea ecx, [ebp - 0xbc]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EC 4F C7 FF: jmp 0x58506f10
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x4f
        __asm _emit 0xc7
        __asm _emit 0xff
    }
}
