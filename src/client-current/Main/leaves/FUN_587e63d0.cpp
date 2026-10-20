// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E63D0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_587e63d0() {
    __asm {
        ; Exact mapped bytes 8B 81 78 12 00 00: mov eax, dword ptr [ecx + 0x1278]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 44 24 04: add eax, dword ptr [esp + 4]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 81 78 12 00 00: mov dword ptr [ecx + 0x1278], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
