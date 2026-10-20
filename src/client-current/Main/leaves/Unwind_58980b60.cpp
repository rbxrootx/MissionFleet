// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980B60 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58980b60() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes E9 55 2B DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x2b
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
