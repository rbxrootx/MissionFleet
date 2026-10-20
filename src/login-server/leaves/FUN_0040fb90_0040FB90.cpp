// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FB90 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_0040fb90_0040FB90() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B1 28 0C 00 00: mov esi, dword ptr [ecx + 0xc28]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x28
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 11: je 0x40fbac
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 4E 19 00 00: call 0x4114f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B6 84 0C 00 00: mov esi, dword ptr [esi + 0xc84]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 EF: jne 0x40fb9b
        __asm _emit 0x75
        __asm _emit 0xef
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
