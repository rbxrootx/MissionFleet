// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B73D0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587b73d0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5899a134h
        ; Exact mapped bytes E8 62 07 15 00: call 0x58907b40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x07
        __asm _emit 0x15
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587b73ee
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 57 58 1C 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
