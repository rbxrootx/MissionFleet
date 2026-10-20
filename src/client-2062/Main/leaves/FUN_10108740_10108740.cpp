// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10108740 .. +0x7CB bytes.
extern "C" __declspec(naked) void FUN_10108740_10108740() {
    __asm {
        sub esp, 0f8h
        push ebx
        mov eax, dword ptr [esp + 100h]
        push ebp
        push esi
        push edi
        push 0
        push 8000000h
        push 3
        push 0
        push 1
        push 80000000h
        mov ebp, ecx
        push eax
        mov dword ptr [esp + 48h], 0
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, eax
        cmp edi, -1
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 0F 84 79 07 00 00: je 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D B8 50 17 10: mov ebx, dword ptr [0x101750b8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 14h]
        push 0
        lea esi, [ebp + 4]
        push ecx
        push 8ch
        push esi
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp eax, 1
        ; Exact mapped bytes 0F 85 57 07 00 00: jne 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 14h]
        push 0
        push edx
        lea eax, [esp + 30h]
        push 4
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp eax, 1
        ; Exact mapped bytes 0F 85 3D 07 00 00: jne 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        xor ecx, ecx
        mov edx, 8ch
        ; Exact mapped bytes 0F BE 18: movsx ebx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x18
        add ecx, ebx
        inc eax
        dec edx
        ; Exact mapped bytes 75 F7: jne 0x101087c8
        __asm _emit 0x75
        __asm _emit 0xf7
        cmp ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 0F 85 21 07 00 00: jne 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        xor eax, eax
        mov cl, byte ptr [esi + eax]
        mov dl, byte ptr [eax + 101acde8h]
        cmp cl, dl
        ; Exact mapped bytes 0F 85 0C 07 00 00: jne 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        cmp eax, 28h
        ; Exact mapped bytes 7C E9: jl 0x101087df
        __asm _emit 0x7c
        __asm _emit 0xe9
        mov eax, dword ptr [ebp + 5ch]
        mov edx, eax
        shl edx, 5
        sub edx, eax
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 97 3F 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        mov dword ptr [ebp + 90h], eax
        ; Exact mapped bytes 0F 84 E2 06 00 00: je 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 5ch]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 7A 3F 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        mov dword ptr [ebp + 94h], eax
        ; Exact mapped bytes 0F 84 C5 06 00 00: je 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 5ch]
        mov dword ptr [esp + 24h], ebx
        cmp eax, ebx
        ; Exact mapped bytes 0F 8E 8C 06 00 00: jle 0x10108ed2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        mov dword ptr [esp + 10h], esi
        mov al, byte ptr [ebp + 58h]
        cmp al, 2
        ; Exact mapped bytes 0F 85 D8 01 00 00: jne 0x10108a2f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp + 59h], al
        ; Exact mapped bytes 75 3F: jne 0x1010889b
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp + 90h]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        add edx, ebx
        push 7ch
        push edx
        push edi
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, 1
        ; Exact mapped bytes 0F 85 7E 06 00 00: jne 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 90h]
        mov ecx, 7ch
        add eax, ebx
        xor edi, edi
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        add edi, edx
        inc eax
        dec ecx
        ; Exact mapped bytes 75 F7: jne 0x1010888d
        __asm _emit 0x75
        __asm _emit 0xf7
        ; Exact mapped bytes E9 D9 02 00 00: jmp 0x10108b74
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 0F 85 8C 01 00 00: jne 0x10108a2f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp + 59h], 1
        ; Exact mapped bytes 0F 85 82 01 00 00: jne 0x10108a2f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 14h]
        push 0
        push eax
        lea ecx, [esp + 9ch]
        push 74h
        push ecx
        push edi
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, 1
        ; Exact mapped bytes 0F 85 2E 06 00 00: jne 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 90h]
        mov al, byte ptr [esp + 94h]
        lea esi, [esp + 9ch]
        mov byte ptr [edx + ebx], al
        mov ecx, dword ptr [ebp + 90h]
        mov dword ptr [ecx + ebx + 4], 0
        mov edx, dword ptr [ebp + 90h]
        mov eax, dword ptr [esp + 98h]
        mov dword ptr [edx + ebx + 8], eax
        mov ecx, dword ptr [ebp + 90h]
        lea edi, [ecx + ebx + 0ch]
        mov ecx, 0ah
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp + 90h]
        mov al, byte ptr [esp + 0c4h]
        xor edi, edi
        mov byte ptr [edx + ebx + 34h], al
        mov ecx, dword ptr [ebp + 90h]
        mov dl, byte ptr [esp + 0c5h]
        mov byte ptr [ecx + ebx + 35h], dl
        mov eax, dword ptr [ebp + 90h]
        mov ecx, dword ptr [esp + 0c8h]
        mov dword ptr [eax + ebx + 38h], ecx
        mov edx, dword ptr [esp + 0cch]
        mov dword ptr [eax + ebx + 3ch], edx
        mov eax, dword ptr [ebp + 90h]
        mov ecx, dword ptr [esp + 0d0h]
        mov dword ptr [eax + ebx + 40h], ecx
        mov edx, dword ptr [esp + 0d4h]
        mov dword ptr [eax + ebx + 44h], edx
        mov eax, dword ptr [ebp + 90h]
        mov ecx, dword ptr [esp + 0d8h]
        mov dword ptr [eax + ebx + 48h], ecx
        mov edx, dword ptr [esp + 0dch]
        mov dword ptr [eax + ebx + 4ch], edx
        mov eax, dword ptr [ebp + 90h]
        mov ecx, dword ptr [esp + 0e0h]
        mov dword ptr [eax + ebx + 50h], ecx
        mov edx, dword ptr [esp + 0e4h]
        mov dword ptr [eax + ebx + 54h], edx
        mov eax, dword ptr [ebp + 90h]
        mov ecx, dword ptr [esp + 0e8h]
        mov dword ptr [eax + ebx + 58h], ecx
        mov edx, dword ptr [ebp + 90h]
        mov dword ptr [edx + ebx + 5ch], 100h
        mov eax, dword ptr [ebp + 90h]
        mov dword ptr [eax + ebx + 60h], edi
        mov ecx, dword ptr [ebp + 90h]
        mov dword ptr [ecx + ebx + 64h], edi
        mov edx, dword ptr [ebp + 90h]
        mov dword ptr [edx + ebx + 68h], edi
        mov eax, dword ptr [ebp + 90h]
        mov dword ptr [eax + ebx + 6ch], edi
        mov ecx, dword ptr [ebp + 90h]
        mov dword ptr [ecx + ebx + 70h], edi
        mov edx, dword ptr [ebp + 90h]
        mov dword ptr [edx + ebx + 74h], edi
        mov eax, dword ptr [ebp + 90h]
        mov ecx, dword ptr [esp + 104h]
        mov dword ptr [eax + ebx + 78h], ecx
        lea eax, [esp + 94h]
        mov ecx, 74h
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        add edi, edx
        inc eax
        dec ecx
        ; Exact mapped bytes 75 F7: jne 0x10108a21
        __asm _emit 0x75
        __asm _emit 0xf7
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x10108b70
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 14h]
        push 0
        push eax
        lea ecx, [esp + 40h]
        push 5ch
        push ecx
        push edi
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, 1
        ; Exact mapped bytes 0F 85 AF 04 00 00: jne 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 90h]
        mov al, byte ptr [esp + 38h]
        lea esi, [esp + 40h]
        mov byte ptr [edx + ebx], al
        mov ecx, dword ptr [ebp + 90h]
        mov edx, dword ptr [esp + 3ch]
        mov dword ptr [ecx + ebx + 8], edx
        mov eax, dword ptr [ebp + 90h]
        mov ecx, 0ah
        lea edi, [eax + ebx + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 90h]
        mov dl, byte ptr [esp + 68h]
        xor edi, edi
        mov byte ptr [ecx + ebx + 34h], dl
        mov eax, dword ptr [ebp + 90h]
        mov cl, byte ptr [esp + 69h]
        mov byte ptr [eax + ebx + 35h], cl
        mov edx, dword ptr [ebp + 90h]
        mov eax, dword ptr [esp + 6ch]
        mov dword ptr [edx + ebx + 38h], eax
        mov ecx, dword ptr [esp + 70h]
        mov dword ptr [edx + ebx + 3ch], ecx
        mov edx, dword ptr [ebp + 90h]
        mov eax, dword ptr [esp + 74h]
        mov dword ptr [edx + ebx + 40h], eax
        mov ecx, dword ptr [esp + 78h]
        mov dword ptr [edx + ebx + 44h], ecx
        mov edx, dword ptr [ebp + 90h]
        mov eax, dword ptr [esp + 7ch]
        mov dword ptr [edx + ebx + 48h], eax
        mov ecx, dword ptr [esp + 80h]
        mov dword ptr [edx + ebx + 4ch], ecx
        mov edx, dword ptr [ebp + 90h]
        mov eax, dword ptr [esp + 84h]
        mov dword ptr [edx + ebx + 50h], eax
        mov ecx, dword ptr [esp + 88h]
        mov dword ptr [edx + ebx + 54h], ecx
        mov edx, dword ptr [ebp + 90h]
        mov eax, dword ptr [esp + 8ch]
        mov dword ptr [edx + ebx + 58h], eax
        mov ecx, dword ptr [ebp + 90h]
        mov dword ptr [ecx + ebx + 5ch], 100h
        mov edx, dword ptr [ebp + 90h]
        mov dword ptr [edx + ebx + 60h], edi
        mov eax, dword ptr [ebp + 90h]
        mov dword ptr [eax + ebx + 64h], edi
        mov ecx, dword ptr [ebp + 90h]
        mov dword ptr [ecx + ebx + 68h], edi
        mov edx, dword ptr [ebp + 90h]
        mov dword ptr [edx + ebx + 6ch], edi
        mov eax, dword ptr [ebp + 90h]
        mov dword ptr [eax + ebx + 70h], edi
        mov ecx, dword ptr [ebp + 90h]
        mov edx, dword ptr [esp + 90h]
        lea eax, [esp + 38h]
        mov dword ptr [ecx + ebx + 78h], edx
        mov ecx, 5ch
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        add edi, edx
        inc eax
        dec ecx
        ; Exact mapped bytes 75 F7: jne 0x10108b67
        __asm _emit 0x75
        __asm _emit 0xf7
        mov esi, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 1ch]
        lea eax, [esp + 14h]
        push 0
        push eax
        lea ecx, [esp + 30h]
        push 4
        push ecx
        push edx
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, 1
        ; Exact mapped bytes 0F 85 66 03 00 00: jne 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [esp + 28h]
        ; Exact mapped bytes 0F 85 5C 03 00 00: jne 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 90h]
        lea ecx, [eax + ebx]
        mov eax, dword ptr [eax + ebx + 3ch]
        imul eax, dword ptr [ecx + 38h]
        lea ecx, [eax + eax*4]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 E3 3B 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 94h]
        add esp, 4
        mov dword ptr [edx + esi], eax
        mov eax, dword ptr [ebp + 94h]
        mov edx, dword ptr [eax + esi]
        test edx, edx
        ; Exact mapped bytes 0F 84 11 03 00 00: je 0x10108eeb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp + 58h]
        mov dword ptr [esp + 18h], 0
        cmp al, 1
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x10108cea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 90h]
        mov edx, dword ptr [ecx + ebx + 3ch]
        lea eax, [ecx + ebx]
        imul edx, dword ptr [eax + 38h]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 99 3B 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        test edi, edi
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes 0F 84 E4 02 00 00: je 0x10108efc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 90h]
        lea ecx, [esp + 14h]
        add eax, ebx
        push 0
        push ecx
        mov edx, dword ptr [eax + 3ch]
        imul edx, dword ptr [eax + 38h]
        mov eax, dword ptr [esp + 24h]
        shl edx, 2
        push edx
        push edi
        push eax
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 90h]
        xor edx, edx
        lea eax, [ecx + ebx]
        mov ecx, dword ptr [ecx + ebx + 3ch]
        imul ecx, dword ptr [eax + 38h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 83 00 00 00: jle 0x10108cdc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esp + 10h], edi
        mov ecx, dword ptr [esp + 10h]
        mov edi, dword ptr [esp + 18h]
        add eax, 14h
        mov ecx, dword ptr [ecx]
        add edi, ecx
        mov dword ptr [esp + 18h], edi
        mov edi, dword ptr [ebp + 94h]
        mov edi, dword ptr [edi + esi]
        mov dword ptr [edi + eax - 14h], ecx
        mov ecx, dword ptr [ebp + 94h]
        mov edi, dword ptr [ecx + esi]
        xor ecx, ecx
        inc edx
        mov dword ptr [edi + eax - 10h], ecx
        mov edi, dword ptr [ebp + 94h]
        mov edi, dword ptr [edi + esi]
        mov dword ptr [edi + eax - 0ch], 100h
        mov edi, dword ptr [ebp + 94h]
        mov edi, dword ptr [edi + esi]
        mov dword ptr [edi + eax - 8], ecx
        mov edi, dword ptr [ebp + 94h]
        mov edi, dword ptr [edi + esi]
        mov dword ptr [edi + eax - 4], ecx
        mov ecx, dword ptr [esp + 10h]
        add ecx, 4
        mov dword ptr [esp + 10h], ecx
        mov ecx, dword ptr [ebp + 90h]
        add ecx, ebx
        mov edi, dword ptr [ecx + 3ch]
        imul edi, dword ptr [ecx + 38h]
        cmp edx, edi
        ; Exact mapped bytes 7C 87: jl 0x10108c5f
        __asm _emit 0x7c
        __asm _emit 0x87
        mov edi, dword ptr [esp + 20h]
        push edi
        ; Exact mapped bytes E8 A2 3A 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 AC 01 00 00: jmp 0x10108e96
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 0F 85 A4 01 00 00: jne 0x10108e96
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp + 59h]
        cmp al, 1
        ; Exact mapped bytes 75 79: jne 0x10108d72
        __asm _emit 0x75
        __asm _emit 0x79
        mov eax, dword ptr [ebp + 90h]
        push 0
        lea ecx, [eax + ebx]
        lea eax, [esp + 18h]
        push eax
        mov eax, dword ptr [ecx + 3ch]
        imul eax, dword ptr [ecx + 38h]
        lea ecx, [eax + eax*4]
        shl ecx, 2
        push ecx
        push edx
        mov edx, dword ptr [esp + 2ch]
        push edx
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 90h]
        xor ecx, ecx
        add eax, ebx
        mov edx, dword ptr [eax + 3ch]
        imul edx, dword ptr [eax + 38h]
        test edx, edx
        ; Exact mapped bytes 0F 8E 5A 01 00 00: jle 0x10108e96
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp + 94h]
        mov eax, dword ptr [eax + esi]
        add eax, edx
        add edx, 14h
        mov edi, dword ptr [eax]
        mov dword ptr [eax + 10h], 0
        mov eax, dword ptr [ebp + 90h]
        add dword ptr [esp + 18h], edi
        add eax, ebx
        inc ecx
        mov edi, dword ptr [eax + 3ch]
        imul edi, dword ptr [eax + 38h]
        cmp ecx, edi
        ; Exact mapped bytes 7C D1: jl 0x10108d3e
        __asm _emit 0x7c
        __asm _emit 0xd1
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x10108e96
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x10108e96
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 90h]
        mov edx, dword ptr [ecx + ebx + 74h]
        push edx
        ; Exact mapped bytes E8 16 3A 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 90h]
        add esp, 4
        mov edi, eax
        lea eax, [esp + 14h]
        mov edx, dword ptr [ecx + ebx + 74h]
        push 0
        push eax
        mov eax, dword ptr [esp + 24h]
        push edx
        push edi
        push eax
        mov dword ptr [esp + 34h], edi
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 90h]
        mov edx, edi
        add eax, ebx
        xor ecx, ecx
        mov edi, dword ptr [eax + 3ch]
        imul edi, dword ptr [eax + 38h]
        test edi, edi
        ; Exact mapped bytes 7E 59: jle 0x10108e21
        __asm _emit 0x7e
        __asm _emit 0x59
        mov edi, dword ptr [edx]
        add edx, 4
        test edi, edi
        ; Exact mapped bytes 76 3A: jbe 0x10108e0b
        __asm _emit 0x76
        __asm _emit 0x3a
        lea eax, [ecx + ecx*4]
        mov dword ptr [esp + 30h], edi
        shl eax, 2
        add ecx, edi
        mov dword ptr [esp + 34h], ecx
        mov ecx, dword ptr [ebp + 94h]
        mov edi, dword ptr [ecx + esi]
        mov ecx, 5
        add edi, eax
        mov esi, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 30h]
        mov esi, dword ptr [esp + 10h]
        add eax, 14h
        dec ecx
        mov dword ptr [esp + 30h], ecx
        ; Exact mapped bytes 75 DA: jne 0x10108de1
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [ebp + 90h]
        add edx, 14h
        add eax, ebx
        mov edi, dword ptr [eax + 3ch]
        imul edi, dword ptr [eax + 38h]
        cmp ecx, edi
        ; Exact mapped bytes 7C A7: jl 0x10108dc8
        __asm _emit 0x7c
        __asm _emit 0xa7
        mov ecx, dword ptr [ebp + 90h]
        xor eax, eax
        mov ecx, dword ptr [ecx + ebx + 74h]
        test ecx, ecx
        ; Exact mapped bytes 76 17: jbe 0x10108e48
        __asm _emit 0x76
        __asm _emit 0x17
        mov edx, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F BE 14 10: movsx edx, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x10
        add edi, edx
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 72 E9: jb 0x10108e31
        __asm _emit 0x72
        __asm _emit 0xe9
        mov eax, dword ptr [esp + 20h]
        push eax
        ; Exact mapped bytes E8 32 39 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 90h]
        add esp, 4
        xor ecx, ecx
        lea eax, [edx + ebx]
        mov edx, dword ptr [edx + ebx + 3ch]
        imul edx, dword ptr [eax + 38h]
        test edx, edx
        ; Exact mapped bytes 7E 2A: jle 0x10108e96
        __asm _emit 0x7e
        __asm _emit 0x2a
        xor edx, edx
        mov eax, dword ptr [ebp + 94h]
        inc ecx
        add edx, 14h
        mov eax, dword ptr [eax + esi]
        mov dword ptr [eax + edx - 4], 0
        mov eax, dword ptr [ebp + 90h]
        add eax, ebx
        mov edi, dword ptr [eax + 3ch]
        imul edi, dword ptr [eax + 38h]
        cmp ecx, edi
        ; Exact mapped bytes 7C D8: jl 0x10108e6e
        __asm _emit 0x7c
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 90h]
        mov eax, dword ptr [esp + 18h]
        cmp eax, dword ptr [ecx + ebx + 78h]
        ; Exact mapped bytes 75 56: jne 0x10108efc
        __asm _emit 0x75
        __asm _emit 0x56
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [ebp + 5ch]
        mov edi, dword ptr [esp + 1ch]
        add edx, eax
        mov eax, dword ptr [esp + 24h]
        add esi, 4
        inc eax
        add ebx, 7ch
        cmp eax, ecx
        mov dword ptr [esp + 2ch], edx
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 0F 8C 7A F9 FF FF: jl 0x1010884c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0f8h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 94h]
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [edx + eax*4], 0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0f8h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
