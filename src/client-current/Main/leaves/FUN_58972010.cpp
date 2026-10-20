// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58972010 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58972010() {
    __asm {
        push esi
        mov esi, ecx
        xor eax, eax
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x58972034
        __asm _emit 0x74
        __asm _emit 0x18
        mov dl, byte ptr [esi + 8]
        test dl, dl
        ; Exact mapped bytes 74 11: je 0x58972034
        __asm _emit 0x74
        __asm _emit 0x11
        push ecx
        ; Exact mapped bytes FF 15 50 C2 98 58: call dword ptr [0x5898c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        mov dword ptr [esi + 4], 0
        xor ecx, ecx
        pop esi
        test eax, eax
        sete cl
        mov al, cl
        ret
    }
}
