// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887ED56 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887ed56() {
    __asm {
        ; Exact mapped bytes 8D 4D 90: lea ecx, [ebp - 0x70]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes E9 D2 AF C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xaf
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
