// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x1010C2B0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_1010c2b0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 18 00 00 00: call 0x1010c2d0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x1010c2c8
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 BF 04 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        ret 4
    }
}
