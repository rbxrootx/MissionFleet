// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830805 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_58830805_58830805() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 0
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 13 FC FF FF: call 0x58830426
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58966214h
        ; Exact mapped bytes E8 AD FF FF FF: call 0x588307ca
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes C7 05 14 62 96 58 00 00 00 00: mov dword ptr [0x58966214], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x62
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4E FC FF FF: call 0x5883047e
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        leave
        ret
    }
}
