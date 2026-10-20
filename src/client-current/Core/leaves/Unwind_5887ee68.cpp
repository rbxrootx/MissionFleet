// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EE68 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ee68() {
    __asm {
        ; Exact mapped bytes 8B 8D 48 FF FF FF: mov ecx, dword ptr [ebp - 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BD AE C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0xae
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
