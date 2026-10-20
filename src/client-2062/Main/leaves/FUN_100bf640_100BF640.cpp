// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BF640 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_100bf640_100BF640() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 2
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x100bf709
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 3ch]
        mov esi, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x100bf67b
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100bf673
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push esi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0A: je 0x100bf67b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes EB EA: jmp 0x100bf65d
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 4], 201h
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x100bf709
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [edi + 4]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, esi
        ; Exact mapped bytes 7C 72: jl 0x100bf709
        __asm _emit 0x7c
        __asm _emit 0x72
        mov eax, dword ptr [eax + 8]
        mov edx, dword ptr [edi + 8]
        cmp eax, edx
        ; Exact mapped bytes 7C 68: jl 0x100bf709
        __asm _emit 0x7c
        __asm _emit 0x68
        lea ebx, [esi + 0c5h]
        cmp ecx, ebx
        ; Exact mapped bytes 7D 5E: jge 0x100bf709
        __asm _emit 0x7d
        __asm _emit 0x5e
        lea ebx, [edx + 5bh]
        cmp eax, ebx
        ; Exact mapped bytes 7D 57: jge 0x100bf709
        __asm _emit 0x7d
        __asm _emit 0x57
        sub ecx, esi
        sub eax, edx
        sub ecx, 0ch
        sub eax, 2
        shl ecx, 6
        shl eax, 6
        test ecx, ecx
        ; Exact mapped bytes 7D 04: jge 0x100bf6ca
        __asm _emit 0x7d
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 0D: jmp 0x100bf6d7
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 3000h
        ; Exact mapped bytes 7E 05: jle 0x100bf6d7
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ecx, 3000h
        test eax, eax
        ; Exact mapped bytes 7D 04: jge 0x100bf6df
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x100bf6eb
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 1780h
        ; Exact mapped bytes 7E 05: jle 0x100bf6eb
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 1780h
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [edx + 104e8h], ecx
        mov dword ptr [edx + 104ech], eax
        mov edx, dword ptr [edx + 104e0h]
        mov dword ptr [edx + 50h], ecx
        mov dword ptr [edx + 54h], eax
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
