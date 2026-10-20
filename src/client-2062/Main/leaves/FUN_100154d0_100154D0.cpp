// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100154D0 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_100154d0_100154D0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x100155fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x1001550b
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10015503
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
        ; Exact mapped bytes 74 0A: je 0x1001550b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes EB EA: jmp 0x100154ed
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
        cmp eax, 200h
        ; Exact mapped bytes 75 7B: jne 0x10015590
        __asm _emit 0x75
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 6ch]
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
        ; Exact mapped bytes 7C 45: jl 0x10015572
        __asm _emit 0x7c
        __asm _emit 0x45
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 3C: jge 0x10015572
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 2D: jl 0x10015572
        __asm _emit 0x7c
        __asm _emit 0x2d
        mov edi, dword ptr [eax + 20h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 24: jge 0x10015572
        __asm _emit 0x7d
        __asm _emit 0x24
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x10015611
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [eax + 24h], 1
        mov ecx, dword ptr [esi + 6ch]
        push 101h
        ; Exact mapped bytes E8 F7 9B 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x9b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dl, byte ptr [eax + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x10015611
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 204h
        ; Exact mapped bytes 75 7A: jne 0x10015611
        __asm _emit 0x75
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 6ch]
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
        ; Exact mapped bytes 7C 62: jl 0x10015611
        __asm _emit 0x7c
        __asm _emit 0x62
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 59: jge 0x10015611
        __asm _emit 0x7d
        __asm _emit 0x59
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 4A: jl 0x10015611
        __asm _emit 0x7c
        __asm _emit 0x4a
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7D 41: jge 0x10015611
        __asm _emit 0x7d
        __asm _emit 0x41
        ; Exact mapped bytes 66 83 BE 9E 00 00 00 00: cmp word ptr [esi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x10015611
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 0F BF 8E A8 00 00 00: movsx ecx, word ptr [esi + 0xa8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 70h]
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes E8 DC 75 03 00: call 0x1004cbd0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 06: jne 0x10015611
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
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
