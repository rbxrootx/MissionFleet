// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588917A0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588917a0() {
    __asm {
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E9 88 77 F0 FF: jmp 0x58798f30
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x77
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
