// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875DF20 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5875df20() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898d9a8h
        ; Exact mapped bytes E8 E2 F8 FF FF: call 0x5875d810
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5875df3e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 07 ED 21 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xed
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
