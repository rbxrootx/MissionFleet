// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B6EA0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587b6ea0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5899a0e8h
        ; Exact mapped bytes E8 62 BD 14 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xbd
        __asm _emit 0x14
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587b6ebe
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 87 5D 1C 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5d
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
