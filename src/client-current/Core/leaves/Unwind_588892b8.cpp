// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588892B8 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588892b8() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 74: add ecx, 0x74
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x74
        ; Exact mapped bytes E9 1D E5 BF FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xe5
        __asm _emit 0xbf
        __asm _emit 0xff
    }
}
