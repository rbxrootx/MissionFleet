// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890E620 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5890e620() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2d58h
        ; Exact mapped bytes E8 92 54 FF FF: call 0x58903ac0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5890e63e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 07 E6 06 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
