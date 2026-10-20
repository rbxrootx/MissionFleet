// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875AC20 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5875ac20() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898d7e0h
        ; Exact mapped bytes E8 72 8C 1A 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5875ac3e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 07 20 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x20
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
