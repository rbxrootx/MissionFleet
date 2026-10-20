// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876DE90 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5876de90() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58995bb0h
        ; Exact mapped bytes E8 E2 09 00 00: call 0x5876e880
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5876deae
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 97 ED 20 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xed
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
