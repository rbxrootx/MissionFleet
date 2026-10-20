// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10109090 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_10109090_10109090() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 4
        ; Exact mapped bytes 74 31: je 0x101090cb
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [edi + 0ech]
        inc ecx
        mov dword ptr [edi + 0ech], ecx
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x101090cb
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 0E: je 0x101090c6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 75 EB: jne 0x101090ae
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
