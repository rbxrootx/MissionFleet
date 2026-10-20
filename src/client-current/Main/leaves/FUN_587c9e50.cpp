// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C9E50 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587c9e50() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5899b044h
        ; Exact mapped bytes E8 42 D0 13 00: call 0x58906ea0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd0
        __asm _emit 0x13
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587c9e6e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 D7 2D 1B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2d
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
