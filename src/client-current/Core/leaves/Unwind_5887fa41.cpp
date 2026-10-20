// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887FA41 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887fa41() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 3C: add ecx, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x3c
        ; Exact mapped bytes E9 B4 EE C6 FF: jmp 0x584ee900
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0xee
        __asm _emit 0xc6
        __asm _emit 0xff
    }
}
