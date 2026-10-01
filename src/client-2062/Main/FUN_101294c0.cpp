// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x101294C0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_101294c0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 10176b50h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x101294e0
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 6E 38 04 00: call 0x1016cd44
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 09 65 FD FF: call 0x100ff9f0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        ret
    }
}
