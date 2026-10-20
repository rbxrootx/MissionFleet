// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E270 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897e270() {
    __asm {
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E9 E8 31 E2 FF: jmp 0x587a1460
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
