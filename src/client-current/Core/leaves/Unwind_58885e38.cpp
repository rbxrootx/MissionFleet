// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58885E38 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58885e38() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 4C 02 00 00: add ecx, 0x24c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CA 97 D6 FF: jmp 0x585ef610
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x97
        __asm _emit 0xd6
        __asm _emit 0xff
    }
}
