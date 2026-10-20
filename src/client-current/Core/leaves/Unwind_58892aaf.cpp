// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892AAF .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892aaf() {
    __asm {
        ; Exact mapped bytes 8D 4D 0C: lea ecx, [ebp + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes E9 E9 C2 C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
