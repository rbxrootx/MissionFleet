// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E400 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5876e400() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58995bcch
        ; Exact mapped bytes E8 92 54 19 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5876e41e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 27 E8 20 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
