// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58734C50 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58734c50() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898ca90h
        ; Exact mapped bytes E8 0E 80 24 00: call 0x5897cc6c
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58734c6e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 D7 7F 24 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x7f
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
