// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A65F0 .. +0x8AF bytes.
extern "C" __declspec(naked) void FUN_584a65f0_584A65F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ech
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov byte ptr [ebp - 11h], 1
        mov byte ptr [ebp - 5], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 30 5E FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C9 E3 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 3ch], edx
        mov dword ptr [ebp - 54h], 3b9ac9ffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 03 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B2 02 00 00: je 0x584a68ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C 03 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 B0 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 8B 02 00 00: jne 0x584a68e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 03 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 5E FE FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 7C 10: jl 0x584a667d
        __asm _emit 0x7c
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 F0 FF FF: call 0x584a5720
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1C 08 00 00: jmp 0x584a6e99
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3B 03 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 34 03 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 28 03 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 38h], esi
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 03 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 04 5A FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 F8 59 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 34h], esi
        mov eax, dword ptr [ebp - 38h]
        imul eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, dword ptr [ebp - 34h]
        add eax, ecx
        mov dword ptr [ebp - 0d4h], eax
        mov esi, dword ptr [ebp - 38h]
        imul esi, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, dword ptr [ebp - 34h]
        add esi, edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 53 5D FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C 91 FF FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 40 5D FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 59 91 FF FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [edi]
        imul edx, dword ptr [eax]
        shl edx, 1
        cmp esi, edx
        ; Exact mapped bytes 7E 09: jle 0x584a671b
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 60h], 1
        ; Exact mapped bytes EB 07: jmp 0x584a6722
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov al, byte ptr [ebp - 60h]
        mov byte ptr [ebp - 11h], al
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 02 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 89 02 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 7D 02 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 64h], esi
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 02 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 59 59 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 4D 59 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 68h], esi
        mov eax, dword ptr [ebp - 64h]
        imul eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [ebp - 68h]
        imul ecx, dword ptr [ebp - 68h]
        add eax, ecx
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 5], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x584a6791
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 36: jge 0x584a67cd
        __asm _emit 0x7d
        __asm _emit 0x36
        imul eax, dword ptr [ebp - 20h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 54h]
        cmp edx, dword ptr [ecx + eax + 2ch]
        ; Exact mapped bytes 76 0E: jbe 0x584a67b5
        __asm _emit 0x76
        __asm _emit 0x0e
        imul eax, dword ptr [ebp - 20h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 2ch]
        mov dword ptr [ebp - 54h], edx
        imul eax, dword ptr [ebp - 20h], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 70h]
        cmp edx, dword ptr [ecx + eax + 2ch]
        ; Exact mapped bytes 72 06: jb 0x584a67cb
        __asm _emit 0x72
        __asm _emit 0x06
        mov byte ptr [ebp - 5], 1
        ; Exact mapped bytes EB BD: jmp 0x584a6788
        __asm _emit 0xeb
        __asm _emit 0xbd
        ; Exact mapped bytes EB BB: jmp 0x584a6788
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes F2 0F 2A 45 94: cvtsi2sd xmm0, dword ptr [ebp - 0x6c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x94
        mov ecx, dword ptr [ebp - 6ch]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 24 FF FF FF: movsd qword ptr [ebp - 0xdc], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 24 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xdc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 05 B8 51 89 58: mulss xmm0, dword ptr [0x588951b8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC AB 38 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xab
        __asm _emit 0x38
        __asm _emit 0x00
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp - 70h]
        cmp edx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 72 09: jb 0x584a681e
        __asm _emit 0x72
        __asm _emit 0x09
        mov dword ptr [ebp - 74h], 1
        ; Exact mapped bytes EB 07: jmp 0x584a6825
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov al, byte ptr [ebp - 74h]
        mov byte ptr [ebp - 4dh], al
        cmp dword ptr [ebp - 3ch], 6
        ; Exact mapped bytes 74 1E: je 0x584a684f
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 3ch], 7
        ; Exact mapped bytes 74 18: je 0x584a684f
        __asm _emit 0x74
        __asm _emit 0x18
        movzx ecx, byte ptr [ebp - 11h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x584a684a
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 EE FF FF: call 0x584a5720
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x584a68df
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 01 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        ; Exact mapped bytes E8 85 1F 00 00: call 0x584a8800
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x584a688f
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 EE FF FF: call 0x584a5720
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 50: jmp 0x584a68df
        __asm _emit 0xeb
        __asm _emit 0x50
        movzx eax, byte ptr [ebp - 5]
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x584a68df
        __asm _emit 0x74
        __asm _emit 0x48
        mov dword ptr [ebp - 7ch], 0
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 01 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C 01 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 01 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA 57 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 24 23 00 00: call 0x584a8c00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0B: jmp 0x584a68ec
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 EE FF FF: call 0x584a5720
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x584a692c
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov dword ptr [ebp - 40h], 0
        cmp dword ptr [ebp - 3ch], 7
        ; Exact mapped bytes 74 06: je 0x584a6901
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 3ch], 6
        ; Exact mapped bytes 75 0D: jne 0x584a690e
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 F0 FF FF: call 0x584a5960
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a6919
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A EF FF FF: call 0x584a5830
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 0D: je 0x584a692c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 ED FF FF: call 0x584a5720
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 84 D9 02 00 00: je 0x584a6c12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584a694b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 8D BD 02 00 00: jge 0x584a6c12
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 0ch], 38h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 4C 10 18: movsx ecx, word ptr [eax + edx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x18
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 A3 02 00 00: jne 0x584a6c0d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 0ch], 38h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 44h], 0
        ; Exact mapped bytes 75 02: jne 0x584a697a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB C8: jmp 0x584a6942
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov dword ptr [ebp - 10h], 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8D 30 FF FF FF: mov word ptr [ebp - 0xd0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 0ch], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 44h]
        ; Exact mapped bytes E8 26 00 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 1A 00 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 80h], esi
        imul edx, dword ptr [ebp - 0ch], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 44h]
        ; Exact mapped bytes E8 F5 56 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 E9 56 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 84h], esi
        mov edx, dword ptr [ebp - 80h]
        imul edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [ebp - 84h]
        imul eax, dword ptr [ebp - 84h]
        add edx, eax
        mov dword ptr [ebp - 88h], edx
        imul ecx, dword ptr [ebp - 0ch], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 88h]
        cmp eax, dword ptr [edx + ecx + 2ch]
        ; Exact mapped bytes 77 40: ja 0x584a6a3e
        __asm _emit 0x77
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 8ch], ecx
        ; Exact mapped bytes F2 0F 2A 85 74 FF FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x8c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8ch]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 EF A5 3A 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa5
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 57 A8 38 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa8
        __asm _emit 0x38
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 43: jmp 0x584a6a81
        __asm _emit 0xeb
        __asm _emit 0x43
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 2ch]
        mov dword ptr [ebp - 90h], edx
        ; Exact mapped bytes F2 0F 2A 85 70 FF FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 90h]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 AA A5 3A 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa5
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 12 A8 38 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa8
        __asm _emit 0x38
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        imul eax, dword ptr [ebp - 10h], 0ah
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        imul edx, dword ptr [ebp - 0ch], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 44h]
        ; Exact mapped bytes E8 0D 56 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        imul ecx, dword ptr [ebp - 0ch], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 44h]
        ; Exact mapped bytes E8 07 FF FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 E7 55 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 E7 FE FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        push 2eeh
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        ; Exact mapped bytes E8 BB 1F 00 00: call 0x584a8ac0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x584a6bc1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        shl eax, 4
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        imul edx, dword ptr [ebp - 0ch], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 44h]
        ; Exact mapped bytes E8 79 55 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        imul ecx, dword ptr [ebp - 0ch], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 44h]
        ; Exact mapped bytes E8 73 FE FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 53 55 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 53 FE FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes E8 8C 18 00 00: call 0x584a8420
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes DD 9D 1C FF FF FF: fstp qword ptr [ebp - 0xe4]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 85 1C FF FF FF: movsd xmm0, qword ptr [ebp - 0xe4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 2F 05 F8 51 89 58: comisd xmm0, xmmword ptr [0x588951f8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 76 12: jbe 0x584a6bc1
        __asm _emit 0x76
        __asm _emit 0x12
        imul eax, dword ptr [ebp - 10h], 3
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x584a6bd3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ecx + eax + 20h]
        ; Exact mapped bytes 7D 2A: jge 0x584a6c0d
        __asm _emit 0x7d
        __asm _emit 0x2a
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1ch]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + eax*4]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 72 12: jb 0x584a6c0b
        __asm _emit 0x72
        __asm _emit 0x12
        imul edx, dword ptr [ebp - 0ch], 38h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D D8: mov cx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 66 89 4C 10 4C: mov word ptr [eax + edx + 0x4c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x4c
        ; Exact mapped bytes EB 02: jmp 0x584a6c0d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BD: jmp 0x584a6bca
        __asm _emit 0xeb
        __asm _emit 0xbd
        ; Exact mapped bytes E9 30 FD FF FF: jmp 0x584a6942
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A6 FD FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 6E 02 00 00: je 0x584a6e90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp - 5]
        test edx, edx
        ; Exact mapped bytes 0F 85 46 02 00 00: jne 0x584a6e74
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 88 FD FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 6B 54 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 FD FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 69 FD FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E FD FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 47 54 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov dword ptr [ebp - 30h], 190h
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 48h], 1
        mov dword ptr [ebp - 98h], 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 81 50 FE FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 708h
        ; Exact mapped bytes 7D 07: jge 0x584a6cad
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 69 50 FE FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 384h
        ; Exact mapped bytes 7E 1B: jle 0x584a6cd9
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 58 50 FE FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 0a8ch
        ; Exact mapped bytes 7F 0A: jg 0x584a6cd9
        __asm _emit 0x7f
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0ffffffffh
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 BC: movss dword ptr [ebp - 0x44], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 A8: movss dword ptr [ebp - 0x58], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xa8
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x584a6d9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 94h]
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x584a6d9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        sub ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes F3 0F 2A C1: cvtsi2ss xmm0, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 2ch]
        sub edx, dword ptr [ebp - 94h]
        ; Exact mapped bytes F3 0F 2A CA: cvtsi2ss xmm1, edx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 11 45 BC: movss dword ptr [ebp - 0x44], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xbc
        mov eax, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 10 4D BC: movss xmm1, dword ptr [ebp - 0x44]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes F3 0F 59 4D BC: mulss xmm1, dword ptr [ebp - 0x44]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes F3 0F 58 0D 50 4D 89 58: addss xmm1, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 58 05 50 4D 89 58: addss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 D8 A5 FE FF: call 0x58491330
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes D9 5D A8: fstp dword ptr [ebp - 0x58]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 2A 45 DC: cvtsi2ss xmm0, dword ptr [ebp - 0x24]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F3 0F 2A 4D B8: cvtsi2ss xmm1, dword ptr [ebp - 0x48]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes F3 0F 59 4D A8: mulss xmm1, dword ptr [ebp - 0x58]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes F3 0F 2A 45 D4: cvtsi2ss xmm0, dword ptr [ebp - 0x2c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes F3 0F 10 4D BC: movss xmm1, dword ptr [ebp - 0x44]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes F3 0F 59 4D A8: mulss xmm1, dword ptr [ebp - 0x58]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 2A 55 B8: cvtsi2ss xmm2, dword ptr [ebp - 0x48]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x55
        __asm _emit 0xb8
        ; Exact mapped bytes F3 0F 59 CA: mulss xmm1, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C D0: cvttss2si edx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 33: jmp 0x584a6dd0
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 75 15: jne 0x584a6dba
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 48h]
        imul ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 16: jmp 0x584a6dd0
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 98h]
        imul ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 30h]
        cdq
        mov ecx, 3
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 56 FE FF: call 0x5848c420
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 B9 4E FE FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4ch]
        shl ecx, 1
        xor edx, edx
        div ecx
        sub edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0c8h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 56 FE FF: call 0x5848c420
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 8E 4E FE FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4ch]
        shl ecx, 1
        xor edx, edx
        div ecx
        sub edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0cch], edx
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ech], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0e8h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 8F 1D 00 00: call 0x584a8c00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0cch], 0
        ; Exact mapped bytes EB 09: jmp 0x584a6e99
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 E2 FF FF: call 0x584a50d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
