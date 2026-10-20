// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C6170 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_588c6170() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a0be8h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x588c6189
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 BC 6A 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x588c6199
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 AC 6A 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
    }
}
