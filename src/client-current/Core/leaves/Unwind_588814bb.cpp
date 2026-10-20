// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588814BB .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_588814bb() {
    __asm {
        ; Exact mapped bytes 8B 8D A0 FE FF FF: mov ecx, dword ptr [ebp - 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C1 18: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x18
        ; Exact mapped bytes E9 D7 D8 C4 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xd8
        __asm _emit 0xc4
        __asm _emit 0xff
    }
}
