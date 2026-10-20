// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B3C0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5886b3c0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5899edb8h
        ; Exact mapped bytes E8 42 78 09 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5886b3de
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 67 18 11 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x18
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
