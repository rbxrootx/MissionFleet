// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883D38 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58883d38() {
    __asm {
        ; Exact mapped bytes 8D 4D 80: lea ecx, [ebp - 0x80]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x80
        ; Exact mapped bytes E9 30 1E D0 FF: jmp 0x58585b70
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x1e
        __asm _emit 0xd0
        __asm _emit 0xff
    }
}
