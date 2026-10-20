// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851BC9 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_58851bc9() {
    __asm {
        ; Exact mapped bytes 83 B9 04 04 00 00 00: cmp dword ptr [ecx + 0x404], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x58851bd8
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes B8 00 01 00 00: mov eax, 0x100
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 81 00 04 00 00: mov eax, dword ptr [ecx + 0x400]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E8 02: shr eax, 2
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
