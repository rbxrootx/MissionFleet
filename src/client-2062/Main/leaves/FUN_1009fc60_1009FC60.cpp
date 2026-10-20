// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009FC60 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_1009fc60_1009FC60() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 4
        ; Exact mapped bytes 74 5A: je 0x1009fcc4
        __asm _emit 0x74
        __asm _emit 0x5a
        push ebx
        xor esi, esi
        lea ebx, [edi + 0a8h]
        cmp dword ptr [ebx], 0
        ; Exact mapped bytes 74 1E: je 0x1009fc96
        __asm _emit 0x74
        __asm _emit 0x1e
        mov al, byte ptr [esi + edi + 0c8h]
        dec al
        mov byte ptr [esi + edi + 0c8h], al
        ; Exact mapped bytes 75 0C: jne 0x1009fc96
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1A 0C 00 00: call 0x100a08b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        add ebx, 4
        cmp esi, 8
        ; Exact mapped bytes 7C D4: jl 0x1009fc73
        __asm _emit 0x7c
        __asm _emit 0xd4
        mov ecx, dword ptr [edi + 3ch]
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x1009fcc4
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 0E: je 0x1009fcbf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 75 EB: jne 0x1009fca7
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
