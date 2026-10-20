// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892B98 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892b98() {
    __asm {
        ; Exact mapped bytes 8D 4D CF: lea ecx, [ebp - 0x31]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xcf
        ; Exact mapped bytes E9 AA AE FA FF: jmp 0x5883da4a
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0xae
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
