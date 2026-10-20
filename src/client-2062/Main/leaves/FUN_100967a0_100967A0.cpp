// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100967A0 .. +0x433 bytes.
extern "C" __declspec(naked) void FUN_100967a0_100967A0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, 2
        push edi
        test byte ptr [esi + 24h], bl
        ; Exact mapped bytes 0F 84 15 04 00 00: je 0x10096bc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 1F: je 0x100967dc
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 83 01 00 00: je 0x1009694b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov edx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [edx + 34h]
        ; Exact mapped bytes 75 E4: jne 0x100967c0
        __asm _emit 0x75
        __asm _emit 0xe4
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [ecx + 4]
        cmp eax, 202h
        ; Exact mapped bytes 0F 87 4B 02 00 00: ja 0x10096a39
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 3D 02 00 00: je 0x10096a31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 102h
        ; Exact mapped bytes 0F 84 A8 01 00 00: je 0x100969a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0feh
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x10096969
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 85 92 03 00 00: jne 0x10096ba3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        mov edi, dword ptr [edx + 4]
        add ebp, ecx
        cmp edi, ebp
        ; Exact mapped bytes 0F 8C 27 01 00 00: jl 0x10096954
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp edi, ebp
        ; Exact mapped bytes 0F 8D 1A 01 00 00: jge 0x10096954
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        mov edi, dword ptr [edx + 8]
        add ebp, ecx
        cmp edi, ebp
        ; Exact mapped bytes 0F 8C 07 01 00 00: jl 0x10096954
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edi, eax
        ; Exact mapped bytes 0F 8D FA 00 00 00: jge 0x10096954
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x10096887
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push esi
        mov ecx, dword ptr [ecx + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [esi + 90h], 1
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 6ch]
        mov edi, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        add ebp, ecx
        cmp edi, ebp
        ; Exact mapped bytes 7C 37: jl 0x100968d0
        __asm _emit 0x7c
        __asm _emit 0x37
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp edi, ebp
        ; Exact mapped bytes 7D 2E: jge 0x100968d0
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        mov edi, dword ptr [edx + 8]
        add ebp, ecx
        cmp edi, ebp
        ; Exact mapped bytes 7C 1F: jl 0x100968d0
        __asm _emit 0x7c
        __asm _emit 0x1f
        mov ebp, dword ptr [eax + 20h]
        add ebp, ecx
        cmp edi, ebp
        ; Exact mapped bytes 7D 16: jge 0x100968d0
        __asm _emit 0x7d
        __asm _emit 0x16
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov esi, dword ptr [esi + 70h]
        pop edi
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        mov ebx, dword ptr [edx + 4]
        mov edi, dword ptr [ecx + 4]
        mov ebp, dword ptr [ecx + 14h]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 37: jl 0x10096919
        __asm _emit 0x7c
        __asm _emit 0x37
        mov ebp, dword ptr [ecx + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7D 2E: jge 0x10096919
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov edi, dword ptr [ecx + 8]
        mov ebx, dword ptr [ecx + 18h]
        mov edx, dword ptr [edx + 8]
        add ebx, edi
        cmp edx, ebx
        ; Exact mapped bytes 7C 1F: jl 0x10096919
        __asm _emit 0x7c
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 20h]
        add ecx, edi
        cmp edx, ecx
        ; Exact mapped bytes 7D 16: jge 0x10096919
        __asm _emit 0x7d
        __asm _emit 0x16
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, dword ptr [esi + 70h]
        pop edi
        or byte ptr [esi + 24h], 2
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi + 94h], 1
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        sub eax, ecx
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov dword ptr [esi + 0a0h], edx
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 3F 02 00 00: je 0x10096ba3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 02 00 00: jmp 0x10096b79
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 98h], ebp
        ; Exact mapped bytes 75 0C: jne 0x1009697d
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [esi + 94h], ebp
        ; Exact mapped bytes 0F 84 26 02 00 00: je 0x10096ba3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esi + 0a0h]
        mov ebx, dword ptr [esi + 9ch]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, edi
        sub eax, ebx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2E 83 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 FC 01 00 00: jmp 0x10096ba3
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 90h], ebp
        ; Exact mapped bytes 0F 84 F0 01 00 00: je 0x10096ba3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 8]
        cmp eax, 9
        ; Exact mapped bytes 74 2A: je 0x100969e5
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp eax, 0dh
        ; Exact mapped bytes 74 15: je 0x100969d5
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 1bh
        ; Exact mapped bytes 75 63: jne 0x10096a28
        __asm _emit 0x75
        __asm _emit 0x63
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 04 02 00 00: call 0x10096be0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov cl, byte ptr [eax + 24h]
        shr cl, 1
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 16: jne 0x10096a0b
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, dword ptr [esi + 70h]
        pop edi
        ; Exact mapped bytes 66 09 5E 24: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x24
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 70h]
        mov cl, byte ptr [edx + 24h]
        shr cl, 1
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 0D: jne 0x10096a28
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov esi, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes EB 14: jmp 0x10096a4d
        __asm _emit 0xeb
        __asm _emit 0x14
        sub eax, 204h
        ; Exact mapped bytes 74 4B: je 0x10096a8b
        __asm _emit 0x74
        __asm _emit 0x4b
        dec eax
        ; Exact mapped bytes 0F 85 5C 01 00 00: jne 0x10096ba3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 4E 01 00 00: je 0x10096ba3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esi + 0a0h]
        mov ebx, dword ptr [esi + 9ch]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, edi
        sub eax, ebx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 56 82 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi + 98h], ebp
        mov dword ptr [esi + 94h], ebp
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x10096ba3
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        mov edi, dword ptr [ecx + 4]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 0F 8C CA 00 00 00: jl 0x10096b71
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [eax + 1ch]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 0F 8D BD 00 00 00: jge 0x10096b71
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        mov edi, dword ptr [ecx + 8]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 0F 8C AA 00 00 00: jl 0x10096b71
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 20h]
        add eax, edx
        cmp edi, eax
        ; Exact mapped bytes 0F 8D 9D 00 00 00: jge 0x10096b71
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov edi, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7C 25: jl 0x10096b0b
        __asm _emit 0x7c
        __asm _emit 0x25
        mov ebx, dword ptr [eax + 1ch]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7D 1C: jge 0x10096b0b
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        mov edi, dword ptr [ecx + 8]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7C 0D: jl 0x10096b0b
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 20h]
        add eax, edx
        cmp edi, eax
        ; Exact mapped bytes 0F 8C 98 00 00 00: jl 0x10096ba3
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        mov edi, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7C 21: jl 0x10096b3e
        __asm _emit 0x7c
        __asm _emit 0x21
        mov ebx, dword ptr [eax + 1ch]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7D 18: jge 0x10096b3e
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        mov ecx, dword ptr [ecx + 8]
        add edi, edx
        cmp ecx, edi
        ; Exact mapped bytes 7C 09: jl 0x10096b3e
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [eax + 20h]
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7C 65: jl 0x10096ba3
        __asm _emit 0x7c
        __asm _emit 0x65
        mov dword ptr [esi + 98h], 1
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi + 4]
        sub edx, ecx
        mov dword ptr [esi + 9ch], edx
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [esi + 8]
        sub ecx, eax
        mov dword ptr [esi + 0a0h], ecx
        ; Exact mapped bytes EB 32: jmp 0x10096ba3
        __asm _emit 0xeb
        __asm _emit 0x32
        cmp dword ptr [esi + 90h], ebp
        ; Exact mapped bytes 74 2A: je 0x10096ba3
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 6ch]
        mov ecx, 0fffdh
        push ebp
        push 64h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [esi + 90h], ebp
        mov eax, dword ptr [esi + 3ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 1F: je 0x10096bc9
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [eax + 34h]
        mov edi, dword ptr [esp + 14h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 92 FD FF FF: je 0x1009694b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 E8: jne 0x10096bb1
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
