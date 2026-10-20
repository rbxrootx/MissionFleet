// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588359FA .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_588359fa() {
    __asm {
        ; Exact mapped bytes 80 39 00: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x58835a0a
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 81 C1 C4 22 00 00: add ecx, 0x22c4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 28 78 00 00: jmp 0x5883d232
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
