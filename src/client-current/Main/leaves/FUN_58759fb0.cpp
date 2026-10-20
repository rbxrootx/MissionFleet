// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58759FB0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58759fb0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 50h]
        mov dword ptr [edi], 5898d7a0h
        test esi, esi
        ; Exact mapped bytes 74 12: je 0x58759fd3
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, esi
        mov esi, dword ptr [esi + 4]
        push eax
        ; Exact mapped bytes E8 76 2C 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        test esi, esi
        ; Exact mapped bytes 75 EE: jne 0x58759fc1
        __asm _emit 0x75
        __asm _emit 0xee
        mov ecx, edi
        ; Exact mapped bytes E8 06 94 1A 00: call 0x589033e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x00
        test byte ptr [esp + 0ch], 1
        ; Exact mapped bytes 74 09: je 0x58759fea
        __asm _emit 0x74
        __asm _emit 0x09
        push edi
        ; Exact mapped bytes E8 5B 2C 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x00
    }
}
