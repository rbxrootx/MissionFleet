// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875EF40 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5875ef40() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898da38h
        ; Exact mapped bytes E8 62 49 1A 00: call 0x589038b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x49
        __asm _emit 0x1a
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5875ef5e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 E7 DC 21 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xdc
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
