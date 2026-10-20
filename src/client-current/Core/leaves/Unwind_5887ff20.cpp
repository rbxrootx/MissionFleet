// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887FF20 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ff20() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes E9 05 9E C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x9e
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
