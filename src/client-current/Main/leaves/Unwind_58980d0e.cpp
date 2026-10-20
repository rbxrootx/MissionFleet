// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980D0E .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58980d0e() {
    __asm {
        ; Exact mapped bytes 8B 8D 98 FE FF FF: mov ecx, dword ptr [ebp - 0x168]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C1 1C: add ecx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x1c
        ; Exact mapped bytes E9 A4 29 DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x29
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
