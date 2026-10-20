// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D3660 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_100d3660_100D3660() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        test eax, eax
        mov esi, ecx
        ; Exact mapped bytes 74 18: je 0x100d3683
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esi + 0ach]
        push eax
        mov ecx, dword ptr [ecx + 0d48h]
        ; Exact mapped bytes E8 2D D8 FD FF: call 0x100b0eb0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
