// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980C00 .. +0x11 bytes.
extern "C" __declspec(naked) void Unwind_58980c00() {
    __asm {
        ; Exact mapped bytes 8B 8D A8 FB FF FF: mov ecx, dword ptr [ebp - 0x458]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 4C 01 00 00: add ecx, 0x14c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AF 2A DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x2a
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
