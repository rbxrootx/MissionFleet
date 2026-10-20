// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898AD14 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5898ad14() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 18: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x18
        ; Exact mapped bytes E9 61 D4 DB FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xd4
        __asm _emit 0xdb
        __asm _emit 0xff
    }
}
