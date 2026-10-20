// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588815D0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588815d0() {
    __asm {
        ; Exact mapped bytes 8D 4D D4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E9 28 E4 C9 FF: jmp 0x5851fa00
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xe4
        __asm _emit 0xc9
        __asm _emit 0xff
    }
}
