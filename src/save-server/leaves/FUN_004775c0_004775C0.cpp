// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004775C0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_004775c0_004775C0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes E8 E6 92 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes E8 0E 00 00 00: call 0x4775e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes E8 77 93 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
