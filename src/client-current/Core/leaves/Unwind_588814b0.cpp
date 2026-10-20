// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588814B0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588814b0() {
    __asm {
        ; Exact mapped bytes 8B 8D A0 FE FF FF: mov ecx, dword ptr [ebp - 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 75 88 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
