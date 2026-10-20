// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875A100 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_5875a100() {
    __asm {
        ; Exact mapped bytes 83 B9 A4 00 00 00 00: cmp dword ptr [ecx + 0xa4], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x5875a111
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes E8 1F 72 0C 00: call 0x58821330
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
