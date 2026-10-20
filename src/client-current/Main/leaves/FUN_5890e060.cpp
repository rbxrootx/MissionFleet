// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890E060 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5890e060() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2d20h
        ; Exact mapped bytes E8 42 58 FF FF: call 0x589038b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5890e07e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 C7 EB 06 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
