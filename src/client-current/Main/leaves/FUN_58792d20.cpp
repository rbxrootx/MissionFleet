// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792D20 .. +0x40D bytes.
extern "C" __declspec(naked) void FUN_58792d20() {
    __asm {
        push -1
        push 58980486h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 144h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 140h], eax
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
        lea eax, [esp + 158h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        mov ebx, ecx
        lea eax, [esp + 58h]
        push 0
        mov ecx, 7
        lea esi, [esp + 170h]
        lea edi, [esp + 1ch]
        push eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes E8 C8 9E 1E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9e
        __asm _emit 0x1e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        add esp, 0ch
        cmp eax, 20h
        ; Exact mapped bytes 0F 87 74 03 00 00: ja 0x58793104
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 58793150h]
        ; Exact mapped bytes FF 24 8D 30 31 79 58: jmp dword ptr [ecx*4 + 0x58793130]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0x31
        __asm _emit 0x79
        __asm _emit 0x58
        mov edx, dword ptr [esp + 1ch]
        push 58996be0h
        push edx
        lea ecx, [esp + 3ch]
        ; Exact mapped bytes E8 AF FD 16 00: call 0x58902b60
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 20h]
        push ebp
        lea ecx, [esp + 38h]
        mov dword ptr [esp + 164h], 0
        add ebx, -60h
        ; Exact mapped bytes E8 63 F2 16 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf2
        __asm _emit 0x16
        __asm _emit 0x00
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 5B F9 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 4ch]
        sub ecx, dword ptr [esp + 48h]
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        mov edi, 1
        add eax, edx
        cmp eax, edi
        mov esi, edi
        ; Exact mapped bytes 7E 38: jle 0x58792e33
        __asm _emit 0x7e
        __asm _emit 0x38
        ; Exact mapped bytes EB 03: jmp 0x58792e00
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        push ebp
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 86 F2 16 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0x16
        __asm _emit 0x00
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 1E F9 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 4ch]
        sub ecx, dword ptr [esp + 48h]
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add esi, edi
        add ecx, edx
        cmp esi, ecx
        ; Exact mapped bytes 7C CD: jl 0x58792e00
        __asm _emit 0x7c
        __asm _emit 0xcd
        lea ecx, [esp + 34h]
        mov dword ptr [esp + 160h], 0ffffffffh
        ; Exact mapped bytes E8 69 F5 16 00: call 0x589023b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes E9 B8 02 00 00: jmp 0x58793104
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 53 C4: and word ptr [ebx - 0x3c], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x53
        __asm _emit 0xc4
        mov eax, dword ptr [ebx + 120c4h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 120c8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 120b4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 120b8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        xor edx, edx
        cmp dword ptr [ebx + 1ech], edx
        ; Exact mapped bytes 0F 8E 72 02 00 00: jle 0x58793104
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 11b04h]
        mov edi, 1
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4b8h]
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        mov esi, 0fffeh
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        add edx, edi
        add eax, 4
        cmp edx, dword ptr [ebx + 1ech]
        ; Exact mapped bytes 7C DE: jl 0x58792ea0
        __asm _emit 0x7c
        __asm _emit 0xde
        ; Exact mapped bytes E9 3D 02 00 00: jmp 0x58793104
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, 2
        ; Exact mapped bytes 66 09 73 C4: or word ptr [ebx - 0x3c], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x73
        __asm _emit 0xc4
        mov eax, dword ptr [ebx + 120c4h]
        mov edi, 1
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 120c8h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 120b4h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 120b8h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        xor ecx, ecx
        cmp dword ptr [ebx + 1ech], ecx
        ; Exact mapped bytes 7E 1C: jle 0x58792f23
        __asm _emit 0x7e
        __asm _emit 0x1c
        lea edx, [ebx + 11b04h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, edi
        add edx, 4
        cmp ecx, dword ptr [ebx + 1ech]
        ; Exact mapped bytes 7C ED: jl 0x58792f10
        __asm _emit 0x7c
        __asm _emit 0xed
        cmp dword ptr [ebx + 1ech], esi
        ; Exact mapped bytes 0F 8C D5 01 00 00: jl 0x58793104
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 1e8h]
        cmp eax, -1
        ; Exact mapped bytes 0F 8E C6 01 00 00: jle 0x58793104
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + eax*4 + 11fbch]
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 43 24: and word ptr [ebx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x43
        __asm _emit 0x24
        ; Exact mapped bytes E9 B1 01 00 00: jmp 0x58793104
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 58 EF FD FF: call 0x58771eb0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [esp + 54h]
        push esi
        push ecx
        ; Exact mapped bytes E8 5B EF FD FF: call 0x58771ec0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        mov edi, 1
        add esp, 8
        sub eax, edi
        ; Exact mapped bytes 74 11: je 0x58792f84
        __asm _emit 0x74
        __asm _emit 0x11
        sub eax, edi
        ; Exact mapped bytes 0F 85 89 01 00 00: jne 0x58793104
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push eax
        lea edx, [esp + 5ch]
        push edx
        ; Exact mapped bytes EB 09: jmp 0x58792f8d
        __asm _emit 0xeb
        __asm _emit 0x09
        push 0
        push 0
        lea eax, [esp + 5ch]
        push eax
        push 4b0h
        ; Exact mapped bytes E8 59 8B FD FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D2 75 FD FF: call 0x5876a570
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x58793104
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 54h]
        push 0
        push ecx
        ; Exact mapped bytes E8 11 EF FD FF: call 0x58771ec0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push 58996be0h
        lea edx, [esp + 58h]
        push edx
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 9B FB 16 00: call 0x58902b60
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfb
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        sub ecx, dword ptr [esp + 28h]
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edi, 1
        mov dword ptr [esp + 160h], edi
        test eax, eax
        ; Exact mapped bytes 0F 8E 73 00 00 00: jle 0x58793067
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffffh
        lea ecx, [esp + 18h]
        add ebx, -60h
        ; Exact mapped bytes E8 2B F0 16 00: call 0x58902030
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf0
        __asm _emit 0x16
        __asm _emit 0x00
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 23 F7 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        sub ecx, dword ptr [esp + 28h]
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp ecx, edi
        mov esi, edi
        ; Exact mapped bytes 7E 39: jle 0x58793067
        __asm _emit 0x7e
        __asm _emit 0x39
        mov edi, edi
        push 0ffffffh
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 52 F0 16 00: call 0x58902090
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf0
        __asm _emit 0x16
        __asm _emit 0x00
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 EA F6 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        sub ecx, dword ptr [esp + 28h]
        mov eax, 92492493h
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add esi, edi
        add eax, edx
        cmp esi, eax
        ; Exact mapped bytes 7C C9: jl 0x58793030
        __asm _emit 0x7c
        __asm _emit 0xc9
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 160h], 0ffffffffh
        ; Exact mapped bytes E8 35 F3 16 00: call 0x589023b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf3
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x58793104
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2B EE FD FF: call 0x58771eb0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edi, 1
        sub eax, edi
        ; Exact mapped bytes 74 1B: je 0x587930a9
        __asm _emit 0x74
        __asm _emit 0x1b
        sub eax, edi
        ; Exact mapped bytes 75 3E: jne 0x587930d0
        __asm _emit 0x75
        __asm _emit 0x3e
        push edi
        ; Exact mapped bytes E8 48 EE FD FF: call 0x58771ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 84 A2 58: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push 0
        push 0
        push 2
        push eax
        ; Exact mapped bytes EB 42: jmp 0x587930eb
        __asm _emit 0xeb
        __asm _emit 0x42
        lea ecx, [esp + 54h]
        push ecx
        ; Exact mapped bytes E8 3D EE FD FF: call 0x58771ef0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push edi
        push 589963ach
        push 0
        lea edx, [esp + 60h]
        push edx
        push 58996c38h
        push 0
        ; Exact mapped bytes FF 15 B4 C3 98 58: call dword ptr [0x5898c3b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 C4 84 A2 58: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 2
        push eax
        ; Exact mapped bytes EB 0D: jmp 0x587930eb
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D C4 84 A2 58: mov ecx, dword ptr [0x58a284c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 2
        push ecx
        ; Exact mapped bytes FF 15 E4 C3 98 58: call dword ptr [0x5898c3e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 FB 02 00: call 0x587c2c90
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebx - 60h]
        ; Exact mapped bytes E8 1C C8 FF FF: call 0x5878f920
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [esp + 158h]
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
        mov ecx, dword ptr [esp + 140h]
        xor ecx, esp
        ; Exact mapped bytes E8 B3 9A 1E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9a
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 150h
    }
}
