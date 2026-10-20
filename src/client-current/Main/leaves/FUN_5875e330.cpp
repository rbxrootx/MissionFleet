// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E330 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5875e330() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898d9dch
        ; Exact mapped bytes E8 42 8C 05 00: call 0x587b6f80
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5875e34e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 F7 E8 21 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
