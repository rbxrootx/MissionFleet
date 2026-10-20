// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100438D0 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_100438d0_100438D0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 81 30 01 00 00: mov dword ptr [ecx + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 11 00 00 00: call 0x100438f0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
