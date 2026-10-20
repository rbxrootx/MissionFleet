// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0190 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_100a0190_100A0190() {
    __asm {
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 84 91 58 08 00 00: mov dword ptr [ecx + edx*4 + 0x858], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
