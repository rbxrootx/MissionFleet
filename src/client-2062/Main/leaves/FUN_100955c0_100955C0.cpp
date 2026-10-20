// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100955C0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_100955c0_100955C0() {
    __asm {
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        push esi
        ; Exact mapped bytes 74 2A: je 0x100955f5
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ecx + 8ch]
        sub edx, eax
        test edx, 0fffffffch
        ; Exact mapped bytes 74 1A: je 0x100955f5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ecx + 8ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 10: je 0x100955f5
        __asm _emit 0x74
        __asm _emit 0x10
        mov dl, 1
        mov esi, dword ptr [eax]
        test byte ptr [esi + 24h], dl
        ; Exact mapped bytes 75 0B: jne 0x100955f9
        __asm _emit 0x75
        __asm _emit 0x0b
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x100955e7
        __asm _emit 0x75
        __asm _emit 0xf2
        pop esi
        xor eax, eax
        ret
        mov eax, dword ptr [eax]
        pop esi
        ret
    }
}
