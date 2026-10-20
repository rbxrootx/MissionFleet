// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FCCA0 .. +0x424 bytes.
extern "C" __declspec(naked) void FUN_100fcca0_100FCCA0() {
    __asm {
        push -1
        push 101746a1h
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
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr [ebx + 8ch]
        push edi
        ; Exact mapped bytes 66 0F B6 4C 18 7C: movzx cx, byte ptr [eax + ebx + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x18
        __asm _emit 0x7c
        add ecx, 0bh
        shl ecx, 5
        xor ecx, 6
        ; Exact mapped bytes 66 89 4C 24 10: mov word ptr [esp + 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 BA 83 F2 FF: call 0x100250a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 2D 8C 51 17 10: mov ebp, dword ptr [0x1017518c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 27: jne 0x100fcd19
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes A1 DC 92 1C 10: mov eax, dword ptr [0x101c92dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 1017f3bch
        push 1017f394h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 5F F4 06 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        lea edi, [ebx + 0d0h]
        mov ecx, 2ah
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 8B 8B 74 01 00 00: mov cx, word ptr [ebx + 0x174]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ch
        ; Exact mapped bytes E8 F5 85 F2 FF: call 0x10025330
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 27: jne 0x100fcd68
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 15 DC 92 1C 10: mov edx, dword ptr [0x101c92dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push 1017f3bch
        push 1017f364h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 10 F4 06 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 24h]
        lea edi, [ebx + 178h]
        mov ecx, 2dh
        push 58h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebx + 22ch], eax
        ; Exact mapped bytes E8 1A FA 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 24h], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x100fce1e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 60 57 1C 10: mov eax, dword ptr [0x101c5760]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edi, edi
        ; Exact mapped bytes 66 8B BB D4 00 00 00: mov di, word ptr [ebx + 0xd4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 160h]
        add edi, 3
        cmp ecx, edi
        ; Exact mapped bytes 7E 15: jle 0x100fcdcd
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp edi, ebp
        ; Exact mapped bytes 7C 11: jl 0x100fcdcd
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x100fcdcd
        __asm _emit 0x74
        __asm _emit 0x07
        shl edi, 6
        add edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100fcdcf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebx + 8]
        mov ecx, dword ptr [ebx + 4]
        push 40h
        push ebp
        push ebp
        push eax
        push ecx
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 CD 1B 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ebp
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 2D: je 0x100fce20
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [edi]
        lea eax, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100fce20
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ebp, 0fffbh
        mov dword ptr [ebx + 0c8h], esi
        ; Exact mapped bytes 66 21 6E 24: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x24
        push 58h
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 62 F9 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 24h], esi
        test esi, esi
        mov dword ptr [esp + 1ch], 1
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x100fcee0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 60 57 1C 10: mov eax, dword ptr [0x101c5760]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edi, edi
        ; Exact mapped bytes 66 8B BB D4 00 00 00: mov di, word ptr [ebx + 0xd4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 160h]
        add edi, 4
        cmp ecx, edi
        ; Exact mapped bytes 7E 15: jle 0x100fce87
        __asm _emit 0x7e
        __asm _emit 0x15
        test edi, edi
        ; Exact mapped bytes 7C 11: jl 0x100fce87
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100fce87
        __asm _emit 0x74
        __asm _emit 0x07
        shl edi, 6
        add edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100fce89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebx + 8]
        mov ecx, dword ptr [ebx + 4]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 11 1B 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 29: je 0x100fcedc
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [edi]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [edi + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x100fcee2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        or edi, 0ffffffffh
        push 0fffffeffh
        mov dword ptr [esp + 20h], edi
        mov dword ptr [ebx + 0cch], ecx
        ; Exact mapped bytes E8 67 22 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 0cch]
        mov esi, dword ptr [esp + 28h]
        mov ecx, 168h
        push 38f8h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, esi
        cdq
        idiv ecx
        mov eax, 66666667h
        mov dword ptr [ebx + 78h], esi
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ebx + 0c8h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ebx + 78h]
        cdq
        idiv ecx
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ebx + 0cch]
        mov dword ptr [eax + 50h], edx
        ; Exact mapped bytes E8 48 F8 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 48: je 0x100fcfb3
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 15 60 57 1C 10: mov edx, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8B D4 00 00 00: mov cx, word ptr [ebx + 0xd4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 160h]
        add ecx, 2
        cmp ebp, ecx
        ; Exact mapped bytes 7E 15: jle 0x100fcf9c
        __asm _emit 0x7e
        __asm _emit 0x15
        test ecx, ecx
        ; Exact mapped bytes 7C 11: jl 0x100fcf9c
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x100fcf9c
        __asm _emit 0x74
        __asm _emit 0x07
        shl ecx, 6
        add ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x100fcf9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ebx + 8]
        push 40h
        push edx
        mov edx, dword ptr [ebx + 4]
        push edx
        push ecx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 DF 90 F4 FF: call 0x10046090
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100fcfb5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 22ch]
        push 0ffffh
        push ecx
        lea ecx, [ebx + 178h]
        push 0
        push ecx
        lea ecx, [ebx + 0d0h]
        mov dword ptr [esp + 2ch], edi
        push ecx
        push 0
        mov ecx, eax
        mov dword ptr [ebx + 0c4h], eax
        ; Exact mapped bytes E8 7C 94 F4 FF: call 0x10046460
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0c4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 30: call dword ptr [edx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x30
        mov ecx, dword ptr [ebx + 0c4h]
        push 0
        ; Exact mapped bytes E8 94 67 F4 FF: call 0x10043790
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x67
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 0c4h]
        mov dword ptr [eax + 120h], 0
        ; Exact mapped bytes 66 8B 83 68 01 00 00: mov ax, word ptr [ebx + 0x168]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0c4h]
        shr eax, 4
        and eax, 7fh
        cmp eax, 64h
        ; Exact mapped bytes 72 05: jb 0x100fd029
        __asm _emit 0x72
        __asm _emit 0x05
        mov eax, 64h
        mov dword ptr [ecx + 0cch], eax
        mov ecx, dword ptr [ebx + 0c4h]
        push 168h
        push 0
        ; Exact mapped bytes E8 6F 66 F4 FF: call 0x100436b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0xf4
        __asm _emit 0xff
        lea eax, [esi - 14h]
        lea ecx, [esi + 154h]
        test eax, eax
        ; Exact mapped bytes 7C 02: jl 0x100fd050
        __asm _emit 0x7c
        __asm _emit 0x02
        mov ecx, eax
        lea eax, [esi + 14h]
        mov edi, 168h
        cdq
        idiv edi
        push esi
        push edx
        push ecx
        mov ecx, dword ptr [ebx + 0c4h]
        ; Exact mapped bytes E8 77 66 F4 FF: call 0x100436e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x66
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0c4h]
        lea eax, [esi + esi*4]
        shl eax, 1
        push eax
        mov dword ptr [ecx + 0a8h], eax
        ; Exact mapped bytes E8 F0 5F F4 FF: call 0x10043070
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0c4h]
        push 0
        ; Exact mapped bytes E8 33 68 F4 FF: call 0x100438c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0c8h]
        pop edi
        add ecx, 14h
        add ebx, 14h
        pop esi
        pop ebp
        mov edx, dword ptr [ecx]
        mov dword ptr [ebx], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebx + 4], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebx + 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [ebx + 0ch], eax
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
