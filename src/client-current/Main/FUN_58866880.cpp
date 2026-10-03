// Complete Ghidra body ranges for the selected function.
// 5 discontiguous segments; total 4864 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866880 .. +0x20D bytes.
extern "C" __declspec(naked) void FUN_58866880_segment_00() {
    __asm {
        sub esp, 10h
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 F0 12 00 00: je 0x58867b82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [ecx + 4]
        push ebx
        push ebp
        push edi
        cmp eax, 201h
        ; Exact mapped bytes 0F 87 4E 12 00 00: ja 0x58867af5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4e
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 25 10 00 00: je 0x588678d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 02 10 00 00: je 0x588678ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 89 12 00 00: jne 0x58867b4c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 656h]
        and eax, 0fh
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [esi + 69ch]
        shr eax, 1
        lea edx, [eax + edx*8]
        imul edx, edx, 0e0h
        mov ecx, 1
        mov dword ptr [esp + 14h], ecx
        cmp dword ptr [edx + 589cfd10h], ecx
        ; Exact mapped bytes 0F 82 CC 08 00 00: jb 0x588671c6
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 1dch]
        mov ebx, ecx
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebp, dword ptr [edi]
        add eax, 4
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 2C AC EC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xac
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x58866923
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4D 24: mov cx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x24
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 75 37: jne 0x5886695a
        __asm _emit 0x75
        __asm _emit 0x37
        movzx eax, word ptr [esi + 656h]
        and eax, 0fh
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [esi + 69ch]
        shr eax, 1
        lea ecx, [eax + edx*8]
        imul ecx, ecx, 0e0h
        inc ebx
        add edi, 4
        cmp ebx, dword ptr [ecx + 589cfd10h]
        ; Exact mapped bytes 76 B1: jbe 0x58866902
        __asm _emit 0x76
        __asm _emit 0xb1
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes E9 6C 08 00 00: jmp 0x588671c6
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 656h]
        and eax, 0fh
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [esi + 69ch]
        shr eax, 1
        lea ecx, [eax + edx*8]
        mov edx, dword ptr [esi + ebx*4 + 1d8h]
        imul ecx, ecx, 0e0h
        add ecx, 589cfca8h
        push ecx
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 32h
        push 0c8h
        push edx
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes E8 1F BD EF FF: call 0x587626c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xbd
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [esi + ebx*4 + 1d8h]
        cmp dword ptr [eax + 28h], 100h
        ; Exact mapped bytes 75 16: jne 0x588669c7
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        sub eax, 6
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 C9 C8 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        movzx eax, word ptr [esi + 656h]
        mov edx, dword ptr [esi + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 70h
        add eax, ebx
        movzx eax, word ptr [eax*2 + 589cfd12h]
        mov ecx, eax
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        and ecx, 3fh
        movzx edx, ax
        movzx eax, cx
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        movzx edx, dx
        lea ebp, [edx + ecx*8]
        mov edi, ebp
        imul edi, edi, 0e0h
        mov eax, dword ptr [edi + 589cfcech]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [edi + 589cfd70h]
        cmp eax, 4bh
        ; Exact mapped bytes 7D 0D: jge 0x58866a36
        __asm _emit 0x7d
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 20fh
        ; Exact mapped bytes EB 09: jmp 0x58866a3f
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, -4bh
        push eax
        ; Exact mapped bytes E8 6B AD EC FF: call 0x587317b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xad
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5c0h]
        push eax
        ; Exact mapped bytes E8 6F AC EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xac
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 589cfcfch]
        push ecx
        mov ecx, dword ptr [esi + 5b8h]
        ; Exact mapped bytes E8 FD 08 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [edi + 589cfcf4h]
        mov ecx, dword ptr [esi + 5bch]
        push edx
        ; Exact mapped bytes E8 EB 08 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        imul ebp, ebp, 70h
        mov eax, dword ptr [esp + 10h]
        xor ebx, ebx
        and eax, 10000h
        mov dword ptr [esp + 18h], ebp
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes EB 03: jmp 0x58866a90
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866A90 .. +0x6FD bytes.
extern "C" __declspec(naked) void FUN_58866880_segment_01() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        lea ebp, [eax + ebx]
        movzx eax, word ptr [ebp*2 + 589cfd28h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 73: jge 0x58866b17
        __asm _emit 0x7d
        __asm _emit 0x73
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 28h
        ; Exact mapped bytes 7E 16: jle 0x58866ac8
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58866ac8
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0a00h
        ; Exact mapped bytes EB 02: jmp 0x58866aca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + ebx*4 + 104h]
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 172h
        ; Exact mapped bytes 0F 8E 99 00 00 00: jle 0x58866b85
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x58866b85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 5c8h]
        mov ecx, dword ptr [esi + ebx*4 + 130h]
        push eax
        ; Exact mapped bytes E8 AE AB EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xab
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x58866bdc
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 79 00 00 00: jle 0x58866b96
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 27h
        ; Exact mapped bytes 7E 16: jle 0x58866b41
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58866b41
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 9c0h
        ; Exact mapped bytes EB 02: jmp 0x58866b43
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + ebx*4 + 104h]
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 171h
        ; Exact mapped bytes 7E 24: jle 0x58866b85
        __asm _emit 0x7e
        __asm _emit 0x24
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 1B: je 0x58866b85
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 5c4h]
        mov ecx, dword ptr [esi + ebx*4 + 130h]
        push eax
        ; Exact mapped bytes E8 3D AB EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xab
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 57: jmp 0x58866bdc
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [esi + ebx*4 + 130h]
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 2C AB EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xab
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 46: jmp 0x58866bdc
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 41: jne 0x58866bdc
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 29h
        ; Exact mapped bytes 7E 16: jle 0x58866bbf
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58866bbf
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x58866bc1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + ebx*4 + 104h]
        mov dword ptr [ecx + 0f8h], eax
        mov edx, dword ptr [esi + ebx*4 + 130h]
        mov dword ptr [edx + 50h], 0
        ; Exact mapped bytes 0F BF 04 6D 28 FD 9C 58: movsx eax, word ptr [ebp*2 + 0x589cfd28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x6d
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0x9c
        __asm _emit 0x58
        mov ecx, dword ptr [esi + ebx*4 + 104h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 6A 07 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE BC 1E 74 06 00 00: movsx edi, byte ptr [esi + ebx + 0x674]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xbc
        __asm _emit 0x1e
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 04 6D 28 FD 9C 58: movsx eax, word ptr [ebp*2 + 0x589cfd28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x6d
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0x9c
        __asm _emit 0x58
        xor edi, 0ffffffaah
        add edi, eax
        ; Exact mapped bytes 79 73: jns 0x58866c80
        __asm _emit 0x79
        __asm _emit 0x73
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 28h
        ; Exact mapped bytes 7E 16: jle 0x58866c31
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58866c31
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0a00h
        ; Exact mapped bytes EB 02: jmp 0x58866c33
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + ebx*4 + 0ach]
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 172h
        ; Exact mapped bytes 0F 8E 9B 00 00 00: jle 0x58866cf0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x58866cf0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 5c8h]
        mov ecx, dword ptr [esi + ebx*4 + 0d8h]
        push eax
        ; Exact mapped bytes E8 45 AA EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xaa
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x58866d44
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 8E 79 00 00 00: jle 0x58866d01
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 27h
        ; Exact mapped bytes 7E 16: jle 0x58866cac
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58866cac
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 9c0h
        ; Exact mapped bytes EB 02: jmp 0x58866cae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + ebx*4 + 0ach]
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 171h
        ; Exact mapped bytes 7E 24: jle 0x58866cf0
        __asm _emit 0x7e
        __asm _emit 0x24
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 1B: je 0x58866cf0
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 5c4h]
        mov ecx, dword ptr [esi + ebx*4 + 0d8h]
        push eax
        ; Exact mapped bytes E8 D2 A9 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 54: jmp 0x58866d44
        __asm _emit 0xeb
        __asm _emit 0x54
        mov ecx, dword ptr [esi + ebx*4 + 0d8h]
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 C1 A9 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 43: jmp 0x58866d44
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes 75 41: jne 0x58866d44
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 29h
        ; Exact mapped bytes 7E 16: jle 0x58866d27
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58866d27
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x58866d29
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + ebx*4 + 0ach]
        mov dword ptr [ecx + 0f8h], eax
        mov edx, dword ptr [esi + ebx*4 + 0d8h]
        mov dword ptr [edx + 50h], 0
        mov ecx, dword ptr [esi + ebx*4 + 0ach]
        mov eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 08 06 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 74 69: je 0x58866dc8
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3aeh
        ; Exact mapped bytes 7E 17: jle 0x58866d87
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58866d87
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0eb8h]
        ; Exact mapped bytes EB 02: jmp 0x58866d89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 2B A9 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3afh
        ; Exact mapped bytes 0F 8E BB 03 00 00: jle 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 AE 03 00 00: je 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ebch]
        ; Exact mapped bytes E9 9F 03 00 00: jmp 0x58867167
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        test eax, 2000000h
        ; Exact mapped bytes 74 69: je 0x58866e3c
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b0h
        ; Exact mapped bytes 7E 17: jle 0x58866dfb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58866dfb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0ec0h]
        ; Exact mapped bytes EB 02: jmp 0x58866dfd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 B7 A8 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa8
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b1h
        ; Exact mapped bytes 0F 8E 47 03 00 00: jle 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 3A 03 00 00: je 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0ec4h]
        ; Exact mapped bytes E9 2B 03 00 00: jmp 0x58867167
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 80000h
        ; Exact mapped bytes 74 69: je 0x58866eac
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b2h
        ; Exact mapped bytes 7E 17: jle 0x58866e6b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58866e6b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ec8h]
        ; Exact mapped bytes EB 02: jmp 0x58866e6d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 47 A8 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa8
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b3h
        ; Exact mapped bytes 0F 8E D7 02 00 00: jle 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 CA 02 00 00: je 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0ecch]
        ; Exact mapped bytes E9 BB 02 00 00: jmp 0x58867167
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 1000000h
        ; Exact mapped bytes 74 69: je 0x58866f1c
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b5h
        ; Exact mapped bytes 7E 17: jle 0x58866edb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58866edb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0ed4h]
        ; Exact mapped bytes EB 02: jmp 0x58866edd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 D7 A7 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa7
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b6h
        ; Exact mapped bytes 0F 8E 67 02 00 00: jle 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 5A 02 00 00: je 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ed8h]
        ; Exact mapped bytes E9 4B 02 00 00: jmp 0x58867167
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 40000h
        ; Exact mapped bytes 74 69: je 0x58866f8c
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b9h
        ; Exact mapped bytes 7E 17: jle 0x58866f4b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58866f4b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0ee4h]
        ; Exact mapped bytes EB 02: jmp 0x58866f4d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 67 A7 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa7
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bah
        ; Exact mapped bytes 0F 8E F7 01 00 00: jle 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 EA 01 00 00: je 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0ee8h]
        ; Exact mapped bytes E9 DB 01 00 00: jmp 0x58867167
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 20000h
        ; Exact mapped bytes 74 69: je 0x58866ffc
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bfh
        ; Exact mapped bytes 7E 17: jle 0x58866fbb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58866fbb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0efch]
        ; Exact mapped bytes EB 02: jmp 0x58866fbd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 F7 A6 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa6
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3c0h
        ; Exact mapped bytes 0F 8E 87 01 00 00: jle 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 7A 01 00 00: je 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0f00h]
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x58867167
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 74 69: je 0x5886706c
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bbh
        ; Exact mapped bytes 7E 17: jle 0x5886702b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5886702b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0eech]
        ; Exact mapped bytes EB 02: jmp 0x5886702d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 87 A6 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bch
        ; Exact mapped bytes 0F 8E 17 01 00 00: jle 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ef0h]
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x58867167
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        test eax, 40000000h
        ; Exact mapped bytes 74 7A: je 0x588670f3
        __asm _emit 0x74
        __asm _emit 0x7a
        push 68h
        ; Exact mapped bytes E8 60 C2 09 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 68h
        ; Exact mapped bytes E8 53 C2 09 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1f4h
        ; Exact mapped bytes 7E 17: jle 0x588670b5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588670b5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 7d0h]
        ; Exact mapped bytes EB 02: jmp 0x588670b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 FD A5 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa5
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1f5h
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58867165
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 7d4h]
        ; Exact mapped bytes EB 74: jmp 0x58867167
        __asm _emit 0xeb
        __asm _emit 0x74
        push 6ah
        ; Exact mapped bytes E8 E6 C1 09 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 6ah
        ; Exact mapped bytes E8 D9 C1 09 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bbh
        ; Exact mapped bytes 7E 17: jle 0x5886712f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5886712f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0eech]
        ; Exact mapped bytes EB 02: jmp 0x58867131
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 83 A5 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bch
        ; Exact mapped bytes 7E 17: jle 0x58867165
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58867165
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0ef0h]
        ; Exact mapped bytes EB 02: jmp 0x58867167
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 94h]
        push eax
        ; Exact mapped bytes E8 4D A5 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa5
        __asm _emit 0xec
        __asm _emit 0xff
        inc ebx
        cmp ebx, 0bh
        ; Exact mapped bytes 0F 8C 13 F9 FF FF: jl 0x58866a90
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 20h
        lea eax, [esi + 5c4h]
        lea edi, [edx - 1fh]
        ; Exact mapped bytes EB 03: jmp 0x58867190
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867190 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_58866880_segment_02() {
    __asm {
        test byte ptr [esp + 10h], 1
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 74 06: je 0x5886719f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes EB 09: jmp 0x588671a8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 59 24: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        shr dword ptr [esp + 10h], 1
        add eax, 4
        sub edx, edi
        ; Exact mapped bytes 75 DD: jne 0x58867190
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [esp + 14h]
        dec eax
        cmp dword ptr [esi + 1f44h], eax
        ; Exact mapped bytes 74 06: je 0x588671c6
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 1f44h], eax
        movzx eax, word ptr [esi + 656h]
        mov edx, dword ptr [esi + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 0e0h
        mov ecx, dword ptr [eax + 589cfd10h]
        inc ecx
        cmp dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 0F 85 53 09 00 00: jne 0x58867b4c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 589cfd70h]
        cmp eax, 4bh
        ; Exact mapped bytes 7D 2B: jge 0x5886722f
        __asm _emit 0x7d
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 20fh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 41: jle 0x58867258
        __asm _emit 0x7e
        __asm _emit 0x41
        test eax, eax
        ; Exact mapped bytes 7C 3D: jl 0x58867258
        __asm _emit 0x7c
        __asm _emit 0x3d
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 34: je 0x58867258
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 2B: jmp 0x5886725a
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, -4bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58867258
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58867258
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58867258
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5886725a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 5c0h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58867290
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 5b8h]
        push 0
        ; Exact mapped bytes E8 C3 00 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5bch]
        push 0
        ; Exact mapped bytes E8 B6 00 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ebp, [esi + 674h]
        lea edi, [esi + 0ach]
        mov ebx, 0bh
        ; Exact mapped bytes EB 03: jmp 0x588672c0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588672C0 .. +0x64D bytes.
