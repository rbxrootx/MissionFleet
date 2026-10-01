// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58943C90 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_58943c90() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a2dd8h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x58943cb0
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 F0 92 03 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 09 FE FB FF: call 0x58903ac0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58943cc7
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 7E 8F 03 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
