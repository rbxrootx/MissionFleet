// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x101481B0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_101481b0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 10176b74h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x101481d0
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 7E 4B 02 00: call 0x1016cd44
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 19 78 FB FF: call 0x100ff9f0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        pop esi
        ret
    }
}
