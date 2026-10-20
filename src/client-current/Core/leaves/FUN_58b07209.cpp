// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B07209 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58b07209() {
    __asm {
        ; Exact mapped bytes 0F 82 5C 5D 04 00: jb 0x58b4cf6b
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x5c
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 0F 43 CF: cmovae ecx, edi
        __asm _emit 0x0f
        __asm _emit 0x43
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 98 C5: sets ch
        __asm _emit 0x0f
        __asm _emit 0x98
        __asm _emit 0xc5
        ; Exact mapped bytes 8D 8D EC FE FF FF: lea ecx, [ebp - 0x114]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DF 03 02 00: jmp 0x58b27602
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
    }
}
