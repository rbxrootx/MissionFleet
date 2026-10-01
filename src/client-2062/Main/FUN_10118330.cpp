// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x10118330 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_10118330() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 10176b2ch
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x10118350
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 FE 49 05 00: call 0x1016cd44
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x49
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 99 76 FE FF: call 0x100ff9f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ret
    }
}
