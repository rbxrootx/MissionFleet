// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879E170 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_5879e170_5879E170() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 74 2D: je 0x5879e1a6
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [esi + 11ch]
        cmp eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes 73 1F: jae 0x5879e1a6
        __asm _emit 0x73
        __asm _emit 0x1f
        push 2
        push 0
        push 0
        push esi
        ; Exact mapped bytes E8 0D 3E 00 00: call 0x587a1fa0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov dword ptr [esi + 184h], 0
        ; Exact mapped bytes E8 AD 86 00 00: call 0x587a6850
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        pop esi
        ret
    }
}
