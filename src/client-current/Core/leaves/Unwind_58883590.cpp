// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883590 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58883590() {
    __asm {
        ; Exact mapped bytes 8B 8D AC FE FF FF: mov ecx, dword ptr [ebp - 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes E9 42 42 C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x42
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
