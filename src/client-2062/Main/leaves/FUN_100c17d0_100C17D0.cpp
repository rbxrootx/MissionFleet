// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C17D0 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_100c17d0_100C17D0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 74 77: je 0x100c1852
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x100c17fd
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 5D: je 0x100c184a
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 EC: jne 0x100c17e9
        __asm _emit 0x75
        __asm _emit 0xec
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 74 4C: je 0x100c1852
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        mov edx, dword ptr [edi + 4]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 34: jl 0x100c1852
        __asm _emit 0x7c
        __asm _emit 0x34
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 2B: jge 0x100c1852
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 1C: jl 0x100c1852
        __asm _emit 0x7c
        __asm _emit 0x1c
        mov edi, dword ptr [eax + 20h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 13: jge 0x100c1852
        __asm _emit 0x7d
        __asm _emit 0x13
        mov dl, byte ptr [eax + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 08: jne 0x100c1852
        __asm _emit 0x75
        __asm _emit 0x08
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
