// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B946 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_5888b946() {
    __asm {
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 81 C1 A4 00 00 00: add ecx, 0xa4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CC 00 E3 FF: jmp 0x586bba20
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0xe3
        __asm _emit 0xff
    }
}
