// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846680 .. +0x44F bytes.
extern "C" __declspec(naked) void FUN_58846680() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 3C 04 00 00: je 0x58846acb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        push edi
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588466c1
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x5884676a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x588466c1
        __asm _emit 0x74
        __asm _emit 0x09
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588466a6
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 75 16: jne 0x588466e1
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [edi + 8], 1bh
        ; Exact mapped bytes 75 10: jne 0x588466e1
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
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
        push ebx
        ; Exact mapped bytes 75 7D: jne 0x58846769
        __asm _emit 0x75
        __asm _emit 0x7d
        cmp eax, 201h
        ; Exact mapped bytes 0F 87 50 03 00 00: ja 0x58846a47
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 12 03 00 00: je 0x58846a0f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 75 65: jne 0x58846769
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [edi + 8]
        add eax, -21h
        cmp eax, 7
        ; Exact mapped bytes 77 5A: ja 0x58846769
        __asm _emit 0x77
        __asm _emit 0x5a
        ; Exact mapped bytes FF 24 85 D4 6A 84 58: jmp dword ptr [eax*4 + 0x58846ad4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x6a
        __asm _emit 0x84
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0d0h]
        add esi, 0d0h
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 7E 3E: jle 0x58846769
        __asm _emit 0x7e
        __asm _emit 0x3e
        ; Exact mapped bytes E8 40 1A 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x00
        sub eax, 0fh
        mov edi, 4
        test eax, eax
        ; Exact mapped bytes 7E 35: jle 0x58846771
        __asm _emit 0x7e
        __asm _emit 0x35
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 29 1A 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        sub eax, 0fh
        push eax
        ; Exact mapped bytes E8 3E 1A 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 17 1A 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push eax
        ; Exact mapped bytes E8 CF 20 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 D7: jne 0x58846740
        __asm _emit 0x75
        __asm _emit 0xd7
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 0
        ; Exact mapped bytes E8 16 1A 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 0
        ; Exact mapped bytes E8 AD 20 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E6: jne 0x58846771
        __asm _emit 0x75
        __asm _emit 0xe6
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        add esi, 0d0h
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 7E C1: jle 0x58846769
        __asm _emit 0x7e
        __asm _emit 0xc1
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 BD 19 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, -0fh
        add eax, 0fh
        cmp eax, edi
        mov edi, 4
        ; Exact mapped bytes 7D 31: jge 0x588467f3
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 A7 19 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        add eax, 0fh
        push eax
        ; Exact mapped bytes E8 BC 19 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 95 19 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push eax
        ; Exact mapped bytes E8 4D 20 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 D7: jne 0x588467c2
        __asm _emit 0x75
        __asm _emit 0xd7
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 76 20 0C 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 4F 1E 0C 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x1e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 68 19 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push eax
        ; Exact mapped bytes E8 20 20 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 DB: jne 0x588467f3
        __asm _emit 0x75
        __asm _emit 0xdb
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        add esi, 0d0h
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 0F 8E 30 FF FF FF: jle 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 82 19 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 23 FF FF FF: jle 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, 4
        ; Exact mapped bytes EB 03: jmp 0x58846850
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 69 19 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        dec eax
        push eax
        ; Exact mapped bytes E8 D0 1F 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 59 19 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov edi, eax
        ; Exact mapped bytes E8 00 19 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 7C 15: jl 0x58846889
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 F5 18 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        lea edi, [eax + 0fh]
        ; Exact mapped bytes E8 3B 19 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 7C 0F: jl 0x58846898
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 30 19 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push eax
        ; Exact mapped bytes E8 F8 18 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 CB 18 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, -0fh
        cmp eax, edi
        ; Exact mapped bytes 7E 11: jle 0x588468bd
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 88h]
        sub edx, 0fh
        push edx
        ; Exact mapped bytes E8 D3 18 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 8B: jne 0x58846850
        __asm _emit 0x75
        __asm _emit 0x8b
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        add esi, 0d0h
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 0F 8E 83 FE FF FF: jle 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 CD 18 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        dec edi
        cmp eax, edi
        ; Exact mapped bytes 0F 8D 6D FE FF FF: jge 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, 4
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 B8 18 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        inc eax
        push eax
        ; Exact mapped bytes E8 1F 1F 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 A8 18 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov edi, eax
        ; Exact mapped bytes E8 4F 18 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 7C 15: jl 0x5884693a
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 44 18 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        lea edi, [eax + 0fh]
        ; Exact mapped bytes E8 8A 18 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 7C 0F: jl 0x58846949
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 7F 18 0C 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push eax
        ; Exact mapped bytes E8 47 18 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 1A 18 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, -0fh
        cmp edi, eax
        ; Exact mapped bytes 7D 11: jge 0x5884696e
        __asm _emit 0x7d
        __asm _emit 0x11
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 88h]
        sub edx, 0fh
        push edx
        ; Exact mapped bytes E8 22 18 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 8B: jne 0x58846901
        __asm _emit 0x75
        __asm _emit 0x8b
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        add esi, 0d0h
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 0F 8E D2 FD FF FF: jle 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 4
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 0
        ; Exact mapped bytes E8 E7 17 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x17
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 0
        ; Exact mapped bytes E8 7E 1E 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x1e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E6: jne 0x588469a0
        __asm _emit 0x75
        __asm _emit 0xe6
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        mov edi, dword ptr [ecx + 88h]
        add esi, 0d0h
        test edi, edi
        ; Exact mapped bytes 0F 8E 8D FD FF FF: jle 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, -0fh
        ; Exact mapped bytes 79 02: jns 0x588469e3
        __asm _emit 0x79
        __asm _emit 0x02
        xor edi, edi
        mov ebx, 4
        mov ecx, dword ptr [esi]
        push edi
        ; Exact mapped bytes E8 A0 17 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x17
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 88h]
        dec edx
        push edx
        ; Exact mapped bytes E8 31 1E 0C 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E1: jne 0x588469e8
        __asm _emit 0x75
        __asm _emit 0xe1
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 148h]
        mov al, byte ptr [eax + 24h]
        and al, 0fh
        cmp al, 5
        ; Exact mapped bytes 0F 84 47 FD FF FF: je 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 3F FD FF FF: je 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp al, 4
        ; Exact mapped bytes 0F 84 37 FD FF FF: je 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 20ah
        ; Exact mapped bytes 0F 85 17 FD FF FF: jne 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push ebp
        ; Exact mapped bytes 8B 2D C8 84 A2 58: mov ebp, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edi, edi
        add ebp, 4
        lea ebx, [esi + 0d0h]
        mov ecx, dword ptr [ebx]
        push ebp
        ; Exact mapped bytes E8 D4 AA EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xaa
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58846a79
        __asm _emit 0x75
        __asm _emit 0x09
        inc edi
        add ebx, 4
        cmp edi, 4
        ; Exact mapped bytes 7C EB: jl 0x58846a64
        __asm _emit 0x7c
        __asm _emit 0xeb
        pop ebp
        cmp edi, 4
        ; Exact mapped bytes 0F 84 E6 FC FF FF: je 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 83 7A 0A 00: cmp word ptr [edx + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, 1
        ; Exact mapped bytes 7E 02: jle 0x58846a95
        __asm _emit 0x7e
        __asm _emit 0x02
        xor ecx, ecx
        movzx eax, word ptr [esi + 0f0h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 10: jne 0x58846ab1
        __asm _emit 0x75
        __asm _emit 0x10
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 37 BE FF FF: call 0x588428e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 AE FC FF FF: jne 0x58846769
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 1D C8 FF FF: call 0x588432e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop esi
    }
}
