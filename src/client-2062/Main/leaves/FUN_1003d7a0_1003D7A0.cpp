// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003D7A0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_1003d7a0_1003D7A0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1003d7ba
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 D4 EF 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xef
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 8], 0
        mov ecx, dword ptr [esi + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x1003d7ce
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 14h], 0
        pop esi
        ret
    }
}
