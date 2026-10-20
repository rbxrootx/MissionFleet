// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100033A0 .. +0x639 bytes.
extern "C" __declspec(naked) void FUN_100033a0_100033A0() {
    __asm {
        sub esp, 3ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0e8h]
        test eax, eax
        ; Exact mapped bytes 0F 84 E4 03 00 00: je 0x1000379b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 68h]
        mov dword ptr [esp + 20h], 2
        mov dword ptr [esp + 10h], eax
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 83 79 F4 01: cmp word ptr [ecx - 0xc], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0xf4
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 AC 03 00 00: jne 0x10003781
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2ch]
        mov dword ptr [esp + 18h], 0
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x10003498
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 28: mov ax, word ptr [esi + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x28
        ; Exact mapped bytes 66 3D 07 00: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x100033fc
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x10003498
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CF B1 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x10003498
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2ch]
        mov edx, dword ptr [esi + 0ch]
        mov ebx, dword ptr [eax + 8]
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [edx + 8]
        mov edi, dword ptr [edx + 4]
        mov eax, ebx
        sub eax, ebp
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp + 1ch], eax
        mov eax, ebx
        mov ebx, dword ptr [esp + 1ch]
        sub eax, ebp
        cdq
        xor eax, edx
        sub eax, edx
        imul ebx, eax
        mov eax, ecx
        sub eax, edi
        cdq
        mov ebp, eax
        mov eax, ecx
        xor ebp, edx
        sub eax, edi
        sub ebp, edx
        cdq
        xor eax, edx
        sub eax, edx
        imul ebp, eax
        add ebx, ebp
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DD 5C 24 24: fstp qword ptr [esp + 0x24]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 24h]
        push edx
        push eax
        ; Exact mapped bytes E8 40 93 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x93
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 32 93 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x93
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes 77 12: ja 0x1000348e
        __asm _emit 0x77
        __asm _emit 0x12
        mov ecx, dword ptr [esp + 54h]
        mov edx, dword ptr [esi + 2ch]
        mov dword ptr [esp + 18h], edx
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 7F 02 00 00: jmp 0x1000370d
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 50h]
        mov dword ptr [edx], 1
        mov eax, dword ptr [esi + 0d4h]
        xor ebp, ebp
        test eax, eax
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes 74 0A: je 0x100034b6
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 05: jne 0x100034b6
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebp, 1
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [eax + 0ch]
        test edi, edi
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x100035b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 0ch]
        push edi
        push edx
        mov ecx, dword ptr [ecx + 21a4ch]
        ; Exact mapped bytes E8 64 0B 02 00: call 0x10024040
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 C7 00 00 00: jne 0x100035ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 E4 B0 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x100035ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0ch]
        mov eax, dword ptr [edi + 4]
        sub eax, dword ptr [ebx + 4]
        cdq
        mov ecx, eax
        mov eax, dword ptr [edi + 8]
        xor ecx, edx
        sub ecx, edx
        mov edx, dword ptr [ebx + 8]
        sub eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DD 5C 24 24: fstp qword ptr [esp + 0x24]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 24h]
        push ecx
        push edx
        ; Exact mapped bytes E8 71 92 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 63 92 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 74 0F: je 0x10003556
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 0d4h]
        mov ebx, dword ptr [esp + 14h]
        mov dword ptr [ecx + ebx*4], edi
        ; Exact mapped bytes EB 04: jmp 0x1000355a
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 77 2E: ja 0x10003590
        __asm _emit 0x77
        __asm _emit 0x2e
        mov edx, dword ptr [esp + 54h]
        mov ecx, dword ptr [edx]
        cmp ecx, -1
        ; Exact mapped bytes 74 04: je 0x10003571
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ecx, eax
        ; Exact mapped bytes 7E 06: jle 0x10003577
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [edx], eax
        mov dword ptr [esp + 18h], edi
        mov eax, dword ptr [esi + 0d4h]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x100035a7
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [esi + 0dch]
        mov dword ptr [eax + ebx*4], 1
        ; Exact mapped bytes EB 17: jmp 0x100035a7
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [esi + 0d4h]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100035a7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0dch]
        mov dword ptr [ecx + ebx*4], 0
        inc ebx
        mov dword ptr [esp + 14h], ebx
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 0F 85 0F FF FF FF: jne 0x100034c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test ebp, ebp
        ; Exact mapped bytes 74 0C: je 0x100035c7
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 54 24 14: mov dx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 96 E0 00 00 00: mov word ptr [esi + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 2D 0A 00 00: call 0x10004000
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x10003662
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        mov eax, dword ptr [esi + 0ch]
        mov ebx, dword ptr [edx + 8]
        mov edi, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 8]
        mov ecx, dword ptr [edx + 4]
        mov eax, ebx
        sub eax, ebp
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp + 24h], eax
        mov eax, ebx
        mov ebx, dword ptr [esp + 24h]
        sub eax, ebp
        cdq
        xor eax, edx
        sub eax, edx
        imul ebx, eax
        mov eax, ecx
        sub eax, edi
        cdq
        mov ebp, eax
        mov eax, ecx
        xor ebp, edx
        sub eax, edi
        sub ebp, edx
        cdq
        xor eax, edx
        sub eax, edx
        imul ebp, eax
        add ebx, ebp
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DD 5C 24 24: fstp qword ptr [esp + 0x24]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 24h]
        push ecx
        push edx
        ; Exact mapped bytes E8 6B 91 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 5D 91 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes 77 11: ja 0x10003662
        __asm _emit 0x77
        __asm _emit 0x11
        mov edx, dword ptr [esp + 50h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 08: jne 0x10003662
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esi + 0d4h]
        test eax, eax
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x1000370d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 91 00 00 00: jle 0x1000370d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 E0 00 00 00: mov word ptr [esi + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 0F 91 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes 66 8B 8E E0 00 00 00: mov cx, word ptr [esi + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 F7 90 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes 66 8B 96 E0 00 00 00: mov dx, word ptr [esi + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 DF 90 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [esi + 0dch], eax
        xor eax, eax
        add esp, 0ch
        ; Exact mapped bytes 66 39 86 E0 00 00 00: cmp word ptr [esi + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 38: jbe 0x1000370d
        __asm _emit 0x76
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 0d4h]
        inc eax
        mov dword ptr [ecx + eax*4 - 4], 0
        mov edx, dword ptr [esi + 0d8h]
        mov dword ptr [edx + eax*4 - 4], 0
        mov ecx, dword ptr [esi + 0dch]
        xor edx, edx
        mov dword ptr [ecx + eax*4 - 4], 0
        ; Exact mapped bytes 66 8B 96 E0 00 00 00: mov dx, word ptr [esi + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edx
        ; Exact mapped bytes 7C C8: jl 0x100036d5
        __asm _emit 0x7c
        __asm _emit 0xc8
        mov ebx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        mov dword ptr [ebx + 1ch], eax
        ; Exact mapped bytes 74 65: je 0x10003781
        __asm _emit 0x74
        __asm _emit 0x65
        mov edi, dword ptr [esp + 54h]
        mov ecx, dword ptr [edi]
        lea eax, [ecx + ecx*2]
        lea edx, [ecx + eax*4]
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebp, dword ptr [eax + 1047ch]
        mov eax, dword ptr [eax + 10474h]
        add edx, ebp
        mov ebp, 5
        lea eax, [edx + eax + 11h]
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ebp
        test edx, edx
        ; Exact mapped bytes 75 05: jne 0x10003761
        __asm _emit 0x75
        __asm _emit 0x05
        add ecx, 19h
        mov dword ptr [edi], ecx
        mov edx, dword ptr [ebx - 4]
        xor eax, eax
        test edx, edx
        ; Exact mapped bytes 7E 17: jle 0x10003781
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edi, dword ptr [edi]
        mov ecx, dword ptr [ebx - 8]
        cmp dword ptr [ecx], edi
        ; Exact mapped bytes 73 0A: jae 0x1000377d
        __asm _emit 0x73
        __asm _emit 0x0a
        inc eax
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 7C F4: jl 0x1000376f
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 04: jmp 0x10003781
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 43 24: mov word ptr [ebx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 20h]
        add ecx, 34h
        dec eax
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 85 2B FC FF FF: jne 0x100033c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0ech]
        test eax, eax
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x100038dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 38h]
        mov ebx, 8
        mov edx, dword ptr [edi]
        test edx, edx
        ; Exact mapped bytes 74 33: je 0x100037ea
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 21a4ch]
        mov eax, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [ecx + 70h]
        cmp eax, ecx
        ; Exact mapped bytes 74 17: je 0x100037e4
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 74 09: je 0x100037da
        __asm _emit 0x74
        __asm _emit 0x09
        add eax, 8
        cmp eax, ecx
        ; Exact mapped bytes 75 F5: jne 0x100037cd
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes EB 0A: jmp 0x100037e4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [edx + 454h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x100037ea
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [edi], 0
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 C1: jne 0x100037b1
        __asm _emit 0x75
        __asm _emit 0xc1
        lea edi, [esi + 88h]
        mov dword ptr [esp + 20h], 2
        ; Exact mapped bytes 66 83 7F D4 02: cmp word ptr [edi - 0x2c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0xd4
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 C1 00 00 00: jne 0x100038ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        lea edx, [esp + 2ch]
        mov dword ptr [edi], ebx
        mov dword ptr [esp + 54h], ebx
        mov dword ptr [esp + 50h], edx
        lea ebp, [esi + 38h]
        mov eax, dword ptr [ebp]
        test eax, eax
        ; Exact mapped bytes 74 68: je 0x1000388b
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [esi + 0ch]
        mov edx, dword ptr [eax + 4e8h]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [edx + 8]
        sub eax, dword ptr [edx + 4]
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DD 5C 24 24: fstp qword ptr [esp + 0x24]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 24h]
        push edx
        push eax
        ; Exact mapped bytes E8 4D 8F 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 3F 8F 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x00
        cmp eax, dword ptr [edi - 20h]
        ; Exact mapped bytes 76 09: jbe 0x10003875
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp], 0
        ; Exact mapped bytes EB 16: jmp 0x1000388b
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [esp + 50h]
        mov edx, dword ptr [esp + 54h]
        inc edx
        mov dword ptr [eax], ebx
        add eax, 4
        mov dword ptr [esp + 54h], edx
        mov dword ptr [esp + 50h], eax
        inc ebx
        add ebp, 4
        cmp ebx, 8
        ; Exact mapped bytes 7C 88: jl 0x1000381c
        __asm _emit 0x7c
        __asm _emit 0x88
        mov ecx, dword ptr [esp + 54h]
        test ecx, ecx
        ; Exact mapped bytes 7E 2E: jle 0x100038ca
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov eax, dword ptr [esi + 240h]
        lea edx, [eax + eax*2]
        lea eax, [eax + edx*4]
        mov edx, dword ptr [esi + 0ch]
        mov ebx, dword ptr [edx + 4]
        xor edx, edx
        add eax, ebx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        mov ecx, dword ptr [esi + edx*4 + 38h]
        mov dword ptr [edi], ecx
        mov eax, dword ptr [esp + 20h]
        add edi, 34h
        dec eax
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 85 22 FF FF FF: jne 0x100037fe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes 66 83 BE E4 00 00 00 01: cmp word ptr [esi + 0xe4], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        mov dword ptr [esp + 54h], edx
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x10003990
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esi + 0c4h]
        xor eax, eax
        mov ecx, ebx
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edx + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 7A: je 0x10003990
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, edi
        ; Exact mapped bytes E8 B3 AC 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xac
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 68: je 0x10003989
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 0ch]
        push edi
        push edx
        mov ecx, dword ptr [eax + 21a4ch]
        ; Exact mapped bytes E8 0A 07 02 00: call 0x10024040
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 4E: jne 0x10003989
        __asm _emit 0x75
        __asm _emit 0x4e
        xor eax, eax
        mov edx, ebx
        mov ecx, dword ptr [edx]
        test ecx, ecx
        ; Exact mapped bytes 74 3D: je 0x10003982
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ebp, dword ptr [edi + 0e74h]
        mov ecx, dword ptr [ecx + 0e74h]
        mov ebp, dword ptr [ebp + 4ch]
        cmp ebp, dword ptr [ecx + 4ch]
        ; Exact mapped bytes 77 0B: ja 0x10003964
        __asm _emit 0x77
        __asm _emit 0x0b
        inc eax
        add edx, 4
        cmp eax, 4
        ; Exact mapped bytes 7C DD: jl 0x1000393f
        __asm _emit 0x7c
        __asm _emit 0xdd
        ; Exact mapped bytes EB 25: jmp 0x10003989
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp eax, 3
        ; Exact mapped bytes 7D 19: jge 0x10003982
        __asm _emit 0x7d
        __asm _emit 0x19
        mov edx, 3
        lea ecx, [esi + eax*4 + 0c8h]
        sub edx, eax
        mov ebp, dword ptr [ecx - 4]
        mov dword ptr [ecx], ebp
        add ecx, 4
        dec edx
        ; Exact mapped bytes 75 F5: jne 0x10003977
        __asm _emit 0x75
        __asm _emit 0xf5
        mov dword ptr [esi + eax*4 + 0c4h], edi
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 86: jne 0x10003916
        __asm _emit 0x75
        __asm _emit 0x86
        xor ecx, ecx
        add esi, 5ch
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x100039a7
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esi + 28h]
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x100039cb
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes EB 0D: jmp 0x100039b4
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x100039b4
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [esi + 2ch]
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x100039cb
        __asm _emit 0x75
        __asm _emit 0x17
        inc ecx
        add esi, 34h
        cmp ecx, 2
        ; Exact mapped bytes 7C D8: jl 0x10003995
        __asm _emit 0x7c
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 66 B8 01 00: mov ax, 1
        __asm _emit 0x66
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        pop ebx
        add esp, 3ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 66 B8 02 00: mov ax, 2
        __asm _emit 0x66
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebx
        add esp, 3ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
