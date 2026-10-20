// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58CFC521 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58cfc521() {
    __asm {
        ; Exact mapped bytes 0F 85 32 BA 20 00: jne 0x58f07f59
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0xba
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes C1 F8 10: sar eax, 0x10
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 66 01 01: add word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x01
        ; Exact mapped bytes E9 58 43 1C 00: jmp 0x58ec088d
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x43
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
