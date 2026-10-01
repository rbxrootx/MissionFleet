// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x100FF9F0 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_100ff9f0() {
    __asm {
        mov dword ptr [ecx], 10176774h
        mov ecx, dword ptr [ecx + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100ffa04
        __asm _emit 0x74
        __asm _emit 0x07
        push ecx
        ; Exact mapped bytes E8 41 D3 06 00: call 0x1016cd44
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        pop ecx
        ret
    }
}
