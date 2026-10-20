// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005A9D0 .. +0x594 bytes.
extern "C" __declspec(naked) void FUN_1005a9d0_1005A9D0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 7A 05 00 00: je 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x1005aa0d
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1005aa04
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
        ; Exact mapped bytes 74 0B: je 0x1005aa0d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes EB EA: jmp 0x1005a9ee
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 200h
        ; Exact mapped bytes 0F 87 1F 03 00 00: ja 0x1005ad3a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 3D 02 00 00: je 0x1005ac5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 100h
        ; Exact mapped bytes 74 5F: je 0x1005aa87
        __asm _emit 0x74
        __asm _emit 0x5f
        dec eax
        ; Exact mapped bytes 0F 85 2B 05 00 00: jne 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 11h
        ; Exact mapped bytes 0F 85 21 05 00 00: jne 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d4ch]
        mov eax, dword ptr [edx + 98h]
        mov cl, byte ptr [eax + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 0F 84 07 05 00 00: je 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d48h]
        pop edi
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0d48h]
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0d48h]
        mov eax, dword ptr [edx + 0e0h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        lea eax, [edi - 11h]
        cmp eax, 5fh
        ; Exact mapped bytes 0F 87 C4 04 00 00: ja 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 1005af7ch]
        ; Exact mapped bytes FF 24 8D 64 AF 05 10: jmp dword ptr [ecx*4 + 0x1005af64]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 220000h
        ; Exact mapped bytes E8 5B 16 06 00: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d44h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 74 05: je 0x1005aacd
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0d40h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 74 05: je 0x1005aae5
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0d50h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 74 05: je 0x1005aafd
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0d48h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 74 05: je 0x1005ab15
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes A1 D8 56 1C 10: mov eax, dword ptr [0x101c56d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F8 56 1C 10: mov edx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, edx
        ; Exact mapped bytes 75 23: jne 0x1005ab47
        __asm _emit 0x75
        __asm _emit 0x23
        xor ecx, ecx
        push 0
        ; Exact mapped bytes 66 8B 8A AA 09 00 00: mov cx, word ptr [edx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 73 1D FF FF: call 0x1004c8b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 75 1F: jne 0x1005ab70
        __asm _emit 0x75
        __asm _emit 0x1f
        push 0
        push 0
        ; Exact mapped bytes E8 56 9D FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 1A 28 FF FF: call 0x1004d380
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 0C 57 1C 10: cmp eax, dword ptr [0x101c570c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 0F 85 DE 03 00 00: jne 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 AA 09 00 00: mov ax, word ptr [edx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push eax
        ; Exact mapped bytes E8 1B 1D FF FF: call 0x1004c8b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 5A 48 00 00: call 0x1005f400
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 39 46 00 00: call 0x1005f1f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d78h]
        test eax, eax
        ; Exact mapped bytes 0F 85 8B 03 00 00: jne 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d3ch]
        test byte ptr [ecx + 24h], 1
        ; Exact mapped bytes 0F 85 7B 03 00 00: jne 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d4ch]
        mov eax, dword ptr [edx + 98h]
        mov cl, byte ptr [eax + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 0F 84 61 03 00 00: je 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d48h]
        pop edi
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 0d48h]
        or byte ptr [eax + 24h], 4
        mov edx, dword ptr [esi + 0d48h]
        mov eax, dword ptr [edx + 0e0h]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d60h]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 75 0F: jne 0x1005ac47
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp al, 5
        ; Exact mapped bytes 0F 85 0B 03 00 00: jne 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 EE 02 00 00: je 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b4ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 E0 02 00 00: je 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4ch]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 0F 84 D2 02 00 00: je 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d3ch]
        mov dword ptr [esi + 0ca8h], 0ffffffffh
        ; Exact mapped bytes E8 53 1F 08 00: call 0x100dcbf0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1f
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 B5 02 00 00: jne 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0ch]
        xor edi, edi
        mov edx, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 66 8B 52 0A: mov dx, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0a
        shr edx, 0ah
        and edx, 1fh
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 0F 86 90 02 00 00: jbe 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [eax + 4]
        mov ecx, edi
        and ecx, 0ffffh
        mov eax, dword ptr [esi + ecx*4 + 4bch]
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        add ebp, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 7C 2B: jl 0x1005ad18
        __asm _emit 0x7c
        __asm _emit 0x2b
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 7D 22: jge 0x1005ad18
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        mov edx, dword ptr [edx + 8]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 7C 09: jl 0x1005ad14
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7C 10: jl 0x1005ad24
        __asm _emit 0x7c
        __asm _emit 0x10
        mov edx, dword ptr [esp + 14h]
        inc edi
        ; Exact mapped bytes 66 3B FA: cmp di, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 0F 83 38 02 00 00: jae 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB AE: jmp 0x1005acd2
        __asm _emit 0xeb
        __asm _emit 0xae
        mov eax, dword ptr [esi + 34h]
        and edi, 0ffffh
        mov dword ptr [esi + 0ca8h], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 202h
        ; Exact mapped bytes 0F 85 15 02 00 00: jne 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 56ch]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 0F 84 05 02 00 00: je 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 8C EC 01 00 00: jl 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 0F 8D DF 01 00 00: jge 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 0F 8C CC 01 00 00: jl 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 0F 8D BF 01 00 00: jge 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 B1 01 00 00: je 0x1005af5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b4ch]
        mov ecx, dword ptr [ecx + 64h]
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        lea edx, [ecx + ecx*4]
        mov ecx, dword ptr [eax + 904h]
        shl edx, 3
        xor ecx, 0aaaaaaaah
        cmp edx, ecx
        ; Exact mapped bytes 0F 82 65 01 00 00: jb 0x1005af37
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 83ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x1005af0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 29h
        ; Exact mapped bytes 7E 12: jle 0x1005ae00
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1005ae00
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x1005ae02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 2ah
        ; Exact mapped bytes 7E 12: jle 0x1005ae29
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1005ae29
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes EB 02: jmp 0x1005ae2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 0d0ch]
        xor ebx, ebx
        xor ebp, ebp
        ; Exact mapped bytes E8 4F 6D 09 00: call 0x100f1b90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x6d
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 51: jle 0x1005ae96
        __asm _emit 0x7e
        __asm _emit 0x51
        mov edi, 83ch
        cmp edi, 8bch
        ; Exact mapped bytes 7D 44: jge 0x1005ae96
        __asm _emit 0x7d
        __asm _emit 0x44
        mov ecx, dword ptr [esi + 0d0ch]
        mov eax, dword ptr [ecx + edi]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x1005ae6c
        __asm _emit 0x74
        __asm _emit 0x0d
        test dword ptr [eax + 0e4h], 40000000h
        ; Exact mapped bytes 75 10: jne 0x1005ae7b
        __asm _emit 0x75
        __asm _emit 0x10
        inc ebx
        inc ebp
        add edi, 4
        ; Exact mapped bytes E8 1B 6D 09 00: call 0x100f1b90
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6d
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 7C D1: jl 0x1005ae4a
        __asm _emit 0x7c
        __asm _emit 0xd1
        ; Exact mapped bytes EB 1B: jmp 0x1005ae96
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 0d0ch]
        push 1
        mov edx, dword ptr [ecx + ebp*4 + 83ch]
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 3A 55 02 00: call 0x100803d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x1005af03
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [eax + 83ch]
        test ecx, ecx
        ; Exact mapped bytes 74 59: je 0x1005af03
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [eax + 0b4ch]
        mov eax, dword ptr [eax + 904h]
        xor eax, 0aaaaaaaah
        mov ecx, dword ptr [ecx + 64h]
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        lea edx, [ecx + ecx*4]
        shl edx, 3
        cmp eax, edx
        ; Exact mapped bytes 77 35: ja 0x1005af03
        __asm _emit 0x77
        __asm _emit 0x35
        mov ecx, esi
        ; Exact mapped bytes E8 1B 5E 00 00: call 0x10060cf0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 89 0D E0 56 1C 10: mov dword ptr [0x101c56e0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 0d0ch]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 48h]
        shr eax, 0ah
        push eax
        ; Exact mapped bytes E8 87 26 FF FF: call 0x1004d580
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 7
        ; Exact mapped bytes EB 35: jmp 0x1005af42
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 7
        ; Exact mapped bytes E8 90 2B FC FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 80h]
        push 0
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 12dh
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 63 2B FC FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 80h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
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
