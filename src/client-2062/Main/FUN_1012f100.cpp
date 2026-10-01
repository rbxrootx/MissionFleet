// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x1012F100 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_1012f100() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 10176b5ch
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1012f120
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 2E DC 03 00: call 0x1016cd44
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 C9 08 FD FF: call 0x100ff9f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        ret
    }
}
