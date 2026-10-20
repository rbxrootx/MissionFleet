// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10092620 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_10092620_10092620() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 74 6C: je 0x10092697
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x1009264d
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x1009268f
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 EC: jne 0x10092639
        __asm _emit 0x75
        __asm _emit 0xec
        cmp dword ptr [edi + 4], 201h
        ; Exact mapped bytes 75 41: jne 0x10092697
        __asm _emit 0x75
        __asm _emit 0x41
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
        ; Exact mapped bytes 7C 29: jl 0x10092697
        __asm _emit 0x7c
        __asm _emit 0x29
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 20: jge 0x10092697
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 11: jl 0x10092697
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7D 08: jge 0x10092697
        __asm _emit 0x7d
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
