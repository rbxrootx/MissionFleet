// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851BB1 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_58851bb1() {
    __asm {
        ; Exact mapped bytes 83 B9 04 04 00 00 00: cmp dword ptr [ecx + 0x404], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x58851bc0
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes B8 00 02 00 00: mov eax, 0x200
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x02
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
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
