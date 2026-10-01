// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x101221F0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_101221f0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 10176b44h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x10122210
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 3E AB 04 00: call 0x1016cd44
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 D9 D7 FD FF: call 0x100ff9f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        ret
    }
}
