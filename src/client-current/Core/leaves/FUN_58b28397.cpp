// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B28397 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58b28397() {
    __asm {
        ; Exact mapped bytes 0F 87 B4 D1 3F 00: ja 0x58f25551
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb4
        __asm _emit 0xd1
        __asm _emit 0x3f
        __asm _emit 0x00
        ; Exact mapped bytes 2B 4C 38 10: sub ecx, dword ptr [eax + edi + 0x10]
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0x38
        __asm _emit 0x10
        ; Exact mapped bytes 3B 4C 38 14: cmp ecx, dword ptr [eax + edi + 0x14]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x38
        __asm _emit 0x14
        ; Exact mapped bytes E9 DD F9 FE FF: jmp 0x58b17d87
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
