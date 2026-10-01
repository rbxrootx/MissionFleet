// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x1008D070 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_1008d070() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 18 00 00 00: call 0x1008d090
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x1008d088
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 FF F6 0D 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf6
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        ret 4
    }
}
