// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E762 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0041e762_0041E762() {
    __asm {
        push esi
        mov esi, ecx
        push 1bh
        mov dword ptr [esi], 43f9dch
        ; Exact mapped bytes E8 98 3E 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 4]
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 07: je 0x41e781
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 9E 0D 00 00: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push 1bh
        ; Exact mapped bytes E8 E3 3E 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        ret
    }
}
