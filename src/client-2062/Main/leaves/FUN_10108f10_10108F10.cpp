// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10108F10 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_10108f10_10108F10() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0f0h]
        mov dword ptr [esi + 68h], 0
        test eax, eax
        mov dword ptr [esi + 6ch], 0
        ; Exact mapped bytes 74 13: je 0x10108f3e
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 53 38 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0f0h], 0
        pop esi
        ret
    }
}
