// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF9B0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_100ff9b0_100FF9B0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [esi], 10176770h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x100ff9d0
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 BE CD 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 10h], 0
        mov eax, dword ptr [esi + 14h]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x100ff9e7
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 A7 CD 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 14h], 0
        pop esi
        ret
    }
}
