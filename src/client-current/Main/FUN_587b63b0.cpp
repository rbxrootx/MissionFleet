// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B63B0 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_587b63b0() {
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
        ; Exact mapped bytes C7 41 60 00 00 00 40: mov dword ptr [ecx + 0x60], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 89 41 58: mov dword ptr [ecx + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x58
        ; Exact mapped bytes 89 51 5C: mov dword ptr [ecx + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x5c
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
