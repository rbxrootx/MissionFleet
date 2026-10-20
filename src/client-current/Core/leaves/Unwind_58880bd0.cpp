// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880BD0 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58880bd0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 58 08 00 00: add ecx, 0x858
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 02 6C C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x6c
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
