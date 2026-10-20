// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000C150 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_1000c150_1000C150() {
    __asm {
        ; Exact mapped bytes C7 81 64 04 00 00 00 00 00 00: mov dword ptr [ecx + 0x464], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 81 B8 04 00 00 05 00 00 00: mov dword ptr [ecx + 0x4b8], 5
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 81 10 03 00 00 03 00 00 00: mov dword ptr [ecx + 0x310], 3
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
