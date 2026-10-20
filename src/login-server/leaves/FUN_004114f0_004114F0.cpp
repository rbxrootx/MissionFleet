// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004114F0 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_004114f0_004114F0() {
    __asm {
        ; Exact mapped bytes 8B 89 14 01 00 00: mov ecx, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 10: je 0x41150a
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 71 58: mov esi, dword ptr [ecx + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD EA FF FF: call 0x40ffc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 75 F2: jne 0x4114fb
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
