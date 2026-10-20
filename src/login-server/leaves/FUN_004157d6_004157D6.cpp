// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004157D6 .. +0x394 bytes.
extern "C" __declspec(naked) void FUN_004157d6_004157D6() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp + 8]
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C1 FC FF FF: call 0x4154ab
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 71 03 00 00: je 0x415b63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 7C F4 FF FF: call 0x414c7e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        mov eax, dword ptr [esi]
        cmp eax, 7
        ; Exact mapped bytes 0F 87 36 02 00 00: ja 0x415a45
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F1 01 00 00: je 0x415a06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        sub eax, edi
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x415982
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x4158d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 3
        ; Exact mapped bytes 74 34: je 0x415860
        __asm _emit 0x74
        __asm _emit 0x34
        dec eax
        ; Exact mapped bytes 0F 85 28 02 00 00: jne 0x415a5b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov eax, dword ptr [eax]
        cmp dword ptr [eax - 8], edi
        ; Exact mapped bytes 0F 84 22 03 00 00: je 0x415b63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 A3 F4 FF FF: call 0x414cf1
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 DF F4 FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 03 03 00 00: jmp 0x415b63
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx], -1
        ; Exact mapped bytes 75 25: jne 0x41588a
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 B6 F4 FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes E8 71 87 01 00: call 0x42dfec
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push -1
        ; Exact mapped bytes E8 3F 87 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 D9 02 00 00: jmp 0x415b63
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes E8 E2 86 01 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov ecx, dword ptr [ecx + 8]
        cmp dword ptr [ecx + 8], edi
        ; Exact mapped bytes 74 2A: je 0x4158c8
        __asm _emit 0x74
        __asm _emit 0x2a
        mov cl, byte ptr [eax]
        xor esi, esi
        test cl, cl
        ; Exact mapped bytes 74 22: je 0x4158c8
        __asm _emit 0x74
        __asm _emit 0x22
        cmp cl, 20h
        ; Exact mapped bytes 74 04: je 0x4158af
        __asm _emit 0x74
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 06: jmp 0x4158b5
        __asm _emit 0xeb
        __asm _emit 0x06
        cmp esi, edi
        ; Exact mapped bytes 75 02: jne 0x4158b5
        __asm _emit 0x75
        __asm _emit 0x02
        mov esi, eax
        push eax
        ; Exact mapped bytes E8 32 9F 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov cl, byte ptr [eax]
        test cl, cl
        ; Exact mapped bytes 75 E4: jne 0x4158a6
        __asm _emit 0x75
        __asm _emit 0xe4
        cmp esi, edi
        ; Exact mapped bytes 74 02: je 0x4158c8
        __asm _emit 0x74
        __asm _emit 0x02
        and byte ptr [esi], cl
        mov esi, dword ptr [ebp + 10h]
        push -1
        mov ecx, esi
        ; Exact mapped bytes E8 F0 86 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x415afd
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 4
        mov eax, dword ptr [eax + 38h]
        lea ecx, [eax + ecx - 10h]
        mov eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F BF 49 04: movsx ecx, word ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x49
        __asm _emit 0x04
        add ecx, 6
        cmp ecx, 12h
        ; Exact mapped bytes 77 15: ja 0x41590d
        __asm _emit 0x77
        __asm _emit 0x15
        movzx ecx, byte ptr [ecx + 415b7eh]
        ; Exact mapped bytes FF 24 8D 6A 5B 41 00: jmp dword ptr [ecx*4 + 0x415b6a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x6a
        __asm _emit 0x5b
        __asm _emit 0x41
        __asm _emit 0x00
        inc eax
        inc eax
        ; Exact mapped bytes EB 06: jmp 0x415910
        __asm _emit 0xeb
        __asm _emit 0x06
        inc eax
        ; Exact mapped bytes EB 03: jmp 0x415910
        __asm _emit 0xeb
        __asm _emit 0x03
        add eax, 0ah
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 77 07: ja 0x41591c
        __asm _emit 0x77
        __asm _emit 0x07
        cmp eax, 100h
        ; Exact mapped bytes 73 03: jae 0x41591f
        __asm _emit 0x73
        __asm _emit 0x03
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 10h]
        lea edi, [eax + 1]
        push edi
        ; Exact mapped bytes E8 C1 86 01 00: call 0x42dfec
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 D9 86 01 00: call 0x42e00c
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        push ebx
        push edi
        push eax
        mov eax, dword ptr [esi + 4]
        push 1
        push dword ptr [ebp + 8]
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 B8 BF FF FF: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push -1
        mov edi, eax
        ; Exact mapped bytes E8 72 86 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push edi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x41596a
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 4]
        push 0
        push edi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov ecx, dword ptr [esi + 4]
        push dword ptr [ebp + 10h]
        mov edi, dword ptr [ebp + 8]
        add ecx, 40h
        ; Exact mapped bytes E8 53 7E 01 00: call 0x42d7ce
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], edi
        ; Exact mapped bytes E9 E1 01 00 00: jmp 0x415b63
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 10h]
        push dword ptr [ebp + 14h]
        mov ecx, edi
        ; Exact mapped bytes E8 5D 86 01 00: call 0x42dfec
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 76 86 01 00: call 0x42e00c
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [ebp + 8]
        dec eax
        push eax
        ; Exact mapped bytes E8 A6 F3 FF FF: call 0x414d4c
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push dword ptr [ebp + 14h]
        neg eax
        push dword ptr [ebp + 10h]
        sbb eax, eax
        push dword ptr [ebp + 1ch]
        and eax, 2
        add eax, -3
        push dword ptr [ebp + 14h]
        mov dword ptr [ebx], eax
        ; Exact mapped bytes 66 8B 46 08: mov ax, word ptr [esi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        push dword ptr [ebp + 18h]
        push 1
        push eax
        push dword ptr [ebp + 8]
        push dword ptr [esi + 2ch]
        ; Exact mapped bytes E8 20 6C 01 00: call 0x42c5f4
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        push -1
        mov ecx, edi
        mov ebx, eax
        ; Exact mapped bytes E8 E5 85 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 0C: je 0x4159f0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 4]
        push dword ptr [esi + 2ch]
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov ecx, dword ptr [esi + 4]
        mov ebx, dword ptr [ebp + 8]
        add ecx, 5ch
        push edi
        ; Exact mapped bytes E8 CF 7D 01 00: call 0x42d7ce
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], ebx
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x415b63
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 10h]
        mov eax, dword ptr [edi]
        cmp dword ptr [eax - 8], 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0C: jne 0x415a20
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 0A F3 FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x415a2a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 10 F3 FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 14h]
        mov eax, dword ptr [edi]
        mov ecx, esi
        push dword ptr [eax - 8]
        push 1
        push ebx
        push edi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A8 FA FF FF: call 0x4154e8
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1E 01 00 00: jmp 0x415b63
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0bh
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x415b16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x415b06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 65: je 0x415abd
        __asm _emit 0x74
        __asm _emit 0x65
        dec eax
        ; Exact mapped bytes 74 2C: je 0x415a87
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edi, dword ptr [ebp + 10h]
        push dword ptr [ebp + 14h]
        mov ecx, edi
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax - 8]
        push eax
        push 1
        push ebx
        push 0
        ; Exact mapped bytes E8 02 85 01 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6A FA FF FF: call 0x4154e8
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        mov ecx, edi
        ; Exact mapped bytes E9 F9 FD FF FF: jmp 0x415880
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 4
        mov eax, dword ptr [eax + 3ch]
        push 4
        lea esi, [eax + ecx - 10h]
        ; Exact mapped bytes E8 4E 7E 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 0A: je 0x415aad
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 0D 0C 9B 44 00: mov ecx, dword ptr [0x449b0c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 02: jmp 0x415aaf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 8], 0ah
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x415b63
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        mov eax, edi
        mov edx, dword ptr [ecx + 3ch]
        shl eax, 4
        dec edi
        lea eax, [edx + eax - 10h]
        mov edx, dword ptr [eax]
        mov al, byte ptr [eax + 0ch]
        push eax
        push edi
        mov dword ptr [ebp + 14h], edx
        ; Exact mapped bytes E8 D6 F1 FF FF: call 0x414cb5
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 29 F2 FF FF: call 0x414d15
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 5E: jne 0x415b4e
        __asm _emit 0x75
        __asm _emit 0x5e
        mov esi, dword ptr [ebp + 10h]
        push dword ptr [ebp + 14h]
        mov ecx, esi
        ; Exact mapped bytes E8 E7 81 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax - 8]
        mov dword ptr [ebx], eax
        ; Exact mapped bytes EB 5D: jmp 0x415b63
        __asm _emit 0xeb
        __asm _emit 0x5d
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 8]
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 40 0A 00 00: call 0x416554
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4D: jmp 0x415b63
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [esi + 18h]
        xor edi, edi
        cmp eax, edi
        ; Exact mapped bytes 75 05: jne 0x415b24
        __asm _emit 0x75
        __asm _emit 0x05
        cmp dword ptr [esi + 8], edi
        ; Exact mapped bytes 74 05: je 0x415b29
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 3A: jne 0x415b63
        __asm _emit 0x75
        __asm _emit 0x3a
        cmp dword ptr [esi + 14h], edi
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 22: je 0x415b53
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 ED F1 FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes E8 A8 84 01 00: call 0x42dfec
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push -1
        ; Exact mapped bytes E8 76 84 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebx], 0ffffffffh
        ; Exact mapped bytes EB 10: jmp 0x415b63
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 DD F1 FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx], 0fffffffdh
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
