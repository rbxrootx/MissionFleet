// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x1014DF00 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_1014df00() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 10176b80h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1014df20
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 2E EE 01 00: call 0x1016cd44
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 C9 1A FB FF: call 0x100ff9f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0xfb
        __asm _emit 0xff
        pop esi
        ret
    }
}
