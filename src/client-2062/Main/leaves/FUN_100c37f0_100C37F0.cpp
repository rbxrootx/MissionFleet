// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C37F0 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_100c37f0_100C37F0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 74 7B: je 0x100c3875
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edi, dword ptr [esp + 0ch]
        push ebx
        mov eax, dword ptr [edi + 4]
        sub eax, 201h
        ; Exact mapped bytes 74 07: je 0x100c3810
        __asm _emit 0x74
        __asm _emit 0x07
        sub eax, 3
        ; Exact mapped bytes 75 3F: jne 0x100c384d
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes EB 36: jmp 0x100c3846
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov ebx, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add ebx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 7C 21: jl 0x100c3846
        __asm _emit 0x7c
        __asm _emit 0x21
        mov ebx, dword ptr [esi + 1ch]
        add ebx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 7D 18: jge 0x100c3846
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 09: jl 0x100c3846
        __asm _emit 0x7c
        __asm _emit 0x09
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 07: jl 0x100c384d
        __asm _emit 0x7c
        __asm _emit 0x07
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 3ch]
        pop ebx
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x100c3875
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100c386e
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x100c3875
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x100c3858
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
