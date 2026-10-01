// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58E0A61E .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58e0a61e() {
    __asm {
        ; Exact mapped bytes 8D 44 24 60: lea eax, [esp + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes E9 E4 6F 17 00: jmp 0x58f8160d
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x00
    }
}
