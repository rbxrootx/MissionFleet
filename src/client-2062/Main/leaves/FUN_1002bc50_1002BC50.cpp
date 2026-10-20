// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002BC50 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_1002bc50_1002BC50() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        xor eax, eax
        push edi
        lea ecx, [esi + 4]
        mov dword ptr [esi], 10175768h
        mov dword ptr [esi + 3ch], ebx
        mov dword ptr [esi + 38h], ebx
        mov dword ptr [esi + 34h], ebx
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 20h], ebx
        mov dword ptr [esi + 24h], ebx
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 2ch], ebx
        mov dword ptr [ecx], eax
        lea edx, [esi + 30h]
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], eax
        mov dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 66 89 1A: mov word ptr [edx], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x1a
        mov edi, dword ptr [esi + 34h]
        cmp edi, ebx
        ; Exact mapped bytes 74 15: je 0x1002bcad
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, edi
        mov edi, dword ptr [edi]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x1002bca9
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 DE 0A 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        cmp edi, ebx
        ; Exact mapped bytes 75 EB: jne 0x1002bc98
        __asm _emit 0x75
        __asm _emit 0xeb
        mov dword ptr [esi + 38h], ebx
        mov dword ptr [esi + 34h], ebx
        mov dword ptr [esi + 24h], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret
    }
}
