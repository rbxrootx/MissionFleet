// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589874C8 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_589874c8() {
    __asm {
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 81 C1 38 01 00 00: add ecx, 0x138
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3A 2C F1 FF: jmp 0x5889a110
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x2c
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
