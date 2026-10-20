// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004391E8 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_004391e8_004391E8() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 83 7E 1C 00: cmp dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x4391ff
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 28 C6 43 00: call dword ptr [0x43c628]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 66 1C 00: and dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
