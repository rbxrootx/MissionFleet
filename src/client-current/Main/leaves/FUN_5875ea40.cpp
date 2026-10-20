// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875EA40 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5875ea40() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898da1ch
        ; Exact mapped bytes E8 52 4E 1A 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x4e
        __asm _emit 0x1a
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5875ea5e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 E7 E1 21 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe1
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
