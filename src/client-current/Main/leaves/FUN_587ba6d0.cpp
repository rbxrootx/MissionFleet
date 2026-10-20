// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA6D0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_587ba6d0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 91 84 07 00 00: mov edx, dword ptr [ecx + 0x784]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 80 07 00 00: mov dword ptr [ecx + 0x780], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 91 88 07 00 00: mov dword ptr [ecx + 0x788], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