extern "C" __declspec(naked) void FUN_58866880_segment_03() {
    __asm {
        mov cl, byte ptr [ebp]
        xor cl, 0aah
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 0
        setl al
        add eax, 171h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588672f9
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588672f9
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588672f9
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588672fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 2ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5886732d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 29h
        ; Exact mapped bytes 7E 16: jle 0x58867351
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58867351
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x58867353
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes 0F BE 45 00: movsx eax, byte ptr [ebp]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        xor eax, 0ffffffaah
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 F1 FF 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [edi + 84h]
        xor eax, eax
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [edi + 58h]
        add edi, 4
        inc ebp
        sub ebx, 1
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes 0F 85 30 FF FF FF: jne 0x588672c0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esi + 6ach]
        test ebx, 10000h
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x58867434
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3aeh
        ; Exact mapped bytes 7E 17: jle 0x588673ca
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588673ca
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0eb8h]
        ; Exact mapped bytes EB 02: jmp 0x588673cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58867401
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3afh
        ; Exact mapped bytes 0F 8E 4F 01 00 00: jle 0x58867565
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x58867565
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ebch]
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x58867567
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, 2000000h
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x588674d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b0h
        ; Exact mapped bytes 7E 17: jle 0x58867468
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58867468
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ec0h]
        ; Exact mapped bytes EB 02: jmp 0x5886746a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5886749f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b1h
        ; Exact mapped bytes 0F 8E B1 00 00 00: jle 0x58867565
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x58867565
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ec4h]
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x58867567
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, 80000h
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x588675a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b3h
        ; Exact mapped bytes 7E 17: jle 0x58867506
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58867506
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ecch]
        ; Exact mapped bytes EB 02: jmp 0x58867508
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5886753d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b4h
        ; Exact mapped bytes 7E 17: jle 0x58867565
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58867565
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ed0h]
        ; Exact mapped bytes EB 02: jmp 0x58867567
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 94h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 FA 02 00 00: je 0x58867872
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes E9 CC 02 00 00: jmp 0x58867872
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, 1000000h
        ; Exact mapped bytes 74 69: je 0x58867617
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b5h
        ; Exact mapped bytes 7E 17: jle 0x588675d6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588675d6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ed4h]
        ; Exact mapped bytes EB 02: jmp 0x588675d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 DC A0 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b6h
        ; Exact mapped bytes 0F 8E 6B 02 00 00: jle 0x58867864
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 5E 02 00 00: je 0x58867864
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0ed8h]
        ; Exact mapped bytes E9 4F 02 00 00: jmp 0x58867866
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, 40000h
        ; Exact mapped bytes 74 69: je 0x58867688
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3b9h
        ; Exact mapped bytes 7E 17: jle 0x58867647
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58867647
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0ee4h]
        ; Exact mapped bytes EB 02: jmp 0x58867649
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 6B A0 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bah
        ; Exact mapped bytes 0F 8E FA 01 00 00: jle 0x58867864
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 ED 01 00 00: je 0x58867864
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ee8h]
        ; Exact mapped bytes E9 DE 01 00 00: jmp 0x58867866
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, 20000h
        ; Exact mapped bytes 74 69: je 0x588676f9
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bfh
        ; Exact mapped bytes 7E 17: jle 0x588676b8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588676b8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0efch]
        ; Exact mapped bytes EB 02: jmp 0x588676ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 FA 9F EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3c0h
        ; Exact mapped bytes 0F 8E 89 01 00 00: jle 0x58867864
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x58867864
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0f00h]
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x58867866
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, 10000000h
        ; Exact mapped bytes 74 69: je 0x5886776a
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bbh
        ; Exact mapped bytes 7E 17: jle 0x58867729
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58867729
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0eech]
        ; Exact mapped bytes EB 02: jmp 0x5886772b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 89 9F EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x9f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bch
        ; Exact mapped bytes 0F 8E 18 01 00 00: jle 0x58867864
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x58867864
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0ef0h]
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x58867866
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        test ebx, 40000000h
        ; Exact mapped bytes 74 7A: je 0x588677f2
        __asm _emit 0x74
        __asm _emit 0x7a
        push 68h
        ; Exact mapped bytes E8 61 BB 09 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbb
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 68h
        ; Exact mapped bytes E8 54 BB 09 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xbb
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1f4h
        ; Exact mapped bytes 7E 17: jle 0x588677b4
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588677b4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 7d0h]
        ; Exact mapped bytes EB 02: jmp 0x588677b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 FE 9E EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1f5h
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x58867864
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58867864
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 7d4h]
        ; Exact mapped bytes EB 74: jmp 0x58867866
        __asm _emit 0xeb
        __asm _emit 0x74
        push 6ah
        ; Exact mapped bytes E8 E7 BA 09 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 6ah
        ; Exact mapped bytes E8 DA BA 09 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bbh
        ; Exact mapped bytes 7E 17: jle 0x5886782e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5886782e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0eech]
        ; Exact mapped bytes EB 02: jmp 0x58867830
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push eax
        ; Exact mapped bytes E8 84 9E EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3bch
        ; Exact mapped bytes 7E 17: jle 0x58867864
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58867864
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0ef0h]
        ; Exact mapped bytes EB 02: jmp 0x58867866
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 94h]
        push eax
        ; Exact mapped bytes E8 4E 9E EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, 20h
        lea eax, [esi + 5c4h]
        lea edi, [edx - 1fh]
        mov ecx, dword ptr [eax]
        test bl, 1
        ; Exact mapped bytes 74 06: je 0x5886788d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes EB 09: jmp 0x58867896
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ebp, 0fffeh
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        shr ebx, 1
        add eax, 4
        sub edx, edi
        ; Exact mapped bytes 75 E1: jne 0x58867880
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [esi + 1f44h], edx
        ; Exact mapped bytes 0F 8C A1 02 00 00: jl 0x58867b4c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 1f44h], 0ffffffffh
        ; Exact mapped bytes E9 92 02 00 00: jmp 0x58867b4c
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 8], 1bh
        ; Exact mapped bytes 0F 85 88 02 00 00: jne 0x58867b4c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 7A 02 00 00: jmp 0x58867b4c
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 656h]
        mov edx, dword ptr [esi + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 0e0h
        mov edi, 1
        cmp dword ptr [eax + 589cfd10h], edi
        ; Exact mapped bytes 0F 82 47 02 00 00: jb 0x58867b4c
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [esi + 1dch]
        ; Exact mapped bytes EB 03: jmp 0x58867910
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867910 .. +0x27C bytes.
extern "C" __declspec(naked) void FUN_58866880_segment_04() {
    __asm {
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [eax + 14h]
        mov edx, dword ptr [edx + 4]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 3B: jl 0x58867963
        __asm _emit 0x7c
        __asm _emit 0x3b
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 32: jge 0x58867963
        __asm _emit 0x7d
        __asm _emit 0x32
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx + 8]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 1D: jl 0x58867963
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov ebx, dword ptr [eax + 20h]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 14: jge 0x58867963
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ebx, 100h
        cmp dword ptr [eax + 28h], ebx
        ; Exact mapped bytes 75 0A: jne 0x58867963
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 8B 40 24: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        shr al, 1
        test al, 1
        ; Exact mapped bytes 75 37: jne 0x5886799a
        __asm _emit 0x75
        __asm _emit 0x37
        movzx eax, word ptr [esi + 656h]
        mov edx, dword ptr [esi + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 0e0h
        inc edi
        add ebp, 4
        cmp edi, dword ptr [eax + 589cfd10h]
        ; Exact mapped bytes 0F 86 7B FF FF FF: jbe 0x58867910
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B2 01 00 00: jmp 0x58867b4c
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 1f44h], 0
        ; Exact mapped bytes 7C 0A: jl 0x588679ad
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [esi + 1f44h], 0ffffffffh
        movzx eax, word ptr [esi + 656h]
        mov edx, dword ptr [esi + 69ch]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 70h
        add eax, edi
        movzx eax, word ptr [eax*2 + 589cfd12h]
        mov ecx, eax
        and ecx, 3fh
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        movzx edx, ax
        movzx eax, cx
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        movzx edx, dx
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D 6C B4 A0 58: mov ecx, dword ptr [0x58a0b46c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        imul eax, eax, 0e0h
        xor ecx, 0aaaaaaaah
        cmp dword ptr [eax + 589cfcfch], ecx
        ; Exact mapped bytes 0F 8F CC 00 00 00: jg 0x58867adc
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 90 E8 FC 9C 58: mov dx, word ptr [eax + 0x589cfce8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, 0ffc0h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 1300h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 17: jne 0x58867a40
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 1cbh
        ; Exact mapped bytes E8 B7 40 F0 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 D2 EF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd2
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [esi + edi*4 + 1d8h]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        sub eax, 6
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes E8 33 B8 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb8
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        mov edx, 1
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 CC 48 A2 58: mov eax, dword ptr [0x58a248cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
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
        cmp cl, 2
        ; Exact mapped bytes 75 25: jne 0x58867aa6
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes A1 CC 48 A2 58: mov eax, dword ptr [0x58a248cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 70h], edx
        ; Exact mapped bytes 75 1B: jne 0x58867aa6
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp byte ptr [eax + 7ah], 0
        ; Exact mapped bytes 74 15: je 0x58867aa6
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 98h]
        dec edi
        mov dword ptr [esi + 1f40h], edi
        mov dword ptr [ecx + 50h], edx
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x58867b4c
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        cmp edi, edx
        ; Exact mapped bytes 7E 17: jle 0x58867ac3
        __asm _emit 0x7e
        __asm _emit 0x17
        lea eax, [esi + 1dch]
        dec edi
        mov ebp, dword ptr [eax]
        cmp dword ptr [ebp + 28h], ebx
        ; Exact mapped bytes 75 02: jne 0x58867abc
        __asm _emit 0x75
        __asm _emit 0x02
        add ecx, edx
        add eax, 4
        sub edi, edx
        ; Exact mapped bytes 75 F0: jne 0x58867ab3
        __asm _emit 0x75
        __asm _emit 0xf0
        mov eax, dword ptr [esi + 7cch]
        add eax, ecx
        mov ecx, dword ptr [esi + 98h]
        mov dword ptr [esi + 1f40h], eax
        mov dword ptr [ecx + 50h], edx
        ; Exact mapped bytes EB 70: jmp 0x58867b4c
        __asm _emit 0xeb
        __asm _emit 0x70
        push 0
        push 0
        push 0
        push 130h
        ; Exact mapped bytes E8 04 40 F0 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x40
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3D D2 EF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd2
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 57: jmp 0x58867b4c
        __asm _emit 0xeb
        __asm _emit 0x57
        cmp eax, 203h
        ; Exact mapped bytes 75 50: jne 0x58867b4c
        __asm _emit 0x75
        __asm _emit 0x50
        mov edi, dword ptr [esi + 1f40h]
        cmp edi, -1
        ; Exact mapped bytes 74 45: je 0x58867b4c
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0a8h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 24 9A EC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x9a
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x58867b4c
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [esi + edi*4 + 1dch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x58867b4c
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [esi + 1f44h], 0
        ; Exact mapped bytes 7C 0A: jl 0x58867b45
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [esi + 1f44h], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 54 EC FF FF: call 0x588667a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x58867b76
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x58867b76
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edi, dword ptr [esp + 24h]
        mov edi, edi
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 04: je 0x58867b76
        __asm _emit 0x74
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x58867b60
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
