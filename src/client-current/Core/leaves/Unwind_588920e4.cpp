// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588920E4 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588920e4() {
    __asm {
        ; Exact mapped bytes 8D 8D 98 FD FF FF: lea ecx, [ebp - 0x268]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B1 CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
