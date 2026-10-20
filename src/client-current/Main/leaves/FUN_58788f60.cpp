// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58788F60 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58788f60() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58996b40h
        ; Exact mapped bytes E8 32 A9 17 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa9
        __asm _emit 0x17
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58788f7e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 C7 3C 1F 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x3c
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
