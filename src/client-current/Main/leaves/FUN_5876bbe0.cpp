// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876BBE0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5876bbe0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58995afch
        ; Exact mapped bytes E8 B2 7C 19 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x7c
        __asm _emit 0x19
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5876bbfe
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 47 10 21 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
