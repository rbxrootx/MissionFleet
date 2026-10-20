// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1B90 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_100f1b90_100F1B90() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 81 C1 3C 08 00 00: add ecx, 0x83c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 20 00 00 00: mov edx, 0x20
        __asm _emit 0xba
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 39 00: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 01: je 0x100f1ba3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 75 F4: jne 0x100f1b9d
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
