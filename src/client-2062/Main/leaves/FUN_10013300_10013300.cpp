// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013300 .. +0x37E bytes.
extern "C" __declspec(naked) void FUN_10013300_10013300() {
    __asm {
        sub esp, 54h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov eax, dword ptr [esi + 18h]
        mov dword ptr [esp + 24h], esi
        cmp eax, ebp
        ; Exact mapped bytes 74 14: je 0x1001332a
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, ecx
        ; Exact mapped bytes 73 03: jae 0x10013323
        __asm _emit 0x73
        __asm _emit 0x03
        mov dword ptr [eax + 5ch], ecx
        add dword ptr [esi + 18h], 88h
        mov ecx, dword ptr [esi + 0ch]
        mov eax, dword ptr [esi + 18h]
        cmp ecx, ebp
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 20h], ebp
        ; Exact mapped bytes 0F 84 A7 01 00 00: je 0x100134e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0b12h
        ; Exact mapped bytes 66 C7 44 24 2C 42 4D: mov word ptr [esp + 0x2c], 0x4d42
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x42
        __asm _emit 0x4d
        ; Exact mapped bytes 66 89 6C 24 32: mov word ptr [esp + 0x32], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 6C 24 34: mov word ptr [esp + 0x34], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x34
        mov dword ptr [esp + 36h], 36h
        mov dword ptr [esp + 3ch], 28h
        ; Exact mapped bytes 66 C7 44 24 48 01 00: mov word ptr [esp + 0x48], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 44 24 4A 18 00: mov word ptr [esp + 0x4a], 0x18
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4a
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esp + 4ch], ebp
        mov dword ptr [esp + 54h], ecx
        mov dword ptr [esp + 58h], ecx
        mov dword ptr [esp + 5ch], ebp
        mov dword ptr [esp + 60h], ebp
        ; Exact mapped bytes EB 04: jmp 0x1001338e
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [eax + 38h]
        mov eax, edx
        mov dword ptr [esp + 40h], ecx
        lea ebp, [ecx + ecx*2 + 3]
        mov dword ptr [esp + 44h], edx
        and ebp, 0fffffffch
        imul eax, ebp
        mov ebx, eax
        lea esi, [eax + 36h]
        mov dword ptr [esp + 50h], ebx
        lea eax, [ebx + 36h]
        mov dword ptr [esp + 2eh], esi
        push eax
        ; Exact mapped bytes E8 E2 93 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x93
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, eax
        mov eax, dword ptr [esp + 30h]
        mov ecx, edx
        lea esi, [esp + 40h]
        lea edi, [edx + 0eh]
        add esp, 4
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [esp + 1ch], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes 66 8B 44 24 38: mov ax, word ptr [esp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 66 89 41 0C: mov word ptr [ecx + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        mov ecx, 0ah
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebx
        xor eax, eax
        mov esi, ecx
        lea edi, [edx + 36h]
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, esi
        mov esi, dword ptr [esp + 10h]
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov cl, byte ptr [esi + 2dh]
        lea eax, [esi + 74h]
        mov byte ptr [esp + 28h], cl
        mov cl, byte ptr [esi + 2ch]
        cmp cl, 2
        ; Exact mapped bytes 0F 85 21 01 00 00: jne 0x10013544
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 44h]
        mov dword ptr [esp + 18h], 0
        lea ecx, [esi - 1]
        imul ecx, ebp
        test esi, esi
        lea ecx, [ecx + edx + 36h]
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 7E 74: jle 0x100134b5
        __asm _emit 0x7e
        __asm _emit 0x74
        mov ebx, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 FA FF: cmp dx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 74 45: je 0x10013493
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 66 83 FA FE: cmp dx, -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xfe
        ; Exact mapped bytes 74 5D: je 0x100134b1
        __asm _emit 0x74
        __asm _emit 0x5d
        mov esi, ebx
        ; Exact mapped bytes 0F BF D2: movsx edx, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd2
        and esi, 0ffh
        imul edx, esi
        add ecx, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 03: mov dx, word ptr [eax + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x03
        lea edi, [eax + edx*2]
        add eax, 5
        lea edi, [edx + edi + 5]
        cmp eax, edi
        ; Exact mapped bytes 73 CD: jae 0x10013445
        __asm _emit 0x73
        __asm _emit 0xcd
        mov dl, byte ptr [eax]
        add eax, 3
        mov byte ptr [ecx], dl
        mov dl, byte ptr [eax - 2]
        mov byte ptr [ecx + 1], dl
        mov dl, byte ptr [eax - 1]
        mov byte ptr [ecx + 2], dl
        add ecx, esi
        cmp eax, edi
        ; Exact mapped bytes 72 E7: jb 0x10013478
        __asm _emit 0x72
        __asm _emit 0xe7
        ; Exact mapped bytes EB B2: jmp 0x10013445
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        mov esi, dword ptr [esp + 44h]
        add eax, 2
        sub ecx, ebp
        inc edx
        cmp edx, esi
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 7C 94: jl 0x10013445
        __asm _emit 0x7c
        __asm _emit 0x94
        mov edx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        inc eax
        mov esi, dword ptr [ecx + 20h]
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esi + eax*4 - 4], edx
        mov edx, dword ptr [esp + 10h]
        mov esi, dword ptr [edx + 30h]
        lea edx, [edx + esi + 74h]
        mov dword ptr [esp + 10h], edx
        mov edx, dword ptr [ecx + 0ch]
        cmp eax, edx
        ; Exact mapped bytes 0F 85 A7 FE FF FF: jne 0x1001338a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, ecx
        xor ebp, ebp
        mov ecx, dword ptr [esi + 8]
        xor eax, eax
        cmp ecx, ebp
        ; Exact mapped bytes 0F 84 76 01 00 00: je 0x1001366a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 14h], ebp
        mov ecx, dword ptr [esi + 0ch]
        lea ebx, [eax + 1]
        cmp ebx, ecx
        ; Exact mapped bytes 0F 87 34 01 00 00: ja 0x1001363a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20h]
        xor edi, edi
        mov edx, dword ptr [ecx + eax*4]
        mov ecx, dword ptr [edx + 2]
        sub ecx, 36h
        ; Exact mapped bytes 74 0E: je 0x10013524
        __asm _emit 0x74
        __asm _emit 0x0e
        add edx, 36h
        ; Exact mapped bytes 0F BE 2A: movsx ebp, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x2a
        add edi, ebp
        inc edx
        dec ecx
        ; Exact mapped bytes 75 F7: jne 0x10013519
        __asm _emit 0x75
        __asm _emit 0xf7
        xor ebp, ebp
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esp + 14h]
        cmp edi, dword ptr [edx + ecx + 8]
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x1001363a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 10h]
        mov dword ptr [edx + eax*4], 1
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x10013652
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp cl, 1
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x100135d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 44h]
        mov dword ptr [esp + 18h], 0
        lea esi, [ecx - 1]
        imul esi, ebp
        test ecx, ecx
        lea esi, [esi + edx + 36h]
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes 0F 8E 46 FF FF FF: jle 0x100134b5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 38: mov di, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x38
        ; Exact mapped bytes 66 83 FF FF: cmp di, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 05: jne 0x1001357d
        __asm _emit 0x75
        __asm _emit 0x05
        add eax, 2
        ; Exact mapped bytes EB 4A: jmp 0x100135c7
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 66 83 FF FE: cmp di, -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 84 2E FF FF FF: je 0x100134b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 03: mov cx, word ptr [eax + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x03
        lea esi, [eax + 5]
        ; Exact mapped bytes 0F BF FF: movsx edi, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xff
        lea ecx, [ecx + ecx*2]
        lea ebx, [ebx + edi*2]
        add edi, ebx
        mov ebx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 03: mov cx, word ptr [eax + 3]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x03
        add eax, ecx
        lea eax, [eax + ecx*2 + 5]
        mov ecx, dword ptr [esp + 14h]
        sub ecx, ebp
        mov dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [esp + 44h]
        mov esi, dword ptr [esp + 18h]
        inc esi
        cmp esi, ecx
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes 7C 9B: jl 0x1001356f
        __asm _emit 0x7c
        __asm _emit 0x9b
        ; Exact mapped bytes E9 DC FE FF FF: jmp 0x100134b5
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test cl, cl
        ; Exact mapped bytes 0F 85 D4 FE FF FF: jne 0x100134b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 44h]
        mov ecx, dword ptr [esp + 40h]
        lea edi, [esi - 1]
        lea ecx, [ecx + ecx*2]
        imul edi, ebp
        test esi, esi
        lea edi, [edi + edx + 36h]
        mov dword ptr [esp + 1ch], ecx
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 0F 8E AF FE FF FF: jle 0x100134b5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 14h], esi
        mov ebx, ecx
        mov esi, eax
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov ecx, dword ptr [esp + 1ch]
        mov edi, dword ptr [esp + 18h]
        mov esi, dword ptr [esp + 14h]
        add eax, ecx
        sub edi, ebp
        dec esi
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes 75 D5: jne 0x1001360a
        __asm _emit 0x75
        __asm _emit 0xd5
        ; Exact mapped bytes E9 7B FE FF FF: jmp 0x100134b5
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10h]
        push eax
        mov dword ptr [ecx + eax*4], ebp
        mov edx, dword ptr [esi + 14h]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 7E 9A 03 00: call 0x1004d0d0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 8]
        mov eax, ebx
        add edx, 10h
        cmp eax, ecx
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 0F 85 8E FE FF FF: jne 0x100134f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 14h]
        push ecx
        ; Exact mapped bytes E8 11 91 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x91
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 54h
        ret
    }
}
