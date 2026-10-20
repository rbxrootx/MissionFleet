// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E6F3 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887e6f3() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 6C: add ecx, 0x6c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x6c
        ; Exact mapped bytes E9 E2 90 C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
