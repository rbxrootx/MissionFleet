// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588920C3 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588920c3() {
    __asm {
        ; Exact mapped bytes 8D 8D B0 FD FF FF: lea ecx, [ebp - 0x250]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D2 CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
