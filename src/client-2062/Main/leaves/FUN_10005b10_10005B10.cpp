// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10005B10 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_10005b10_10005B10() {
    __asm {
        push ebp
        mov ebp, ecx
        ; Exact mapped bytes 66 83 BD E4 00 00 00 04: cmp word ptr [ebp + 0xe4], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 4C: jne 0x10005b69
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push esi
        push edi
        mov esi, dword ptr [eax + 0ch]
        xor ebx, ebx
        xor edi, edi
        test esi, esi
        ; Exact mapped bytes 74 31: je 0x10005b61
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [esi + 330h]
        cmp dl, byte ptr [ecx + 0ch]
        ; Exact mapped bytes 75 1C: jne 0x10005b5a
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, esi
        ; Exact mapped bytes E8 8B 8A 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x10005b5a
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esi + 0e74h]
        mov eax, dword ptr [eax + 4ch]
        cmp eax, edi
        ; Exact mapped bytes 76 04: jbe 0x10005b5a
        __asm _emit 0x76
        __asm _emit 0x04
        mov ebx, esi
        mov edi, eax
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 CF: jne 0x10005b30
        __asm _emit 0x75
        __asm _emit 0xcf
        pop edi
        mov dword ptr [ebp + 1ch], ebx
        pop esi
        pop ebx
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp + 1ch], 0
        pop ebp
        mov dword ptr [ecx + 0b4h], 2
        ret
    }
}
