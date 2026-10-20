// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DC50 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887dc50() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E9 85 9B C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
