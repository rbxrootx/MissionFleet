// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003E290 .. +0xAB9 bytes.
extern "C" __declspec(naked) void FUN_1003e290_1003E290() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        push ebx
        push ebp
        mov ebp, eax
        and ebp, 0ffh
        mov ebx, ecx
        push esi
        push edi
        lea ecx, [ebp - 1]
        mov dword ptr [esp + 10h], ebx
        cmp ecx, 2eh
        ; Exact mapped bytes 0F 87 8E 0A 00 00: ja 0x1003ed41
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [ecx + 1003ed8ch]
        ; Exact mapped bytes FF 24 95 4C ED 03 10: jmp dword ptr [edx*4 + 0x1003ed4c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x10
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 4]
        mov cl, byte ptr [eax + 31ch]
        push ecx
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 27 0D 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes 66 89 43 04: mov word ptr [ebx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea esi, [ebx + 8]
        mov edi, 20h
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1003e2fa
        __asm _emit 0x74
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 06 23 00 00: call 0x10040600
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 ED: jne 0x1003e2ed
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, ebx
        mov eax, dword ptr [edx + 4]
        mov al, byte ptr [eax + 31ch]
        push eax
        push ebp
        ; Exact mapped bytes E8 E8 0C 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes 66 89 43 04: mov word ptr [ebx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea esi, [ebx + 8]
        mov edi, 20h
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1003e339
        __asm _emit 0x74
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 C7 22 00 00: call 0x10040600
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 ED: jne 0x1003e32c
        __asm _emit 0x75
        __asm _emit 0xed
        mov dword ptr [ebx + 8ch], 40000000h
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ecx, ebx
        mov dl, byte ptr [eax + 31ch]
        push edx
        push ebp
        ; Exact mapped bytes E8 9F 0C 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes 66 89 43 04: mov word ptr [ebx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebx + 94h], 40000000h
        lea edx, [ebx + 8]
        mov esi, 20h
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1003e397
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebx + 94h]
        mov dword ptr [eax + 114h], ecx
        mov dword ptr [eax + 110h], ecx
        add edx, 4
        dec esi
        ; Exact mapped bytes 75 E2: jne 0x1003e37f
        __asm _emit 0x75
        __asm _emit 0xe2
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebx + 98h], 40000000h
        lea edx, [ebx + 8]
        mov esi, 20h
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1003e3cf
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebx + 98h]
        mov dword ptr [eax + 11ch], ecx
        mov dword ptr [eax + 118h], ecx
        add edx, 4
        dec esi
        ; Exact mapped bytes 75 E2: jne 0x1003e3b7
        __asm _emit 0x75
        __asm _emit 0xe2
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        xor ebx, ebx
        cmp al, 17h
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        setne bl
        mov ecx, dword ptr [eax + 4]
        push 0
        push 14h
        mov dword ptr [ecx + 31ch], ebx
        ; Exact mapped bytes 66 83 76 04 03: xor word ptr [esi + 4], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x03
        mov ecx, esi
        ; Exact mapped bytes E8 FA 0B 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 15h
        mov ecx, esi
        ; Exact mapped bytes E8 EF 0B 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 14h
        mov ecx, esi
        ; Exact mapped bytes E8 E4 0B 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 15h
        mov ecx, esi
        ; Exact mapped bytes E8 D9 0B 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebp, ebp
        mov ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ecx + 1008h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 01 09 00 00: jle 0x1003ed41
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 04: jmp 0x1003e448
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 10h]
        mov esi, dword ptr [esi + eax*4 + 8]
        test esi, esi
        ; Exact mapped bytes 74 7E: je 0x1003e4ce
        __asm _emit 0x74
        __asm _emit 0x7e
        mov edi, dword ptr [ecx + eax*4 + 0cf4h]
        xor edx, edx
        mov dl, byte ptr [eax + ecx + 1d8h]
        cmp edx, ebx
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x1003e4f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 2F: je 0x1003e49b
        __asm _emit 0x74
        __asm _emit 0x2f
        mov dl, byte ptr [edi]
        and edx, 0fh
        ; Exact mapped bytes 66 83 FA 05: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 75 24: jne 0x1003e49b
        __asm _emit 0x75
        __asm _emit 0x24
        mov dword ptr [esi + 243d0h], 1
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 5
        ; Exact mapped bytes E8 62 77 FD FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esi + 244e0h], eax
        push 5
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x1003e580
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + eax*4 + 0cf4h]
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x1003e4ce
        __asm _emit 0x74
        __asm _emit 0x28
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x1003e4ce
        __asm _emit 0x75
        __asm _emit 0x1d
        mov dword ptr [esi + 38f8h], 1
        push 5
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 28 77 FD FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esi + 3a3ch], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc ebp
        mov eax, ebp
        mov ecx, dword ptr [edx + 4]
        and eax, 0ffffh
        cmp eax, dword ptr [ecx + 1008h]
        ; Exact mapped bytes 0F 8C 59 FF FF FF: jl 0x1003e444
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x1003e596
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [edi]
        and edx, 0fh
        ; Exact mapped bytes 66 83 FA 05: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x1003e596
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 8B 92 90 00 00 00: mov dx, word ptr [edx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test dl, 10h
        ; Exact mapped bytes 74 24: je 0x1003e53e
        __asm _emit 0x74
        __asm _emit 0x24
        cmp byte ptr [eax + ecx + 1f8h], 0
        ; Exact mapped bytes 75 1A: jne 0x1003e53e
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esi + 0f4h]
        mov dword ptr [esi + 243d0h], 2
        neg eax
        sbb eax, eax
        add eax, 7
        push eax
        ; Exact mapped bytes EB 2F: jmp 0x1003e56d
        __asm _emit 0xeb
        __asm _emit 0x2f
        test dl, 20h
        ; Exact mapped bytes 0F 84 30 FF FF FF: je 0x1003e477
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [eax + ecx + 1f8h], 1
        ; Exact mapped bytes 0F 85 22 FF FF FF: jne 0x1003e477
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0f4h]
        mov dword ptr [esi + 243d0h], 2
        neg ecx
        sbb ecx, ecx
        add ecx, 7
        push ecx
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 78 76 FD FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esi + 244e0h], eax
        push 9
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 65 76 FD FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esi + 244e4h], eax
        ; Exact mapped bytes E9 38 FF FF FF: jmp 0x1003e4ce
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ecx + eax*4 + 0cf4h]
        test edi, edi
        ; Exact mapped bytes 0F 84 29 FF FF FF: je 0x1003e4ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dl, byte ptr [edi]
        and edx, 0fh
        ; Exact mapped bytes 66 83 FA 06: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 1A FF FF FF: jne 0x1003e4ce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 8B 92 90 00 00 00: mov dx, word ptr [edx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test dl, 10h
        ; Exact mapped bytes 74 27: je 0x1003e5eb
        __asm _emit 0x74
        __asm _emit 0x27
        cmp byte ptr [eax + ecx + 1f8h], 0
        ; Exact mapped bytes 75 1D: jne 0x1003e5eb
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [esi + 0f4h]
        mov dword ptr [esi + 38f8h], 2
        neg eax
        sbb eax, eax
        add eax, 7
        push eax
        ; Exact mapped bytes E9 D2 FE FF FF: jmp 0x1003e4bd
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test dl, 20h
        ; Exact mapped bytes 0F 84 BD FE FF FF: je 0x1003e4b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [eax + ecx + 1f8h], 1
        ; Exact mapped bytes 0F 85 AF FE FF FF: jne 0x1003e4b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0f4h]
        mov dword ptr [esi + 38f8h], 2
        neg ecx
        sbb ecx, ecx
        add ecx, 7
        push ecx
        ; Exact mapped bytes E9 9E FE FF FF: jmp 0x1003e4bd
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebx + 93h]
        ; Exact mapped bytes 66 33 C9: xor cx, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc9
        and al, 10h
        mov dword ptr [esp + 18h], 0
        mov cl, al
        ; Exact mapped bytes 66 89 8B 90 00 00 00: mov word ptr [ebx + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 1008h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E EF 06 00 00: jle 0x1003ed41
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        mov ebp, 2
        mov edi, dword ptr [ebx + esi*4 + 8]
        test edi, edi
        ; Exact mapped bytes 0F 84 9E 01 00 00: je 0x1003e803
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esi + eax + 1f8h]
        test cl, cl
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x1003e767
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 31ch]
        xor ecx, ecx
        mov cl, byte ptr [esi + eax + 1d8h]
        cmp ecx, edx
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x1003e767
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + esi*4 + 0cf4h]
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x1003e6f2
        __asm _emit 0x74
        __asm _emit 0x5c
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 51: jne 0x1003e6f2
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, dword ptr [edi + 0f4h]
        mov dword ptr [edi + 243d0h], ebp
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        neg eax
        mov edx, dword ptr [ecx + 164h]
        sbb eax, eax
        add eax, 7
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x1003e6d7
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x1003e6d7
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x1003e6d7
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x1003e6d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 244e0h], eax
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 9
        ; Exact mapped bytes E8 04 75 FD FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [edi + 244e4h], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        add eax, 328h
        mov eax, dword ptr [eax + esi*4 + 9cch]
        test eax, eax
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x1003e803
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x1003e803
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + esi*4 + 8]
        mov eax, dword ptr [esi + 0f4h]
        mov dword ptr [esi + 38f8h], ebp
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        neg eax
        mov edx, dword ptr [ecx + 164h]
        sbb eax, eax
        add eax, 7
        cmp edx, eax
        ; Exact mapped bytes 0F 8E B2 00 00 00: jle 0x1003e7fb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C AA 00 00 00: jl 0x1003e7fb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x1003e7fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x1003e7fd
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + esi*4 + 0cf4h]
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x1003e7ad
        __asm _emit 0x74
        __asm _emit 0x3b
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 30: jne 0x1003e7ad
        __asm _emit 0x75
        __asm _emit 0x30
        mov dword ptr [edi + 243d0h], 1
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 5
        ; Exact mapped bytes E8 5C 74 FD FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [edi + 244e0h], eax
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 5
        ; Exact mapped bytes E8 49 74 FD FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [edi + 244e4h], eax
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 4]
        add eax, 328h
        mov eax, dword ptr [eax + esi*4 + 9cch]
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x1003e803
        __asm _emit 0x74
        __asm _emit 0x3e
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 33: jne 0x1003e803
        __asm _emit 0x75
        __asm _emit 0x33
        mov esi, dword ptr [ebx + esi*4 + 8]
        mov dword ptr [esi + 38f8h], 1
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5
        ; Exact mapped bytes 7E 0F: jle 0x1003e7fb
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1003e7fb
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 02: jmp 0x1003e7fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3a3ch], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [esp + 18h]
        inc esi
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [esp + 18h], esi
        and esi, 0ffffh
        cmp esi, dword ptr [eax + 1008h]
        ; Exact mapped bytes 0F 8C 32 FE FF FF: jl 0x1003e659
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dl, byte ptr [ebx + 93h]
        ; Exact mapped bytes 66 33 C0: xor ax, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc0
        and dl, 20h
        mov dword ptr [esp + 18h], 0
        mov al, dl
        ; Exact mapped bytes 66 89 83 90 00 00 00: mov word ptr [ebx + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 1008h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E DE 04 00 00: jle 0x1003ed41
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        mov ebp, 5
        mov edi, dword ptr [ebx + esi*4 + 8]
        test edi, edi
        ; Exact mapped bytes 0F 84 B3 01 00 00: je 0x1003ea29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esi + eax + 1f8h]
        test cl, cl
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x1003e97e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 31ch]
        xor edx, edx
        mov dl, byte ptr [esi + eax + 1d8h]
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x1003e97e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + esi*4 + 0cf4h]
        test eax, eax
        ; Exact mapped bytes 74 5F: je 0x1003e906
        __asm _emit 0x74
        __asm _emit 0x5f
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 55: jne 0x1003e906
        __asm _emit 0x75
        __asm _emit 0x55
        mov eax, dword ptr [edi + 0f4h]
        mov dword ptr [edi + 243d0h], 2
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        neg eax
        mov edx, dword ptr [ecx + 164h]
        sbb eax, eax
        add eax, 7
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x1003e8eb
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x1003e8eb
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x1003e8eb
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x1003e8ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 244e0h], eax
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 9
        ; Exact mapped bytes E8 F0 72 FD FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [edi + 244e4h], eax
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 4]
        add eax, 328h
        mov eax, dword ptr [eax + esi*4 + 9cch]
        test eax, eax
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x1003ea29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 F8 00 00 00: jne 0x1003ea29
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + esi*4 + 8]
        mov eax, dword ptr [esi + 0f4h]
        mov dword ptr [esi + 38f8h], 2
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        neg eax
        mov edx, dword ptr [ecx + 164h]
        sbb eax, eax
        add eax, 7
        cmp edx, eax
        ; Exact mapped bytes 0F 8E C1 00 00 00: jle 0x1003ea21
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C B9 00 00 00: jl 0x1003ea21
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x1003ea21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x1003ea23
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + esi*4 + 0cf4h]
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x1003e9d3
        __asm _emit 0x74
        __asm _emit 0x4a
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 40: jne 0x1003e9d3
        __asm _emit 0x75
        __asm _emit 0x40
        mov dword ptr [edi + 243d0h], 1
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x1003e9b9
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1003e9b9
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 02: jmp 0x1003e9bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 244e0h], eax
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        ; Exact mapped bytes E8 23 72 FD FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [edi + 244e4h], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        add eax, 328h
        mov eax, dword ptr [eax + esi*4 + 9cch]
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x1003ea29
        __asm _emit 0x74
        __asm _emit 0x3d
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 32: jne 0x1003ea29
        __asm _emit 0x75
        __asm _emit 0x32
        mov esi, dword ptr [ebx + esi*4 + 8]
        mov dword ptr [esi + 38f8h], 1
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x1003ea21
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1003ea21
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 02: jmp 0x1003ea23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3a3ch], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [esp + 18h]
        inc esi
        mov eax, dword ptr [edx + 4]
        mov dword ptr [esp + 18h], esi
        and esi, 0ffffh
        cmp esi, dword ptr [eax + 1008h]
        ; Exact mapped bytes 0F 8C 1D FE FF FF: jl 0x1003e86a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov al, byte ptr [ebx + 93h]
        ; Exact mapped bytes 66 33 C9: xor cx, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc9
        and al, 30h
        xor edi, edi
        mov cl, al
        ; Exact mapped bytes 66 89 8B 90 00 00 00: mov word ptr [ebx + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 1008h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E BF 02 00 00: jle 0x1003ed41
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov ebp, 2
        mov ebx, 9
        mov edx, dword ptr [esp + 10h]
        mov esi, dword ptr [edx + ecx*4 + 8]
        test esi, esi
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x1003eb92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 1d8h]
        cmp edx, dword ptr [eax + 31ch]
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x1003eb92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + ecx*4 + 0cf4h]
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x1003eb29
        __asm _emit 0x74
        __asm _emit 0x6b
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 60: jne 0x1003eb29
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [esi + 0f4h]
        mov dword ptr [esi + 243d0h], ebp
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        neg eax
        sbb eax, eax
        add eax, 7
        cmp dword ptr [edx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x1003eafd
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x1003eafd
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 18ch]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x1003eafd
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x1003eaff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 244e0h], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0F: jle 0x1003eb21
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1003eb21
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 24h]
        ; Exact mapped bytes EB 02: jmp 0x1003eb23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 244e4h], eax
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 4]
        add eax, 328h
        mov eax, dword ptr [eax + ecx*4 + 9cch]
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x1003eb92
        __asm _emit 0x74
        __asm _emit 0x51
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 46: jne 0x1003eb92
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        mov eax, dword ptr [ecx + 0f4h]
        mov dword ptr [ecx + 38f8h], ebp
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        neg eax
        mov esi, dword ptr [edx + 164h]
        sbb eax, eax
        add eax, 7
        cmp esi, eax
        ; Exact mapped bytes 7E 13: jle 0x1003eb8a
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x1003eb8a
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 18ch]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x1003eb8a
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x1003eb8c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ecx + 3a3ch], eax
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc edi
        mov ecx, edi
        mov eax, dword ptr [eax + 4]
        and ecx, 0ffffh
        cmp ecx, dword ptr [eax + 1008h]
        ; Exact mapped bytes 0F 8C DF FE FF FF: jl 0x1003ea8e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov ecx, ebx
        mov al, byte ptr [edx + 31ch]
        push eax
        push 15h
        ; Exact mapped bytes E8 30 04 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov ecx, ebx
        mov al, byte ptr [edx + 31ch]
        push eax
        push 14h
        ; Exact mapped bytes E8 17 04 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov ecx, ebx
        mov al, byte ptr [edx + 31ch]
        push eax
        push 15h
        ; Exact mapped bytes E8 F6 03 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 73 04 02: xor word ptr [ebx + 4], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x02
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebx + 8]
        mov esi, 20h
        xor edi, edi
        mov ebp, 1
        mov eax, dword ptr [edx]
        cmp eax, edi
        ; Exact mapped bytes 74 21: je 0x1003ec4d
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [eax + 14ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 11: je 0x1003ec47
        __asm _emit 0x74
        __asm _emit 0x11
        cmp ecx, ebp
        ; Exact mapped bytes 75 08: jne 0x1003ec42
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [eax + 148h], ebp
        ; Exact mapped bytes EB 0B: jmp 0x1003ec4d
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp ecx, 2
        ; Exact mapped bytes 75 06: jne 0x1003ec4d
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [eax + 148h], edi
        add edx, 4
        dec esi
        ; Exact mapped bytes 75 D3: jne 0x1003ec26
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov ecx, ebx
        mov al, byte ptr [edx + 31ch]
        push eax
        push 14h
        ; Exact mapped bytes E8 94 03 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 31 6B 04: xor word ptr [ebx + 4], bp
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x6b
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebx + 8]
        mov esi, 20h
        xor edi, edi
        mov ebp, 1
        mov eax, dword ptr [edx]
        cmp eax, edi
        ; Exact mapped bytes 74 21: je 0x1003ecae
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [eax + 14ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 11: je 0x1003eca8
        __asm _emit 0x74
        __asm _emit 0x11
        cmp ecx, ebp
        ; Exact mapped bytes 75 08: jne 0x1003eca3
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [eax + 148h], ebp
        ; Exact mapped bytes EB 0B: jmp 0x1003ecae
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp ecx, 2
        ; Exact mapped bytes 75 06: jne 0x1003ecae
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [eax + 148h], edi
        add edx, 4
        dec esi
        ; Exact mapped bytes 75 D3: jne 0x1003ec87
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov ecx, ebx
        mov al, byte ptr [edx + 31ch]
        push eax
        push 14h
        ; Exact mapped bytes E8 33 03 00 00: call 0x1003f000
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 31 6B 04: xor word ptr [ebx + 4], bp
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x6b
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebx + 94h], 0
        lea edx, [ebx + 8]
        mov esi, 20h
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1003ed03
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebx + 94h]
        mov dword ptr [eax + 114h], ecx
        mov dword ptr [eax + 110h], ecx
        add edx, 4
        dec esi
        ; Exact mapped bytes 75 E2: jne 0x1003eceb
        __asm _emit 0x75
        __asm _emit 0xe2
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebx + 98h], 0
        lea edx, [ebx + 8]
        mov esi, 20h
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1003ed3b
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebx + 98h]
        mov dword ptr [eax + 11ch], ecx
        mov dword ptr [eax + 118h], ecx
        add edx, 4
        dec esi
        ; Exact mapped bytes 75 E2: jne 0x1003ed23
        __asm _emit 0x75
        __asm _emit 0xe2
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
