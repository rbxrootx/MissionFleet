// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58972440 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58972440() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a302ch
        ; Exact mapped bytes E8 52 05 00 00: call 0x589729a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 9B 04 00 00: call 0x589728f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58972465
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 E0 A7 00 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
