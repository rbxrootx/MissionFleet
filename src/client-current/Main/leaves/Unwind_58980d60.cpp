// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980D60 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58980d60() {
    __asm {
        ; Exact mapped bytes 8B 85 2C FE FF FF: mov eax, dword ptr [ebp - 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D6 BE FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
