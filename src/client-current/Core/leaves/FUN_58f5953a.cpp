// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F5953A .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58f5953a() {
    __asm {
        ; Exact mapped bytes 0F 83 31 AB DB FF: jae 0x58d14071
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x31
        __asm _emit 0xab
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes C7 45 08 00 00 00 00: mov dword ptr [ebp + 8], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes 66 F7 C2 8D 3C: test dx, 0x3c8d
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xc2
        __asm _emit 0x8d
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes E9 5F E9 BE FF: jmp 0x58b47eb3
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0xff
    }
}
