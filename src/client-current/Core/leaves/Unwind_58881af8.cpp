// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881AF8 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58881af8() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 68 1E 01 00: add ecx, 0x11e68
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 8A 40 D0 FF: jmp 0x58585b90
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x40
        __asm _emit 0xd0
        __asm _emit 0xff
    }
}
