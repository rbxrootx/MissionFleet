// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888BF20 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5888bf20() {
    __asm {
        ; Exact mapped bytes 8B 8D C4 FE FF FF: mov ecx, dword ptr [ebp - 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 85 99 F2 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
