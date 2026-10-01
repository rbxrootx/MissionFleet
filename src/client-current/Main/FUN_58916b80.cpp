// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58916B80 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58916b80() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2d78h
        ; Exact mapped bytes E8 32 CF FE FF: call 0x58903ac0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58916b9e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 A7 60 06 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
