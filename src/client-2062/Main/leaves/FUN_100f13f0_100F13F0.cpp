// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F13F0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_100f13f0_100F13F0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0b0h]
        mov dword ptr [esi], 101765dch
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x100f1416
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 7B B3 07 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb3
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0b0h], 0
        pop esi
        ret
    }
}
