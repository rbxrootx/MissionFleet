// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589827B8 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_589827b8() {
    __asm {
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 81 C1 A0 04 01 00: add ecx, 0x104a0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 7A 58 E6 FF: jmp 0x587e8040
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x58
        __asm _emit 0xe6
        __asm _emit 0xff
    }
}
