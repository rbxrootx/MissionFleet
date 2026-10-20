// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58742BA0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58742ba0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898ce84h
        ; Exact mapped bytes E8 F2 0C 1C 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0c
        __asm _emit 0x1c
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58742bbe
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 87 A0 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
