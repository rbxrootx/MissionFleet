// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA790 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587ba790() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5899a2f8h
        ; Exact mapped bytes E8 12 6B 1B 00: call 0x589712b0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6b
        __asm _emit 0x1b
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587ba7ae
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 97 24 1C 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
