// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D25C0 .. +0x7E3 bytes.
extern "C" __declspec(naked) void FUN_100d25c0_100D25C0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 C9 07 00 00: je 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 14h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 22: je 0x100d25ff
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebp
        ; Exact mapped bytes 74 12: je 0x100d25f6
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
        ; Exact mapped bytes 74 0B: je 0x100d25ff
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes EB EA: jmp 0x100d25e0
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
        mov eax, dword ptr [esi + 428h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 AC 01 00 00: je 0x100d27b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        mov edx, eax
        shl edx, 4
        mov ebx, dword ptr [ecx + 4]
        add ebx, edx
        cmp eax, ebp
        ; Exact mapped bytes 0F 8E A0 00 00 00: jle 0x100d26c2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 5ch
        ; Exact mapped bytes 0F 8D 97 00 00 00: jge 0x100d26c2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 4F C8 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 428h]
        mov ecx, dword ptr [esi + 88h]
        shl edx, 4
        push edx
        ; Exact mapped bytes E8 3A C8 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 428h]
        mov ecx, dword ptr [esi + 70h]
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 28 C8 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        lea edi, [esi + 0c3ch]
        mov ebp, 32h
        mov ecx, dword ptr [esi + 428h]
        shl ecx, 4
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 0C C8 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x100d2663
        __asm _emit 0x75
        __asm _emit 0xe9
        lea edi, [esi + 8ch]
        mov ebp, 8
        mov edx, dword ptr [esi + 428h]
        mov ecx, dword ptr [edi]
        shl edx, 4
        push edx
        ; Exact mapped bytes E8 EA C7 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x100d2685
        __asm _emit 0x75
        __asm _emit 0xe9
        lea edi, [esi + 0dcch]
        mov ebp, 3
        mov eax, dword ptr [esi + 428h]
        mov ecx, dword ptr [edi]
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 C8 C7 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x100d26a7
        __asm _emit 0x75
        __asm _emit 0xe9
        mov edi, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 428h]
        test eax, eax
        ; Exact mapped bytes 0F 8D B3 00 00 00: jge 0x100d2783
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        mov edx, dword ptr [ecx + 14h]
        mov ebp, dword ptr [ecx + 1ch]
        sub edx, ebp
        add edx, 24eh
        cmp ebx, edx
        ; Exact mapped bytes 0F 8E 9A 00 00 00: jle 0x100d2783
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 8E C7 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 428h]
        mov ecx, dword ptr [esi + 88h]
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 79 C7 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 428h]
        shl ecx, 4
        push ecx
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 67 C7 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        lea edi, [esi + 0c3ch]
        mov ebp, 32h
        mov edx, dword ptr [esi + 428h]
        mov ecx, dword ptr [edi]
        shl edx, 4
        push edx
        ; Exact mapped bytes E8 4B C7 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x100d2724
        __asm _emit 0x75
        __asm _emit 0xe9
        lea edi, [esi + 8ch]
        mov ebp, 8
        mov eax, dword ptr [esi + 428h]
        mov ecx, dword ptr [edi]
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 29 C7 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x100d2746
        __asm _emit 0x75
        __asm _emit 0xe9
        lea edi, [esi + 0dcch]
        mov ebp, 3
        mov ecx, dword ptr [esi + 428h]
        shl ecx, 4
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 07 C7 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x100d2768
        __asm _emit 0x75
        __asm _emit 0xe9
        mov edi, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 68h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [eax + 14h]
        mov eax, 5ch
        sub ecx, edx
        sub eax, ebx
        lea eax, [eax + eax*2]
        lea eax, [eax + eax*4]
        shl eax, 4
        cdq
        idiv ecx
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 84h]
        lea eax, [eax + edx + 12eh]
        push eax
        ; Exact mapped bytes E8 99 C5 02 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        xor ebp, ebp
        mov eax, dword ptr [edi + 4]
        cmp eax, 202h
        ; Exact mapped bytes 0F 87 9A 04 00 00: ja 0x100d2c61
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 64 04 00 00: je 0x100d2c31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 100h
        ; Exact mapped bytes 0F 84 FD 02 00 00: je 0x100d2ad5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 100h
        ; Exact mapped bytes 0F 84 81 01 00 00: je 0x100d2964
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 85 AF 05 00 00: jne 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 8B 1D D4 92 1C 10: mov ebx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov edi, dword ptr [eax + 14h]
        mov edx, dword ptr [ebx + 4]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 3C: jl 0x100d283e
        __asm _emit 0x7c
        __asm _emit 0x3c
        mov edi, dword ptr [eax + 1ch]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 33: jge 0x100d283e
        __asm _emit 0x7d
        __asm _emit 0x33
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        mov edx, dword ptr [ebx + 8]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 24: jl 0x100d283e
        __asm _emit 0x7c
        __asm _emit 0x24
        mov edi, dword ptr [eax + 20h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 1B: jge 0x100d283e
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov dword ptr [esi + 428h], 1
        mov dword ptr [eax + 50h], 4
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        mov edx, dword ptr [ebx + 4]
        mov ecx, dword ptr [eax + 4]
        mov edi, dword ptr [eax + 14h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 3C: jl 0x100d288f
        __asm _emit 0x7c
        __asm _emit 0x3c
        mov edi, dword ptr [eax + 1ch]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 33: jge 0x100d288f
        __asm _emit 0x7d
        __asm _emit 0x33
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        mov edx, dword ptr [ebx + 8]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 24: jl 0x100d288f
        __asm _emit 0x7c
        __asm _emit 0x24
        mov edi, dword ptr [eax + 20h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 1B: jge 0x100d288f
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov dword ptr [esi + 428h], 0ffffffffh
        mov dword ptr [eax + 50h], 4
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [esi + 0c28h]
        xor edi, edi
        lea ebp, [esi + 8ch]
        mov dword ptr [esp + 14h], ecx
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 83 3A 00: cmp word ptr [edx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0x00
        ; Exact mapped bytes 74 3F: je 0x100d28ea
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [ebx + 4]
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 27: jl 0x100d28e4
        __asm _emit 0x7c
        __asm _emit 0x27
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 1E: jge 0x100d28e4
        __asm _emit 0x7d
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx + 8]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 09: jl 0x100d28e4
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7C 1C: jl 0x100d2900
        __asm _emit 0x7c
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 1D D4 92 1C 10: mov ebx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esp + 14h]
        inc edi
        add edx, 2
        add ebp, 4
        cmp edi, 8
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 7D 3E: jge 0x100d293c
        __asm _emit 0x7d
        __asm _emit 0x3e
        ; Exact mapped bytes EB A1: jmp 0x100d28a1
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov eax, dword ptr [esi + edi*4 + 8ch]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 70h]
        push edx
        ; Exact mapped bytes E8 B7 C3 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes 66 8B 84 7E 28 0C 00 00: mov ax, word ptr [esi + edi*2 + 0xc28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x28
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 89 86 38 0C 00 00: mov word ptr [esi + 0xc38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 8
        mov dword ptr [ecx + 50h], 1
        ; Exact mapped bytes 0F 85 57 04 00 00: jne 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        pop edi
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [esi + 74h]
        xor eax, eax
        ; Exact mapped bytes 66 89 86 38 0C 00 00: mov word ptr [esi + 0xc38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [esi + 0c28h]
        xor edi, edi
        lea ebp, [esi + 8ch]
        mov dword ptr [esp + 14h], eax
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 83 39 00: cmp word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 3F: je 0x100d29bf
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        mov edx, dword ptr [edx + 4]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 27: jl 0x100d29bf
        __asm _emit 0x7c
        __asm _emit 0x27
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 1E: jge 0x100d29bf
        __asm _emit 0x7d
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx + 8]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 09: jl 0x100d29bf
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7C 16: jl 0x100d29d5
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [esp + 14h]
        inc edi
        add edx, 2
        add ebp, 4
        cmp edi, 8
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 7D 4E: jge 0x100d2a21
        __asm _emit 0x7d
        __asm _emit 0x4e
        ; Exact mapped bytes EB A1: jmp 0x100d2976
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov ecx, dword ptr [esi + edi*4 + 8ch]
        mov eax, dword ptr [ecx + 4]
        cmp eax, 168h
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 15: jge 0x100d29fe
        __asm _emit 0x7d
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 94 7E 28 0C 00 00: mov dx, word ptr [esi + edi*2 + 0xc28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x7e
        __asm _emit 0x28
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 60h
        sub ecx, 5ah
        push 1
        push ecx
        push eax
        push edx
        ; Exact mapped bytes EB 15: jmp 0x100d2a13
        __asm _emit 0xeb
        __asm _emit 0x15
        sub eax, 136h
        sub ecx, 5ah
        push 0
        push ecx
        push eax
        ; Exact mapped bytes 66 8B 84 7E 28 0C 00 00: mov ax, word ptr [esi + edi*2 + 0xc28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x28
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [esi + 0e0ch]
        ; Exact mapped bytes E8 32 15 00 00: call 0x100d3f50
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 8
        ; Exact mapped bytes 75 0B: jne 0x100d2a2e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 0e0ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 7ch]
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
        ; Exact mapped bytes 7C 2A: jl 0x100d2a70
        __asm _emit 0x7c
        __asm _emit 0x2a
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 21: jge 0x100d2a70
        __asm _emit 0x7d
        __asm _emit 0x21
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 12: jl 0x100d2a70
        __asm _emit 0x7c
        __asm _emit 0x12
        mov edi, dword ptr [eax + 20h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 09: jge 0x100d2a70
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [eax + 50h], 2
        ; Exact mapped bytes EB 07: jmp 0x100d2a77
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [eax + 50h], 1
        mov eax, dword ptr [esi + 80h]
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
        ; Exact mapped bytes 7C 32: jl 0x100d2ac4
        __asm _emit 0x7c
        __asm _emit 0x32
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 29: jge 0x100d2ac4
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 1A: jl 0x100d2ac4
        __asm _emit 0x7c
        __asm _emit 0x1a
        mov edi, dword ptr [eax + 20h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 11: jge 0x100d2ac4
        __asm _emit 0x7d
        __asm _emit 0x11
        mov dword ptr [eax + 50h], 2
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [eax + 50h], 1
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        add eax, -0dh
        cmp eax, 1ah
        ; Exact mapped bytes 0F 87 B5 02 00 00: ja 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 100d2db8h]
        ; Exact mapped bytes FF 24 8D A4 2D 0D 10: jmp dword ptr [ecx*4 + 0x100d2da4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x2d
        __asm _emit 0x0d
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 68h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 10h
        cmp edx, 5ch
        ; Exact mapped bytes 0F 8D 94 02 00 00: jge 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes E8 74 C3 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 10h
        ; Exact mapped bytes E8 67 C3 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 10h
        ; Exact mapped bytes E8 5D C3 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        lea edi, [esi + 0c3ch]
        mov ebx, 32h
        mov ecx, dword ptr [edi]
        push 10h
        ; Exact mapped bytes E8 49 C3 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F1: jne 0x100d2b2e
        __asm _emit 0x75
        __asm _emit 0xf1
        lea edi, [esi + 8ch]
        mov ebx, 8
        mov ecx, dword ptr [edi]
        push 10h
        ; Exact mapped bytes E8 2F C3 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F1: jne 0x100d2b48
        __asm _emit 0x75
        __asm _emit 0xf1
        lea edi, [esi + 0dcch]
        mov ebx, 3
        mov ecx, dword ptr [edi]
        push 10h
        ; Exact mapped bytes E8 15 C3 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F1: jne 0x100d2b62
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        mov eax, dword ptr [ecx + 14h]
        mov edx, dword ptr [ecx + 1ch]
        sub eax, edx
        mov edx, dword ptr [ecx + 4]
        add eax, 24eh
        add edx, 10h
        cmp edx, eax
        ; Exact mapped bytes 0F 8E 00 02 00 00: jle 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push -10h
        ; Exact mapped bytes E8 E0 C2 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push -10h
        ; Exact mapped bytes E8 D3 C2 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push -10h
        ; Exact mapped bytes E8 C9 C2 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        lea edi, [esi + 0c3ch]
        mov ebx, 32h
        mov ecx, dword ptr [edi]
        push -10h
        ; Exact mapped bytes E8 B5 C2 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F1: jne 0x100d2bc2
        __asm _emit 0x75
        __asm _emit 0xf1
        lea edi, [esi + 8ch]
        mov ebx, 8
        mov ecx, dword ptr [edi]
        push -10h
        ; Exact mapped bytes E8 9B C2 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F1: jne 0x100d2bdc
        __asm _emit 0x75
        __asm _emit 0xf1
        lea edi, [esi + 0dcch]
        mov ebx, 3
        mov ecx, dword ptr [edi]
        push -10h
        ; Exact mapped bytes E8 81 C2 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F1: jne 0x100d2bf6
        __asm _emit 0x75
        __asm _emit 0xf1
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
        ; Exact mapped bytes E8 7A 0A 00 00: call 0x100d3690
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0a
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
        mov eax, dword ptr [esi]
        mov ecx, esi
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
        cmp dword ptr [esi + 428h], ebp
        ; Exact mapped bytes 0F 84 5C 01 00 00: je 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        mov eax, 1
        pop edi
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 80h]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [esi + 34h]
        mov dword ptr [esi + 428h], ebp
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        sub eax, 204h
        ; Exact mapped bytes 0F 84 17 01 00 00: je 0x100d2d83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 6
        ; Exact mapped bytes 0F 85 24 01 00 00: jne 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        shr eax, 10h
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        mov eax, 88888889h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 3B D5: cmp dx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd5
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 7E 17: jle 0x100d2cb7
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 0F BF FA: movsx edi, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfa
        shl edi, 3
        add eax, edi
        cmp eax, 5ch
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8D E4 00 00 00: jge 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x100d2cdb
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes 0F 8D DC 00 00 00: jge 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 0F BF FA: movsx edi, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfa
        mov edx, dword ptr [ecx + 14h]
        shl edi, 3
        sub edx, ebx
        add eax, edi
        add edx, 24eh
        cmp eax, edx
        ; Exact mapped bytes 0F 8E BE 00 00 00: jle 0x100d2d99
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 9F C1 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push edi
        ; Exact mapped bytes E8 93 C1 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push edi
        ; Exact mapped bytes E8 8A C1 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        lea ebx, [esi + 0c3ch]
        mov ebp, 32h
        mov ecx, dword ptr [ebx]
        push edi
        ; Exact mapped bytes E8 77 C1 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        add ebx, 4
        dec ebp
        ; Exact mapped bytes 75 F2: jne 0x100d2d01
        __asm _emit 0x75
        __asm _emit 0xf2
        lea ebx, [esi + 8ch]
        mov ebp, 8
        mov ecx, dword ptr [ebx]
        push edi
        ; Exact mapped bytes E8 5E C1 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        add ebx, 4
        dec ebp
        ; Exact mapped bytes 75 F2: jne 0x100d2d1a
        __asm _emit 0x75
        __asm _emit 0xf2
        lea ebx, [esi + 0dcch]
        mov ebp, 3
        mov ecx, dword ptr [ebx]
        push edi
        ; Exact mapped bytes E8 45 C1 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        add ebx, 4
        dec ebp
        ; Exact mapped bytes 75 F2: jne 0x100d2d33
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [esi + 68h]
        mov edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [eax + 1ch]
        mov ebx, dword ptr [eax + 14h]
        mov eax, 5ch
        sub ecx, ebx
        sub eax, edi
        lea eax, [eax + eax*2]
        lea eax, [eax + eax*4]
        shl eax, 4
        cdq
        idiv ecx
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 84h]
        lea eax, [eax + edx + 12eh]
        push eax
        ; Exact mapped bytes E8 D7 BF 02 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xbf
        __asm _emit 0x02
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
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 89 AE 38 0C 00 00: mov word ptr [esi + 0xc38], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 50h], ebp
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
