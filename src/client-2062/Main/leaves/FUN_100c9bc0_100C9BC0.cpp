// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C9BC0 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_100c9bc0_100C9BC0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 32 01 00 00: je 0x100c9d00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x100c9bf4
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100c9c6c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 E8: jne 0x100c9bdc
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [edi + 4]
        cmp eax, 204h
        ; Exact mapped bytes 77 75: ja 0x100c9c73
        __asm _emit 0x77
        __asm _emit 0x75
        ; Exact mapped bytes 74 4C: je 0x100c9c4c
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp eax, 100h
        ; Exact mapped bytes 74 54: je 0x100c9c5b
        __asm _emit 0x74
        __asm _emit 0x54
        cmp eax, 201h
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x100c9d00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 7C 25: jl 0x100c9c4c
        __asm _emit 0x7c
        __asm _emit 0x25
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 7D 1C: jge 0x100c9c4c
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 0D: jl 0x100c9c4c
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C B4 00 00 00: jl 0x100c9d00
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1bh
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x100c9d00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 20ah
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x100c9d00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        mov eax, 66666667h
        shr ecx, 10h
        ; Exact mapped bytes 0F BF C9: movsx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 41: jle 0x100c9cde
        __asm _emit 0x7e
        __asm _emit 0x41
        mov eax, dword ptr [esi + 88h]
        mov ecx, dword ptr [esi + 84h]
        xor edx, edx
        push ebx
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        mov ebx, ecx
        xor edx, 0aah
        xor edi, edi
        ; Exact mapped bytes 66 8B 78 0A: mov di, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x0a
        add ebx, edx
        xor edx, edx
        xor edi, 0aah
        ; Exact mapped bytes 66 8B 50 2A: mov dx, word ptr [eax + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x2a
        add edi, ebx
        xor edx, 0aah
        pop ebx
        cmp edi, edx
        ; Exact mapped bytes 7D 20: jge 0x100c9cf9
        __asm _emit 0x7d
        __asm _emit 0x20
        lea eax, [ecx + 1]
        ; Exact mapped bytes EB 0C: jmp 0x100c9cea
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 84h]
        cmp eax, 1
        ; Exact mapped bytes 7E 10: jle 0x100c9cf9
        __asm _emit 0x7e
        __asm _emit 0x10
        dec eax
        mov ecx, dword ptr [esi + 68h]
        push eax
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 27 5A 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 40 01 00 00: call 0x100c9e40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
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
