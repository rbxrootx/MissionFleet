// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890BEF0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5890bef0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2bb0h
        ; Exact mapped bytes E8 92 21 00 00: call 0x5890e090
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5890bf0e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 37 0D 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0d
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
