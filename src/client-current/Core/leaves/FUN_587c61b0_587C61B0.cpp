// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C61B0 .. +0x953 bytes.
extern "C" __declspec(naked) void FUN_587c61b0_587C61B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 74 0C: je 0x587c61df
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 75 05: jne 0x587c61e4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 0E 09 00 00: jmp 0x587c6af2
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 F8 08 00 00: je 0x587c6af2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 8F 7F 08 00 00: jg 0x587c6af2
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 0F 8C 71 08 00 00: jl 0x587c6af2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x71
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 0F 8F 62 08 00 00: jg 0x587c6af2
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 0F 8C 53 08 00 00: jl 0x587c6af2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 8]
        mov dword ptr [ebp - 8ch], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3C: je 0x587c6319
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2B F4 CC FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf4
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 7C 02: jl 0x587c62ee
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2B: jmp 0x587c6319
        __asm _emit 0xeb
        __asm _emit 0x2b
        lea eax, [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5E F5 CC FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf5
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB BE: jmp 0x587c62d7
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 5ch]
        mov ecx, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 3ch]
        imul eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 50h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 58h]
        mov ecx, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + 58h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 58h]
        mov esi, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [esi + 0b0h]
        sub ecx, edx
        mov dword ptr [ebp - 54h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 5ch]
        mov esi, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [esi + 0b4h]
        sub ecx, edx
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 18: jmp 0x587c63c3
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 50h]
        add edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ecx + 60h]
        cmp dword ptr [ebp - 50h], edx
        ; Exact mapped bytes 0F 8D 95 01 00 00: jge 0x587c656a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 7ch], ecx
        ; Exact mapped bytes EB 27: jmp 0x587c641c
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 6ch]
        add eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 7ch]
        add eax, 1
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 70h]
        cmp ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 0F 8C 3D 01 00 00: jl 0x587c6565
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 64h]
        cmp dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 0F 8D 2B 01 00 00: jge 0x587c6565
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 8C 21 01 00 00: jl 0x587c6565
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 88 F8 00 00 00: js 0x587c6548
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 0a8h]
        imul eax, dword ptr [ecx + 0ach]
        cmp edx, eax
        ; Exact mapped bytes 0F 8D D7 00 00 00: jge 0x587c6548
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x587c6548
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 20h]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        cmp dword ptr [eax + ecx], 0
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x587c6548
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [ebp - 20h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 17 F3 CC FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf3
        __asm _emit 0xcc
        __asm _emit 0xff
        add eax, dword ptr [ebp - 70h]
        mov edx, dword ptr [ebp - 7ch]
        and edx, 1
        mov ecx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ecx + 0c0h]
        add eax, edx
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ebp - 20h]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0f0h]
        mov esi, dword ptr [ebp - 6ch]
        add esi, dword ptr [edx + eax + 4]
        mov eax, dword ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 20h]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 EC F2 CC FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf2
        __asm _emit 0xcc
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 48h], esi
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ech]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [ebp - 20h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 29 62 CD FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x62
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 20h]
        sub edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 70h]
        sub ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 70h], ecx
        ; Exact mapped bytes E9 90 FE FF FF: jmp 0x587c63f5
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 41 FE FF FF: jmp 0x587c63ab
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x587c6593
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 3ch]
        add eax, 1
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx + 64h]
        cmp dword ptr [ebp - 28h], edx
        ; Exact mapped bytes 0F 8D 9B 01 00 00: jge 0x587c6740
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 80h], ecx
        ; Exact mapped bytes EB 27: jmp 0x587c65ec
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 74h]
        add eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 30h]
        add edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 80h]
        add eax, 1
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 58h]
        cmp dword ptr [ebp - 78h], edx
        ; Exact mapped bytes 0F 8C 3D 01 00 00: jl 0x587c673b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + 64h]
        cmp dword ptr [ebp - 74h], ecx
        ; Exact mapped bytes 0F 8D 2B 01 00 00: jge 0x587c673b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 8C 21 01 00 00: jl 0x587c673b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        add edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 88 F8 00 00 00: js 0x587c671e
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        add eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 0a8h]
        imul ecx, dword ptr [edx + 0ach]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D D7 00 00 00: jge 0x587c671e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [edx + 0a8h]
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x587c671e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 24h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        cmp dword ptr [ecx + edx], 0
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x587c671e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        add edx, dword ptr [ebp - 24h]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0f0h]
        mov ecx, dword ptr [edx + eax]
        ; Exact mapped bytes E8 41 F1 CC FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf1
        __asm _emit 0xcc
        __asm _emit 0xff
        add eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [ebp - 80h]
        and ecx, 1
        mov edx, dword ptr [ebp - 18h]
        imul ecx, dword ptr [edx + 0c0h]
        add eax, ecx
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 30h]
        add eax, dword ptr [ebp - 24h]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        mov esi, dword ptr [ebp - 74h]
        add esi, dword ptr [eax + ecx + 4]
        mov ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 24h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 16 F1 CC FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xcc
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 48h], esi
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 28h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0ech]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        add edx, dword ptr [ebp - 24h]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0f0h]
        mov ecx, dword ptr [edx + eax]
        ; Exact mapped bytes E8 53 60 CD FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x60
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 24h]
        sub eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 78h]
        sub edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 78h], edx
        ; Exact mapped bytes E9 8A FE FF FF: jmp 0x587c65c5
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2C FE FF FF: jmp 0x587c656c
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3D: je 0x587c6783
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C2 EF CC FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xef
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        cmp eax, 40h
        ; Exact mapped bytes 7C 02: jl 0x587c6758
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2B: jmp 0x587c6783
        __asm _emit 0xeb
        __asm _emit 0x2b
        lea ecx, [ebp - 90h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F4 F0 CC FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf0
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB BD: jmp 0x587c6740
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 108h], 0
        ; Exact mapped bytes 0F 84 2E 03 00 00: je 0x587c6ac1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 54h]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 5ch]
        mov ecx, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 3ch]
        imul eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 50h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 58h]
        mov ecx, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + 58h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 58h]
        mov esi, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [esi + 0f4h]
        sub ecx, edx
        mov dword ptr [ebp - 54h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 5ch]
        mov esi, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [esi + 0f8h]
        sub ecx, edx
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 18: jmp 0x587c683d
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 60h]
        add edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ecx + 60h]
        cmp dword ptr [ebp - 60h], edx
        ; Exact mapped bytes 0F 8D 1D 01 00 00: jge 0x587c696c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes EB 33: jmp 0x587c68a8
        __asm _emit 0xeb
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 84h]
        add eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 58h]
        add edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 94h]
        add eax, 1
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 4ch]
        cmp ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 0F 8C B3 00 00 00: jl 0x587c6967
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 64h]
        cmp dword ptr [ebp - 84h], eax
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x587c6967
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 8C 94 00 00 00: jl 0x587c6967
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        add ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 78 6F: js 0x587c694a
        __asm _emit 0x78
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 58h]
        add edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 0fch]
        imul eax, dword ptr [ecx + 100h]
        cmp edx, eax
        ; Exact mapped bytes 7D 52: jge 0x587c694a
        __asm _emit 0x7d
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ecx + 0fch]
        ; Exact mapped bytes 7D 44: jge 0x587c694a
        __asm _emit 0x7d
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 58h]
        add eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 108h]
        mov eax, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 29: je 0x587c694a
        __asm _emit 0x74
        __asm _emit 0x29
        lea ecx, [ebp - 90h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 6B E1 D6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB D1: jmp 0x587c691b
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4ch]
        sub edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 40h]
        sub eax, 1
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x587c6875
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B9 FE FF FF: jmp 0x587c6825
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1E: jmp 0x587c698c
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 38h]
        add ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 64h]
        cmp dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 0F 8D 23 01 00 00: jge 0x587c6ac1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 98h], edx
        ; Exact mapped bytes EB 33: jmp 0x587c69f7
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 88h]
        add ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 64h]
        add eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 98h]
        add ecx, 1
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [edx + 58h]
        cmp dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 0F 8C B3 00 00 00: jl 0x587c6abc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx + 64h]
        cmp dword ptr [ebp - 88h], edx
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x587c6abc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 8C 94 00 00 00: jl 0x587c6abc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        add eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes 78 6F: js 0x587c6a9f
        __asm _emit 0x78
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 64h]
        add ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [edx + 0fch]
        imul edx, dword ptr [eax + 100h]
        cmp ecx, edx
        ; Exact mapped bytes 7D 52: jge 0x587c6a9f
        __asm _emit 0x7d
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 44h]
        cmp ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes 7D 44: jge 0x587c6a9f
        __asm _emit 0x7d
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 64h]
        add edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 108h]
        mov edx, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 29: je 0x587c6a9f
        __asm _emit 0x74
        __asm _emit 0x29
        lea eax, [ebp - 90h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 68h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 16 E0 D6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB D1: jmp 0x587c6a70
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4ch]
        sub edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 44h]
        sub eax, 1
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes E9 08 FF FF FF: jmp 0x587c69c4
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AD FE FF FF: jmp 0x587c696e
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2B: je 0x587c6af2
        __asm _emit 0x74
        __asm _emit 0x2b
        lea ecx, [ebp - 90h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 85 ED CC FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB CF: jmp 0x587c6ac1
        __asm _emit 0xeb
        __asm _emit 0xcf
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 53 A5 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
