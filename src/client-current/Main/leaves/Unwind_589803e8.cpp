// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589803E8 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589803e8() {
    __asm {
        ; Exact mapped bytes 8D 4D B4: lea ecx, [ebp - 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes E9 90 7D DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x7d
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
