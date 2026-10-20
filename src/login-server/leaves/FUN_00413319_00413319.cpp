// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413319 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_00413319_00413319() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes FF 76 04: push dword ptr [esi + 4]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x04
        ; Exact mapped bytes E8 3A 92 01 00: call 0x42c55e
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B B6 BC 00 00 00: mov esi, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 06: je 0x413334
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 2A 92 01 00: call 0x42c55e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
