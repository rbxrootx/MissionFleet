// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CE8C0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587ce8c0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5899b450h
        ; Exact mapped bytes E8 D2 4F 13 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4f
        __asm _emit 0x13
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587ce8de
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 67 E3 1A 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe3
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
