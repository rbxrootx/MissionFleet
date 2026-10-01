// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x1011B100 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_1011b100() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 18 00 00 00: call 0x1011b120
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x1011b118
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 6F 16 05 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        ret 4
    }
}
