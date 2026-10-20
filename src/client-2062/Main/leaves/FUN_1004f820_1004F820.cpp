// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004F820 .. +0xEB4 bytes.
extern "C" __declspec(naked) void FUN_1004f820_1004F820() {
    __asm {
        push -1
        push 1016eba3h
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
        sub esp, 14h
        mov eax, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 30h]
        push ebx
        mov ebx, dword ptr [esp + 2ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 44h]
        mov edi, dword ptr [esp + 3ch]
        push eax
        mov eax, dword ptr [esp + 38h]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 30h], esi
        ; Exact mapped bytes E8 49 F1 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        xor ebp, ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        mov dword ptr [esi], 10175bd4h
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], edi
        lea edi, [esi + 0c4h]
        mov dword ptr [esi + 0b0h], ebp
        push 11dh
        mov dword ptr [edi], ebp
        mov dword ptr [esi + 12ch], ebp
        mov dword ptr [esi + 9a4h], ebp
        mov ebx, 5
        mov dword ptr [esi + 0a0h], 15eh
        push 0fh
        mov dword ptr [esi + 0a4h], 0b4h
        push ebx
        mov dword ptr [esi + 0a8h], 1b1h
        push ebx
        mov ecx, esi
        mov dword ptr [esp + 3ch], ebp
        mov dword ptr [esi + 0ach], 94h
        ; Exact mapped bytes E8 F6 33 00 00: call 0x10052ce0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 0d0h], ebx
        mov ecx, dword ptr [esi + 0a8h]
        mov eax, 66666667h
        imul ecx
        sar edx, 1
        mov ecx, edx
        mov eax, 66666667h
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 80h]
        add ecx, edx
        mov dword ptr [esi + 80h], ecx
        mov ecx, dword ptr [esi + 0ach]
        imul ecx
        sar edx, 1
        mov ecx, edx
        mov eax, edx
        shr ecx, 1fh
        add eax, ecx
        mov ecx, dword ptr [esi + 84h]
        cdq
        sub eax, edx
        sar eax, 1
        add ecx, eax
        mov dword ptr [esi + 84h], ecx
        mov edx, dword ptr [esi + 0d0h]
        mov eax, dword ptr [esi + 0cch]
        push edx
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 65 34 00 00: call 0x10052dc0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 38 CE 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xce
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        mov ecx, 19h
        xor eax, eax
        mov dword ptr [esi + 0c8h], edi
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        add esp, 4
        mov ecx, esi
        mov dword ptr [esi + 454h], ebp
        ; Exact mapped bytes E8 47 30 00 00: call 0x100529d0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0e4h], 1
        mov ecx, dword ptr [esi + 0b8h]
        mov dword ptr [esi + 0dch], ecx
        mov edx, dword ptr [esi + 0bch]
        mov dword ptr [esi + 0e0h], edx
        ; Exact mapped bytes 66 C7 86 AA 09 00 00 15 00: mov word ptr [esi + 0x9aa], 0x15
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 89 AE A8 09 00 00: mov word ptr [esi + 0x9a8], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 AA 09 00 00: mov ax, word ptr [esi + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 110h], ebp
        mov dword ptr [esi + 0e8h], eax
        mov dword ptr [esi + 458h], 64h
        mov dword ptr [esi + 45ch], ebp
        mov ebx, 0ffffff68h
        mov dword ptr [esp + 20h], 0fffffcf8h
        lea eax, [esi + 2a0h]
        mov dword ptr [esp + 48h], 5
        mov edx, dword ptr [esp + 20h]
        mov ecx, ebx
        mov edi, 5
        mov dword ptr [eax - 4], ecx
        mov dword ptr [eax], edx
        add eax, 8
        sub ecx, 15fh
        add edx, 0b4h
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1004fa06
        __asm _emit 0x75
        __asm _emit 0xe9
        mov edx, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 48h]
        sub ebx, 1b0h
        sub edx, 91h
        dec ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 48h], ecx
        ; Exact mapped bytes 75 BF: jne 0x1004f9fb
        __asm _emit 0x75
        __asm _emit 0xbf
        push 84h
        ; Exact mapped bytes E8 5A CD 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcd
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 48h], eax
        cmp eax, ebp
        mov byte ptr [esp + 2ch], 1
        ; Exact mapped bytes 74 1C: je 0x1004fa72
        __asm _emit 0x74
        __asm _emit 0x1c
        push 780h
        push 0fffffda8h
        push 4b0h
        push ebp
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 20 38 FD FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1004fa74
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 990h], eax
        ; Exact mapped bytes E8 1A CD 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xcd
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 48h], edi
        cmp edi, ebp
        mov byte ptr [esp + 2ch], 2
        ; Exact mapped bytes 74 2A: je 0x1004fac2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 990h]
        push 76ch
        push ebp
        push ebp
        push 0fffffda8h
        push 4b0h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 F9 EE 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes EB 02: jmp 0x1004fac4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 990h]
        mov dword ptr [esi + 994h], edi
        push 101h
        mov byte ptr [esp + 30h], 0
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov ecx, dword ptr [esi + 990h]
        ; Exact mapped bytes E8 75 F6 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 990h]
        mov ebx, 7fffh
        push 0fffffeffh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 994h]
        ; Exact mapped bytes E8 56 F6 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 994h]
        mov ecx, esi
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 65 3F 00 00: call 0x10053a80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [esi + 988h], 5
        mov dword ptr [esi + 12ch], ebp
        mov dword ptr [esi + 208h], ebp
        mov dword ptr [esi + 20ch], ebp
        mov dword ptr [esi + 278h], ecx
        mov dword ptr [esi + 27ch], ecx
        lea edi, [esi + 214h]
        mov ecx, 19h
        xor eax, eax
        mov dword ptr [esi + 46ch], ebp
        mov dword ptr [esi + 470h], ebp
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push ebp
        mov ecx, esi
        mov dword ptr [esi + 1f8h], ebp
        mov dword ptr [esi + 1fch], ebp
        mov dword ptr [esi + 204h], ebp
        mov dword ptr [esi + 0a68h], 1
        ; Exact mapped bytes E8 9C F5 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0x0a
        __asm _emit 0x00
        push 14h
        ; Exact mapped bytes E8 15 CC 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 48h], eax
        cmp eax, ebp
        mov byte ptr [esp + 2ch], 3
        ; Exact mapped bytes 74 09: je 0x1004fba4
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 EE BE FD FF: call 0x1002ba90
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1004fba6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 10h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 44ch], eax
        ; Exact mapped bytes E8 E8 CB 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x1004fbd0
        __asm _emit 0x74
        __asm _emit 0x11
        mov dword ptr [eax], 10175bd0h
        mov dword ptr [eax + 8], ebp
        mov dword ptr [eax + 4], ebp
        mov dword ptr [eax + 0ch], ebp
        ; Exact mapped bytes EB 02: jmp 0x1004fbd2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 184h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 450h], eax
        ; Exact mapped bytes E8 B9 CB 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 48h], eax
        cmp eax, ebp
        mov byte ptr [esp + 2ch], 5
        ; Exact mapped bytes 74 3C: je 0x1004fc33
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esp + 3ch]
        push ebp
        push ebp
        push 16dc16h
        lea edx, [ecx + 0c8h]
        add ecx, 96h
        push edx
        mov edx, dword ptr [esp + 48h]
        lea edi, [edx + 320h]
        add edx, 32h
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D A8 56 1C 10: mov ecx, dword ptr [0x101c56a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D1 89 FC FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1004fc35
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 444h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebp
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes 66 C7 47 26 E8 03: mov word ptr [edi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x1004fc53
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4D F3 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004fc60
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A0 F2 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 444h]
        push 3ch
        ; Exact mapped bytes E8 73 8C FC FF: call 0x100188e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 2C CB 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 48h], edi
        cmp edi, ebp
        mov byte ptr [esp + 2ch], 6
        ; Exact mapped bytes 74 7E: je 0x1004fd04
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 950h
        ; Exact mapped bytes 7E 12: jle 0x1004fca9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x1004fca9
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 2540h]
        ; Exact mapped bytes EB 02: jmp 0x1004fcab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        push 40h
        push ebp
        add edx, 14h
        push ebp
        add eax, 39h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E9 EC 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x1004fcfd
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebx]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ebx, 7fffh
        ; Exact mapped bytes EB 02: jmp 0x1004fd06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 118h], edi
        ; Exact mapped bytes E8 43 F4 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov edi, dword ptr [esi + 118h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 30 75: mov word ptr [edi + 0x26], 0x7530
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x30
        __asm _emit 0x75
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004fd40
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 60 F2 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004fd4d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B3 F1 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf1
        __asm _emit 0x0a
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 4C CA 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xca
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 48h], edi
        cmp edi, ebp
        mov byte ptr [esp + 2ch], 7
        ; Exact mapped bytes 74 7F: je 0x1004fde5
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 94fh
        ; Exact mapped bytes 7E 12: jle 0x1004fd89
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x1004fd89
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 253ch]
        ; Exact mapped bytes EB 02: jmp 0x1004fd8b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esi + 118h]
        push 40h
        push ebp
        add ecx, 14h
        push ebp
        add edx, 39h
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 03 EC 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x1004fde7
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
        ; Exact mapped bytes EB 02: jmp 0x1004fde7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebx, dword ptr [esp + 3ch]
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 114h], edi
        ; Exact mapped bytes E8 5E F3 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov edi, dword ptr [esi + 114h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 30 75: mov word ptr [edi + 0x26], 0x7530
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x30
        __asm _emit 0x75
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004fe27
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 79 F1 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004fe34
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CC F0 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf0
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 62 C9 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc9
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 2ch], 8
        ; Exact mapped bytes 74 3C: je 0x1004fe8a
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 12: jle 0x1004fe6f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1004fe6f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 700h
        ; Exact mapped bytes EB 02: jmp 0x1004fe71
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 14h]
        push edx
        mov edx, dword ptr [esp + 3ch]
        add edx, -0fh
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 08 F4 0A 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1004fe8c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 120h], eax
        ; Exact mapped bytes E8 BD F2 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 120h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov edi, dword ptr [esi + 120h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 30 75: mov word ptr [edi + 0x26], 0x7530
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x30
        __asm _emit 0x75
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004fec8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D8 F0 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004fed5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2B F0 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf0
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 C1 C8 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc8
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 2ch], 9
        ; Exact mapped bytes 74 42: je 0x1004ff31
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1bh
        ; Exact mapped bytes 7E 12: jle 0x1004ff10
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1004ff10
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 6c0h]
        ; Exact mapped bytes EB 02: jmp 0x1004ff12
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 14h]
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        add ecx, -0fh
        push ecx
        push 4
        push edx
        mov edx, dword ptr [esi + 120h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 61 F3 0A 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1004ff33
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 11ch], eax
        ; Exact mapped bytes E8 16 F2 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 11ch]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 40 C8 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc8
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 2ch], 0ah
        ; Exact mapped bytes 74 3F: je 0x1004ffaf
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cdh
        ; Exact mapped bytes 7E 12: jle 0x1004ff94
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1004ff94
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3340h
        ; Exact mapped bytes EB 02: jmp 0x1004ff96
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 30h]
        push edx
        mov edx, dword ptr [esp + 3ch]
        add edx, 9
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E3 F2 0A 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1004ffb1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 128h], eax
        ; Exact mapped bytes E8 98 F1 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov edi, dword ptr [esi + 128h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 30 75: mov word ptr [edi + 0x26], 0x7530
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x30
        __asm _emit 0x75
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004ffed
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B3 EF 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1004fffa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 06 EF 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 9C C7 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc7
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 2ch], 0bh
        ; Exact mapped bytes 74 45: je 0x10050059
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cch
        ; Exact mapped bytes 7E 12: jle 0x10050038
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10050038
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 3300h]
        ; Exact mapped bytes EB 02: jmp 0x1005003a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 38h]
        add ebx, 30h
        add ecx, 9
        push ebx
        push ecx
        push 8
        push edx
        mov edx, dword ptr [esi + 128h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 39 F2 0A 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1005005b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 124h], eax
        ; Exact mapped bytes E8 EE F0 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 124h]
        xor ebx, ebx
        mov dword ptr [esp + 3ch], ebx
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        lea eax, [esi + 460h]
        mov dword ptr [esp + 38h], eax
        mov eax, 0fffffba0h
        sub eax, esi
        mov dword ptr [esp + 48h], eax
        ; Exact mapped bytes EB 04: jmp 0x1005009f
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 3ch]
        push 54h
        ; Exact mapped bytes E8 FA C6 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc6
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebp
        mov byte ptr [esp + 2ch], 0ch
        ; Exact mapped bytes 74 77: je 0x1005012f
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 CC 57 1C 10: mov eax, dword ptr [0x101c57cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 1D: jle 0x100500e2
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp ebx, ebp
        ; Exact mapped bytes 7C 19: jl 0x100500e2
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x100500e2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [esp + 48h]
        mov edx, dword ptr [esp + 38h]
        add eax, ecx
        mov ebx, dword ptr [eax + edx]
        ; Exact mapped bytes EB 02: jmp 0x100500e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 40h
        push ebp
        push ebp
        push 66h
        push 0bfh
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B9 E8 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x10050131
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
        ; Exact mapped bytes EB 02: jmp 0x10050131
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esp + 38h]
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [edx], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebp
        ; Exact mapped bytes 66 C7 47 26 18 79: mov word ptr [edi + 0x26], 0x7918
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x18
        __asm _emit 0x79
        ; Exact mapped bytes 74 06: je 0x1005014f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 51 EE 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1005015c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A4 ED 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xed
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 38h]
        mov eax, dword ptr [ecx]
        add ecx, 4
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esp + 3ch]
        inc eax
        cmp eax, 2
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 8C 1A FF FF FF: jl 0x1005009b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 460h]
        push 0fffffeffh
        ; Exact mapped bytes E8 CF EF 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 464h]
        push 101h
        ; Exact mapped bytes E8 BF EF 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0x00
        xor eax, eax
        lea edx, [esi + 5f4h]
        lea ebp, [esi + 534h]
        mov dword ptr [esi + 468h], eax
        mov dword ptr [esp + 44h], eax
        mov ebx, 1019b04ah
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 40h], edx
        mov eax, dword ptr [ebx - 42h]
        test eax, eax
        ; Exact mapped bytes 0F 84 1C 04 00 00: je 0x100505f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 C1 C5 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc5
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 2ch], 0dh
        ; Exact mapped bytes 74 50: je 0x1005023f
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 48 58 1C 10: mov ecx, dword ptr [0x101c5848]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 8B 13: mov dx, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x13
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x10050217
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x10050217
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edi, dword ptr [ecx + 190h]
        test edi, edi
        ; Exact mapped bytes 74 07: je 0x10050217
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, edi
        ; Exact mapped bytes EB 02: jmp 0x10050219
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [ebx + 0eh]
        push 0e10h
        push ecx
        mov ecx, dword ptr [ebx + 0ah]
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
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 83 70 FC FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10050241
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes E8 50 C5 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 2ch], 0eh
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100502ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 48 58 1C 10: mov ecx, dword ptr [0x101c5848]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 43 02: mov ax, word ptr [ebx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x02
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x10050291
        __asm _emit 0x7e
        __asm _emit 0x17
        test eax, eax
        ; Exact mapped bytes 7C 13: jl 0x10050291
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x10050291
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes EB 08: jmp 0x10050299
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 38h], 0
        mov eax, dword ptr [ebx + 0eh]
        mov ecx, dword ptr [ebx + 0ah]
        push 0e10h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FE E6 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x100502f0
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100502f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [ebp], edi
        ; Exact mapped bytes E8 A1 C4 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 2ch], 0fh
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x100503a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 48 58 1C 10: mov ecx, dword ptr [0x101c5848]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 43 04: mov ax, word ptr [ebx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x04
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 19: jle 0x10050342
        __asm _emit 0x7e
        __asm _emit 0x19
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x10050342
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x10050342
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, ecx
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes EB 08: jmp 0x1005034a
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 38h], 0
        mov eax, dword ptr [ebx + 16h]
        mov ecx, dword ptr [ebx + 12h]
        push 0e10h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4D E6 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [edi], 101751f8h
        test eax, eax
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x100503a8
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100503a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [ebp + 40h], edi
        ; Exact mapped bytes E8 E9 C3 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 2ch], 10h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x10050455
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 48 58 1C 10: mov ecx, dword ptr [0x101c5848]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 43 06: mov ax, word ptr [ebx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x06
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x100503f8
        __asm _emit 0x7e
        __asm _emit 0x17
        test eax, eax
        ; Exact mapped bytes 7C 13: jl 0x100503f8
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x100503f8
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ecx + eax*4]
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes EB 08: jmp 0x10050400
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 38h], 0
        mov eax, dword ptr [ebx + 16h]
        mov ecx, dword ptr [ebx + 12h]
        push 0e10h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 97 E5 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x10050457
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10050457
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp + 80h], edi
        mov ecx, dword ptr [ebp - 40h]
        push 101h
        mov byte ptr [esp + 30h], 0
        ; Exact mapped bytes E8 F1 EC 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov edi, 0fff0h
        push 0fffffeffh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 D8 EC 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        push 101h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes E8 C4 EC 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 40h]
        push 0fffffeffh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 80h]
        ; Exact mapped bytes E8 AD EC 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 80h]
        mov eax, dword ptr [esp + 40h]
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 66 21 7D 24: and word ptr [ebp + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7d
        __asm _emit 0x24
        xor ebp, ebp
        mov dword ptr [esp + 3ch], ebp
        mov dword ptr [esp + 38h], 0
        mov dword ptr [esp + 48h], eax
        ; Exact mapped bytes EB 04: jmp 0x100504dd
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 3ch]
        push 54h
        ; Exact mapped bytes E8 BC C2 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc2
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 1ch], edi
        test edi, edi
        mov byte ptr [esp + 2ch], 11h
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x1005057a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 38h]
        ; Exact mapped bytes A1 48 58 1C 10: mov eax, dword ptr [0x101c5848]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ebp, [ecx + ebp*2]
        mov ecx, dword ptr [eax + 164h]
        cmp ecx, ebp
        ; Exact mapped bytes 7E 13: jle 0x10050523
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x10050523
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10050523
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebp*4]
        ; Exact mapped bytes EB 02: jmp 0x10050525
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [ebx + 0eh]
        mov ecx, dword ptr [ebx + 0ah]
        push 0e10h
        sub eax, 8
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6F E4 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1005057c
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x1005057c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 48h]
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [ecx], edi
        ; Exact mapped bytes 66 81 67 24 F0 FF: and word ptr [edi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        inc eax
        add ecx, 4
        cmp eax, 2
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 48h], ecx
        ; Exact mapped bytes 0F 8C 33 FF FF FF: jl 0x100504d9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 34h]
        push 0fffffeffh
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 AA EB 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xeb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 44h]
        add edx, ebp
        push 101h
        mov ecx, dword ptr [esi + edx*8 + 5f8h]
        ; Exact mapped bytes E8 8F EB 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xeb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 48h]
        inc ebp
        cmp ebp, 3
        mov dword ptr [esp + 3ch], ebp
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 8C E4 FE FF FF: jl 0x100504cb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes EB 1A: jmp 0x1005060b
        __asm _emit 0xeb
        __asm _emit 0x1a
        xor eax, eax
        mov ecx, 6
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp], eax
        mov dword ptr [ebp + 40h], eax
        mov edi, edx
        mov dword ptr [ebp + 80h], eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 40h]
        add ebx, 0cb8h
        add ebp, 4
        add ecx, 3
        add eax, 18h
        add edx, 18h
        cmp ebx, 101a7bcah
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 44h], ecx
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 0F 8C 89 FB FF FF: jl 0x100501ca
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x89
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 26h
        ; Exact mapped bytes 7E 14: jle 0x10050663
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [eax + 194h]
        xor ecx, ecx
        cmp eax, ecx
        ; Exact mapped bytes 74 0A: je 0x10050665
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 98h]
        ; Exact mapped bytes EB 04: jmp 0x10050667
        __asm _emit 0xeb
        __asm _emit 0x04
        xor ecx, ecx
        xor eax, eax
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e5ffh
        mov dword ptr [esi + 0a64h], ecx
        or ah, 5
        mov dword ptr [esi + 0a7ch], ecx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A1 E4 7D 1A 10: mov eax, dword ptr [0x101a7de4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 75 2B: jne 0x100506ba
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes A1 08 58 1C 10: mov eax, dword ptr [0x101c5808]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 74 22: je 0x100506ba
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 7E 12: jle 0x100506b3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        cmp eax, ecx
        ; Exact mapped bytes 74 08: je 0x100506b3
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 0A: jmp 0x100506bd
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 03: jmp 0x100506bd
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 60h], ecx
        mov ecx, dword ptr [esp + 24h]
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
        add esp, 20h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
