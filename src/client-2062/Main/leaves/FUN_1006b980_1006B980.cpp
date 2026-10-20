// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006B980 .. +0x503 bytes.
extern "C" __declspec(naked) void FUN_1006b980_1006B980() {
    __asm {
        push -1
        push 1016f5eeh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 308h
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 104e0h]
        mov cl, byte ptr [eax + 24h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        and ecx, 0fh
        mov dword ptr [esp + 1ch], ecx
        mov ecx, dword ptr [esi + 104e0h]
        ; Exact mapped bytes E8 F0 36 09 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 19 28 00 00: call 0x1006e1e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 320h]
        lea ecx, [esp + 210h]
        push eax
        xor edi, edi
        push 101814c4h
        push ecx
        mov dword ptr [esi + 20bc0h], edi
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push 98h
        ; Exact mapped bytes E8 AC 0D 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [esp + 0ch], eax
        cmp eax, edi
        mov dword ptr [esp + 318h], edi
        ; Exact mapped bytes 74 11: je 0x1006ba17
        __asm _emit 0x74
        __asm _emit 0x11
        lea edx, [esp + 210h]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 3B CC 09 00: call 0x10108650
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1006ba19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 104e0h]
        mov dword ptr [esi + 104dch], eax
        mov ecx, 1fh
        xor eax, eax
        add edi, 70h
        push ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esi + 104e0h]
        mov ebx, 64h
        mov eax, 0c8h
        mov edx, 80h
        mov dword ptr [ecx + 0a8h], ebx
        push ebp
        mov ebp, 20h
        mov dword ptr [esp + 320h], 0ffffffffh
        mov dword ptr [ecx + 0ach], eax
        mov eax, dword ptr [esi + 104e0h]
        mov dword ptr [eax + 0b0h], edx
        mov dword ptr [eax + 0b4h], ebp
        mov eax, dword ptr [esi + 104e0h]
        mov dword ptr [eax + 0b8h], ebp
        mov dword ptr [eax + 0bch], 10h
        mov eax, dword ptr [esi + 104e0h]
        xor ebp, ebp
        mov dword ptr [eax + 50h], ebp
        mov dword ptr [eax + 54h], ebp
        mov ecx, dword ptr [esi + 104e0h]
        mov eax, 40h
        mov dword ptr [ecx + 0c0h], eax
        xor eax, eax
        mov dword ptr [ecx + 0c4h], eax
        mov ecx, dword ptr [esi + 104e0h]
        ; Exact mapped bytes E8 82 D5 09 00: call 0x10109040
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd5
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [esi + 104e0h]
        ; Exact mapped bytes 8B 1D 20 51 17 10: mov ebx, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, 186a0h
        xor eax, eax
        mov edi, dword ptr [edx + 0f0h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        xor edi, edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cdq
        mov ecx, 9
        idiv ecx
        ; Exact mapped bytes A1 48 57 1C 10: mov eax, dword ptr [0x101c5748]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 160h]
        inc edx
        cmp ecx, edx
        ; Exact mapped bytes 7E 15: jle 0x1006bb0a
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp edx, ebp
        ; Exact mapped bytes 7C 11: jl 0x1006bb0a
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x1006bb0a
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, eax
        ; Exact mapped bytes EB 02: jmp 0x1006bb0c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov eax, dword ptr [esi + 104e0h]
        add edi, 14h
        cmp edi, 61a80h
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ecx + edi - 14h], edx
        ; Exact mapped bytes 7C B4: jl 0x1006badb
        __asm _emit 0x7c
        __asm _emit 0xb4
        mov eax, dword ptr [esp + 328h]
        ; Exact mapped bytes 8B 3D 48 57 1C 10: mov edi, dword ptr [0x101c5748]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, 12h
        ; Exact mapped bytes 75 06: jne 0x1006bb3f
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 8B 3D 4C 57 1C 10: mov edi, dword ptr [0x101c574c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 104e0h]
        mov edx, dword ptr [esi + 104dch]
        push ebp
        push 100h
        push ecx
        push edi
        push ebp
        push edx
        ; Exact mapped bytes E8 D6 B7 09 00: call 0x10107330
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104e0h]
        mov eax, dword ptr [esi + 104dch]
        push 101h
        push 100h
        push ecx
        push edi
        push 1
        push eax
        ; Exact mapped bytes E8 B6 B7 09 00: call 0x10107330
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 48 57 1C 10: mov ecx, dword ptr [0x101c5748]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 104dch]
        push ecx
        mov ecx, dword ptr [esi + 104e0h]
        push 2
        push edx
        ; Exact mapped bytes E8 8B 2D FE FF: call 0x1004e920
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ebp, [esi + 428h]
        mov ecx, 8
        xor eax, eax
        mov edi, ebp
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esi + 104dch]
        push 3
        ; Exact mapped bytes E8 DD D3 09 00: call 0x10108f90
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x1006bccb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104dch]
        lea eax, [esp + 0a4h]
        push 3
        push eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes E8 68 D3 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [eax + 3ch], ebx
        ; Exact mapped bytes 0F 8E D0 01 00 00: jle 0x1006bdb1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 28h]
        push 3
        push ecx
        mov ecx, dword ptr [esi + 104dch]
        xor ebx, ebx
        ; Exact mapped bytes E8 4B D3 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 38h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 9F 00 00 00: jle 0x1006bc9f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        cmp eax, -1
        ; Exact mapped bytes 74 79: je 0x1006bc80
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, dword ptr [esi + 104dch]
        lea edx, [esp + 120h]
        push 3
        push edx
        mov ebp, eax
        ; Exact mapped bytes E8 22 D3 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [eax + 40h]
        mov edx, dword ptr [esi + ebp*4 + 428h]
        imul eax, ebx
        mov ecx, ebp
        push 3
        shl ecx, 0ah
        add edx, ecx
        mov dword ptr [esi + edx*8 + 448h], eax
        mov ecx, dword ptr [esi + 104dch]
        mov ebp, dword ptr [edi]
        lea eax, [esp + 1a0h]
        push eax
        ; Exact mapped bytes E8 F0 D2 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 44h]
        mov eax, dword ptr [esi + ebp*4 + 428h]
        imul ecx, dword ptr [esp + 10h]
        mov edx, ebp
        shl edx, 0ah
        add eax, edx
        mov dword ptr [esi + eax*8 + 44ch], ecx
        mov ecx, dword ptr [edi]
        lea eax, [esi + ecx*4 + 428h]
        mov ecx, dword ptr [esi + ecx*4 + 428h]
        inc ecx
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esi + 104dch]
        lea edx, [esp + 28h]
        push 3
        add edi, 14h
        push edx
        inc ebx
        ; Exact mapped bytes E8 AA D2 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebx, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 8C 61 FF FF FF: jl 0x1006bc00
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 104dch]
        lea eax, [esp + 0a4h]
        inc ebx
        push 3
        push eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes E8 83 D2 09 00: call 0x10108f40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 0F 8C 1B FF FF FF: jl 0x1006bbe1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x1006bdb1
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 448h]
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [esp + 14h], ecx
        mov edi, ebp
        xor eax, eax
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [edi], eax
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 1ch], eax
        and eax, 1
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*8]
        shl eax, 2
        cdq
        sub eax, edx
        sar eax, 1
        xor edx, edx
        mov ebp, dword ptr [esp + 328h]
        xor ebx, ebx
        add ecx, 8
        ; Exact mapped bytes 66 8B 1C 6D B8 92 19 10: mov bx, word ptr [ebp*2 + 0x101992b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1c
        __asm _emit 0x6d
        __asm _emit 0xb8
        __asm _emit 0x92
        __asm _emit 0x19
        __asm _emit 0x10
        mov ebp, dword ptr [esp + 10h]
        lea ebx, [ebp + ebx*8]
        mov ebp, dword ptr [esp + 328h]
        mov ebx, dword ptr [ebx*8 + 10198638h]
        add ebx, edx
        add edx, 0b4h
        add ebx, eax
        mov dword ptr [ecx - 8], ebx
        xor ebx, ebx
        ; Exact mapped bytes 66 8B 1C 6D B8 92 19 10: mov bx, word ptr [ebp*2 + 0x101992b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1c
        __asm _emit 0x6d
        __asm _emit 0xb8
        __asm _emit 0x92
        __asm _emit 0x19
        __asm _emit 0x10
        mov ebp, dword ptr [esp + 10h]
        lea ebx, [ebp + ebx*8]
        mov ebp, dword ptr [ebx*8 + 1019863ch]
        mov ebx, dword ptr [esp + 1ch]
        add ebp, ebx
        mov dword ptr [ecx - 4], ebp
        mov ebp, dword ptr [edi]
        inc ebp
        cmp edx, 5a0h
        mov dword ptr [edi], ebp
        ; Exact mapped bytes 7C 9A: jl 0x1006bcfe
        __asm _emit 0x7c
        __asm _emit 0x9a
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 18h]
        add ebx, 28h
        inc eax
        add ecx, 100h
        cmp ebx, 320h
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes 0F 8C 5D FF FF FF: jl 0x1006bceb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 14h]
        inc eax
        add edi, 4
        add ecx, 2000h
        cmp eax, 8
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 0F 8C 2A FF FF FF: jl 0x1006bcdb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 104dch]
        pop ebp
        test ecx, ecx
        pop ebx
        ; Exact mapped bytes 74 10: je 0x1006bdcd
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 104dch], 0
        mov ecx, dword ptr [esi + 104e0h]
        push 0
        push 0
        mov eax, dword ptr [ecx + 0b0h]
        imul eax, dword ptr [ecx + 0a8h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 104c0h], eax
        mov eax, dword ptr [ecx + 0b4h]
        imul eax, dword ptr [ecx + 0ach]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 104c4h], eax
        mov eax, dword ptr [ecx + 0b4h]
        imul eax, dword ptr [ecx + 0ach]
        mov edx, dword ptr [ecx + 0b0h]
        push eax
        imul edx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov ecx, dword ptr [eax + 2a8h]
        ; Exact mapped bytes E8 CD 31 05 00: call 0x100bf000
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104e0h]
        mov eax, 3e8h
        mov dword ptr [esi + 104e4h], eax
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        mov dword ptr [ecx + 110h], eax
        mov al, byte ptr [esp + 1ch]
        mov esi, dword ptr [esi + 104e0h]
        and al, 0fh
        mov ecx, dword ptr [esp + 310h]
        mov dl, al
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        pop edi
        and eax, 0fff0h
        or edx, eax
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 314h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
