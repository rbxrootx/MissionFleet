// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588927C5 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_588927c5() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 C4 22 00 00: add ecx, 0x22c4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 89 A4 FA FF: jmp 0x5883cc5c
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
