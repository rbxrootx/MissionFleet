// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2520 .. +0x27C bytes.
extern "C" __declspec(naked) void FUN_587b2520() {
    __asm {
        push -1
        push 589809ach
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
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
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, ecx
        mov dword ptr [esp + 10h], ebx
        movzx eax, word ptr [ebx + 22ch]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        movzx eax, ax
        ; Exact mapped bytes 75 05: jne 0x587b2560
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 64h
        mov ecx, 5dch
        ; Exact mapped bytes 66 89 83 2C 02 00 00: mov word ptr [ebx + 0x22c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 76 07: jbe 0x587b2578
        __asm _emit 0x76
        __asm _emit 0x07
        mov esi, 3
        ; Exact mapped bytes EB 1D: jmp 0x587b2595
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, 3e8h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 72 07: jb 0x587b2589
        __asm _emit 0x72
        __asm _emit 0x07
        mov esi, 2
        ; Exact mapped bytes EB 0C: jmp 0x587b2595
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, 1f4h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        sbb esi, esi
        neg esi
        ; Exact mapped bytes 83 3D 54 90 9C 58 00: cmp dword ptr [0x589c9054], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 6C: je 0x587b260a
        __asm _emit 0x74
        __asm _emit 0x6c
        push 20h
        ; Exact mapped bytes E8 A9 A6 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa6
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        xor eax, eax
        mov dword ptr [esp + 20h], eax
        cmp edi, eax
        ; Exact mapped bytes 74 45: je 0x587b25fd
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes E8 79 A6 1C 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa6
        __asm _emit 0x1c
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x587b25c9
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        ; Exact mapped bytes 8B 0D E0 46 A2 58: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [eax + esi*2 + 30h]
        cmp dword ptr [ecx + 170h], eax
        ; Exact mapped bytes 7E 18: jle 0x587b25f3
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x587b25f3
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x587b25f3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x587b25f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 53 4D 00 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 20h], 0ffffffffh
        mov dword ptr [ebx + 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x587b2611
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebx + 60h], 0
        ; Exact mapped bytes 83 3D 58 90 9C 58 00: cmp dword ptr [0x589c9058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x587b2789
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 10h]
        mov ebx, 1
        cmp dword ptr [edi + 25ch], ebx
        ; Exact mapped bytes 75 56: jne 0x587b2685
        __asm _emit 0x75
        __asm _emit 0x56
        push 20h
        ; Exact mapped bytes E8 18 A6 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa6
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], ebx
        test eax, eax
        ; Exact mapped bytes 0F 84 3B 01 00 00: je 0x587b2784
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 46 A2 58: mov ecx, dword ptr [0x58a246e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 0
        ; Exact mapped bytes 7E 1E: jle 0x587b2676
        __asm _emit 0x7e
        __asm _emit 0x1e
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 15: je 0x587b2676
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 194h]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 DF 4C 00 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x587b2786
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D0 4C 00 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x587b2786
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [edi + 94h], 18000000h
        lea eax, [edi + 270h]
        ; Exact mapped bytes 75 06: jne 0x587b269d
        __asm _emit 0x75
        __asm _emit 0x06
        lea eax, [edi + 324h]
        mov dl, byte ptr [eax + 9bh]
        and dl, 0fh
        cmp dl, bl
        ; Exact mapped bytes 75 56: jne 0x587b2700
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 66 83 B8 9C 00 00 00 02: cmp word ptr [eax + 0x9c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 77 4C: ja 0x587b2700
        __asm _emit 0x77
        __asm _emit 0x4c
        push 20h
        ; Exact mapped bytes E8 93 A5 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa5
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 2
        test eax, eax
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x587b2784
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 46 A2 58: mov ecx, dword ptr [0x58a246f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 3
        ; Exact mapped bytes 7E 95: jle 0x587b2676
        __asm _emit 0x7e
        __asm _emit 0x95
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 8C: je 0x587b2676
        __asm _emit 0x74
        __asm _emit 0x8c
        mov ecx, dword ptr [ecx + 194h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 55 4C 00 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x587b2786
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 22ch]
        mov edx, 5dch
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 76 07: jbe 0x587b2718
        __asm _emit 0x76
        __asm _emit 0x07
        mov esi, 0bh
        ; Exact mapped bytes EB 18: jmp 0x587b2730
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, 3e8h
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 72 07: jb 0x587b2729
        __asm _emit 0x72
        __asm _emit 0x07
        mov esi, 0ch
        ; Exact mapped bytes EB 07: jmp 0x587b2730
        __asm _emit 0xeb
        __asm _emit 0x07
        mov edx, 1f4h
        xor esi, esi
        push 20h
        ; Exact mapped bytes E8 17 A5 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa5
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 3
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x587b2784
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 15 DC 46 A2 58: mov edx, dword ptr [0x58a246dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 170h], esi
        ; Exact mapped bytes 7E 20: jle 0x587b2778
        __asm _emit 0x7e
        __asm _emit 0x20
        test esi, esi
        ; Exact mapped bytes 7C 1C: jl 0x587b2778
        __asm _emit 0x7c
        __asm _emit 0x1c
        cmp dword ptr [edx + 194h], 0
        ; Exact mapped bytes 74 13: je 0x587b2778
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [edx + 194h]
        mov esi, dword ptr [edx + esi*4]
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DA 4B 00 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x587b2786
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor esi, esi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CE 4B 00 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587b2786
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 64h], eax
        mov ecx, dword ptr [esp + 18h]
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
        add esp, 14h
        ret
    }
}
