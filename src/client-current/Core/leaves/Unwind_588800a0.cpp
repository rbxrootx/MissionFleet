// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588800A0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588800a0() {
    __asm {
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E9 D8 1E C8 FF: jmp 0x58501f80
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x1e
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
