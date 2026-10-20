// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588920CE .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588920ce() {
    __asm {
        ; Exact mapped bytes 8D 8D C8 FD FF FF: lea ecx, [ebp - 0x238]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C7 CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
