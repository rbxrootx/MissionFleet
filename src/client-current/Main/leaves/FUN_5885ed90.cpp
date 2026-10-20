// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885ED90 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_5885ed90() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 84 81 04 06 00 00: mov eax, dword ptr [ecx + eax*4 + 0x604]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
