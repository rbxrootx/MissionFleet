// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095070 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_10095070_10095070() {
    __asm {
        push ebx
        push ebp
        mov ebx, ecx
        xor ebp, ebp
        ; Exact mapped bytes 66 39 AB DE 00 00 00: cmp word ptr [ebx + 0xde], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xab
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 3F: jle 0x100950be
        __asm _emit 0x7e
        __asm _emit 0x3f
        mov ecx, dword ptr [ebx + 70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 38: je 0x100950be
        __asm _emit 0x74
        __asm _emit 0x38
        push esi
        push edi
        xor edi, edi
        mov esi, dword ptr [ecx + 50h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x10095097
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        inc edi
        cmp esi, ebp
        mov ecx, esi
        ; Exact mapped bytes 74 0B: je 0x100950a9
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 0F BF 93 DE 00 00 00: movsx edx, word ptr [ebx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x93
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, edx
        ; Exact mapped bytes 75 E1: jne 0x1009508a
        __asm _emit 0x75
        __asm _emit 0xe1
        pop edi
        mov dword ptr [ebx + 0f4h], ebp
        mov dword ptr [ebx + 70h], ebp
        mov dword ptr [ebx + 6ch], ebp
        ; Exact mapped bytes 66 89 AB DE 00 00 00: mov word ptr [ebx + 0xde], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xab
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
