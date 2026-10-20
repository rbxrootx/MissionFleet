// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D720 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887d720() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 0C: add ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0c
        ; Exact mapped bytes E9 B5 A0 C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xa0
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
