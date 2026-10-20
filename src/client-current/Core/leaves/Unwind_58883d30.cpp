// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883D30 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58883d30() {
    __asm {
        ; Exact mapped bytes 8D 4D 8C: lea ecx, [ebp - 0x74]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x8c
        ; Exact mapped bytes E9 38 1E D0 FF: jmp 0x58585b70
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x1e
        __asm _emit 0xd0
        __asm _emit 0xff
    }
}
