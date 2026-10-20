// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C0830 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_100c0830_100C0830() {
    __asm {
        mov edx, ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [edx + 0c0h]
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x100c0896
        __asm _emit 0x74
        __asm _emit 0x57
        mov esi, dword ptr [edx + 0b0h]
        test esi, esi
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x100c08e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 0b8h]
        test eax, eax
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x100c08e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [eax + 47h]
        mov edi, esi
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        dec ecx
        add ecx, esi
        cmp ecx, ebx
        ; Exact mapped bytes 72 06: jb 0x100c0876
        __asm _emit 0x72
        __asm _emit 0x06
        mov dword ptr [edx + 0b8h], ebx
        mov eax, dword ptr [edx + 0a0h]
        mov ecx, dword ptr [edx + 0b8h]
        pop edi
        pop esi
        mov dword ptr [eax + 80h], ecx
        mov dword ptr [edx + 0c0h], 1
        pop ebx
        ret
        mov esi, dword ptr [edx + 0b4h]
        test esi, esi
        ; Exact mapped bytes 74 41: je 0x100c08e1
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [edx + 0bch]
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x100c08e1
        __asm _emit 0x74
        __asm _emit 0x37
        lea ebx, [eax + 47h]
        mov edi, esi
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        dec ecx
        add ecx, esi
        cmp ecx, ebx
        ; Exact mapped bytes 72 06: jb 0x100c08c5
        __asm _emit 0x72
        __asm _emit 0x06
        mov dword ptr [edx + 0bch], ebx
        mov eax, dword ptr [edx + 0a0h]
        mov ecx, dword ptr [edx + 0bch]
        mov dword ptr [eax + 80h], ecx
        mov dword ptr [edx + 0c0h], 0
        pop edi
        pop esi
        pop ebx
        ret
    }
}
