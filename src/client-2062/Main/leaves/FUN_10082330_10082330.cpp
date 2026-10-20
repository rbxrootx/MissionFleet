// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10082330 .. +0x8AA bytes.
extern "C" __declspec(naked) void FUN_10082330_10082330() {
    __asm {
        push -1
        push 1016ff93h
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
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 3B C6 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc6
        __asm _emit 0x07
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor edi, edi
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        mov dword ptr [esi], 10175df0h
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 5ch
        mov dword ptr [esp + 20h], edi
        mov eax, dword ptr [ecx + 50h]
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 F8 A3 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 10: je 0x100823c8
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push edi
        push edi
        push edi
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AA 29 F9 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100823ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 96 2A F9 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2a
        __asm _emit 0xf9
        __asm _emit 0xff
        push 5ch
        ; Exact mapped bytes E8 BF A3 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 10: je 0x10082401
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push edi
        push edi
        push edi
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 71 29 F9 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10082403
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 5D 2A F9 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [esp + 34h], 6ah
        mov dword ptr [esp + 38h], 1a8h
        push 54h
        ; Exact mapped bytes E8 76 A3 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7C: je 0x100824b8
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [esi + 64h]
        mov ecx, dword ptr [esp + 34h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x10082462
        __asm _emit 0x7e
        __asm _emit 0x17
        test ecx, ecx
        ; Exact mapped bytes 7C 13: jl 0x10082462
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10082462
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [eax + edx]
        ; Exact mapped bytes EB 02: jmp 0x10082464
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 68h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 35 C5 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc5
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100824b2
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100824ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + eax - 138h], edi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 34h]
        inc eax
        mov dword ptr [esp + 34h], eax
        add eax, -6ah
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3D FF FF FF: jl 0x10082423
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0e8h
        ; Exact mapped bytes E8 B0 A2 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 38: je 0x10082538
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        push 0
        lea ecx, [ebx + 81h]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 108h]
        lea ecx, [ebx + 72h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 93h]
        push edx
        mov edx, dword ptr [esi + 68h]
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 1A 64 F9 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x64
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008253a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0e8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 54 A2 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 3B: je 0x10082597
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        push 0
        lea ecx, [ebx + 95h]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 108h]
        lea ecx, [ebx + 86h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 93h]
        push edx
        mov edx, dword ptr [esi + 68h]
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 BB 63 F9 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x63
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10082599
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 9ch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 F5 A1 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 39: je 0x100825f4
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        lea ecx, [ebx + 0bdh]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 108h]
        lea ecx, [ebx + 0aeh]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D B0 56 1C 10: mov ecx, dword ptr [0x101c56b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 93h]
        push edx
        mov edx, dword ptr [esi + 68h]
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 FE 21 08 00: call 0x101047f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100825f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 9ch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 95 A1 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 39: je 0x10082654
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        lea ecx, [ebx + 0d1h]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 108h]
        lea ecx, [ebx + 0c2h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D B0 56 1C 10: mov ecx, dword ptr [0x101c56b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 93h]
        push edx
        mov edx, dword ptr [esi + 68h]
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 9E 21 08 00: call 0x101047f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10082656
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0e8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 35 A1 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 38: je 0x100826b3
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        push 0
        lea ecx, [ebx + 14dh]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 117h]
        lea ecx, [ebx + 0f0h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 4ch]
        push edx
        mov edx, dword ptr [esi + 68h]
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 9F 62 F9 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100826b5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 70h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 93 CA 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 101h
        ; Exact mapped bytes E8 86 CA 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        mov ecx, 17h
        push 0a0h
        mov dword ptr [eax + 90h], ecx
        mov eax, dword ptr [esi + 7ch]
        mov dword ptr [eax + 90h], 8
        mov eax, dword ptr [esi + 80h]
        mov dword ptr [eax + 8ch], ecx
        mov eax, dword ptr [esi + 84h]
        mov dword ptr [eax + 8ch], ecx
        mov eax, dword ptr [esi + 88h]
        mov dword ptr [eax + 90h], 7ffh
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 C7 80 9C 00 00 00 20 00: mov word ptr [eax + 0x9c], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes E8 6A A0 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa0
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 4C: je 0x10082792
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 64h]
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 12: jle 0x10082764
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10082764
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 540h
        ; Exact mapped bytes EB 02: jmp 0x10082766
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 157h]
        push 40h
        push edx
        lea edx, [ebp + 0d6h]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 68h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 30 4B F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x4b
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10082794
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 F7 9F 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x9f
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 4C: je 0x10082805
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 64h]
        cmp dword ptr [ecx + 160h], 16h
        ; Exact mapped bytes 7E 12: jle 0x100827d7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100827d7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 580h
        ; Exact mapped bytes EB 02: jmp 0x100827d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 157h]
        push 40h
        push edx
        lea edx, [ebp + 0f9h]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 68h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 BD 4A F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10082807
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 90h], eax
        mov dword ptr [esp + 34h], 6ch
        mov dword ptr [esp + 38h], 1b0h
        push 54h
        ; Exact mapped bytes E8 77 9F 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x9f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 7C: je 0x100828b7
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [esi + 64h]
        mov ecx, dword ptr [esp + 34h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x10082861
        __asm _emit 0x7e
        __asm _emit 0x17
        test ecx, ecx
        ; Exact mapped bytes 7C 13: jl 0x10082861
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10082861
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [eax + edx]
        ; Exact mapped bytes EB 02: jmp 0x10082863
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 6ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 36 C1 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc1
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100828b1
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100828b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + eax - 11ch], edi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 34h]
        inc eax
        mov dword ptr [esp + 34h], eax
        add eax, -6ch
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3D FF FF FF: jl 0x10082822
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0e8h
        ; Exact mapped bytes E8 B1 9E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9e
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 38: je 0x10082937
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        push 0
        lea ecx, [ebx + 81h]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 212h]
        lea ecx, [ebx + 72h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 19dh]
        push edx
        mov edx, dword ptr [esi + 6ch]
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 1B 60 F9 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10082939
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 9ch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 52 9E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9e
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 39: je 0x10082997
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        lea ecx, [ebx + 0bdh]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 208h]
        lea ecx, [ebx + 0aeh]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D B0 56 1C 10: mov ecx, dword ptr [0x101c56b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 19dh]
        push edx
        mov edx, dword ptr [esi + 6ch]
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 5B 1E 08 00: call 0x101047f0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10082999
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 9ch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 F2 9D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 39: je 0x100829f7
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        lea ecx, [ebx + 0d1h]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 208h]
        lea ecx, [ebx + 0c2h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D B0 56 1C 10: mov ecx, dword ptr [0x101c56b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 19dh]
        push edx
        mov edx, dword ptr [esi + 6ch]
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 FB 1D 08 00: call 0x101047f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100829f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0e8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 92 9D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 3B: je 0x10082a59
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        push 0
        lea ecx, [ebx + 14dh]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 221h]
        lea ecx, [ebx + 0f0h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 156h]
        push edx
        mov edx, dword ptr [esi + 6ch]
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F9 5E F9 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10082a5b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 94h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 EA C6 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc6
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 101h
        ; Exact mapped bytes E8 DA C6 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc6
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        mov ecx, 17h
        push 0a0h
        mov dword ptr [eax + 90h], ecx
        mov eax, dword ptr [esi + 0a0h]
        mov dword ptr [eax + 8ch], ecx
        mov eax, dword ptr [esi + 0a4h]
        mov dword ptr [eax + 8ch], ecx
        mov eax, dword ptr [esi + 0a8h]
        mov dword ptr [eax + 90h], 7ffh
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 C7 80 9C 00 00 00 20 00: mov word ptr [eax + 0x9c], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes E8 C8 9C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9c
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 4C: je 0x10082b34
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 64h]
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 12: jle 0x10082b06
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10082b06
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 540h
        ; Exact mapped bytes EB 02: jmp 0x10082b08
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 157h]
        push 40h
        push edx
        lea edx, [ebp + 1e0h]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 68h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 8E 47 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10082b36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 55 9C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x9c
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 4C: je 0x10082ba7
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 64h]
        cmp dword ptr [ecx + 160h], 16h
        ; Exact mapped bytes 7E 12: jle 0x10082b79
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10082b79
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 580h
        ; Exact mapped bytes EB 02: jmp 0x10082b7b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 68h]
        add ebx, 157h
        push 40h
        add ebp, 203h
        push ebx
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 1B 47 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10082ba9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        or ah, 5
        mov byte ptr [esi + 60h], 1
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
