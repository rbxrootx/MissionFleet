// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C3EB0 .. +0xE21 bytes.
extern "C" __declspec(naked) void FUN_100c3eb0_100C3EB0() {
    __asm {
        push -1
        push 1017271bh
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
        mov ebp, ecx
        push esi
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
        mov ecx, ebp
        mov dword ptr [esp + 28h], ebp
        ; Exact mapped bytes E8 5B 36 F8 FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x36
        __asm _emit 0xf8
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [ebp], 101762ech
        ; Exact mapped bytes E8 97 88 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 6B: je 0x100c3f86
        __asm _emit 0x74
        __asm _emit 0x6b
        ; Exact mapped bytes A1 0C 58 1C 10: mov eax, dword ptr [0x101c580c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 191h
        ; Exact mapped bytes 7E 12: jle 0x100c3f3e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100c3f3e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [eax + 644h]
        ; Exact mapped bytes EB 02: jmp 0x100c3f40
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 4bh
        push ebx
        push ebx
        push ebx
        push ebx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 62 AA 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 2D: je 0x100c3f88
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [edi + 10h]
        add edi, 18h
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
        ; Exact mapped bytes EB 02: jmp 0x100c3f88
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebp + 114h], esi
        ; Exact mapped bytes E8 06 88 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 6D: je 0x100c4019
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes A1 0C 58 1C 10: mov eax, dword ptr [0x101c580c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 190h
        ; Exact mapped bytes 7E 12: jle 0x100c3fcf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100c3fcf
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [eax + 640h]
        ; Exact mapped bytes EB 02: jmp 0x100c3fd1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 4ah
        push ebx
        push ebx
        push ebx
        push ebx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 D1 A9 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 29: je 0x100c4015
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [edi + 10h]
        add edi, 18h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [edi]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [edi + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x100c401b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebp + 118h], ecx
        ; Exact mapped bytes E8 30 B1 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 118h]
        push 68h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 5D 87 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 5E: je 0x100c40b1
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 35 0C 58 1C 10: mov esi, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esi + 164h]
        cmp edi, 192h
        ; Exact mapped bytes 7E 12: jle 0x100c4079
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100c4079
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 648h]
        ; Exact mapped bytes EB 02: jmp 0x100c407b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        cmp edi, 193h
        ; Exact mapped bytes 7E 1E: jle 0x100c40a1
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 14: je 0x100c40a1
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 64ch]
        push ebx
        push ebx
        push edx
        push ecx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 31 A8 FB FF: call 0x1007e8d0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa8
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x100c40b3
        __asm _emit 0xeb
        __asm _emit 0x12
        push ebx
        xor ecx, ecx
        push ebx
        push edx
        push ecx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 21 A8 FB FF: call 0x1007e8d0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa8
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c40b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0c8h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebp + 14ch], eax
        ; Exact mapped bytes E8 56 B0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14ch]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov esi, dword ptr [ebp + 14ch]
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 C7 46 26 4A 00: mov word ptr [esi + 0x26], 0x4a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x4a
        __asm _emit 0x00
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100c40ef
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 B1 AE 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100c40fc
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 04 AE 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        push 6ch
        ; Exact mapped bytes E8 9D 86 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x86
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 50: je 0x100c4163
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 35 0C 58 1C 10: mov esi, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 160h]
        cmp ecx, 3
        ; Exact mapped bytes 7E 12: jle 0x100c4136
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [esi + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x100c4136
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [edx + 0c0h]
        ; Exact mapped bytes EB 02: jmp 0x100c4138
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        cmp ecx, 2
        ; Exact mapped bytes 7E 12: jle 0x100c414f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [esi + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x100c414f
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 80h
        ; Exact mapped bytes EB 02: jmp 0x100c4151
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push ebx
        push 0ffffff38h
        push edi
        push edx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 9F A2 FB FF: call 0x1007e400
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c4165
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 190h], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        push 60h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 23 86 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x86
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 2E: je 0x100c41bd
        __asm _emit 0x74
        __asm _emit 0x2e
        push 40h
        push ebx
        push ebx
        push ebx
        push 400h
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 8F 3F F7 FF: call 0x10038130
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x3f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [esi], 10175c6ch
        mov dword ptr [esi + 50h], 400h
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        ; Exact mapped bytes EB 02: jmp 0x100c41bf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebp + 104h], esi
        mov ecx, dword ptr [esi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 46 26 54 00: mov word ptr [esi + 0x26], 0x54
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x54
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100c41dd
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 C3 AD 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100c41ea
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 16 AD 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 AF 85 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 6D: je 0x100c4270
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes A1 0C 58 1C 10: mov eax, dword ptr [0x101c580c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100c421e
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100c421e
        __asm _emit 0x74
        __asm _emit 0x04
        mov edi, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100c4220
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 104h]
        push 40h
        push ebx
        push ebx
        push ebx
        push 400h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 78 A7 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 2D: je 0x100c4272
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [edi + 10h]
        add edi, 18h
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
        ; Exact mapped bytes EB 02: jmp 0x100c4272
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebp + 108h], esi
        ; Exact mapped bytes E8 1C 85 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 36: je 0x100c42ca
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 20h
        ; Exact mapped bytes 7E 12: jle 0x100c42b5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100c42b5
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 800h
        ; Exact mapped bytes EB 02: jmp 0x100c42b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        push ebx
        push 36ah
        push ecx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 D8 54 04 00: call 0x101097a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c42cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 10ch], eax
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 10ch]
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 C7 46 26 55 00: mov word ptr [esi + 0x26], 0x55
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x55
        __asm _emit 0x00
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100c42f6
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 AA AC 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100c4303
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 FD AB 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 96 84 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        mov ebx, 9
        ; Exact mapped bytes 74 34: je 0x100c4353
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100c433f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c433f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 240h
        ; Exact mapped bytes EB 02: jmp 0x100c4341
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0
        push 36ah
        push ecx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 DF B1 F8 FF: call 0x1004f530
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c4355
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, 0fff0h
        mov dword ptr [ebp + 110h], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov esi, dword ptr [ebp + 110h]
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 C7 46 26 55 00: mov word ptr [esi + 0x26], 0x55
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x55
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c4382
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 1E AC 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c438f
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 71 AB 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 0A 84 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 74 3D: je 0x100c43e2
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1dh
        ; Exact mapped bytes 7E 12: jle 0x100c43c6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c43c6
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 740h]
        ; Exact mapped bytes EB 02: jmp 0x100c43c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [ebp + 104h]
        push 40h
        push 0
        push 400h
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C0 53 04 00: call 0x101097a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c43e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 19ch], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        push 58h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 A6 83 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 3D: je 0x100c4447
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 12: jle 0x100c442b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c442b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 780h
        ; Exact mapped bytes EB 02: jmp 0x100c442d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ebp + 104h]
        push 40h
        push 0
        push 400h
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 5B 53 04 00: call 0x101097a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c4449
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 1a0h], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        push 58h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 41 83 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 3D: je 0x100c44ac
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1fh
        ; Exact mapped bytes 7E 12: jle 0x100c4490
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c4490
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 7c0h
        ; Exact mapped bytes EB 02: jmp 0x100c4492
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        push 0
        push 400h
        push ecx
        mov ecx, dword ptr [ebp + 104h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 F6 52 04 00: call 0x101097a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c44ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 1a4h], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        push 0a0h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 D9 82 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 45: je 0x100c451c
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x100c44f8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c44f8
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x100c44fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 0
        push 36ah
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A6 2D F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2d
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c451e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 1a8h], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov esi, dword ptr [ebp + 1a8h]
        mov ebx, 55h
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 89 5E 26: mov word ptr [esi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c4549
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 57 AA 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c4556
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 AA A9 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 40 82 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 45: je 0x100c45b5
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x100c4591
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c4591
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 180h]
        ; Exact mapped bytes EB 02: jmp 0x100c4593
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 0
        push 36ah
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 0D 2D F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x2d
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c45b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 1ach], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov esi, dword ptr [ebp + 1ach]
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 89 5E 26: mov word ptr [esi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c45dd
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 C3 A9 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c45ea
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 16 A9 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 AC 81 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 45: je 0x100c4649
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100c4625
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c4625
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x100c4627
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 0
        push 36ah
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 79 2C F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c464b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 1b0h], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov esi, dword ptr [ebp + 1b0h]
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 89 5E 26: mov word ptr [esi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c4671
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 2F A9 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c467e
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 82 A8 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 40000000h
        mov ebx, 108h
        mov dword ptr [ebp + 98h], 0
        mov dword ptr [ebp + 88h], eax
        mov dword ptr [ebp + 84h], eax
        mov dword ptr [esp + 30h], 0f3h
        mov dword ptr [esp + 34h], 3cch
        mov dword ptr [esp + 38h], ebx
        lea esi, [ebp + 0c4h]
        ; Exact mapped bytes EB 04: jmp 0x100c46be
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 38h]
        push 0a0h
        ; Exact mapped bytes E8 D8 80 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 47: je 0x100c471f
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 24h
        ; Exact mapped bytes 7E 12: jle 0x100c46f9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c46f9
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 900h]
        ; Exact mapped bytes EB 02: jmp 0x100c46fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 3e8h
        lea ecx, [ebx - 0bh]
        push 5
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A3 2B F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2b
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c4721
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi - 20h], eax
        ; Exact mapped bytes E8 2B AA 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, dword ptr [esi - 20h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 4B 00: mov word ptr [edi + 0x26], 0x4b
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x4b
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c474b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 55 A8 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c4758
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A8 A7 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 3E 80 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 2C: je 0x100c479e
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100c478c
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x100c478e
        __asm _emit 0x75
        __asm _emit 0x02
        xor edx, edx
        push 19h
        push ebx
        push 4
        push edx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 F4 AA 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c47a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 AD A9 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 100h
        ; Exact mapped bytes E8 61 A9 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov edi, dword ptr [esi]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 D0 07: mov word ptr [edi + 0x26], 0x7d0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x07
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c47e4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BC A7 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c47f1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0F A7 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, dword ptr [esi]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 4B 00: mov word ptr [edi + 0x26], 0x4b
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x4b
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c4806
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9A A7 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c4813
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 ED A6 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 83 7F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 41: je 0x100c486e
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 20: jle 0x100c485c
        __asm _emit 0x7e
        __asm _emit 0x20
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x100c485c
        __asm _emit 0x74
        __asm _emit 0x16
        push 2ch
        lea edx, [ecx + 0b80h]
        push ebx
        push 4
        push edx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 36 AA 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x100c4870
        __asm _emit 0xeb
        __asm _emit 0x14
        push 2ch
        xor edx, edx
        push ebx
        push 4
        push edx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 24 AA 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c4870
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 20h], eax
        ; Exact mapped bytes E8 DC A8 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20h]
        push 100h
        ; Exact mapped bytes E8 8F A8 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20h]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi + 20h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov edi, dword ptr [esi + 20h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 D0 07: mov word ptr [edi + 0x26], 0x7d0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x07
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c48b9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E7 A6 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c48c6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3A A6 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, dword ptr [esi + 20h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 4B 00: mov word ptr [edi + 0x26], 0x4b
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x4b
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c48dc
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C4 A6 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c48e9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 17 A6 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        push 12ch
        ; Exact mapped bytes E8 AD 7E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 15: je 0x100c4918
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 35h
        push ebx
        push 0
        push ebp
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 DC 09 FF FF: call 0x100b52f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100c491a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 8ch], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 1A 04: mov word ptr [edi + 0x26], 0x41a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x1a
        __asm _emit 0x04
        ; Exact mapped bytes 74 06: je 0x100c4938
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 68 A6 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c4945
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BB A5 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edi, dword ptr [esi + 8ch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 4B 00: mov word ptr [edi + 0x26], 0x4b
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x4b
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c496a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 36 A6 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c4977
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 89 A5 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 22 7E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 74 7A: je 0x100c4a0a
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 0C 58 1C 10: mov eax, dword ptr [0x101c580c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 30h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x100c49b8
        __asm _emit 0x7e
        __asm _emit 0x17
        test ecx, ecx
        ; Exact mapped bytes 7C 13: jl 0x100c49b8
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100c49b8
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 34h]
        mov ebx, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100c49ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 3e9h
        push 0
        push 0
        push 0
        push 0fch
        push ebp
        mov ecx, edi
        ; Exact mapped bytes E8 DE 9F 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100c4a0c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100c4a0c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0f0h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 4B 00: mov word ptr [edi + 0x26], 0x4b
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x4b
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100c4a2a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 76 A5 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c4a37
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C9 A4 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov edi, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        add eax, 50h
        add esi, 4
        add edi, 14h
        add edx, 5
        cmp eax, 388h
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], edi
        mov dword ptr [esp + 30h], edx
        ; Exact mapped bytes 0F 8C 54 FC FF FF: jl 0x100c46ba
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 30 7D 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 42: je 0x100c4ac2
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 12: jle 0x100c4aa1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100c4aa1
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 500h
        ; Exact mapped bytes EB 02: jmp 0x100c4aa3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 0
        push 0
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 00 28 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c4ac4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebp + 120h], eax
        ; Exact mapped bytes E8 C7 7C 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 42: je 0x100c4b2b
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 12: jle 0x100c4b0a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c4b0a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 500h
        ; Exact mapped bytes EB 02: jmp 0x100c4b0c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 0
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 97 27 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x27
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c4b2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [ebp + 124h], eax
        mov esi, 0ch
        mov ebx, 300h
        lea edi, [ebp + 128h]
        push 0a0h
        ; Exact mapped bytes E8 4E 7C 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 41: je 0x100c4ba3
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], esi
        ; Exact mapped bytes 7E 12: jle 0x100c4b82
        __asm _emit 0x7e
        __asm _emit 0x12
        test esi, esi
        ; Exact mapped bytes 7C 0E: jl 0x100c4b82
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100c4b82
        __asm _emit 0x74
        __asm _emit 0x04
        add edx, ebx
        ; Exact mapped bytes EB 02: jmp 0x100c4b84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 0
        push 0
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 1F 27 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x27
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c4ba5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        add ebx, 40h
        add edi, 4
        inc esi
        mov byte ptr [esp + 1ch], 0
        lea edx, [esi - 0ch]
        cmp edx, 8
        ; Exact mapped bytes 7C 87: jl 0x100c4b48
        __asm _emit 0x7c
        __asm _emit 0x87
        push 5ch
        ; Exact mapped bytes E8 D8 7B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 0E: je 0x100c4be6
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        push 0
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 3C 10 F5 FF: call 0x10015c20
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c4be8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 148h], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        push 6ch
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 A0 7B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 37: je 0x100c4c47
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 0C 58 1C 10: mov ecx, dword ptr [0x101c580c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 12: jle 0x100c4c31
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c4c31
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 700h
        ; Exact mapped bytes EB 02: jmp 0x100c4c33
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 4bh
        push 5
        push 381h
        push ecx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 1B E4 03 00: call 0x10103060
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c4c49
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebp + 198h], eax
        ; Exact mapped bytes E8 00 A5 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 39 7B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 32: je 0x100c4ca9
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 2
        ; Exact mapped bytes 7E 17: jle 0x100c4c9d
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x100c4c9d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 8]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 15 E9 03 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x100c4cab
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 09 E9 03 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c4cab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ebp + 0a0h], eax
        pop edi
        ; Exact mapped bytes 66 C7 85 9C 00 00 00 00 00: mov word ptr [ebp + 0x9c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebp
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
