// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888359E .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_5888359e() {
    __asm {
        ; Exact mapped bytes 8B 8D AC FE FF FF: mov ecx, dword ptr [ebp - 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes E9 34 42 C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x42
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
