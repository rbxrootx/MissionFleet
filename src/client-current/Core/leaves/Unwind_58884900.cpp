// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58884900 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58884900() {
    __asm {
        ; Exact mapped bytes 8D 4D F0: lea ecx, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 C8 E5 D0 FF: jmp 0x58592ed0
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xe5
        __asm _emit 0xd0
        __asm _emit 0xff
    }
}
