// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5892DF10 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5892df10() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a2db8h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5892df30
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 70 F0 04 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 89 5B FD FF: call 0x58903ac0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5892df47
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 FE EC 04 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
