// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0D00 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_100a0d00_100A0D00() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x100a0df0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 90 00 00 00 05: cmp word ptr [esi + 0x90], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x100a0df0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x100a0d49
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100a0d41
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
        ; Exact mapped bytes 74 0A: je 0x100a0d49
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes EB EA: jmp 0x100a0d2b
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
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 74 57: je 0x100a0daa
        __asm _emit 0x74
        __asm _emit 0x57
        cmp eax, 201h
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x100a0df0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
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
        ; Exact mapped bytes 7C 77: jl 0x100a0df0
        __asm _emit 0x7c
        __asm _emit 0x77
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 6E: jge 0x100a0df0
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 5F: jl 0x100a0df0
        __asm _emit 0x7c
        __asm _emit 0x5f
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7D 56: jge 0x100a0df0
        __asm _emit 0x7d
        __asm _emit 0x56
        mov ecx, esi
        ; Exact mapped bytes E8 DF 00 00 00: call 0x100a0e80
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 20ba4h]
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x100a0df0
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 15 18 57 1C 10: mov edx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov al, byte ptr [edx + 24h]
        shr al, 1
        test al, 1
        ; Exact mapped bytes 75 27: jne 0x100a0df0
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [edi + 8]
        cmp eax, 59h
        ; Exact mapped bytes 74 18: je 0x100a0de9
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, 0e5h
        ; Exact mapped bytes 75 18: jne 0x100a0df0
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [edi + 0ch]
        and ecx, 0ff0000h
        cmp ecx, 150000h
        ; Exact mapped bytes 75 07: jne 0x100a0df0
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 90 00 00 00: call 0x100a0e80
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
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
