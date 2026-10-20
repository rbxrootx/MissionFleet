// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588881A6 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_588881a6() {
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
        ; Exact mapped bytes E9 2C F6 BF FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0xbf
        __asm _emit 0xff
    }
}
