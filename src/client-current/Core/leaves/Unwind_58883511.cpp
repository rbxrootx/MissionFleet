// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883511 .. +0x11 bytes.
extern "C" __declspec(naked) void Unwind_58883511() {
    __asm {
        ; Exact mapped bytes 8B 8D 0C FA FF FF: mov ecx, dword ptr [ebp - 0x5f4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 58 01 00 00: add ecx, 0x158
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BE 42 C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
