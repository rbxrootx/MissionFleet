// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EB470 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588eb470() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a14ech
        ; Exact mapped bytes E8 22 84 01 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x588eb48e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 B7 17 09 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
