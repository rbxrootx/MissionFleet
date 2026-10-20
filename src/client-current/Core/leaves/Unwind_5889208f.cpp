// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889208F .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5889208f() {
    __asm {
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E9 09 CD C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xcd
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
