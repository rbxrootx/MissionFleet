// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 5567 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588450B0 .. +0x1BD bytes.
extern "C" __declspec(naked) void FUN_588450b0_segment_00() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        cmp eax, 0f230h
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x58845178
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        cmp eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 75 36: jne 0x58845104
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes E8 8D D0 FF FF: call 0x58842160
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 F6 D3 FF FF: call 0x588424d0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 0d0h
        mov edi, 4
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 84 37 0C 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 5D 35 0C 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 EA: jne 0x588450e5
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 154h]
        ; Exact mapped bytes 74 5C: je 0x58845168
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp eax, dword ptr [esi + 158h]
        ; Exact mapped bytes 74 54: je 0x58845168
        __asm _emit 0x74
        __asm _emit 0x54
        cmp eax, dword ptr [esi + 15ch]
        ; Exact mapped bytes 74 4C: je 0x58845168
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp eax, dword ptr [esi + 164h]
        ; Exact mapped bytes 74 44: je 0x58845168
        __asm _emit 0x74
        __asm _emit 0x44
        cmp eax, dword ptr [esi + 160h]
        ; Exact mapped bytes 74 3C: je 0x58845168
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [esi + 168h]
        cmp eax, edx
        ; Exact mapped bytes 0F 85 2F 15 00 00: jne 0x58846669
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 178h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 21 15 00 00: je 0x58846669
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx + 64h]
        mov edx, dword ptr [edx + 80h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 18h]
        push edx
        push 0f230h
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0f232h
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x5884520d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        mov eax, dword ptr [esp + 14h]
        cmp eax, ecx
        ; Exact mapped bytes 75 37: jne 0x588451c8
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 15ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 0a4h]
        pop edi
        mov dword ptr [ecx + 50h], 1
        mov edx, dword ptr [esi + 0a8h]
        pop esi
        pop ebp
        mov dword ptr [edx + 50h], 5
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 160h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 93 14 00 00: jne 0x58846669
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 15ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 0a4h]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [esi + 0a8h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 50h], 5
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0f231h
        ; Exact mapped bytes 75 2A: jne 0x5884523e
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esi + 168h]
        mov dword ptr [esi + 17ch], eax
        mov dword ptr [esi + 178h], edx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0f765h
        ; Exact mapped bytes 0F 85 EF 03 00 00: jne 0x58845638
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0f0h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x58845330
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0d0h]
        mov edx, dword ptr [esp + 14h]
        lea ecx, [esi + 0d0h]
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x58845270
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58845270 .. +0x1402 bytes.
extern "C" __declspec(naked) void FUN_588450b0_segment_01() {
    __asm {
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x58845328
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        add ecx, 4
        cmp eax, 4
        ; Exact mapped bytes 7C EF: jl 0x58845270
        __asm _emit 0x7c
        __asm _emit 0xef
        mov ecx, dword ptr [esi + 148h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        movzx eax, word ptr [esi + 0f0h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 EA 02 00 00: jne 0x58845588
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esi + 0d0h]
        mov ebp, ebx
        mov dword ptr [esp + 14h], 4
        mov edi, edi
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov edi, dword ptr [ecx + 14h]
        mov esi, dword ptr [eax + 4]
        add edi, edx
        cmp esi, edi
        ; Exact mapped bytes 0F 8C 8D 02 00 00: jl 0x58845558
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 1ch]
        add edi, edx
        cmp esi, edi
        ; Exact mapped bytes 0F 8D 80 02 00 00: jge 0x58845558
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 8]
        mov edi, dword ptr [ecx + 18h]
        mov esi, dword ptr [eax + 8]
        add edi, edx
        cmp esi, edi
        ; Exact mapped bytes 0F 8C 6D 02 00 00: jl 0x58845558
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 20h]
        add edi, edx
        cmp esi, edi
        ; Exact mapped bytes 0F 8D 60 02 00 00: jge 0x58845558
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov eax, esi
        push eax
        push edx
        ; Exact mapped bytes E8 4C 34 0C 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 85 64 02 00 00: jne 0x58845571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ebx
        lea edi, [eax + 5]
        mov ecx, dword ptr [esi]
        push -1
        ; Exact mapped bytes E8 15 35 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 EF: jne 0x58845312
        __asm _emit 0x75
        __asm _emit 0xef
        ; Exact mapped bytes E9 49 02 00 00: jmp 0x58845571
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        mov edi, dword ptr [ecx + 6ch]
        ; Exact mapped bytes EB 3E: jmp 0x5884536e
        __asm _emit 0xeb
        __asm _emit 0x3e
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 2C: jne 0x58845362
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ebx, dword ptr [esi + 0e0h]
        mov edx, dword ptr [esp + 14h]
        lea ecx, [esi + 0e0h]
        xor eax, eax
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 74 0E: je 0x5884535a
        __asm _emit 0x74
        __asm _emit 0x0e
        inc eax
        add ecx, 4
        cmp eax, 4
        ; Exact mapped bytes 7C F3: jl 0x58845348
        __asm _emit 0x7c
        __asm _emit 0xf3
        ; Exact mapped bytes E9 27 FF FF FF: jmp 0x58845281
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 64h]
        mov edi, dword ptr [edx + 64h]
        ; Exact mapped bytes EB 0C: jmp 0x5884536e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ebx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 14h]
        cmp eax, 4
        ; Exact mapped bytes 0F 8D 0A FF FF FF: jge 0x58845281
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        ; Exact mapped bytes 0F 84 0F FF FF FF: je 0x5884528e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 148h]
        ; Exact mapped bytes E8 36 EC 05 00: call 0x588a3fc0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebp, dword ptr [eax + 0dch]
        mov ecx, ebx
        ; Exact mapped bytes E8 14 4B F1 FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4b
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588453d9
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, ebx
        ; Exact mapped bytes E8 09 4B F1 FF: call 0x58759eb0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x4b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 70h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov dl, byte ptr [ecx]
        cmp dl, byte ptr [eax]
        ; Exact mapped bytes 75 1A: jne 0x588453d0
        __asm _emit 0x75
        __asm _emit 0x1a
        test dl, dl
        ; Exact mapped bytes 74 12: je 0x588453cc
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [ecx + 1]
        cmp dl, byte ptr [eax + 1]
        ; Exact mapped bytes 75 0E: jne 0x588453d0
        __asm _emit 0x75
        __asm _emit 0x0e
        add ecx, 2
        add eax, 2
        test dl, dl
        ; Exact mapped bytes 75 E4: jne 0x588453b0
        __asm _emit 0x75
        __asm _emit 0xe4
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x588453d5
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        sbb eax, -1
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x588453e5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edi, dword ptr [edi + 54h]
        test edi, edi
        ; Exact mapped bytes 75 B5: jne 0x58845395
        __asm _emit 0x75
        __asm _emit 0xb5
        ; Exact mapped bytes E9 A9 FE FF FF: jmp 0x5884528e
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 BF 9E 00 00 00 00: cmp word ptr [edi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 4F: jne 0x5884543e
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 66 83 BE F0 00 00 00 01: cmp word ptr [esi + 0xf0], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 22: jne 0x5884541b
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [edi + 70h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 59 DB FF FF: call 0x58842f60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x5884541b
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [esi + 148h]
        mov dword ptr [eax + 0e0h], 1
        ; Exact mapped bytes 66 83 BE F0 00 00 00 00: cmp word ptr [esi + 0xf0], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 0B 01 00 00: jne 0x58845534
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 148h]
        mov dword ptr [ecx + 0e4h], 1
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x58845534
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 148h]
        mov eax, 1
        mov dword ptr [edx + 0d0h], eax
        mov ecx, dword ptr [esi + 148h]
        mov dword ptr [ecx + 0d4h], eax
        ; Exact mapped bytes 66 39 86 F0 00 00 00: cmp word ptr [esi + 0xf0], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 22: jne 0x58845486
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [edi + 70h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 EE DA FF FF: call 0x58842f60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x58845486
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [esi + 148h]
        mov dword ptr [eax + 0e0h], 1
        ; Exact mapped bytes 66 83 BE F0 00 00 00 00: cmp word ptr [esi + 0xf0], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 1
        ; Exact mapped bytes 75 0C: jne 0x588454a1
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [esi + 148h]
        mov dword ptr [edx + 0e4h], ecx
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 3
        ; Exact mapped bytes 3B 15 A8 45 A2 58: cmp edx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 15: jne 0x588454c9
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 66 39 87 9E 00 00 00: cmp word ptr [edi + 0x9e], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x588454c9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [esi + 148h]
        mov dword ptr [edx + 0d8h], ecx
        ; Exact mapped bytes 66 83 BF 9E 00 00 00 05: cmp word ptr [edi + 0x9e], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 75 1A: jne 0x588454ed
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 A0 45 A2 58: cmp edx, dword ptr [0x58a245a0]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 0C: jne 0x588454ed
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [esi + 148h]
        mov dword ptr [edx + 0dch], ecx
        ; Exact mapped bytes 66 83 BF 80 00 00 00 06: cmp word ptr [edi + 0x80], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 75 1E: jne 0x58845515
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 39 05 A8 B4 A0 58: cmp word ptr [0x58a0b4a8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 15: jne 0x58845515
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 83 3D A0 B4 A0 58 00: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x58845515
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [esi + 148h]
        mov dword ptr [edx + 0ech], ecx
        ; Exact mapped bytes 66 39 87 80 00 00 00: cmp word ptr [edi + 0x80], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 16: jne 0x58845534
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 66 83 3D A8 B4 A0 58 00: cmp word ptr [0x58a0b4a8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x58845534
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 148h]
        mov dword ptr [eax + 0e8h], ecx
        mov ecx, dword ptr [esi + 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [edi + 70h]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [esi + 148h]
        push edx
        ; Exact mapped bytes E8 4D EF 05 00: call 0x588a44a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 36 FD FF FF: jmp 0x5884528e
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, ebx
        mov edi, 4
        nop
        mov ecx, dword ptr [esi]
        push -1
        ; Exact mapped bytes E8 C7 32 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x32
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 EF: jne 0x58845560
        __asm _emit 0x75
        __asm _emit 0xef
        add ebp, 4
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 0F 85 31 FD FF FF: jne 0x588452b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 D7 10 00 00: jne 0x58846669
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esi + 0e0h]
        mov ebp, ebx
        mov dword ptr [esp + 14h], 4
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov edi, dword ptr [ecx + 14h]
        mov esi, dword ptr [eax + 4]
        add edi, edx
        cmp esi, edi
        ; Exact mapped bytes 7C 4A: jl 0x58845603
        __asm _emit 0x7c
        __asm _emit 0x4a
        mov edi, dword ptr [ecx + 1ch]
        add edi, edx
        cmp esi, edi
        ; Exact mapped bytes 7D 41: jge 0x58845603
        __asm _emit 0x7d
        __asm _emit 0x41
        mov edx, dword ptr [ecx + 8]
        mov edi, dword ptr [ecx + 18h]
        mov esi, dword ptr [eax + 8]
        add edi, edx
        cmp esi, edi
        ; Exact mapped bytes 7C 32: jl 0x58845603
        __asm _emit 0x7c
        __asm _emit 0x32
        mov edi, dword ptr [ecx + 20h]
        add edi, edx
        cmp esi, edi
        ; Exact mapped bytes 7D 29: jge 0x58845603
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [eax + 4]
        mov eax, esi
        push eax
        push edx
        ; Exact mapped bytes E8 6A 31 0C 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 36: jne 0x58845621
        __asm _emit 0x75
        __asm _emit 0x36
        mov esi, ebx
        lea edi, [eax + 5]
        mov ecx, dword ptr [esi]
        push -1
        ; Exact mapped bytes E8 37 32 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x32
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 EF: jne 0x588455f0
        __asm _emit 0x75
        __asm _emit 0xef
        ; Exact mapped bytes EB 1E: jmp 0x58845621
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov esi, ebx
        mov edi, 4
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push -1
        ; Exact mapped bytes E8 17 32 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x32
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 EF: jne 0x58845610
        __asm _emit 0x75
        __asm _emit 0xef
        add ebp, 4
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 0F 85 73 FF FF FF: jne 0x588455a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 28 10 00 00: jne 0x58846669
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        cmp eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 0F 85 38 01 00 00: jne 0x58845786
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 80 01 00 00 00: cmp word ptr [esi + 0x180], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x58845786
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        mov ebx, 0fh
        push ebx
        ; Exact mapped bytes E8 53 BF EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbf
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10ch]
        push ebx
        ; Exact mapped bytes E8 47 BF EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xbf
        __asm _emit 0xee
        __asm _emit 0xff
        lea edi, [esi + 0e0h]
        lea ebp, [ebx - 0bh]
        mov eax, dword ptr [edi - 10h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov eax, dword ptr [edi]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [edi - 10h]
        push 1
        ; Exact mapped bytes E8 81 BF EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xbf
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 78 BF EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xbf
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [edi + 30h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 C4: jne 0x58845682
        __asm _emit 0x75
        __asm _emit 0xc4
        xor edx, edx
        mov ecx, esi
        ; Exact mapped bytes 66 89 96 80 01 00 00: mov word ptr [esi + 0x180], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 92 CA FF FF: call 0x58842160
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 FB CD FF FF: call 0x588424d0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 154h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 158h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 15ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 160h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 164h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 168h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 16ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 170h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 174h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 90h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 0bch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, 1
        cmp eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes 0F 85 14 01 00 00: jne 0x588458ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 AE F0 00 00 00: cmp word ptr [esi + 0xf0], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x588458ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebp
        ; Exact mapped bytes 66 89 8E F0 00 00 00: mov word ptr [esi + 0xf0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 0e0h]
        lea ebx, [ebp + 3]
        mov ecx, dword ptr [edi - 10h]
        push 0
        ; Exact mapped bytes E8 30 BE EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xbe
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push ebp
        ; Exact mapped bytes E8 28 BE EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xbe
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi - 10h]
        push 0
        ; Exact mapped bytes E8 4E BE EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbe
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push ebp
        ; Exact mapped bytes E8 46 BE EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xbe
        __asm _emit 0xee
        __asm _emit 0xff
        add edi, 4
        sub ebx, ebp
        ; Exact mapped bytes 75 D5: jne 0x588457b6
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, esi
        ; Exact mapped bytes E8 A8 C9 FF FF: call 0x58842190
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 21 D3 FF FF: call 0x58842b10
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 154h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 158h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 15ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 160h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 164h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 168h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 16ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 170h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 90h]
        push ebx
        ; Exact mapped bytes E8 50 BD EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0cch]
        push 0fh
        ; Exact mapped bytes E8 43 BD EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 100h]
        push ebx
        ; Exact mapped bytes E8 37 BD EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        push ebx
        mov ecx, dword ptr [esi + 104h]
        ; Exact mapped bytes E8 2B BD EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 04 01 00 00: jne 0x588459bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE F0 00 00 00 00: cmp word ptr [esi + 0xf0], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x588459bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8E F0 00 00 00: mov word ptr [esi + 0xf0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 0e0h]
        lea ebx, [ecx + 4]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 10h]
        push ebp
        ; Exact mapped bytes E8 07 BD EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 FE BC EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi - 10h]
        push ebp
        ; Exact mapped bytes E8 25 BD EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 1C BD EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        add edi, 4
        sub ebx, ebp
        ; Exact mapped bytes 75 D5: jne 0x588458e0
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, esi
        ; Exact mapped bytes E8 4E C8 FF FF: call 0x58842160
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 B7 CB FF FF: call 0x588424d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 154h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 158h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 15ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 160h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 164h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 168h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 16ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 170h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 90h]
        push ebx
        ; Exact mapped bytes E8 26 BC EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0cch]
        mov ebx, 0fh
        push ebx
        ; Exact mapped bytes E8 15 BC EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 100h]
        push ebx
        ; Exact mapped bytes E8 09 BC EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E9 CD FE FF FF: jmp 0x5884588a
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x58845a9a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 80 01 00 00 02: cmp word ptr [esi + 0x180], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x58845a9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 0e0h]
        mov ebx, 4
        mov ecx, dword ptr [edi - 10h]
        push 0
        ; Exact mapped bytes E8 04 BC EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 FB BB EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi - 10h]
        push 0
        ; Exact mapped bytes E8 21 BC EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 18 BC EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 30h]
        push 0
        ; Exact mapped bytes E8 AE BB EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 40h]
        push 0
        ; Exact mapped bytes E8 A4 BB EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        add edi, 4
        sub ebx, ebp
        ; Exact mapped bytes 75 BF: jne 0x588459e2
        __asm _emit 0x75
        __asm _emit 0xbf
        mov ecx, dword ptr [esi + 108h]
        push ebx
        ; Exact mapped bytes E8 91 BB EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10ch]
        push ebx
        ; Exact mapped bytes E8 85 BB EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0cch]
        push ebx
        ; Exact mapped bytes E8 79 BB EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 90h]
        push ebx
        ; Exact mapped bytes E8 6D BB EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0b8h]
        push 0fh
        ; Exact mapped bytes E8 60 BB EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0bch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, 2
        xor edx, edx
        ; Exact mapped bytes 66 89 8E 80 01 00 00: mov word ptr [esi + 0x180], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 F0 00 00 00: mov word ptr [esi + 0xf0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 148h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 0F 85 21 03 00 00: jne 0x58845dc7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 AE 80 01 00 00: cmp word ptr [esi + 0x180], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 14 03 00 00: je 0x58845dc7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 06 BB EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10ch]
        push 0
        ; Exact mapped bytes E8 F9 BA EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        lea edi, [esi + 120h]
        mov ebx, 4
        mov ecx, dword ptr [edi - 10h]
        push 0
        ; Exact mapped bytes E8 E4 BA EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 DB BA EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        add edi, 4
        sub ebx, ebp
        ; Exact mapped bytes 75 E6: jne 0x58845ad2
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 9C 45 A2 58: cmp eax, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 6C 0B 00 00: je 0x58846669
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebp
        ; Exact mapped bytes 66 89 8E 80 01 00 00: mov word ptr [esi + 0x180], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0cch]
        xor edi, edi
        push edi
        ; Exact mapped bytes E8 AC BA EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 154h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 158h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 15ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 160h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 164h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 16ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 170h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 168h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 90h]
        mov ebx, 0fh
        push ebx
        ; Exact mapped bytes E8 26 BA EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [ecx + 50h], edi
        mov edx, dword ptr [esi + 0b0h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 0b0h]
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes A1 A0 B4 A0 58: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A4 B4 A0 58: mov ecx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        cmp eax, edi
        ; Exact mapped bytes 0F 85 CF 00 00 00: jne 0x58845c97
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, edi
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x58845c99
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edi, [ebx - 0ah]
        ; Exact mapped bytes 3B 0D A8 45 A2 58: cmp ecx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1A: jne 0x58845bfb
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [esi + 0a0h]
        mov dword ptr [edx + 50h], edi
        mov ecx, dword ptr [esi + 154h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor edx, edx
        ; Exact mapped bytes EB 0B: jmp 0x58845c06
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 0a0h]
        xor edx, edx
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [esi + 0a4h]
        mov dword ptr [ecx + 50h], edx
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 60h]
        movzx eax, word ptr [ecx + 5eh]
        mov ecx, dword ptr [ecx + 0a4h]
        and eax, ebx
        mov ebx, eax
        shl ebx, 4
        sub ebx, eax
        shr ecx, 1
        lea eax, [ecx + ebx*8]
        imul eax, eax, 0e0h
        ; Exact mapped bytes 66 8B 88 E8 FC 9C 58: mov cx, word ptr [eax + 0x589cfce8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        movzx eax, cx
        ; Exact mapped bytes 66 83 F8 4D: cmp ax, 0x4d
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4d
        ; Exact mapped bytes 74 1A: je 0x58845c63
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 83 F8 4E: cmp ax, 0x4e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4e
        ; Exact mapped bytes 74 14: je 0x58845c63
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 83 F8 4F: cmp ax, 0x4f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4f
        ; Exact mapped bytes 74 0E: je 0x58845c63
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 0a8h]
        mov dword ptr [eax + 50h], edx
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x58845d95
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        cmp dword ptr [ecx + 50h], edi
        ; Exact mapped bytes 75 0E: jne 0x58845c7c
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 0a8h]
        mov dword ptr [edx + 50h], ebp
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x58845d95
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        mov dword ptr [eax + 50h], edi
        mov ecx, dword ptr [esi + 15ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x58845d95
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, edi
        ; Exact mapped bytes 0F 86 85 00 00 00: jbe 0x58845d24
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        mov dword ptr [esi + 184h], ebp
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 3
        ; Exact mapped bytes 3B 0D A8 45 A2 58: cmp ecx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 25: jne 0x58845cea
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 66 39 05 A8 B4 A0 58: cmp word ptr [0x58a0b4a8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 13: jne 0x58845ce1
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 39 3D A0 B4 A0 58: cmp dword ptr [0x58a0b4a0], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 74 0B: je 0x58845ce1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 0a0h]
        mov dword ptr [edx + 50h], edi
        ; Exact mapped bytes EB 09: jmp 0x58845cea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 0a0h]
        mov dword ptr [ecx + 50h], ebp
        ; Exact mapped bytes 66 39 2D A8 B4 A0 58: cmp word ptr [0x58a0b4a8], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 09: jne 0x58845cfc
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [esi + 0a0h]
        mov dword ptr [edx + 50h], ebp
        mov ecx, dword ptr [esi + 0a4h]
        mov dword ptr [ecx + 50h], 5
        ; Exact mapped bytes 66 39 05 A8 B4 A0 58: cmp word ptr [0x58a0b4a8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 58 FF FF FF: je 0x58845c6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a8h]
        mov dword ptr [eax + 50h], edi
        ; Exact mapped bytes E9 71 00 00 00: jmp 0x58845d95
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 0F 86 69 00 00 00: jbe 0x58845d95
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 168h]
        push ecx
        mov ecx, dword ptr [esi + 160h]
        ; Exact mapped bytes E8 B2 E2 FE FF: call 0x58833ff0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 160h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 66 83 3D A8 B4 A0 58 06: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x06
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 75 17: jne 0x58845d72
        __asm _emit 0x75
        __asm _emit 0x17
        mov dword ptr [ecx + 50h], edi
        mov edx, dword ptr [esi + 0a8h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 0ach]
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes EB 0C: jmp 0x58845d7e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 0a8h]
        mov dword ptr [edx + 50h], edi
        mov eax, dword ptr [esi + 0a4h]
        mov edi, 5
        mov dword ptr [eax + 50h], edi
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [ecx + 50h], edi
        mov ecx, dword ptr [esi + 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 0b8h]
        push 0
        ; Exact mapped bytes E8 11 B8 EE FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb8
        __asm _emit 0xee
        __asm _emit 0xff
        mov esi, dword ptr [esi + 0bch]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 19 01 00 00: jne 0x58845eee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 BA 2C 0D 00 00 00: cmp word ptr [edx + 0xd2c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x58845ece
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 50h], 5
        mov eax, dword ptr [esi + 0a4h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x58845dff
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0a8h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x58845e0e
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0ach]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x58845e1d
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0b0h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x58845e2c
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes 66 A1 A8 B4 A0 58: mov ax, word ptr [0x58a0b4a8]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 26: je 0x58845e5d
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 20: je 0x58845e5d
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 74 05: je 0x58845e48
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2F: jne 0x58845e77
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [esi + 154h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 158h]
        ; Exact mapped bytes EB 13: jmp 0x58845e70
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 158h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 154h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 164h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 160h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 15ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 16ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 170h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 174h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 489h
        ; Exact mapped bytes E8 12 5C F2 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B EE F1 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xee
        __asm _emit 0xf1
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 F0 00 00 00: jne 0x58845fec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 5
        mov dword ptr [ecx + 50h], edi
        mov eax, dword ptr [esi + 0a0h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x58845f13
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0a8h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x58845f22
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0ach]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x58845f31
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0b0h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x58845f40
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 154h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 158h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 66 A1 A8 B4 A0 58: mov ax, word ptr [0x58a0b4a8]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1A: je 0x58845f7f
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 74 05: je 0x58845f70
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 0F: jne 0x58845f7f
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 164h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB 30: jmp 0x58845faf
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 0B: je 0x58845f90
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 06: je 0x58845f90
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 1F: jne 0x58845faf
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [esi + 168h]
        mov ecx, dword ptr [esi + 160h]
        push eax
        ; Exact mapped bytes E8 4E E0 FE FF: call 0x58833ff0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 160h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 15ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 16ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 170h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x588460ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 50h], 5
        mov eax, dword ptr [esi + 0a0h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x58846010
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0a4h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x5884601f
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0ach]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x5884602e
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0b0h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x5884603d
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 154h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 158h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 164h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 160h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 16ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 170h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 15ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x58846170
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 50h], 5
        mov eax, dword ptr [esi + 0a0h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x588460d2
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0a4h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x588460e1
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0a8h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x588460f0
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0b0h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x588460ff
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 154h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 158h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 164h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 160h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 15ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 170h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 16ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 38 01 00 00: jne 0x588462b6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 07 01 00 00: jne 0x58846296
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0a9h
        ; Exact mapped bytes 66 39 50 60: cmp word ptr [eax + 0x60], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x60
        ; Exact mapped bytes 75 20: jne 0x588461ba
        __asm _emit 0x75
        __asm _emit 0x20
        push 0
        push 0
        push 0
        push 484h
        ; Exact mapped bytes E8 46 59 F2 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x59
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F EB F1 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xeb
        __asm _emit 0xf1
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ecx + 50h], 5
        mov eax, dword ptr [esi + 0a0h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x588461d0
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0a4h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x588461df
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0a8h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x588461ee
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0ach]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 03: je 0x588461fd
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 154h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 158h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 164h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 160h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 15ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 16ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 174h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 170h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 168h]
        mov ecx, dword ptr [esi + 170h]
        push eax
        ; Exact mapped bytes E8 49 8E FE FF: call 0x5882f0c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [ecx + 60h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 83 3B F7 FF: call 0x587b9e10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3b
        __asm _emit 0xf7
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 483h
        ; Exact mapped bytes E8 4A 58 F2 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x58
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 EA F1 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0xf1
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 0F 84 C6 F7 FF FF: je 0x58845a88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [esi + 14ch]
        ; Exact mapped bytes 75 21: jne 0x588462eb
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 0D C6 FF FF: call 0x588428e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 148h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 150h]
        ; Exact mapped bytes 75 20: jne 0x58846313
        __asm _emit 0x75
        __asm _emit 0x20
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 E5 C5 FF FF: call 0x588428e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 148h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 110h]
        ; Exact mapped bytes 75 60: jne 0x5884637b
        __asm _emit 0x75
        __asm _emit 0x60
        movzx eax, word ptr [esi + 0f0h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0F: jne 0x58846336
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 0f4h]
        lea eax, [esi + 0d0h]
        push ecx
        ; Exact mapped bytes EB 12: jmp 0x58846348
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 17: jne 0x58846352
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [esi + 0f4h]
        lea eax, [esi + 0e0h]
        push edx
        mov ecx, dword ptr [eax]
        push 4
        push eax
        ; Exact mapped bytes E8 4E 40 F4 FF: call 0x5878a3a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x40
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        cmp dword ptr [esi + 0f4h], eax
        sete al
        mov dword ptr [esi + 0f4h], eax
        mov esi, dword ptr [esi + 148h]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 0F 85 6D 00 00 00: jne 0x588463f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0f0h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 18: jne 0x588463ab
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 0f4h]
        push ecx
        mov ecx, dword ptr [esi + 0d4h]
        push 4
        lea edx, [esi + 0d0h]
        push edx
        ; Exact mapped bytes EB 1B: jmp 0x588463c6
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 1B: jne 0x588463cb
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 0f4h]
        push eax
        lea ecx, [esi + 0e0h]
        push 4
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        ; Exact mapped bytes E8 D5 3F F4 FF: call 0x5878a3a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3f
        __asm _emit 0xf4
        __asm _emit 0xff
        xor edx, edx
        cmp dword ptr [esi + 0f4h], edx
        sete dl
        mov dword ptr [esi + 0f4h], edx
        mov esi, dword ptr [esi + 148h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 0F 85 6D 00 00 00: jne 0x5884646d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0f0h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 18: jne 0x58846424
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [esi + 0f4h]
        push eax
        lea ecx, [esi + 0d0h]
        push 4
        push ecx
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes EB 1B: jmp 0x5884643f
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 1B: jne 0x58846444
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [esi + 0f4h]
        mov ecx, dword ptr [esi + 0e8h]
        push edx
        push 4
        lea eax, [esi + 0e0h]
        push eax
        ; Exact mapped bytes E8 5C 3F F4 FF: call 0x5878a3a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3f
        __asm _emit 0xf4
        __asm _emit 0xff
        xor ecx, ecx
        cmp dword ptr [esi + 0f4h], ecx
        sete cl
        mov dword ptr [esi + 0f4h], ecx
        mov esi, dword ptr [esi + 148h]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 11ch]
        ; Exact mapped bytes 75 4B: jne 0x588464c0
        __asm _emit 0x75
        __asm _emit 0x4b
        movzx eax, word ptr [esi + 0f0h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1B: jne 0x5884649c
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 0f4h]
        push ecx
        mov ecx, dword ptr [esi + 0dch]
        push 4
        lea edx, [esi + 0d0h]
        push edx
        ; Exact mapped bytes E9 2A FF FF FF: jmp 0x588463c6
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 85 26 FF FF FF: jne 0x588463cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0f4h]
        push eax
        lea ecx, [esi + 0e0h]
        push 4
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E9 06 FF FF FF: jmp 0x588463c6
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 BE 80 01 00 00 00: cmp word ptr [esi + 0x180], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 9B 01 00 00: jne 0x58846669
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 0F 85 71 00 00 00: jne 0x5884654b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 5
        ; Exact mapped bytes 75 48: jne 0x58846535
        __asm _emit 0x75
        __asm _emit 0x48
        mov edx, dword ptr [esi + 64h]
        mov eax, 1000h
        ; Exact mapped bytes 66 39 82 F2 00 00 00: cmp word ptr [edx + 0xf2], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 20: jge 0x5884651e
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [esi + 68h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1c8h
        ; Exact mapped bytes E8 C2 55 F2 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x55
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FB E7 F1 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe7
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 0F 85 64 00 00 00: jne 0x588465bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        ; Exact mapped bytes E8 5E 1C 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 3F: jl 0x588465a5
        __asm _emit 0x7c
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 0d0h]
        ; Exact mapped bytes E8 4F 1C 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        push eax
        ; Exact mapped bytes E8 C3 1B 0C 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x1b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 70h]
        mov edi, dword ptr [ecx + 6ch]
        mov ecx, edi
        lea ebx, [ecx + 1]
        mov dl, byte ptr [ecx]
        inc ecx
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x58846588
        __asm _emit 0x75
        __asm _emit 0xf9
        push eax
        sub ecx, ebx
        push ecx
        push edi
        push 12ch
        ; Exact mapped bytes E8 52 55 F2 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x55
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CB 3F F2 FF: call 0x5876a570
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x3f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 0f0h]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 54: jne 0x5884661b
        __asm _emit 0x75
        __asm _emit 0x54
        lea edx, [esi + 0d0h]
        xor edi, edi
        mov ecx, edx
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes 74 0A: je 0x588465df
        __asm _emit 0x74
        __asm _emit 0x0a
        add edi, ebp
        add ecx, 4
        cmp edi, 4
        ; Exact mapped bytes 7C F2: jl 0x588465d1
        __asm _emit 0x7c
        __asm _emit 0xf2
        cmp edi, 4
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58846669
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov ebp, edx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        cmp ebx, edi
        ; Exact mapped bytes 74 15: je 0x58846609
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + edi*4 + 0d0h]
        ; Exact mapped bytes E8 C0 1B 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x1b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 27 22 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x22
        __asm _emit 0x0c
        __asm _emit 0x00
        inc ebx
        add ebp, 4
        cmp ebx, 4
        ; Exact mapped bytes 7C DE: jl 0x588465f0
        __asm _emit 0x7c
        __asm _emit 0xde
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B CD: cmp cx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 75 49: jne 0x58846669
        __asm _emit 0x75
        __asm _emit 0x49
        lea edx, [esi + 0e0h]
        xor edi, edi
        mov ecx, edx
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes 74 0A: je 0x5884663e
        __asm _emit 0x74
        __asm _emit 0x0a
        add edi, ebp
        add ecx, 4
        cmp edi, 4
        ; Exact mapped bytes 7C F2: jl 0x58846630
        __asm _emit 0x7c
        __asm _emit 0xf2
        cmp edi, 4
        ; Exact mapped bytes 74 26: je 0x58846669
        __asm _emit 0x74
        __asm _emit 0x26
        xor ebx, ebx
        mov ebp, edx
        cmp ebx, edi
        ; Exact mapped bytes 74 15: je 0x58846660
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + edi*4 + 0e0h]
        ; Exact mapped bytes E8 69 1B 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x1b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 D0 21 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x21
        __asm _emit 0x0c
        __asm _emit 0x00
        inc ebx
        add ebp, 4
        cmp ebx, 4
        ; Exact mapped bytes 7C DE: jl 0x58846647
        __asm _emit 0x7c
        __asm _emit 0xde
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
