// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883DA4A .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_5883da4a() {
    __asm {
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x5883da5e
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 68 70 8E 96 58: push 0x58968e70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
