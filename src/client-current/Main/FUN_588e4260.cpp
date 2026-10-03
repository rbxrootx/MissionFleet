// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 3641 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E4260 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_588e4260_segment_00() {
    __asm {
        push -1
        push 589897feh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 110h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 10ch], eax
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 124h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esp + 134h]
        mov edi, dword ptr [esp + 138h]
        dec eax
        mov esi, ecx
        cmp eax, 38h
        ; Exact mapped bytes 0F 87 C3 0D 00 00: ja 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 588e5114h]
        ; Exact mapped bytes FF 24 85 A4 50 8E 58: jmp dword ptr [eax*4 + 0x588e50a4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x8e
        __asm _emit 0x58
        movzx eax, word ptr [esi + 60bah]
        mov ebp, dword ptr [esi + 340h]
        mov cl, al
        and cl, 30h
        cmp cl, 30h
        ; Exact mapped bytes 75 55: jne 0x588e4330
        __asm _emit 0x75
        __asm _emit 0x55
        xor ecx, ecx
        cmp dword ptr [esi + 141ch], ecx
        ; Exact mapped bytes 0F 8E EC 00 00 00: jle 0x588e43d5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 17ch]
        lea edi, [ecx + 1]
        mov ebx, 40000000h
        ; Exact mapped bytes EB 07: jmp 0x588e4300
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E4300 .. +0x87D bytes.
extern "C" __declspec(naked) void FUN_588e4260_segment_01() {
    __asm {
        movzx eax, byte ptr [esi + ecx + 1fch]
        cmp eax, ebp
        ; Exact mapped bytes 75 12: jne 0x588e431e
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x588e431e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 128h], edi
        mov dword ptr [eax + 10ch], ebx
        add ecx, edi
        add edx, 4
        cmp ecx, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C D5: jl 0x588e4300
        __asm _emit 0x7c
        __asm _emit 0xd5
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x588e43d5
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, 10h
        ; Exact mapped bytes 74 53: je 0x588e4387
        __asm _emit 0x74
        __asm _emit 0x53
        xor eax, eax
        cmp dword ptr [esi + 141ch], eax
        ; Exact mapped bytes 0F 8E 93 00 00 00: jle 0x588e43d5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 17ch]
        lea edi, [eax + 1]
        mov ebx, 40000000h
        cmp byte ptr [esi + eax + 21ch], 0
        ; Exact mapped bytes 75 1E: jne 0x588e4378
        __asm _emit 0x75
        __asm _emit 0x1e
        movzx ecx, byte ptr [eax + esi + 1fch]
        cmp ecx, ebp
        ; Exact mapped bytes 75 12: jne 0x588e4378
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [edx]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x588e4378
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ecx + 128h], edi
        mov dword ptr [ecx + 10ch], ebx
        add eax, edi
        add edx, 4
        cmp eax, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C CB: jl 0x588e4350
        __asm _emit 0x7c
        __asm _emit 0xcb
        ; Exact mapped bytes EB 4E: jmp 0x588e43d5
        __asm _emit 0xeb
        __asm _emit 0x4e
        xor eax, eax
        cmp dword ptr [esi + 141ch], eax
        ; Exact mapped bytes 7E 44: jle 0x588e43d5
        __asm _emit 0x7e
        __asm _emit 0x44
        lea edx, [esi + 17ch]
        lea edi, [eax + 1]
        mov ebx, 40000000h
        nop
        cmp byte ptr [esi + eax + 21ch], 0
        ; Exact mapped bytes 74 1E: je 0x588e43c8
        __asm _emit 0x74
        __asm _emit 0x1e
        movzx ecx, byte ptr [eax + esi + 1fch]
        cmp ecx, ebp
        ; Exact mapped bytes 75 12: jne 0x588e43c8
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [edx]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x588e43c8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ecx + 128h], edi
        mov dword ptr [ecx + 10ch], ebx
        add eax, edi
        add edx, 4
        cmp eax, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C CB: jl 0x588e43a0
        __asm _emit 0x7c
        __asm _emit 0xcb
        mov dl, byte ptr [esi + 60ach]
        or dl, 2
        ; Exact mapped bytes 66 0F B6 C2: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 86 B8 60 00 00: mov word ptr [esi + 0x60b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8B 0C 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 340h]
        push ecx
        push 5
        mov ecx, esi
        ; Exact mapped bytes E8 F2 31 FF FF: call 0x588d75f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 86 B8 60 00 00: mov word ptr [esi + 0x60b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6F 0C 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 60bah]
        mov ebx, dword ptr [esi + 340h]
        mov dl, al
        and dl, 30h
        mov edi, 1
        cmp dl, 30h
        ; Exact mapped bytes 75 4A: jne 0x588e4470
        __asm _emit 0x75
        __asm _emit 0x4a
        xor ecx, ecx
        cmp dword ptr [esi + 141ch], ecx
        ; Exact mapped bytes 0F 8E E1 00 00 00: jle 0x588e4515
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 17ch]
        mov ebp, 40000000h
        nop
        movzx eax, byte ptr [esi + ecx + 1fch]
        cmp eax, ebx
        ; Exact mapped bytes 75 12: jne 0x588e445e
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x588e445e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 124h], edi
        mov dword ptr [eax + 108h], ebp
        add ecx, edi
        add edx, 4
        cmp ecx, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C D5: jl 0x588e4440
        __asm _emit 0x7c
        __asm _emit 0xd5
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x588e4515
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, 10h
        ; Exact mapped bytes 74 53: je 0x588e44c7
        __asm _emit 0x74
        __asm _emit 0x53
        xor eax, eax
        cmp dword ptr [esi + 141ch], eax
        ; Exact mapped bytes 0F 8E 93 00 00 00: jle 0x588e4515
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 17ch]
        mov ebp, 40000000h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        cmp byte ptr [esi + eax + 21ch], 0
        ; Exact mapped bytes 75 1E: jne 0x588e44b8
        __asm _emit 0x75
        __asm _emit 0x1e
        movzx ecx, byte ptr [eax + esi + 1fch]
        cmp ecx, ebx
        ; Exact mapped bytes 75 12: jne 0x588e44b8
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [edx]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x588e44b8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ecx + 124h], edi
        mov dword ptr [ecx + 108h], ebp
        add eax, edi
        add edx, 4
        cmp eax, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C CB: jl 0x588e4490
        __asm _emit 0x7c
        __asm _emit 0xcb
        ; Exact mapped bytes EB 4E: jmp 0x588e4515
        __asm _emit 0xeb
        __asm _emit 0x4e
        xor eax, eax
        cmp dword ptr [esi + 141ch], eax
        ; Exact mapped bytes 7E 44: jle 0x588e4515
        __asm _emit 0x7e
        __asm _emit 0x44
        lea edx, [esi + 17ch]
        mov ebp, 40000000h
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        cmp byte ptr [esi + eax + 21ch], 0
        ; Exact mapped bytes 74 1E: je 0x588e4508
        __asm _emit 0x74
        __asm _emit 0x1e
        movzx ecx, byte ptr [eax + esi + 1fch]
        cmp ecx, ebx
        ; Exact mapped bytes 75 12: jne 0x588e4508
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [edx]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x588e4508
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ecx + 124h], edi
        mov dword ptr [ecx + 108h], ebp
        add eax, edi
        add edx, 4
        cmp eax, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C CB: jl 0x588e44e0
        __asm _emit 0x7c
        __asm _emit 0xcb
        mov dl, byte ptr [esi + 60ach]
        or dl, 1
        ; Exact mapped bytes 66 0F B6 C2: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 86 B8 60 00 00: mov word ptr [esi + 0x60b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4B 0B 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 340h]
        push ecx
        push 7
        mov ecx, esi
        ; Exact mapped bytes E8 B2 30 FF FF: call 0x588d75f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 86 B8 60 00 00: mov word ptr [esi + 0x60b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2F 0B 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 40000000h
        ; Exact mapped bytes E8 AC 3B FF FF: call 0x588d8100
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 20 0B 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 40000000h
        ; Exact mapped bytes E8 ED 3B FF FF: call 0x588d8150
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 11 0B 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 340h]
        xor ecx, ecx
        cmp dword ptr [esi + 141ch], ecx
        mov dword ptr [esi + 60a8h], 40000000h
        lea ebx, [ecx + 1]
        ; Exact mapped bytes 7E 4C: jle 0x588e45d1
        __asm _emit 0x7e
        __asm _emit 0x4c
        lea edx, [esi + 17ch]
        or ebp, 0ffffffffh
        mov edi, edi
        movzx eax, byte ptr [ecx + esi + 1fch]
        cmp eax, edi
        ; Exact mapped bytes 75 28: jne 0x588e45c4
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x588e45c4
        __asm _emit 0x74
        __asm _emit 0x22
        cmp byte ptr [ecx + esi + 21ch], 0
        mov dword ptr [eax + 108h], 40000000h
        ; Exact mapped bytes 74 08: je 0x588e45be
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [eax + 124h], ebp
        ; Exact mapped bytes EB 06: jmp 0x588e45c4
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [eax + 124h], ebx
        add ecx, ebx
        add edx, 4
        cmp ecx, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C BF: jl 0x588e4590
        __asm _emit 0x7c
        __asm _emit 0xbf
        mov cl, byte ptr [esi + 60ach]
        or cl, bl
        ; Exact mapped bytes 66 0F B6 D1: movzx dx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 96 B8 60 00 00: mov word ptr [esi + 0x60b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 90 0A 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 340h]
        xor ecx, ecx
        cmp dword ptr [esi + 141ch], ecx
        mov dword ptr [esi + 60a8h], 40000000h
        lea ebx, [ecx + 1]
        ; Exact mapped bytes 7E CB: jle 0x588e45d1
        __asm _emit 0x7e
        __asm _emit 0xcb
        lea edx, [esi + 17ch]
        or ebp, 0ffffffffh
        nop
        movzx eax, byte ptr [ecx + esi + 1fch]
        cmp eax, edi
        ; Exact mapped bytes 75 28: jne 0x588e4644
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x588e4644
        __asm _emit 0x74
        __asm _emit 0x22
        cmp byte ptr [ecx + esi + 21ch], 0
        mov dword ptr [eax + 108h], 40000000h
        ; Exact mapped bytes 74 08: je 0x588e463e
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [eax + 124h], ebx
        ; Exact mapped bytes EB 06: jmp 0x588e4644
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [eax + 124h], ebp
        add ecx, ebx
        add edx, 4
        cmp ecx, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C BF: jl 0x588e4610
        __asm _emit 0x7c
        __asm _emit 0xbf
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x588e45d1
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 340h]
        push eax
        push 15h
        ; Exact mapped bytes E8 8C 2F FF FF: call 0x588d75f0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 B6 B8 60 00 00 02: xor word ptr [esi + 0x60b8], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes E9 08 0A 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 340h]
        push ecx
        push 14h
        mov ecx, esi
        ; Exact mapped bytes E8 6F 2F FF FF: call 0x588d75f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 B6 B8 60 00 00 01: xor word ptr [esi + 0x60b8], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes E9 EB 09 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 6B 3A FF FF: call 0x588d8100
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DF 09 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 AF 3A FF FF: call 0x588d8150
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D3 09 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [esi + 60adh]
        and dl, 10h
        ; Exact mapped bytes 66 0F B6 C2: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 86 BA 60 00 00: mov word ptr [esi + 0x60ba], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xba
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BA 09 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esi + 60adh]
        and cl, 20h
        ; Exact mapped bytes 66 0F B6 D1: movzx dx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 96 BA 60 00 00: mov word ptr [esi + 0x60ba], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xba
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 09 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 60adh]
        and al, 30h
        ; Exact mapped bytes 66 0F B6 C8: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 8E BA 60 00 00: mov word ptr [esi + 0x60ba], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xba
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 89 09 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 14 F0 FF: call 0x587e5b50
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 B6 B8 60 00 00 03: xor word ptr [esi + 0x60b8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        xor edx, edx
        xor ecx, ecx
        cmp dword ptr [esi + 141ch], edx
        ; Exact mapped bytes 7E 26: jle 0x588e4735
        __asm _emit 0x7e
        __asm _emit 0x26
        lea eax, [esi + 17ch]
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 74 10: je 0x588e4729
        __asm _emit 0x74
        __asm _emit 0x10
        mov edi, dword ptr [eax]
        mov dword ptr [edi + 108h], edx
        mov edi, dword ptr [eax]
        mov dword ptr [edi + 10ch], edx
        inc ecx
        add eax, 4
        cmp ecx, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C E0: jl 0x588e4715
        __asm _emit 0x7c
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 0F 84 35 09 00 00: je 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 55 8B FF FF: call 0x588dd2a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 25 09 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 B5 8B FF FF: call 0x588dd310
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 19 09 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 13 F0 FF: call 0x587e5b50
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x13
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 B6 B8 60 00 00 03: xor word ptr [esi + 0x60b8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        xor edx, edx
        xor ecx, ecx
        cmp dword ptr [esi + 141ch], edx
        ; Exact mapped bytes 0F 8E F6 08 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 17ch]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 74 10: je 0x588e47a4
        __asm _emit 0x74
        __asm _emit 0x10
        mov edi, dword ptr [eax]
        mov dword ptr [edi + 108h], edx
        mov edi, dword ptr [eax]
        mov dword ptr [edi + 10ch], edx
        inc ecx
        add eax, 4
        cmp ecx, dword ptr [esi + 141ch]
        ; Exact mapped bytes 7C E0: jl 0x588e4790
        __asm _emit 0x7c
        __asm _emit 0xe0
        ; Exact mapped bytes E9 C4 08 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 60c0h], 1
        ; Exact mapped bytes E9 B5 08 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 100ch]
        mov cl, byte ptr [eax + 4]
        and cl, 1fh
        cmp cl, 9
        ; Exact mapped bytes 75 0E: jne 0x588e47e3
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 BE 64 01 00 00 03: cmp word ptr [esi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 87 96 08 00 00: ja 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 23ch]
        ; Exact mapped bytes E8 52 B6 EC FF: call 0x587afe40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb6
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 7E 08 00 00: je 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffh
        lea edx, [esp + 25h]
        push 0
        push edx
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 37 84 09 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6028h]
        mov ecx, dword ptr [eax + 9ch]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [eax + 84h]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 10488h]
        mov edx, dword ptr [eax + 10490h]
        add esi, 3a0h
        push esi
        push ecx
        push edx
        push 589a1360h
        lea eax, [esp + 48h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        lea ecx, [esp + 40h]
        add esp, 2ch
        push 0
        push ecx
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        push eax
        lea eax, [esp + 2ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 F6 07 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 100ch]
        mov al, byte ptr [edx + 4]
        and al, 1fh
        cmp al, 9
        ; Exact mapped bytes 75 0E: jne 0x588e48a0
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 BE 64 01 00 00 03: cmp word ptr [esi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 87 D9 07 00 00: ja 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 23ch]
        ; Exact mapped bytes E8 A5 B5 EC FF: call 0x587afe50
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C1 07 00 00: je 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffh
        lea ecx, [esp + 25h]
        push 0
        push ecx
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 7A 83 09 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6028h]
        mov edx, dword ptr [eax + 9ch]
        mov ecx, dword ptr [eax + 88h]
        push edx
        mov edx, dword ptr [eax + 84h]
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [eax + 10488h]
        push edx
        mov edx, dword ptr [eax + 10490h]
        add esi, 3a0h
        push esi
        push ecx
        push edx
        push 589a132ch
        ; Exact mapped bytes E9 3E FF FF FF: jmp 0x588e484b
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 100ch]
        mov al, byte ptr [edx + 4]
        and al, 1fh
        cmp al, 9
        ; Exact mapped bytes 75 0E: jne 0x588e492a
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 BE 64 01 00 00 03: cmp word ptr [esi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 87 4F 07 00 00: ja 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 23ch]
        ; Exact mapped bytes E8 3B B5 EC FF: call 0x587afe70
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes E9 3F 07 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 37 07 00 00: je 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 98 F1 FF FF: call 0x588e3ae0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 24 07 00 00: je 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffh
        lea ecx, [esp + 25h]
        push 0
        push ecx
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 DD 82 09 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6028h]
        mov edx, dword ptr [eax + 9ch]
        mov ecx, dword ptr [eax + 88h]
        push edx
        mov edx, dword ptr [eax + 84h]
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [eax + 10488h]
        push edx
        mov edx, dword ptr [eax + 10490h]
        add esi, 3a0h
        push esi
        push ecx
        push edx
        push 589a12f0h
        ; Exact mapped bytes E9 A1 FE FF FF: jmp 0x588e484b
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        ; Exact mapped bytes 0F 84 C7 06 00 00: je 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi]
        cmp al, 1
        ; Exact mapped bytes 0F 85 E5 01 00 00: jne 0x588e4ba1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi + 1]
        cmp al, 1
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x588e4a7b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi + 2], al
        ; Exact mapped bytes 75 4A: jne 0x588e4a16
        __asm _emit 0x75
        __asm _emit 0x4a
        movzx eax, byte ptr [edi + 3]
        sub eax, 6
        xor ebx, ebx
        mov dword ptr [esp + 14h], eax
        test eax, eax
        ; Exact mapped bytes 0F 8E 98 06 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [edi + ebx + 6]
        add edx, 139h
        shl edx, 4
        mov ebp, dword ptr [edx + esi]
        test ebp, ebp
        ; Exact mapped bytes 74 16: je 0x588e4a0c
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        push edi
        push 1
        ; Exact mapped bytes E8 DF 84 E5 FF: call 0x5873cee0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ebp, dword ptr [ebp + 8]
        test ebp, ebp
        ; Exact mapped bytes 75 EE: jne 0x588e49f6
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, dword ptr [esp + 14h]
        inc ebx
        cmp ebx, eax
        ; Exact mapped bytes 7C D0: jl 0x588e49e1
        __asm _emit 0x7c
        __asm _emit 0xd0
        ; Exact mapped bytes E9 63 06 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ebp, byte ptr [edi + 3]
        sub ebp, 8
        mov dword ptr [esp + 14h], ebp
        test ebp, ebp
        ; Exact mapped bytes 7F 17: jg 0x588e4a3c
        __asm _emit 0x7f
        __asm _emit 0x17
        push 0acbh
        push 589a12b8h
        push 589a12a0h
        ; Exact mapped bytes E8 95 84 09 00: call 0x5897cece
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        xor ebx, ebx
        test ebp, ebp
        ; Exact mapped bytes 0F 8E 33 06 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edi + ebx + 8]
        add eax, 139h
        shl eax, 4
        mov ebp, dword ptr [eax + esi]
        test ebp, ebp
        ; Exact mapped bytes 74 15: je 0x588e4a6f
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 0ch]
        lea eax, [edi + 4]
        push eax
        push 0
        ; Exact mapped bytes E8 78 84 E5 FF: call 0x5873cee0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ebp, dword ptr [ebp + 8]
        test ebp, ebp
        ; Exact mapped bytes 75 EB: jne 0x588e4a5a
        __asm _emit 0x75
        __asm _emit 0xeb
        inc ebx
        cmp ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 7C D0: jl 0x588e4a46
        __asm _emit 0x7c
        __asm _emit 0xd0
        ; Exact mapped bytes E9 FE 05 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 75 2B: jne 0x588e4aaa
        __asm _emit 0x75
        __asm _emit 0x2b
        movzx ebx, byte ptr [edi + 3]
        sub ebx, 6
        xor ebp, ebp
        test ebx, ebx
        ; Exact mapped bytes 0F 8E E9 05 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [edi + ebp + 6]
        push edi
        push ecx
        push 4
        mov ecx, esi
        ; Exact mapped bytes E8 70 66 FF FF: call 0x588db110
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebp
        cmp ebp, ebx
        ; Exact mapped bytes 7C EB: jl 0x588e4a90
        __asm _emit 0x7c
        __asm _emit 0xeb
        ; Exact mapped bytes E9 CF 05 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 3
        ; Exact mapped bytes 75 2C: jne 0x588e4ada
        __asm _emit 0x75
        __asm _emit 0x2c
        movzx ebx, byte ptr [edi + 3]
        sub ebx, 4
        xor ebp, ebp
        test ebx, ebx
        ; Exact mapped bytes 0F 8E BA 05 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        movzx edx, byte ptr [edi + ebp + 4]
        push edi
        push edx
        push 4
        mov ecx, esi
        ; Exact mapped bytes E8 40 66 FF FF: call 0x588db110
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebp
        cmp ebp, ebx
        ; Exact mapped bytes 7C EB: jl 0x588e4ac0
        __asm _emit 0x7c
        __asm _emit 0xeb
        ; Exact mapped bytes E9 9F 05 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 5
        ; Exact mapped bytes 75 32: jne 0x588e4b10
        __asm _emit 0x75
        __asm _emit 0x32
        movzx ebx, byte ptr [edi + 3]
        sub ebx, 4
        xor ebp, ebp
        test ebx, ebx
        ; Exact mapped bytes 0F 8E 8A 05 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        movzx eax, byte ptr [edi + ebp + 4]
        movzx ecx, byte ptr [edi + 2]
        push edi
        add ecx, 0bh
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 0A 66 FF FF: call 0x588db110
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebp
        cmp ebp, ebx
        ; Exact mapped bytes 7C E5: jl 0x588e4af0
        __asm _emit 0x7c
        __asm _emit 0xe5
        ; Exact mapped bytes E9 69 05 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 6
        ; Exact mapped bytes 75 3F: jne 0x588e4b53
        __asm _emit 0x75
        __asm _emit 0x3f
        movzx ebx, byte ptr [edi + 3]
        sub ebx, 8
        test ebx, ebx
        ; Exact mapped bytes 0F 8E 56 05 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        test ebx, ebx
        ; Exact mapped bytes 0F 8E 4C 05 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        movzx edx, byte ptr [edi + ebp + 8]
        lea eax, [edi + 4]
        push eax
        movzx eax, byte ptr [edi + 2]
        push edx
        add eax, 15h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C7 65 FF FF: call 0x588db110
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebp
        cmp ebp, ebx
        ; Exact mapped bytes 7C E2: jl 0x588e4b30
        __asm _emit 0x7c
        __asm _emit 0xe2
        ; Exact mapped bytes E9 26 05 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 7
        ; Exact mapped bytes 0F 85 1E 05 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edi + 3]
        sub eax, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        ; Exact mapped bytes 0F 8E 0B 05 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        test eax, eax
        ; Exact mapped bytes 0F 8E 01 05 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [edi + 4]
        ; Exact mapped bytes EB 03: jmp 0x588e4b80
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E4B80 .. +0x523 bytes.
extern "C" __declspec(naked) void FUN_588e4260_segment_02() {
    __asm {
        movzx ecx, byte ptr [ebx + ebp]
        movzx edx, byte ptr [edi + 2]
        push ebx
        push ecx
        add edx, 16h
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 7B 65 FF FF: call 0x588db110
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebp
        cmp ebp, dword ptr [esp + 14h]
        ; Exact mapped bytes 7C E4: jl 0x588e4b80
        __asm _emit 0x7c
        __asm _emit 0xe4
        ; Exact mapped bytes E9 D8 04 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 0F 85 D0 04 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi + 1]
        cmp al, 1
        ; Exact mapped bytes 75 5E: jne 0x588e4c0e
        __asm _emit 0x75
        __asm _emit 0x5e
        mov al, byte ptr [edi + 2]
        cmp al, byte ptr [esi + 354h]
        ; Exact mapped bytes 0F 85 BA 04 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7F 0A 00: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        movzx ecx, word ptr [edi + 4]
        movzx edx, word ptr [edi + 6]
        movzx eax, word ptr [edi + 8]
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 0F 84 9B 04 00 00: je 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, ax
        push eax
        ; Exact mapped bytes E8 73 55 EA FF: call 0x5878a160
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x55
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 84 04 00 00: je 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, dword ptr [eax + 6024h]
        add esi, 4
        push esi
        ; Exact mapped bytes E8 E7 15 E7 FF: call 0x587561f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x15
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes E9 6B 04 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 9
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x588e4c9c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test byte ptr [edx + 105a8h], 1
        ; Exact mapped bytes 0F 84 50 04 00 00: je 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edi + 3]
        sub eax, 4
        shr eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 8E 3F 04 00 00: jle 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [edi + 4]
        mov dword ptr [esp + 14h], eax
        movzx eax, word ptr [ebx]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 10 55 EA FF: call 0x5878a160
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x55
        __asm _emit 0xea
        __asm _emit 0xff
        mov ebp, eax
        test ebp, ebp
        ; Exact mapped bytes 74 37: je 0x588e4c8d
        __asm _emit 0x74
        __asm _emit 0x37
        cmp dword ptr [esi + 6070h], 0
        ; Exact mapped bytes 75 2E: jne 0x588e4c8d
        __asm _emit 0x75
        __asm _emit 0x2e
        cmp dword ptr [ebp + 6070h], 0
        ; Exact mapped bytes 74 25: je 0x588e4c8d
        __asm _emit 0x74
        __asm _emit 0x25
        lea ecx, [ebp + 356h]
        push ecx
        lea edx, [esi + 356h]
        push edx
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x588e4c8d
        __asm _emit 0x75
        __asm _emit 0x0d
        movzx eax, byte ptr [edi + 2]
        mov ecx, dword ptr [ebp + 7ch]
        push eax
        ; Exact mapped bytes E8 63 24 E5 FF: call 0x587370f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0xff
        add ebx, 2
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 75 AA: jne 0x588e4c41
        __asm _emit 0x75
        __asm _emit 0xaa
        ; Exact mapped bytes E9 DD 03 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 0ah
        ; Exact mapped bytes 0F 85 E1 01 00 00: jne 0x588e4e85
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 C8 03 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 10h
        cmp eax, 6
        ; Exact mapped bytes 0F 85 BC 03 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [edi + 0ch]
        movzx ebp, word ptr [edi + 0ah]
        mov al, byte ptr [edi + 0eh]
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp esi, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 16: jne 0x588e4ced
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 2f0h], 0
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        test al, al
        ; Exact mapped bytes 0F 85 33 01 00 00: jne 0x588e4e28
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0b4h
        ; Exact mapped bytes E8 4F 7F 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        xor edi, edi
        mov dword ptr [esp + 12ch], edi
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588e4d4f
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [ecx + 10524h]
        movzx edx, word ptr [esp + 14h]
        push 40h
        lea ecx, [edx + 0f0h]
        push ecx
        movzx edi, bp
        lea ecx, [edi + 140h]
        push ecx
        add edx, 0ffffff10h
        push edx
        add edi, 0fffffec0h
        push edi
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 73 68 00 00: call 0x588eb5c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        push 4e20h
        mov ecx, edi
        mov dword ptr [esp + 130h], 0ffffffffh
        ; Exact mapped bytes E8 2A C8 E4 FF: call 0x58731590
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc8
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [edi + 8ch], 1
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 11 68 00 00: call 0x588eb590
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 20d58h]
        push edi
        ; Exact mapped bytes E8 9F 92 FF FF: call 0x588de030
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp esi, dword ptr [edx + 4]
        ; Exact mapped bytes 0F 85 D9 02 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 6
        push 2
        ; Exact mapped bytes E8 A1 B9 F9 FF: call 0x58880750
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb9
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 6
        push 2
        ; Exact mapped bytes E8 30 B7 F9 FF: call 0x588804f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb7
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 34 26 FF FF: call 0x588d7400
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [eax + 105f0h]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 28: je 0x588e4e06
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 22: je 0x588e4e06
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 2ech], 3ch
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 CF 25 FF FF: call 0x588d73d0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 73 02 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 2ech], 78h
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 AD 25 FF FF: call 0x588d73d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 51 02 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 75 22: jne 0x588e4e4e
        __asm _emit 0x75
        __asm _emit 0x22
        cmp esi, dword ptr [ecx + 4]
        ; Exact mapped bytes 0F 85 44 02 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [eax + 2e4h]
        push 9fh
        push 0
        push 5899c040h
        ; Exact mapped bytes EB 21: jmp 0x588e4e6f
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp esi, dword ptr [ecx + 4]
        ; Exact mapped bytes 0F 85 22 02 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [ecx + 2e4h]
        push 9fh
        push 0
        push 589a1278h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 20 5D E9 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x5d
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 F4 01 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 0bh
        ; Exact mapped bytes 75 50: jne 0x588e4ed9
        __asm _emit 0x75
        __asm _emit 0x50
        mov eax, 4bh
        mov dword ptr [esi + 16ch], eax
        mov dword ptr [esi + 168h], eax
        mov edx, 100h
        mov eax, 1
        ; Exact mapped bytes 66 89 96 70 01 00 00: mov word ptr [esi + 0x170], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 64 01 00 00: mov word ptr [esi + 0x164], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 4], esi
        ; Exact mapped bytes 0F 85 B8 01 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 7E 9B F7 FF: call 0x5885ea50
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x588e4f77
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 0ch
        ; Exact mapped bytes 75 60: jne 0x588e4f3d
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, 4bh
        mov ecx, 6ah
        mov edx, 2
        mov dword ptr [esi + 16ch], eax
        mov dword ptr [esi + 168h], eax
        ; Exact mapped bytes 66 89 8E 70 01 00 00: mov word ptr [esi + 0x170], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 64 01 00 00: mov word ptr [esi + 0x164], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 0F 85 65 01 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes E8 2B 9B F7 FF: call 0x5885ea50
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0a0h]
        push 2
        ; Exact mapped bytes E8 88 9B F7 FF: call 0x5885eac0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 3C 01 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 0dh
        ; Exact mapped bytes 75 4B: jne 0x588e4f8c
        __asm _emit 0x75
        __asm _emit 0x4b
        mov eax, 32h
        mov dword ptr [esi + 16ch], eax
        mov dword ptr [esi + 168h], eax
        xor eax, eax
        mov ecx, 4
        ; Exact mapped bytes 66 89 86 72 01 00 00: mov word ptr [esi + 0x172], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E 64 01 00 00: mov word ptr [esi + 0x164], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 39 9B F7 FF: call 0x5885eac0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 0eh
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 32h
        mov ecx, 0ffffff00h
        mov edx, 5
        mov dword ptr [esi + 16ch], eax
        mov dword ptr [esi + 168h], eax
        ; Exact mapped bytes 66 89 8E 72 01 00 00: mov word ptr [esi + 0x172], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 64 01 00 00: mov word ptr [esi + 0x164], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x588e5079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0a0h]
        push edx
        ; Exact mapped bytes E8 E3 9A F7 FF: call 0x5885eac0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9a
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 D8 2E FF FF: call 0x588d7ec0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1E 60 FF FF: call 0x588db010
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x588e5079
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 23ch]
        ; Exact mapped bytes E8 5E AE EC FF: call 0x587afe60
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xae
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 6E: je 0x588e5079
        __asm _emit 0x74
        __asm _emit 0x6e
        push 0ffh
        lea edx, [esp + 25h]
        push 0
        push edx
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 27 7C 09 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6028h]
        mov ecx, dword ptr [eax + 9ch]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [eax + 84h]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 10488h]
        mov edx, dword ptr [eax + 10490h]
        add esi, 3a0h
        push esi
        push ecx
        push edx
        lea eax, [esp + 44h]
        push 589a1244h
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        lea ecx, [esp + 48h]
        ; Exact mapped bytes E9 EB F7 FF FF: jmp 0x588e485a
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 60c0h], 0
        mov ecx, dword ptr [esp + 124h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 10ch]
        xor ecx, esp
        ; Exact mapped bytes E8 40 7B 09 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 11ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
