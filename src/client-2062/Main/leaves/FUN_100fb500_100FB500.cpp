// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB500 .. +0x39F bytes.
extern "C" __declspec(naked) void FUN_100fb500_100FB500() {
    __asm {
        push -1
        push 1017458eh
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
        mov eax, dword ptr [esp + 44h]
        mov edx, dword ptr [esp + 38h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 38h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 4ch]
        mov edi, dword ptr [esp + 44h]
        push eax
        mov eax, dword ptr [esp + 40h]
        push ecx
        push edx
        push edi
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 6B 34 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov ecx, dword ptr [esp + 50h]
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], ebx
        mov eax, 1
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], eax
        mov eax, 3
        mov dword ptr [esi + 68h], eax
        mov dword ptr [esi + 6ch], eax
        mov dword ptr [esi + 50h], ecx
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [esi], 101766a0h
        mov dword ptr [esi + 13ch], ebx
        mov dword ptr [esi + 144h], ebx
        mov ecx, dword ptr [eax]
        lea edx, [esi + 124h]
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [esi + 130h]
        mov eax, 0b60b60b7h
        imul ecx
        add edx, ecx
        mov eax, dword ptr [esp + 24h]
        sar edx, 7
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, 16h
        mov dword ptr [esi + 130h], edx
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
        div ecx
        mov eax, dword ptr [esp + 34h]
        add edx, 86h
        imul edx, eax
        imul edx, eax
        mov eax, 51eb851fh
        mul edx
        mov eax, dword ptr [esp + 38h]
        shr edx, 5
        mov dword ptr [esi + 17ch], edx
        mov edx, dword ptr [esp + 2ch]
        add eax, 0fffffc7ch
        mov dword ptr [esi + 148h], edx
        mov dword ptr [esi + 14ch], 0ffffffffh
        cmp eax, ebx
        mov dword ptr [esi + 138h], eax
        ; Exact mapped bytes 7D 08: jge 0x100fb62e
        __asm _emit 0x7d
        __asm _emit 0x08
        lea edx, [eax + 0e10h]
        ; Exact mapped bytes EB 08: jmp 0x100fb636
        __asm _emit 0xeb
        __asm _emit 0x08
        cdq
        mov ecx, 0e10h
        idiv ecx
        lea ecx, [edx + 14h]
        mov eax, 66666667h
        mov dword ptr [esi + 138h], edx
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 5ah
        ; Exact mapped bytes 7C 03: jl 0x100fb658
        __asm _emit 0x7c
        __asm _emit 0x03
        sub edx, 5ah
        mov ecx, dword ptr [esp + 28h]
        lea eax, [edx*8]
        sub eax, edx
        push 58h
        mov dword ptr [esi + 15ch], eax
        add eax, 7
        mov dword ptr [esi + 160h], eax
        mov dword ptr [esi + 150h], ebx
        mov dword ptr [esi + 154h], 4
        mov dword ptr [esi + 158h], 14h
        mov dword ptr [esi + 16ch], ebp
        mov dword ptr [esi + 170h], edi
        mov dword ptr [esi + 140h], 1
        mov dword ptr [esi + 400h], ecx
        ; Exact mapped bytes E8 EF 10 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 54h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 6E: je 0x100fb731
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes A1 60 57 1C 10: mov eax, dword ptr [0x101c5760]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100fb6da
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ebp, dword ptr [eax + 190h]
        cmp ebp, ebx
        ; Exact mapped bytes 75 02: jne 0x100fb6dc
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 0fa0h
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BD 32 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100fb72d
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100fb733
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [esi + 3f4h], ecx
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], bl
        cmp dword ptr [eax + 164h], 1b7h
        ; Exact mapped bytes 7E 12: jle 0x100fb760
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100fb760
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 6dch]
        ; Exact mapped bytes EB 02: jmp 0x100fb762
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3f0h], eax
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [eax + 14h]
        push 101h
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes E8 E2 39 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3f4h]
        mov ebp, 0fffeh
        lea edi, [esi + 1a8h]
        push 20h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi + 3f4h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 3f4h]
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3f4h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3f4h]
        mov eax, dword ptr [esi + 15ch]
        mov dword ptr [ecx + 50h], eax
        mov ecx, 90h
        xor eax, eax
        mov dword ptr [esi + 184h], ebx
        mov dword ptr [esi + 19ch], ebx
        mov dword ptr [esi + 3e8h], ebx
        mov dword ptr [esi + 198h], ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esi + 194h], ebx
        mov dword ptr [esi + 190h], ebx
        mov dword ptr [esi + 18ch], ebx
        mov dword ptr [esi + 188h], ebx
        mov dword ptr [esi + 178h], ebx
        mov dword ptr [esi + 174h], ebx
        mov dword ptr [esi + 3f8h], ebx
        mov dword ptr [esi + 3ech], 48h
        mov dword ptr [esi + 404h], ebx
        mov dword ptr [esi + 408h], ebx
        mov dword ptr [esi + 410h], ebx
        ; Exact mapped bytes E8 6C 0F 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 54h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 32: je 0x100fb876
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 10h
        ; Exact mapped bytes 7E 17: jle 0x100fb86a
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0D: je 0x100fb86a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 40h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 98 D0 F4 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x100fb878
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 8C D0 F4 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100fb878
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 21 6E 24: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 420h], eax
        mov dword ptr [esi + 134h], ebx
        mov eax, esi
        pop edi
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
        ; Exact mapped bytes C2 34 00: ret 0x34
        __asm _emit 0xc2
        __asm _emit 0x34
        __asm _emit 0x00
    }
}
