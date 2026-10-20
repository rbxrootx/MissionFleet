// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10097170 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_10097170_10097170() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 4
        ; Exact mapped bytes 74 3F: je 0x100971b9
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [edi + 50h]
        mov eax, dword ptr [eax + 70h]
        cmp dword ptr [eax + 60h], 40000000h
        ; Exact mapped bytes 75 0C: jne 0x10097195
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [edi + 78h]
        ; Exact mapped bytes E8 8B 85 06 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100971b9
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 0E: je 0x100971b4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 75 EB: jne 0x1009719c
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
