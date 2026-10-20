// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008F2C0 .. +0x396 bytes.
extern "C" __declspec(naked) void FUN_1008f2c0_1008F2C0() {
    __asm {
        push -1
        push 101706ffh
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
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        mov edx, dword ptr [esp + 30h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 AB F6 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi], 10175e9ch
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebp, 1e0h
        mov dword ptr [esp + 1ch], 0
        mov eax, dword ptr [eax + 50h]
        mov ebx, 78h
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esp + 38h], ebp
        push 54h
        ; Exact mapped bytes E8 69 D4 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 75: je 0x1008f3be
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 50h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 13: jle 0x1008f367
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebx, ebx
        ; Exact mapped bytes 7C 0F: jl 0x1008f367
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1008f367
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebp]
        ; Exact mapped bytes EB 02: jmp 0x1008f369
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2F F6 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1008f3b8
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebp, dword ptr [esp + 38h]
        ; Exact mapped bytes EB 02: jmp 0x1008f3c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + ebp - 18ch], edi
        add ebp, 4
        inc ebx
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esp + 38h], ebp
        lea edx, [ebx - 78h]
        cmp edx, 2
        ; Exact mapped bytes 0F 8C 50 FF FF FF: jl 0x1008f330
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, 1e8h
        mov ebx, 7ah
        mov dword ptr [esp + 38h], ebp
        push 54h
        ; Exact mapped bytes E8 AB D3 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 75: je 0x1008f47c
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 50h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 13: jle 0x1008f425
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebx, ebx
        ; Exact mapped bytes 7C 0F: jl 0x1008f425
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1008f425
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebp]
        ; Exact mapped bytes EB 02: jmp 0x1008f427
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 71 F5 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1008f476
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, dword ptr [esp + 38h]
        ; Exact mapped bytes EB 02: jmp 0x1008f47e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + ebp - 18ch], edi
        add ebp, 4
        inc ebx
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esp + 38h], ebp
        lea ecx, [ebx - 7ah]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 50 FF FF FF: jl 0x1008f3ee
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 9ch
        ; Exact mapped bytes E8 F8 D2 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 35: je 0x1008f4ed
        __asm _emit 0x74
        __asm _emit 0x35
        mov edi, dword ptr [esp + 2ch]
        mov ebx, dword ptr [esp + 28h]
        push 0
        push 0ffffffh
        lea edx, [edi + 47h]
        lea ecx, [ebx + 0aeh]
        push edx
        lea edx, [edi + 35h]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 B0 56 1C 10: mov edx, dword ptr [0x101c56b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 23h]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 05 53 07 00: call 0x101047f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x1008f4f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 97 D2 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 46: je 0x1008f55f
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 50h]
        cmp dword ptr [ecx + 160h], 18h
        ; Exact mapped bytes 7E 12: jle 0x1008f537
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008f537
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 600h
        ; Exact mapped bytes EB 02: jmp 0x1008f539
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 50h]
        push 40h
        push edx
        lea edx, [ebx + 82h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 63 7D F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008f561
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 2D D2 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        mov ebp, 17h
        ; Exact mapped bytes 74 45: je 0x1008f5cd
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 50h]
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x1008f5a5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008f5a5
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x1008f5a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add edi, 50h
        push 40h
        add ebx, 0afh
        push edi
        push ebx
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F5 7C F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008f5cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 54h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 7C FB 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 6F FB 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        push 101h
        ; Exact mapped bytes E8 62 FB 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        push 101h
        ; Exact mapped bytes E8 55 FB 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 101h
        ; Exact mapped bytes E8 48 FB 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 101h
        ; Exact mapped bytes E8 3B FB 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        pop edi
        mov dword ptr [eax + 8ch], ebp
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e5f0h
        mov eax, esi
        or ch, 5
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 10h]
        pop esi
        pop ebp
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
