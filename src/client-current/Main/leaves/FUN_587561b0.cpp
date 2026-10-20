// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587561B0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587561b0() {
    __asm {
        ; Exact mapped bytes C7 41 28 00 00 00 00: mov dword ptr [ecx + 0x28], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 81 84 00 00 00 00 01 00 00: mov dword ptr [ecx + 0x84], 0x100
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 81 8C 00 00 00 00 00 00 40: mov dword ptr [ecx + 0x8c], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
