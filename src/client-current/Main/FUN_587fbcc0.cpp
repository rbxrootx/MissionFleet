// Complete Ghidra body ranges for the selected function.
// 4 discontiguous segments; total 3303 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FBCC0 .. +0x58A bytes.
extern "C" __declspec(naked) void FUN_587fbcc0_segment_00() {
    __asm {
        sub esp, 0b0h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 0ach], eax
        push ebp
        push esi
        mov esi, 1fh
        push edi
        mov ebp, ecx
        lea edi, [esi - 1eh]
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 93 03 0F 00: call 0x588ec080
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        add esi, edi
        cmp esi, 26h
        ; Exact mapped bytes 7C ED: jl 0x587fbce1
        __asm _emit 0x7c
        __asm _emit 0xed
        cmp dword ptr [ebp + 1047ch], edi
        ; Exact mapped bytes 0F 84 9E 0C 00 00: je 0x587fc99e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 20d30h]
        mov dword ptr [ebp + 1047ch], edi
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D C8 45 A2 58: mov ecx, dword ptr [0x58a245c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp + 21c48h]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 D2 CF FA FF: call 0x587a8d10
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xcf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10474h]
        and ecx, 0fffffffh
        or ecx, 80000000h
        mov dword ptr [ebp + 10474h], ecx
        mov dword ptr [ebp + 388h], 0
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 128ch]
        movzx eax, word ptr [ebp + 105f0h]
        xor ecx, 7c8ba106h
        mov dword ptr [ebp + 20e44h], ecx
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 1D: je 0x587fbda5
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 17: je 0x587fbda5
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes E8 5D FD F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 1F: jne 0x587fbdc2
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes EB 0F: jmp 0x587fbdb4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 218d4h]
        cmp eax, edi
        ; Exact mapped bytes 74 05: je 0x587fbdb4
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 2
        ; Exact mapped bytes 75 31: jne 0x587fbde5
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes E8 37 FD F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 39 2D 80 45 A2 58: cmp dword ptr [0x58a24580], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 07: jne 0x587fbdd1
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, ebp
        ; Exact mapped bytes E8 FF 6F FF FF: call 0x587f2dd0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 6
        ; Exact mapped bytes E8 12 FD F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B 8F F6 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx eax, word ptr [ebp + 105f0h]
        push ebx
        mov dword ptr [esp + 98h], eax
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 6F 02 00 00: jne 0x587fc06d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        cmp dword ptr [eax + 63b4h], edi
        ; Exact mapped bytes 75 0C: jne 0x587fbe1b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov byte ptr [ebp + 10474h], 20h
        ; Exact mapped bytes E9 57 07 00 00: jmp 0x587fc572
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 354h]
        mov dword ptr [esp + 14h], eax
        xor eax, eax
        mov ecx, eax
        mov edx, eax
        mov esi, eax
        mov edi, eax
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 48h], eax
        mov dword ptr [esp + 4ch], eax
        mov dword ptr [esp + 50h], eax
        mov dword ptr [esp + 54h], eax
        mov dword ptr [esp + 9ch], eax
        mov dword ptr [esp + 0a0h], eax
        mov dword ptr [esp + 0a4h], eax
        mov dword ptr [esp + 0a8h], eax
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0ch]
        xor ebx, ebx
        mov dword ptr [esp + 0ach], ecx
        mov dword ptr [esp + 0b0h], edx
        mov dword ptr [esp + 0b4h], esi
        mov dword ptr [esp + 0b8h], edi
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x587fbf24
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 14h]
        mov edx, 1
        cmp dword ptr [eax + 438h], edx
        ; Exact mapped bytes 74 56: je 0x587fbf01
        __asm _emit 0x74
        __asm _emit 0x56
        movzx ecx, byte ptr [eax + 354h]
        ; Exact mapped bytes 66 01 94 4C AC 00 00 00: add word ptr [esp + ecx*2 + 0xac], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x94
        __asm _emit 0x4c
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, esi
        ; Exact mapped bytes 74 19: je 0x587fbed7
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [eax + 63b4h], edx
        ; Exact mapped bytes 74 08: je 0x587fbece
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [eax + 63b0h], edx
        ; Exact mapped bytes 75 33: jne 0x587fbf01
        __asm _emit 0x75
        __asm _emit 0x33
        movzx ecx, byte ptr [eax + 354h]
        ; Exact mapped bytes EB 1B: jmp 0x587fbef2
        __asm _emit 0xeb
        __asm _emit 0x1b
        movzx ecx, byte ptr [eax + 354h]
        cmp ecx, esi
        ; Exact mapped bytes 75 1F: jne 0x587fbf01
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp dword ptr [eax + 63b4h], edx
        ; Exact mapped bytes 74 08: je 0x587fbef2
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [eax + 63b0h], edx
        ; Exact mapped bytes 75 0F: jne 0x587fbf01
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 66 01 94 4C 9C 00 00 00: add word ptr [esp + ecx*2 + 0x9c], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x94
        __asm _emit 0x4c
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + ecx*2 + 9ch]
        mov eax, dword ptr [eax + 78h]
        test eax, eax
        ; Exact mapped bytes 75 9B: jne 0x587fbea3
        __asm _emit 0x75
        __asm _emit 0x9b
        mov edi, dword ptr [esp + 0b8h]
        mov esi, dword ptr [esp + 0b4h]
        mov edx, dword ptr [esp + 0b0h]
        mov ecx, dword ptr [esp + 0ach]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 13: je 0x587fbf3c
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 66 3B 8C 24 9C 00 00 00: cmp cx, word ptr [esp + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x587fbf3c
        __asm _emit 0x74
        __asm _emit 0x09
        mov ebx, 1
        mov dword ptr [esp + 38h], ebx
        ; Exact mapped bytes 66 8B 84 24 AE 00 00 00: mov ax, word ptr [esp + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 17: je 0x587fbf60
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 3B 84 24 9E 00 00 00: cmp ax, word ptr [esp + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587fbf60
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 1
        mov dword ptr [esp + 3ch], ecx
        add ebx, ecx
        ; Exact mapped bytes EB 05: jmp 0x587fbf65
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ecx, 1
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 10: je 0x587fbf7a
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 94 24 A0 00 00 00: cmp dx, word ptr [esp + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x587fbf7a
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 40h], ecx
        add ebx, ecx
        ; Exact mapped bytes 66 8B 84 24 B2 00 00 00: mov ax, word ptr [esp + 0xb2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 10: je 0x587fbf97
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 84 24 A2 00 00 00: cmp ax, word ptr [esp + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x587fbf97
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 44h], ecx
        add ebx, ecx
        ; Exact mapped bytes 66 85 F6: test si, si
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 10: je 0x587fbfac
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B B4 24 A4 00 00 00: cmp si, word ptr [esp + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x587fbfac
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 48h], ecx
        add ebx, ecx
        ; Exact mapped bytes 66 8B 84 24 B6 00 00 00: mov ax, word ptr [esp + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 10: je 0x587fbfc9
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 84 24 A6 00 00 00: cmp ax, word ptr [esp + 0xa6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x587fbfc9
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 4ch], ecx
        add ebx, ecx
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 10: je 0x587fbfde
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B BC 24 A8 00 00 00: cmp di, word ptr [esp + 0xa8]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x587fbfde
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 50h], ecx
        add ebx, ecx
        ; Exact mapped bytes 66 8B 84 24 BA 00 00 00: mov ax, word ptr [esp + 0xba]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 10: je 0x587fbffb
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 84 24 AA 00 00 00: cmp ax, word ptr [esp + 0xaa]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x587fbffb
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 54h], ecx
        add ebx, ecx
        ; Exact mapped bytes 66 3B D9: cmp bx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd9
        ; Exact mapped bytes 75 6D: jne 0x587fc06d
        __asm _emit 0x75
        __asm _emit 0x6d
        mov edx, dword ptr [esp + 14h]
        cmp dword ptr [esp + edx*4 + 38h], ecx
        ; Exact mapped bytes 75 12: jne 0x587fc01c
        __asm _emit 0x75
        __asm _emit 0x12
        mov byte ptr [ebp + 10474h], 10h
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 4B 07 00 00: jmp 0x587fc767
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 10474h], 20h
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 00 D8 00 00: call 0x58809830
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2ah
        ; Exact mapped bytes 0F 8E 33 09 00 00: jle 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 26 09 00 00: je 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0a8h]
        push eax
        ; Exact mapped bytes E8 8F FA F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B8 69 F6 FF: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x69
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 30 09 00 00: jmp 0x587fc99d
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 98h]
        mov ebx, 10h
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 27: je 0x587fc0a6
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 21: je 0x587fc0a6
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 1B: je 0x587fc0a6
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 15: je 0x587fc0a6
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 74 0F: je 0x587fc0a6
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 09: je 0x587fc0a6
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 7B 01 00 00: jne 0x587fc221
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10474h], 80000000h
        ; Exact mapped bytes 0F 85 6B 01 00 00: jne 0x587fc221
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
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
        mov esi, dword ptr [edx + 0ch]
        xor ecx, ecx
        xor edi, edi
        or ebx, 0ffffffffh
        mov dword ptr [esp + 58h], ecx
        mov dword ptr [esp + 5ch], ecx
        mov dword ptr [esp + 60h], ecx
        mov dword ptr [esp + 64h], ecx
        mov dword ptr [esp + 68h], ecx
        mov dword ptr [esp + 6ch], ecx
        mov dword ptr [esp + 70h], ecx
        mov dword ptr [esp + 74h], ecx
        cmp esi, ecx
        ; Exact mapped bytes 74 2B: je 0x587fc115
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E9 A5 0D 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x587fc10a
        __asm _emit 0x74
        __asm _emit 0x0f
        movzx eax, byte ptr [esi + 354h]
        mov dword ptr [esp + eax*4 + 58h], 1
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 DF: jne 0x587fc0f0
        __asm _emit 0x75
        __asm _emit 0xdf
        mov ecx, dword ptr [esp + 5ch]
        mov eax, dword ptr [ebp + 10a6ch]
        test eax, eax
        ; Exact mapped bytes 76 0B: jbe 0x587fc12a
        __asm _emit 0x76
        __asm _emit 0x0b
        cmp dword ptr [esp + 58h], 0
        ; Exact mapped bytes 74 04: je 0x587fc12a
        __asm _emit 0x74
        __asm _emit 0x04
        mov edi, eax
        xor ebx, ebx
        mov eax, dword ptr [ebp + 10a70h]
        cmp eax, edi
        ; Exact mapped bytes 76 0B: jbe 0x587fc13f
        __asm _emit 0x76
        __asm _emit 0x0b
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x587fc13f
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 1
        mov eax, dword ptr [ebp + 10a74h]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc157
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 60h], 0
        ; Exact mapped bytes 74 07: je 0x587fc157
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 2
        mov eax, dword ptr [ebp + 10a78h]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc16f
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 64h], 0
        ; Exact mapped bytes 74 07: je 0x587fc16f
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 3
        mov eax, dword ptr [ebp + 10a7ch]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc187
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 68h], 0
        ; Exact mapped bytes 74 07: je 0x587fc187
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 4
        mov eax, dword ptr [ebp + 10a80h]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc19f
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 6ch], 0
        ; Exact mapped bytes 74 07: je 0x587fc19f
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 5
        mov eax, dword ptr [ebp + 10a84h]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc1b7
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 70h], 0
        ; Exact mapped bytes 74 07: je 0x587fc1b7
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 6
        cmp dword ptr [ebp + 10a88h], edi
        ; Exact mapped bytes 76 0C: jbe 0x587fc1cb
        __asm _emit 0x76
        __asm _emit 0x0c
        cmp dword ptr [esp + 74h], 0
        ; Exact mapped bytes 74 05: je 0x587fc1cb
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, 7
        cmp dword ptr [ebp + 218c8h], 0
        ; Exact mapped bytes 74 16: je 0x587fc1ea
        __asm _emit 0x74
        __asm _emit 0x16
        cmp byte ptr [ebp + 218d8h], 1
        ; Exact mapped bytes 72 04: jb 0x587fc1e1
        __asm _emit 0x72
        __asm _emit 0x04
        xor ebx, ebx
        ; Exact mapped bytes EB 09: jmp 0x587fc1ea
        __asm _emit 0xeb
        __asm _emit 0x09
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x587fc1ea
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, 1
        cmp dword ptr [ebp + 218c4h], 0
        ; Exact mapped bytes 74 0B: je 0x587fc1fe
        __asm _emit 0x74
        __asm _emit 0x0b
        xor ebx, ebx
        cmp dword ptr [ebp + 218d0h], ebx
        setg bl
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        movzx eax, byte ptr [edx + 354h]
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ebx, eax
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x587fc367
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 57 03 00 00: jmp 0x587fc578
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x587fc2e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10474h], 80000000h
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x587fc2e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        or edi, 0ffffffffh
        lea eax, [ecx + 2]
        lea esi, [ebp + 109f8h]
        ; Exact mapped bytes EB 06: jmp 0x587fc250
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FC250 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_587fbcc0_segment_01() {
    __asm {
        mov edx, dword ptr [esi - 4]
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 74 09: je 0x587fc264
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ecx, edx
        ; Exact mapped bytes 7D 05: jge 0x587fc264
        __asm _emit 0x7d
        __asm _emit 0x05
        mov ecx, edx
        lea edi, [eax - 2]
        mov edx, dword ptr [esi]
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 74 09: je 0x587fc277
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ecx, edx
        ; Exact mapped bytes 7D 05: jge 0x587fc277
        __asm _emit 0x7d
        __asm _emit 0x05
        mov ecx, edx
        lea edi, [eax - 1]
        mov edx, dword ptr [esi + 4]
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 74 08: je 0x587fc28a
        __asm _emit 0x74
        __asm _emit 0x08
        cmp ecx, edx
        ; Exact mapped bytes 7D 04: jge 0x587fc28a
        __asm _emit 0x7d
        __asm _emit 0x04
        mov ecx, edx
        mov edi, eax
        mov edx, dword ptr [esi + 8]
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 74 09: je 0x587fc29e
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ecx, edx
        ; Exact mapped bytes 7D 05: jge 0x587fc29e
        __asm _emit 0x7d
        __asm _emit 0x05
        mov ecx, edx
        lea edi, [eax + 1]
        add eax, 4
        lea edx, [eax - 2]
        add esi, ebx
        cmp edx, 8
        ; Exact mapped bytes 7C A5: jl 0x587fc250
        __asm _emit 0x7c
        __asm _emit 0xa5
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x587fc2d3
        __asm _emit 0x74
        __asm _emit 0x1c
        movzx ecx, byte ptr [eax + 354h]
        cmp edi, ecx
        ; Exact mapped bytes 75 11: jne 0x587fc2d3
        __asm _emit 0x75
        __asm _emit 0x11
        mov byte ptr [ebp + 10474h], bl
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 05 06 00 00: jmp 0x587fc8d8
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 10474h], 20h
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 57 06 00 00: jmp 0x587fc93c
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 07: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 0F 85 BF 00 00 00: jne 0x587fc3ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 21f04h]
        mov eax, dword ptr [ecx + 4]
        xor bl, bl
        mov byte ptr [esp + 13h], 0
        cmp byte ptr [ecx + 0ch], bl
        ; Exact mapped bytes 74 2A: je 0x587fc32e
        __asm _emit 0x74
        __asm _emit 0x2a
        lea edx, [eax + 2]
        mov eax, ecx
        movzx esi, byte ptr [eax + 0ch]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov al, byte ptr [edx]
        cmp al, 0ffh
        ; Exact mapped bytes 74 10: je 0x587fc326
        __asm _emit 0x74
        __asm _emit 0x10
        test al, al
        ; Exact mapped bytes 75 06: jne 0x587fc320
        __asm _emit 0x75
        __asm _emit 0x06
        inc byte ptr [esp + 13h]
        ; Exact mapped bytes EB 06: jmp 0x587fc326
        __asm _emit 0xeb
        __asm _emit 0x06
        cmp al, 1
        ; Exact mapped bytes 75 02: jne 0x587fc326
        __asm _emit 0x75
        __asm _emit 0x02
        inc bl
        add edx, 3
        sub esi, 1
        ; Exact mapped bytes 75 E2: jne 0x587fc310
        __asm _emit 0x75
        __asm _emit 0xe2
        cmp bl, byte ptr [esp + 13h]
        sbb esi, esi
        inc esi
        ; Exact mapped bytes E8 B6 06 FD FF: call 0x587cc9f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 03: jne 0x587fc342
        __asm _emit 0x75
        __asm _emit 0x03
        or esi, 0ffffffffh
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        movzx eax, byte ptr [edx + 354h]
        cmp esi, eax
        ; Exact mapped bytes 0F 85 11 02 00 00: jne 0x587fc56b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp + 10474h], 10h
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40000000h
        ; Exact mapped bytes E8 BF D4 00 00: call 0x58809830
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2bh
        ; Exact mapped bytes 0F 8E F2 05 00 00: jle 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 E5 05 00 00: je 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ach]
        push eax
        ; Exact mapped bytes E8 4E F7 F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf7
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 77 66 F6 FF: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x66
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 EF 05 00 00: jmp 0x587fc99d
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 16 02 00 00: jne 0x587fc5ce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 21c4ch]
        mov edx, dword ptr [ecx + 910h]
        xor eax, eax
        mov ecx, edx
        ; Exact mapped bytes EB 06: jmp 0x587fc3d0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FC3D0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_587fbcc0_segment_02() {
    __asm {
        mov esi, dword ptr [ecx]
        cmp byte ptr [esi + 0cch], 0
        ; Exact mapped bytes 0F 85 67 01 00 00: jne 0x587fc546
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        add ecx, 4
        cmp eax, 6
        ; Exact mapped bytes 7C E8: jl 0x587fc3d0
        __asm _emit 0x7c
        __asm _emit 0xe8
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [eax + 0ch]
        xor edi, edi
        or ebx, 0ffffffffh
        mov dword ptr [esp + 78h], edi
        mov dword ptr [esp + 7ch], edi
        mov dword ptr [esp + 80h], edi
        mov dword ptr [esp + 84h], edi
        mov dword ptr [esp + 88h], edi
        mov dword ptr [esp + 8ch], edi
        mov dword ptr [esp + 90h], edi
        mov dword ptr [esp + 94h], edi
        cmp esi, edi
        ; Exact mapped bytes 74 26: je 0x587fc451
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes EB 03: jmp 0x587fc430
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FC430 .. +0x586 bytes.
extern "C" __declspec(naked) void FUN_587fbcc0_segment_03() {
    __asm {
        mov ecx, esi
        ; Exact mapped bytes E8 A9 A2 0D 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x587fc44a
        __asm _emit 0x74
        __asm _emit 0x0f
        movzx ecx, byte ptr [esi + 354h]
        mov dword ptr [esp + ecx*4 + 78h], 1
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 DF: jne 0x587fc430
        __asm _emit 0x75
        __asm _emit 0xdf
        mov eax, dword ptr [ebp + 10a6ch]
        test eax, eax
        ; Exact mapped bytes 76 0B: jbe 0x587fc466
        __asm _emit 0x76
        __asm _emit 0x0b
        cmp dword ptr [esp + 78h], 0
        ; Exact mapped bytes 74 04: je 0x587fc466
        __asm _emit 0x74
        __asm _emit 0x04
        mov edi, eax
        xor ebx, ebx
        mov eax, dword ptr [ebp + 10a70h]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc47e
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 7ch], 0
        ; Exact mapped bytes 74 07: je 0x587fc47e
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 1
        mov eax, dword ptr [ebp + 10a74h]
        cmp eax, edi
        ; Exact mapped bytes 76 11: jbe 0x587fc499
        __asm _emit 0x76
        __asm _emit 0x11
        cmp dword ptr [esp + 80h], 0
        ; Exact mapped bytes 74 07: je 0x587fc499
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 2
        mov eax, dword ptr [ebp + 10a78h]
        cmp eax, edi
        ; Exact mapped bytes 76 11: jbe 0x587fc4b4
        __asm _emit 0x76
        __asm _emit 0x11
        cmp dword ptr [esp + 84h], 0
        ; Exact mapped bytes 74 07: je 0x587fc4b4
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 3
        mov eax, dword ptr [ebp + 10a7ch]
        cmp eax, edi
        ; Exact mapped bytes 76 11: jbe 0x587fc4cf
        __asm _emit 0x76
        __asm _emit 0x11
        cmp dword ptr [esp + 88h], 0
        ; Exact mapped bytes 74 07: je 0x587fc4cf
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 4
        mov eax, dword ptr [ebp + 10a80h]
        cmp eax, edi
        ; Exact mapped bytes 76 11: jbe 0x587fc4ea
        __asm _emit 0x76
        __asm _emit 0x11
        cmp dword ptr [esp + 8ch], 0
        ; Exact mapped bytes 74 07: je 0x587fc4ea
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 5
        mov eax, dword ptr [ebp + 10a84h]
        cmp eax, edi
        ; Exact mapped bytes 76 11: jbe 0x587fc505
        __asm _emit 0x76
        __asm _emit 0x11
        cmp dword ptr [esp + 90h], 0
        ; Exact mapped bytes 74 07: je 0x587fc505
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 6
        cmp dword ptr [ebp + 10a88h], edi
        ; Exact mapped bytes 76 0F: jbe 0x587fc51c
        __asm _emit 0x76
        __asm _emit 0x0f
        cmp dword ptr [esp + 94h], 0
        ; Exact mapped bytes 74 05: je 0x587fc51c
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, 7
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        movzx ecx, byte ptr [eax + 354h]
        cmp ebx, ecx
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x587fc5bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp + 10474h], 10h
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 92 03 00 00: jmp 0x587fc8d8
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx + eax*4]
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        movzx eax, byte ptr [ecx + 354h]
        cmp dword ptr [edx + 0b8h], eax
        ; Exact mapped bytes 74 0B: je 0x587fc56b
        __asm _emit 0x74
        __asm _emit 0x0b
        or dword ptr [ebp + 10474h], ebx
        ; Exact mapped bytes E9 F6 FD FF FF: jmp 0x587fc361
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or dword ptr [ebp + 10474h], 20h
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 B1 D2 00 00: call 0x58809830
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2ah
        ; Exact mapped bytes 0F 8E E4 03 00 00: jle 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 D7 03 00 00: je 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        ; Exact mapped bytes E8 40 F5 F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 69 64 F6 FF: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x64
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 E1 03 00 00: jmp 0x587fc99d
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp + 10474h], 20h
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 6E 03 00 00: jmp 0x587fc93c
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 DE 02 00 00: je 0x587fc8b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 84 D4 02 00 00: je 0x587fc8b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 C2 01 00 00: jne 0x587fc7ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 21f08h]
        ; Exact mapped bytes E8 C9 0F F6 FF: call 0x5875d5c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0f
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x587fc616
        __asm _emit 0x75
        __asm _emit 0x1b
        or dword ptr [ebp + 10474h], ebx
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40000000h
        ; Exact mapped bytes E8 1F D2 00 00: call 0x58809830
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 87 03 00 00: jmp 0x587fc99d
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x587fc634
        __asm _emit 0x75
        __asm _emit 0x19
        or dword ptr [ebp + 10474h], 20h
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 01 D2 00 00: call 0x58809830
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 69 03 00 00: jmp 0x587fc99d
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 60 03 00 00: jne 0x587fc99d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [ecx + 0ch]
        xor edi, edi
        or ebx, 0ffffffffh
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 28h], edi
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 34h], edi
        cmp esi, edi
        ; Exact mapped bytes 74 22: je 0x587fc691
        __asm _emit 0x74
        __asm _emit 0x22
        nop
        mov ecx, esi
        ; Exact mapped bytes E8 69 A0 0D 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa0
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x587fc68a
        __asm _emit 0x74
        __asm _emit 0x0f
        movzx edx, byte ptr [esi + 354h]
        mov dword ptr [esp + edx*4 + 18h], 1
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 DF: jne 0x587fc670
        __asm _emit 0x75
        __asm _emit 0xdf
        mov eax, dword ptr [ebp + 10a6ch]
        test eax, eax
        ; Exact mapped bytes 76 0B: jbe 0x587fc6a6
        __asm _emit 0x76
        __asm _emit 0x0b
        cmp dword ptr [esp + 18h], 0
        ; Exact mapped bytes 74 04: je 0x587fc6a6
        __asm _emit 0x74
        __asm _emit 0x04
        mov edi, eax
        xor ebx, ebx
        mov eax, dword ptr [ebp + 10a70h]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc6be
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 74 07: je 0x587fc6be
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 1
        mov eax, dword ptr [ebp + 10a74h]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc6d6
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 20h], 0
        ; Exact mapped bytes 74 07: je 0x587fc6d6
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 2
        mov eax, dword ptr [ebp + 10a78h]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc6ee
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 24h], 0
        ; Exact mapped bytes 74 07: je 0x587fc6ee
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 3
        mov eax, dword ptr [ebp + 10a7ch]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc706
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 28h], 0
        ; Exact mapped bytes 74 07: je 0x587fc706
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 4
        mov eax, dword ptr [ebp + 10a80h]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc71e
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 2ch], 0
        ; Exact mapped bytes 74 07: je 0x587fc71e
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 5
        mov eax, dword ptr [ebp + 10a84h]
        cmp eax, edi
        ; Exact mapped bytes 76 0E: jbe 0x587fc736
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [esp + 30h], 0
        ; Exact mapped bytes 74 07: je 0x587fc736
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, eax
        mov ebx, 6
        cmp dword ptr [ebp + 10a88h], edi
        ; Exact mapped bytes 76 0C: jbe 0x587fc74a
        __asm _emit 0x76
        __asm _emit 0x0c
        cmp dword ptr [esp + 34h], 0
        ; Exact mapped bytes 74 05: je 0x587fc74a
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, 7
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        movzx edx, byte ptr [ecx + 354h]
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ebx, edx
        ; Exact mapped bytes 0F 85 C2 F8 FF FF: jne 0x587fc029
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push 40000000h
        ; Exact mapped bytes E8 BF D0 00 00: call 0x58809830
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2bh
        ; Exact mapped bytes 0F 8E F2 01 00 00: jle 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 E5 01 00 00: je 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0ach]
        push eax
        ; Exact mapped bytes E8 4E F3 F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 77 62 F6 FF: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x62
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 EF 01 00 00: jmp 0x587fc99d
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 21efch], 0
        mov edx, 20h
        ; Exact mapped bytes 74 37: je 0x587fc7f3
        __asm _emit 0x74
        __asm _emit 0x37
        mov al, byte ptr [ebp + 21f00h]
        mov byte ptr [ebp + 10474h], 0
        test al, al
        ; Exact mapped bytes 74 20: je 0x587fc7ed
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 4]
        mov cl, byte ptr [ecx + 354h]
        mov bl, 1
        shl bl, cl
        ; Exact mapped bytes 84 D8: test al, bl
        __asm _emit 0x84
        __asm _emit 0xd8
        ; Exact mapped bytes 74 09: je 0x587fc7ed
        __asm _emit 0x74
        __asm _emit 0x09
        or dword ptr [ebp + 10474h], 10h
        ; Exact mapped bytes EB 06: jmp 0x587fc7f3
        __asm _emit 0xeb
        __asm _emit 0x06
        or dword ptr [ebp + 10474h], edx
        mov eax, dword ptr [ebp + 10474h]
        test al, 10h
        ; Exact mapped bytes 74 5A: je 0x587fc857
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40000000h
        ; Exact mapped bytes E8 23 D0 00 00: call 0x58809830
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp + 20d64h], 0
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 57 FF FF FF: je 0x587fc776
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 164h], 47h
        ; Exact mapped bytes 0F 8E 49 01 00 00: jle 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 11ch]
        push eax
        ; Exact mapped bytes E8 A5 F2 F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CE 61 F6 FF: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 46 01 00 00: jmp 0x587fc99d
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C2: test dl, al
        __asm _emit 0x84
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x587fc99d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 C4 CF 00 00: call 0x58809830
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp + 20d64h], 0
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 06 FD FF FF: je 0x587fc584
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 164h], 4ah
        ; Exact mapped bytes 0F 8E EA 00 00 00: jle 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 128h]
        push eax
        ; Exact mapped bytes E8 46 F2 F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6F 61 F6 FF: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x587fc99d
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 218d4h]
        cmp ebp, 1
        ; Exact mapped bytes 75 5A: jne 0x587fc91b
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        cmp byte ptr [ecx + 354h], 0
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 64: jne 0x587fc93c
        __asm _emit 0x75
        __asm _emit 0x64
        push 40000000h
        ; Exact mapped bytes E8 4E CF 00 00: call 0x58809830
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2bh
        ; Exact mapped bytes 0F 8E 81 00 00 00: jle 0x587fc975
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 78: je 0x587fc975
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0ach]
        push eax
        ; Exact mapped bytes E8 E1 F1 F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0A 61 F6 FF: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x587fc99d
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 2
        ; Exact mapped bytes 75 66: jne 0x587fc986
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        cmp byte ptr [edx + 354h], 0
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 2B FA FF FF: jne 0x587fc367
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes E8 ED CE 00 00: call 0x58809830
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2ah
        ; Exact mapped bytes 7E 24: jle 0x587fc975
        __asm _emit 0x7e
        __asm _emit 0x24
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 1B: je 0x587fc975
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0a8h]
        push eax
        ; Exact mapped bytes E8 84 F1 F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD 60 F6 FF: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x60
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 28: jmp 0x587fc99d
        __asm _emit 0xeb
        __asm _emit 0x28
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 73 F1 F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9C 60 F6 FF: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x60
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x587fc99d
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 487h
        ; Exact mapped bytes E8 5A F1 F6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 83 F6 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xff
        pop ebx
        mov ecx, dword ptr [esp + 0b8h]
        pop edi
        pop esi
        pop ebp
        xor ecx, esp
        ; Exact mapped bytes E8 2B 02 18 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0b0h
        ret
    }
}
