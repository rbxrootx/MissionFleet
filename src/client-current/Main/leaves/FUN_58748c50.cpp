// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748C50 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58748c50() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898cf7ch
        ; Exact mapped bytes E8 52 AC 1B 00: call 0x589038b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xac
        __asm _emit 0x1b
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58748c6e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 D7 3F 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x3f
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
