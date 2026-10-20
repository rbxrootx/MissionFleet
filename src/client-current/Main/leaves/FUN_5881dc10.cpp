// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881DC10 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_5881dc10() {
    __asm {
        ; Exact mapped bytes B8 4C 1D 00 00: mov eax, 0x1d4c
        __asm _emit 0xb8
        __asm _emit 0x4c
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 28 0D 00 00: mov word ptr [ecx + 0xd28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 C1 F9 FF: call 0x587b9df0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
