// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EDF0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887edf0() {
    __asm {
        ; Exact mapped bytes 8D 8D 4C FF FF FF: lea ecx, [ebp - 0xb4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 85 A1 F1 FF: jmp 0x58798f80
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
