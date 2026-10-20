// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58796FD0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58796fd0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58998064h
        ; Exact mapped bytes E8 82 BD 16 00: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xbd
        __asm _emit 0x16
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58796fee
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 57 5C 1E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x5c
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
