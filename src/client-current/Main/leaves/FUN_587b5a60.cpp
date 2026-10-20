// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B5A60 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_587b5a60() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 392ch]
        push eax
        mov dword ptr [esi], 5899a044h
        ; Exact mapped bytes FF 15 88 C0 98 58: call dword ptr [0x5898c088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, esi
        ; Exact mapped bytes E8 73 E6 FF FF: call 0x587b40f0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587b5a8d
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 B8 71 1C 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x71
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
