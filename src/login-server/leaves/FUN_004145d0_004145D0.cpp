// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004145D0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_004145d0_004145D0() {
    __asm {
        push esi
        mov esi, ecx
        push dword ptr [esi + 0d4h]
        ; Exact mapped bytes E8 6B F7 FF FF: call 0x413d49
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x414606
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [esi + 24h], 0
        push 1
        pop eax
        ; Exact mapped bytes 74 1D: je 0x414608
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [esi + 28h], 0
        ; Exact mapped bytes 75 17: jne 0x414608
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 4ch]
        test cl, 4
        ; Exact mapped bytes 75 0C: jne 0x414608
        __asm _emit 0x75
        __asm _emit 0x0c
        test cl, 2
        ; Exact mapped bytes 74 05: je 0x414606
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [esi + 28h], eax
        pop esi
        ret
        xor eax, eax
        pop esi
        ret
    }
}
