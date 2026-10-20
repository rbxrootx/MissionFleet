// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047740 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_10047740_10047740() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 54 24 08: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 41 74: mov dword ptr [ecx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x74
        ; Exact mapped bytes 89 51 78: mov dword ptr [ecx + 0x78], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x78
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
