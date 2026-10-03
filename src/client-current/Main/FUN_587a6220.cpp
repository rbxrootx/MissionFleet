// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 2951 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6220 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_587a6220_segment_00() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        push -1
        push 58980a9ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1d8h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 1d0h], eax
        push ebx
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
        lea eax, [esp + 1e8h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        xor eax, eax
        mov byte ptr [ecx + 93h], 0
        ; Exact mapped bytes 66 89 41 04: mov word ptr [ecx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        mov dword ptr [ecx + 8ch], esi
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 24h], ecx
        mov dword ptr [esp + 1ch], 10h
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 0F 84 F0 0A 00 00: je 0x587a6d80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], eax
        mov dword ptr [ecx + 10h], eax
        mov dword ptr [ecx + 14h], eax
        mov dword ptr [ecx + 18h], eax
        mov dword ptr [ecx + 1ch], eax
        mov dword ptr [ecx + 20h], eax
        mov dword ptr [ecx + 24h], eax
        mov dword ptr [ecx + 28h], eax
        mov dword ptr [ecx + 2ch], eax
        mov dword ptr [ecx + 30h], eax
        mov dword ptr [ecx + 34h], eax
        mov dword ptr [ecx + 38h], eax
        mov dword ptr [ecx + 3ch], eax
        mov dword ptr [ecx + 40h], eax
        mov dword ptr [ecx + 44h], eax
        mov dword ptr [ecx + 48h], eax
        mov dword ptr [ecx + 4ch], eax
        mov dword ptr [ecx + 50h], eax
        mov dword ptr [ecx + 54h], eax
        mov dword ptr [ecx + 58h], eax
        mov dword ptr [ecx + 5ch], eax
        mov dword ptr [ecx + 60h], eax
        mov dword ptr [ecx + 64h], eax
        mov dword ptr [ecx + 68h], eax
        mov dword ptr [ecx + 6ch], eax
        mov dword ptr [ecx + 70h], eax
        mov dword ptr [ecx + 74h], eax
        mov dword ptr [ecx + 78h], eax
        mov dword ptr [ecx + 7ch], eax
        mov dword ptr [ecx + 80h], eax
        mov dword ptr [ecx + 84h], eax
        xor edx, edx
        ; Exact mapped bytes EB 06: jmp 0x587a6300
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6300 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_587a6220_segment_01() {
    __asm {
        mov eax, 384h
        ; Exact mapped bytes 66 89 84 94 D8 01 00 00: mov word ptr [esp + edx*4 + 0x1d8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 84 94 DA 01 00 00: mov word ptr [esp + edx*4 + 0x1da], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        inc edx
        cmp edx, 2
        ; Exact mapped bytes 7C E5: jl 0x587a6300
        __asm _emit 0x7c
        __asm _emit 0xe5
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 4]
        mov edx, dword ptr [edx + 1018h]
        xor eax, eax
        ; Exact mapped bytes 66 39 B2 9E 00 00 00: cmp word ptr [edx + 0x9e], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xb2
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 20h], esi
        setne al
        mov dword ptr [esp + 14h], 8eh
        lea ebx, [ecx + 8]
        mov dword ptr [esp + 38h], eax
        mov eax, 238h
        sub eax, ecx
        mov dword ptr [esp + 48h], eax
        mov eax, 0b38h
        sub eax, ecx
        mov dword ptr [esp + 34h], eax
        mov eax, 2b8h
        sub eax, ecx
        mov dword ptr [esp + 2ch], eax
        mov eax, 1c94h
        sub eax, ecx
        mov dword ptr [esp + 40h], eax
        mov eax, 0e04h
        sub eax, ecx
        mov dword ptr [esp + 44h], eax
        mov eax, 0e84h
        sub eax, ecx
        mov dword ptr [esp + 28h], eax
        mov eax, 0fffffff8h
        sub eax, ecx
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes EB 08: jmp 0x587a63a0
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A63A0 .. +0xA15 bytes.
extern "C" __declspec(naked) void FUN_587a6220_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [esp + 20h]
        movzx esi, byte ptr [eax + ecx + 1fch]
        movzx ecx, byte ptr [eax + ecx + 21ch]
        mov edx, dword ptr [esp + 34h]
        lea ecx, [ecx + esi*2]
        shl ecx, 5
        lea esi, [ecx + eax + 888h]
        mov ecx, 8
        lea edi, [esp + 54h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        add edx, ebx
        mov ecx, eax
        mov eax, dword ptr [edx + ecx + 34ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 85 03 00 00: je 0x587a6771
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax]
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 78 03 00 00: jne 0x587a6771
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [esp + 28h]
        add ecx, ebx
        mov eax, dword ptr [ecx + eax]
        mov esi, eax
        mov ecx, 2dh
        lea edi, [esp + 74h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [edx + 4]
        mov eax, dword ptr [eax + 1018h]
        movzx eax, word ptr [eax + 98h]
        ; Exact mapped bytes 0F BF 94 24 20 01 00 00: movsx edx, word ptr [esp + 0x120]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 60h]
        add eax, edx
        mov edx, eax
        shr ecx, 10h
        imul edx, edx, 64h
        imul ecx, eax
        add ecx, edx
        mov eax, 51eb851fh
        imul ecx
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [eax + 204h]
        sar edx, 5
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x587a6509
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x587a6509
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edi, word ptr [esp + 112h]
        lea ecx, [edi + edi*4]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        movzx edx, ax
        mov eax, dword ptr [esp + 6ch]
        shr eax, 8
        mov dword ptr [esp + 18h], edx
        test al, 1
        ; Exact mapped bytes 74 15: je 0x587a64b7
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, 0ae147ae1h
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        add dword ptr [esp + 18h], ecx
        movzx ecx, word ptr [esp + 64h]
        add ecx, 64h
        mov eax, 2710h
        cdq
        idiv ecx
        mov ecx, eax
        imul ecx, edi
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        lea ecx, [edx + eax + 1]
        movzx ecx, cx
        imul ecx, ecx, 0dh
        mov eax, 66666667h
        imul ecx
        mov ecx, dword ptr [esp + 18h]
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 66 89 84 24 12 01 00 00: mov word ptr [esp + 0x112], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 76 3A: jbe 0x587a6541
        __asm _emit 0x76
        __asm _emit 0x3a
        ; Exact mapped bytes EB 30: jmp 0x587a6539
        __asm _emit 0xeb
        __asm _emit 0x30
        movzx ecx, word ptr [esp + 64h]
        add ecx, 64h
        mov eax, 2710h
        cdq
        idiv ecx
        movzx edx, word ptr [esp + 112h]
        mov ecx, eax
        imul ecx, edx
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        lea ecx, [edx + eax + 1]
        ; Exact mapped bytes 66 89 8C 24 12 01 00 00: mov word ptr [esp + 0x112], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 110h]
        and eax, 7fh
        cmp dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 7E 04: jle 0x587a6555
        __asm _emit 0x7e
        __asm _emit 0x04
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 4]
        mov edi, dword ptr [esp + 20h]
        movzx edx, byte ptr [ecx + edi + 1fch]
        mov eax, dword ptr [esp + 10eh]
        movzx ecx, byte ptr [ecx + edi + 21ch]
        shr eax, 4
        and eax, 7fh
        lea edx, [ecx + edx*2]
        ; Exact mapped bytes 66 39 84 54 D8 01 00 00: cmp word ptr [esp + edx*2 + 0x1d8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 24: jbe 0x587a65b0
        __asm _emit 0x76
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 4]
        movzx edx, byte ptr [ecx + edi + 1fch]
        movzx ecx, byte ptr [ecx + edi + 21ch]
        lea edx, [ecx + edx*2]
        ; Exact mapped bytes 66 89 84 54 D8 01 00 00: mov word ptr [esp + edx*2 + 0x1d8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 48h]
        mov eax, dword ptr [eax + 4]
        add ecx, ebx
        cmp dword ptr [ecx + eax], 0
        ; Exact mapped bytes 74 0C: je 0x587a65d0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx + eax]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 24508h
        ; Exact mapped bytes E8 74 66 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x66
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 1f0h], 0
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x587a667e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [edx + 1010h]
        movzx eax, word ptr [esp + 78h]
        mov dword ptr [esp + 50h], ecx
        ; Exact mapped bytes 8B 0D 4C 46 A2 58: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 1C: jle 0x587a6635
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x587a6635
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0F: je 0x587a6635
        __asm _emit 0x74
        __asm _emit 0x0f
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes EB 08: jmp 0x587a663d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 18h], 0
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [esp + 4ch], ecx
        mov ecx, dword ptr [esp + 50h]
        ; Exact mapped bytes 66 8B 04 01: mov ax, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x01
        ; Exact mapped bytes 66 03 82 AC 42 00 00: add ax, word ptr [edx + 0x42ac]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0xac
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, ax
        mov eax, dword ptr [edx + 8]
        push ecx
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [esp + 1ch]
        push eax
        mov eax, dword ptr [esp + 54h]
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        push edx
        push edi
        push eax
        ; Exact mapped bytes E8 64 D4 00 00: call 0x587b3ae0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587a6680
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx], eax
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, eax
        mov dword ptr [esp + 1f4h], 0ffffffffh
        ; Exact mapped bytes E8 72 AC 00 00: call 0x587b1310
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 4C 46 A2 58: mov eax, dword ptr [0x58a2464c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ebx]
        push eax
        ; Exact mapped bytes E8 05 A5 00 00: call 0x587b0bb0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [esp + 40h]
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [edx + ebx]
        mov dword ptr [eax + 243f4h], ecx
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + edi*8 + 0f10h]
        mov edx, dword ptr [eax + edi*8 + 0f0ch]
        push ecx
        mov ecx, dword ptr [ebx]
        push edx
        ; Exact mapped bytes E8 AD B8 00 00: call 0x587b1f90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [esp + 3ch]
        add ecx, ebx
        movzx edx, word ptr [ecx + eax + 0e0eh]
        mov ecx, dword ptr [esp + 44h]
        xor edx, 0aah
        push edx
        add ecx, ebx
        movzx edx, word ptr [ecx + eax]
        mov ecx, dword ptr [ebx]
        xor edx, 0aah
        push edx
        ; Exact mapped bytes E8 D8 BA 00 00: call 0x587b21f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        movzx edx, word ptr [ecx + 350h]
        mov ecx, dword ptr [ebx]
        push edx
        push edi
        lea eax, [esp + 7ch]
        push eax
        ; Exact mapped bytes E8 0B C3 00 00: call 0x587b2a40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 30h]
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebx]
        push 0
        ; Exact mapped bytes E8 58 BB 00 00: call 0x587b22a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 38h], 0
        ; Exact mapped bytes 0F 84 BA 02 00 00: je 0x587a6a0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes 39 05 70 90 9C 58: cmp dword ptr [0x589c9070], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 A9 02 00 00: jne 0x587a6a0d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov dword ptr [ecx + 140h], eax
        ; Exact mapped bytes E9 9C 02 00 00: jmp 0x587a6a0d
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + ecx + 34ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8D 02 00 00: je 0x587a6a0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ecx]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 80 02 00 00: jne 0x587a6a0d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 15 A8 45 A2 58: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, ebx
        mov eax, dword ptr [ecx + eax]
        mov esi, eax
        mov ecx, 2ah
        lea edi, [esp + 12ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        movzx eax, word ptr [edx + 204h]
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x587a6876
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x587a6876
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esp + 1cch]
        lea esi, [ecx + ecx*4]
        mov eax, 66666667h
        imul esi
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        test byte ptr [esp + 6dh], 1
        movzx edi, ax
        ; Exact mapped bytes 74 13: je 0x587a6809
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, 0ae147ae1h
        imul esi
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        add edi, eax
        movzx esi, word ptr [esp + 66h]
        imul ecx, ecx, 96h
        add esi, 64h
        mov eax, 2710h
        cdq
        idiv esi
        mov esi, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        imul esi, ecx
        mov eax, 51eb851fh
        imul esi
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        lea ecx, [edx + eax + 1]
        movzx ecx, cx
        imul ecx, ecx, 0dh
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 66 89 84 24 CC 01 00 00: mov word ptr [esp + 0x1cc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B F8: cmp di, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 76 59: jbe 0x587a68c5
        __asm _emit 0x76
        __asm _emit 0x59
        ; Exact mapped bytes 66 89 BC 24 CC 01 00 00: mov word ptr [esp + 0x1cc], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4F: jmp 0x587a68c5
        __asm _emit 0xeb
        __asm _emit 0x4f
        movzx ecx, word ptr [esp + 66h]
        add ecx, 64h
        mov eax, 2710h
        cdq
        idiv ecx
        movzx ecx, word ptr [esp + 1cch]
        imul ecx, ecx, 96h
        mov esi, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul esi, eax
        mov eax, 51eb851fh
        imul esi
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        lea edx, [edx + ecx + 1]
        ; Exact mapped bytes 66 89 94 24 CC 01 00 00: mov word ptr [esp + 0x1cc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1c4h]
        shr eax, 4
        and eax, 7fh
        cmp dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 7E 04: jle 0x587a68dc
        __asm _emit 0x7e
        __asm _emit 0x04
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 2ch]
        mov eax, dword ptr [eax + 4]
        add ecx, ebx
        cmp dword ptr [ecx + eax], 0
        ; Exact mapped bytes 74 0C: je 0x587a68fc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx + eax]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 3a5ch
        ; Exact mapped bytes E8 48 63 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x63
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 1f0h], 1
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x587a6987
        __asm _emit 0x74
        __asm _emit 0x6b
        movzx edx, word ptr [esp + 130h]
        ; Exact mapped bytes 8B 3D F8 47 A2 58: mov edi, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 50 46 A2 58: mov eax, dword ptr [0x58a24650]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [edi + 4]
        mov ecx, dword ptr [esi + 1010h]
        add edx, 2
        cmp dword ptr [eax + 160h], edx
        ; Exact mapped bytes 7E 18: jle 0x587a695b
        __asm _emit 0x7e
        __asm _emit 0x18
        test edx, edx
        ; Exact mapped bytes 7C 14: jl 0x587a695b
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x587a695b
        __asm _emit 0x74
        __asm _emit 0x0b
        shl edx, 6
        add edx, dword ptr [eax + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587a695d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 8B 0C 01: mov cx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x01
        ; Exact mapped bytes 66 03 8E AC 42 00 00: add cx, word ptr [esi + 0x42ac]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, esi
        movzx eax, cx
        mov ecx, dword ptr [esi + 8]
        push eax
        mov eax, dword ptr [esi + 4]
        push ecx
        mov ecx, dword ptr [esp + 38h]
        push eax
        push edx
        push edi
        ; Exact mapped bytes E8 6B EF 00 00: call 0x587b58f0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587a6989
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx], eax
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, eax
        mov dword ptr [esp + 1f4h], 0ffffffffh
        ; Exact mapped bytes E8 69 A9 00 00: call 0x587b1310
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [esp + 40h]
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [ecx + ebx]
        mov dword ptr [edx + 3918h], eax
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        movzx edx, word ptr [eax + 350h]
        mov ecx, dword ptr [esp + 44h]
        push edx
        lea edx, [eax + ecx]
        movzx ecx, word ptr [edx + ebx]
        mov edx, dword ptr [esp + 24h]
        xor ecx, 0aah
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        add ecx, ebx
        mov edx, dword ptr [eax + ecx]
        push edx
        mov edx, dword ptr [eax + 100ch]
        lea ecx, [esp + 13ch]
        push ecx
        mov ecx, dword ptr [ebx]
        push edx
        ; Exact mapped bytes E8 2A E0 00 00: call 0x587b4a30
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 B3 EE 00 00: call 0x587b58c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        inc dword ptr [esp + 20h]
        add eax, 2
        add ebx, 4
        cmp eax, 0ceh
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C 76 F9 FF FF: jl 0x587a63a0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x76
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        mov ecx, 160h
        sub ecx, eax
        mov dword ptr [esp + 2ch], ecx
        mov ecx, 1e0h
        xor ebx, ebx
        sub ecx, eax
        mov dword ptr [esp + 14h], 128h
        lea esi, [eax + 8]
        mov dword ptr [esp + 38h], ecx
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 0F 84 F7 02 00 00: je 0x587a6d51
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0f0h], 1
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        movzx eax, byte ptr [edx + ebx + 1fch]
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 120h], eax
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esi]
        cmp eax, 64h
        ; Exact mapped bytes 72 05: jb 0x587a6a8f
        __asm _emit 0x72
        __asm _emit 0x05
        mov eax, 64h
        mov dword ptr [ecx + 0cch], eax
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [esp + 3ch]
        mov eax, dword ptr [eax + 100ch]
        lea edi, [ecx + esi]
        ; Exact mapped bytes 0F BF 94 38 6A 01 00 00: movsx edx, word ptr [eax + edi + 0x16a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x38
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        add eax, ecx
        mov ecx, dword ptr [esi]
        push edx
        ; Exact mapped bytes 0F BF 14 30: movsx edx, word ptr [eax + esi]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x30
        push edx
        ; Exact mapped bytes E8 6A 9D 00 00: call 0x587b0830
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 100ch]
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F BF 0C 10: movsx ecx, word ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 0F BF 94 38 EA 01 00 00: movsx edx, word ptr [eax + edi + 0x1ea]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x38
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        add eax, ecx
        mov ecx, dword ptr [esi]
        push edx
        ; Exact mapped bytes 0F BF 14 30: movsx edx, word ptr [eax + esi]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x30
        push edx
        ; Exact mapped bytes E8 68 9D 00 00: call 0x587b0860
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 348h]
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 74h], eax
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 100ch]
        mov edx, ebx
        shr edx, 4
        mov edx, dword ptr [eax + edx*4 + 274h]
        mov ecx, 0fh
        sub ecx, ebx
        add ecx, ecx
        shr edx, cl
        mov ecx, dword ptr [esi]
        and edx, 3
        push edx
        ; Exact mapped bytes E8 D5 9D 00 00: call 0x587b0910
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 100h], 40000000h
        ; Exact mapped bytes 75 2A: jne 0x587a6b73
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        lea eax, [edx + ebx]
        movzx edx, byte ptr [eax + 1fch]
        movzx eax, byte ptr [eax + 21ch]
        lea edx, [eax + edx*2]
        movzx eax, word ptr [esp + edx*2 + 1d8h]
        push eax
        ; Exact mapped bytes E8 4D 9D 00 00: call 0x587b08c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax + 100ch]
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F BF 04 02: movsx eax, word ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x02
        mov ecx, dword ptr [esi]
        lea eax, [eax + eax*4]
        add eax, eax
        push eax
        mov dword ptr [ecx + 0a8h], eax
        ; Exact mapped bytes E8 93 9A 00 00: call 0x587b0630
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        cmp byte ptr [edx + ebx + 21ch], 0
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 74 09: je 0x587a6bbd
        __asm _emit 0x74
        __asm _emit 0x09
        or byte ptr [eax + 93h], 20h
        ; Exact mapped bytes EB 07: jmp 0x587a6bc4
        __asm _emit 0xeb
        __asm _emit 0x07
        or byte ptr [eax + 93h], 10h
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        movzx edx, byte ptr [eax + ebx + 1fch]
        cmp edx, dword ptr [eax + 340h]
        mov edx, dword ptr [esp + 34h]
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x587a6ccc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 34ch
        add edx, esi
        mov eax, dword ptr [eax + edx]
        test eax, eax
        ; Exact mapped bytes 74 73: je 0x587a6c66
        __asm _emit 0x74
        __asm _emit 0x73
        movzx eax, byte ptr [eax]
        mov edi, 5
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 66: jne 0x587a6c66
        __asm _emit 0x75
        __asm _emit 0x66
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 243ech], 1
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 14: jle 0x587a6c2e
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587a6c2e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x587a6c30
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [eax + 244fch], ecx
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 14: jle 0x587a6c58
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587a6c58
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x587a6c5a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [eax + 24500h], ecx
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 4]
        add ecx, 34ch
        mov ecx, dword ptr [ecx + edx]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x587a6d51
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ecx]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x587a6d51
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 3910h], 1
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 5
        ; Exact mapped bytes 7E 1D: jle 0x587a6cbf
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 14: je 0x587a6cbf
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 14h]
        mov dword ptr [eax + 3a54h], ecx
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x587a6d51
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [eax + 3a54h], ecx
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x587a6d51
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 34ch
        lea edi, [edx + esi]
        mov eax, dword ptr [eax + edi]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x587a6cf1
        __asm _emit 0x74
        __asm _emit 0x16
        movzx eax, byte ptr [eax]
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 0D: jne 0x587a6cf1
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 B5 E9 FF FF: call 0x587a56a0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 4]
        add ecx, 34ch
        mov ecx, dword ptr [ecx + edi]
        test ecx, ecx
        ; Exact mapped bytes 74 50: je 0x587a6d51
        __asm _emit 0x74
        __asm _emit 0x50
        movzx eax, byte ptr [ecx]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 47: jne 0x587a6d51
        __asm _emit 0x75
        __asm _emit 0x47
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0f4h]
        neg eax
        sbb eax, eax
        mov dword ptr [ecx + 3910h], 2
        ; Exact mapped bytes 8B 15 A4 46 A2 58: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 7
        cmp dword ptr [edx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x587a6d49
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x587a6d49
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [edx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587a6d49
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [edx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x587a6d4b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ecx + 3a54h], eax
        mov eax, dword ptr [esp + 14h]
        add eax, 2
        inc ebx
        add esi, 4
        cmp eax, 168h
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C E6 FC FF FF: jl 0x587a6a51
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 66 0F B6 88 93 00 00 00: movzx cx, byte ptr [eax + 0x93]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 88 90 00 00 00: mov word ptr [eax + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x587a6d8f
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 66 0F B6 91 93 00 00 00: movzx dx, byte ptr [ecx + 0x93]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 90 00 00 00: mov word ptr [ecx + 0x90], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1e8h]
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
        pop ebx
        mov ecx, dword ptr [esp + 1d0h]
        xor ecx, esp
        ; Exact mapped bytes E8 2B 5E 1D 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5e
        __asm _emit 0x1d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
