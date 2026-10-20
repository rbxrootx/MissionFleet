// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981109 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58981109() {
    __asm {
        ; Exact mapped bytes 8D 8D 90 E2 FF FF: lea ecx, [ebp - 0x1d70]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6C 70 DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x70
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
