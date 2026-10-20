// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E990 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887e990() {
    __asm {
        ; Exact mapped bytes 8B 8D 4C FA FF FF: mov ecx, dword ptr [ebp - 0x5b4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 61 F3 FF: jmp 0x587b4b60
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x61
        __asm _emit 0xf3
        __asm _emit 0xff
    }
}
