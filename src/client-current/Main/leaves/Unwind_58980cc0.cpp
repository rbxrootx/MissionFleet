// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980CC0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58980cc0() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes E9 F5 29 DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x29
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
