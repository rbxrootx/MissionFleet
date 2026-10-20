// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749AF0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58749af0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898cfb4h
        ; Exact mapped bytes E8 62 92 1B 00: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x92
        __asm _emit 0x1b
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58749b0e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 37 31 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x31
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
