// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58987488 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58987488() {
    __asm {
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 81 C1 38 01 00 00: add ecx, 0x138
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7A 2C F1 FF: jmp 0x5889a110
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x2c
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
