// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1360 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_100f1360_100F1360() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0b0h]
        mov dword ptr [esi], 101765dch
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x100f1386
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 0B B4 07 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0b0h], 0
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x100f1396
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 F1 B3 07 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb3
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
