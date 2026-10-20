// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2060 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_004b2060_004B2060() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 38 0E 00 00: call 0x4b2ea0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 78 64 00: cmp dword ptr [eax + 0x64], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x4b2076
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes E8 2D 0E 00 00: call 0x4b2ea0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes E8 55 FF FF FF: call 0x4b1fd0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
