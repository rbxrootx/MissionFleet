// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FA820 .. +0x2BF bytes.
extern "C" __declspec(naked) void FUN_100fa820_100FA820() {
    __asm {
        sub esp, 18h
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 A8 02 00 00: je 0x100faad9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 10464h]
        and ecx, 10000000h
        cmp ecx, 10000000h
        ; Exact mapped bytes 0F 85 6B 02 00 00: jne 0x100faab9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 60 02 00 00: je 0x100faab9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 72 3D FF FF: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 53 02 00 00: je 0x100faab9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [eax + 0e9ch]
        test ecx, ecx
        ; Exact mapped bytes 75 1B: jne 0x100fa88e
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 7A 43 F7 FF: call 0x1006ec00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 2B 02 00 00: je 0x100faab9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, 7d000h
        push ebx
        push ebp
        mov ecx, dword ptr [edx + 104e0h]
        cdq
        mov edi, dword ptr [ecx + 110h]
        idiv edi
        mov ebx, eax
        mov eax, 5dc00h
        cdq
        idiv edi
        mov edx, dword ptr [esi + 5ch]
        mov edi, dword ptr [edx + 4]
        mov ebp, eax
        mov eax, dword ptr [ecx + 50h]
        mov ecx, dword ptr [ecx + 54h]
        add eax, ebx
        sub eax, edi
        add ecx, ebp
        mov edi, eax
        mov eax, dword ptr [edx + 8]
        sub ecx, eax
        mov eax, edi
        cdq
        xor eax, edx
        mov dword ptr [esp + 1ch], ecx
        sub eax, edx
        cmp eax, ebx
        ; Exact mapped bytes 7F 16: jg 0x100fa8f4
        __asm _emit 0x7f
        __asm _emit 0x16
        mov eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, ebp
        ; Exact mapped bytes 7F 0B: jg 0x100fa8f4
        __asm _emit 0x7f
        __asm _emit 0x0b
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 96 01 00 00: jmp 0x100faa8a
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        xor ebx, ebx
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        cmp edi, ebx
        mov dword ptr [esp + 10h], edi
        ; Exact mapped bytes 75 04: jne 0x100fa90b
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        push eax
        push ecx
        ; Exact mapped bytes DD 5C 24 18: fstp qword ptr [esp + 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 18h]
        push edx
        push eax
        ; Exact mapped bytes E8 7E 1E 07 00: call 0x1016c7b2
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x1e
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes D8 0D 64 66 17 10: fmul dword ptr [0x10176664]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x66
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes DC 0D 70 52 17 10: fmul qword ptr [0x10175270]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 5E 1E 07 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1e
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes 7D 05: jge 0x100fa953
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 0e10h
        cdq
        mov ecx, 0e10h
        mov dword ptr [esp + 20h], 0fffffd80h
        idiv ecx
        lea eax, [esp + 20h]
        mov dword ptr [esp + 24h], ebx
        mov edi, edx
        lea edx, [esp + 10h]
        push edi
        push edx
        push eax
        ; Exact mapped bytes E8 57 75 F2 FF: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [esp + 1ch]
        add esp, 0ch
        cmp eax, 1f4h
        ; Exact mapped bytes 7E 07: jle 0x100fa98e
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 1f4h
        ; Exact mapped bytes EB 0C: jmp 0x100fa99a
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 0fffffe0ch
        ; Exact mapped bytes 7D 09: jge 0x100fa99e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, 0fffffe0ch
        mov dword ptr [esp + 10h], eax
        mov ecx, dword ptr [esp + 14h]
        cmp ecx, 0f0h
        ; Exact mapped bytes 7E 07: jle 0x100fa9b1
        __asm _emit 0x7e
        __asm _emit 0x07
        mov ecx, 0f0h
        ; Exact mapped bytes EB 0D: jmp 0x100fa9be
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 0fffffed4h
        ; Exact mapped bytes 7D 09: jge 0x100fa9c2
        __asm _emit 0x7d
        __asm _emit 0x09
        mov ecx, 0fffffed4h
        mov dword ptr [esp + 14h], ecx
        add ecx, 180h
        add eax, 200h
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FA 42 00 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 64h], ebx
        ; Exact mapped bytes 75 7A: jne 0x100faa55
        __asm _emit 0x75
        __asm _emit 0x7a
        mov eax, dword ptr [esp + 10h]
        cmp eax, 1f4h
        ; Exact mapped bytes 75 22: jne 0x100faa08
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        sub ecx, 6
        sub edx, 73h
        push ecx
        mov ecx, dword ptr [esi + 58h]
        push edx
        ; Exact mapped bytes E8 D4 42 00 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov dword ptr [eax + 54h], 2
        ; Exact mapped bytes EB 23: jmp 0x100faa2b
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp eax, 0fffffe0ch
        ; Exact mapped bytes 75 1C: jne 0x100faa2b
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        sub ecx, 6
        add edx, 0ah
        push ecx
        mov ecx, dword ptr [esi + 58h]
        push edx
        ; Exact mapped bytes E8 AB 42 00 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov dword ptr [eax + 54h], ebx
        mov eax, dword ptr [esp + 14h]
        cmp eax, 0dch
        ; Exact mapped bytes 75 09: jne 0x100faa3f
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 8]
        sub ecx, 0fh
        push ecx
        ; Exact mapped bytes EB 0E: jmp 0x100faa4d
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp eax, 0ffffff24h
        ; Exact mapped bytes 75 0F: jne 0x100faa55
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [esi + 8]
        add edx, 0fh
        push edx
        mov ecx, dword ptr [esi + 58h]
        ; Exact mapped bytes E8 6B 43 00 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi + 19h]
        mov ecx, 0e10h
        cdq
        idiv ecx
        mov eax, 51eb851fh
        mov ecx, 47h
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        sub ecx, edx
        mov edx, dword ptr [esi + 50h]
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [esi + 50h]
        mov ecx, dword ptr [esi + 54h]
        mov edx, dword ptr [eax + 50h]
        mov dword ptr [ecx + 50h], edx
        mov ecx, dword ptr [esi + 3ch]
        pop ebp
        test ecx, ecx
        pop ebx
        ; Exact mapped bytes 74 46: je 0x100faad9
        __asm _emit 0x74
        __asm _emit 0x46
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 11: je 0x100faaae
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100faa93
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        add esp, 18h
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        add esp, 18h
        ret
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 9A 45 00 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E3 45 00 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x100faad9
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop edi
        pop esi
        add esp, 18h
        ret
    }
}
