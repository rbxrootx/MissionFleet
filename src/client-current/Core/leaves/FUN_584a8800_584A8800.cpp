// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8800 .. +0x2B2 bytes.
extern "C" __declspec(naked) void FUN_584a8800_584A8800() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x584a8814
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x584a881b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 91 02 00 00: jmp 0x584a8aac
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5D 3C FE FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 7C 17: jl 0x584a8842
        __asm _emit 0x7c
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D9 59 2B 00: call 0x5875e210
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x59
        __asm _emit 0x2b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x584a8842
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 6A 02 00 00: jmp 0x584a8aac
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 3B FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F C1 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 90 80 03 00 00: mov dx, word ptr [eax + 0x380]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C 3C FE FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 7C 0C: jl 0x584a8878
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 05 00 00: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 40 E1 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 E1 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 40h], esi
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 19 38 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 38 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 3ch], esi
        mov ecx, dword ptr [ebp - 40h]
        imul ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 3ch]
        imul edx, dword ptr [ebp - 3ch]
        add ecx, edx
        mov dword ptr [ebp - 38h], ecx
        mov esi, dword ptr [ebp - 40h]
        imul esi, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 3ch]
        imul eax, dword ptr [ebp - 3ch]
        add esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 3B FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 88 6F FF FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E 3B FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 77 6F FF FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        imul ecx, dword ptr [eax]
        cmp esi, ecx
        ; Exact mapped bytes 7F 0A: jg 0x584a88fc
        __asm _emit 0x7f
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x584a8aac
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 35 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a8917
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1C 38 FE FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 89 01 00 00: je 0x584a8aaa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 46 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7D 46 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 6A 01 00 00: jne 0x584a8aa5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FD 3A FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 C0 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 90 80 03 00 00: mov dx, word ptr [eax + 0x380]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 23 3B FE FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 7C 0C: jl 0x584a8971
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 03 05 00 00: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 47 E0 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3D E0 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 20h], esi
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 20 37 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 16 37 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 24h], esi
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 24h]
        imul edx, dword ptr [ebp - 24h]
        add ecx, edx
        mov dword ptr [ebp - 30h], ecx
        movzx eax, word ptr [ebp - 4]
        movzx ecx, word ptr [ebp - 4]
        imul eax, ecx
        cmp dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 7F 0A: jg 0x584a89cc
        __asm _emit 0x7f
        __asm _emit 0x0a
        mov eax, 2
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x584a8aac
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x584a89de
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 0F 8D BD 00 00 00: jge 0x584a8aa5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0C 33 FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 DF FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x584a8aa0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D0 34 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 77: je 0x584a8a90
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5F D0 FE FF: call 0x58495a80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x584a8a90
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 43 CF FE FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 88 AE 00 00 00: mov cx, word ptr [eax + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 80 DF FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 76 DF FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 28h], esi
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 59 36 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4F 36 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 2ch], esi
        mov edx, dword ptr [ebp - 28h]
        imul edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 2ch]
        imul eax, dword ptr [ebp - 2ch]
        add edx, eax
        mov dword ptr [ebp - 34h], edx
        movzx ecx, word ptr [ebp - 8]
        movzx edx, word ptr [ebp - 8]
        imul ecx, edx
        cmp dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes 7F 07: jg 0x584a8a90
        __asm _emit 0x7f
        __asm _emit 0x07
        mov eax, 3
        ; Exact mapped bytes EB 1C: jmp 0x584a8aac
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 18 36 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 5E FF FF FF: jmp 0x584a89fe
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 30 FF FF FF: jmp 0x584a89d5
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 62 FE FF FF: jmp 0x584a890c
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
