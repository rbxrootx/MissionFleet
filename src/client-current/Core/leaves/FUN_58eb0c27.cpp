// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58EB0C27 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_58eb0c27() {
    __asm {
        ; Exact mapped bytes 0F 84 CA BA 09 00: je 0x58f4c6f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 38 20: mov edx, dword ptr [eax + edi + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x38
        __asm _emit 0x20
        ; Exact mapped bytes E9 3E B0 E3 FF: jmp 0x58cebc74
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xb0
        __asm _emit 0xe3
        __asm _emit 0xff
    }
}
