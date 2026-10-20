// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10094A60 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_10094a60_10094A60() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [ecx + 64h]
        push edi
        test esi, esi
        ; Exact mapped bytes 74 1F: je 0x10094a89
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 1D A0 50 17 10: mov ebx, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 70h]
        mov eax, dword ptr [eax + 6ch]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x10094a91
        __asm _emit 0x74
        __asm _emit 0x0f
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x10094a74
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
