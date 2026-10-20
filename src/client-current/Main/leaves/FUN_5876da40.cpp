// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876DA40 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5876da40() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58995b94h
        ; Exact mapped bytes E8 B2 0A 00 00: call 0x5876e500
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5876da5e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 E7 F1 20 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf1
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
