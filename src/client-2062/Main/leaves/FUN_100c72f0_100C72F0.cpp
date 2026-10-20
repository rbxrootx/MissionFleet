// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C72F0 .. +0x768 bytes.
extern "C" __declspec(naked) void FUN_100c72f0_100C72F0() {
    __asm {
        push -1
        push 1017295ah
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
        mov eax, dword ptr [esp + 14h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        push edi
        mov edi, dword ptr [esp + 2ch]
        xor ebx, ebx
        push 40h
        push ebx
        push ebx
        push edi
        mov esi, ecx
        push ebp
        push eax
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 86 76 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10176340h
        ; Exact mapped bytes E8 51 54 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebx
        xor ecx, ecx
        mov byte ptr [esp + 1ch], 1
        cmp ebx, ecx
        ; Exact mapped bytes 74 72: je 0x100c73d5
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 39h
        ; Exact mapped bytes 7E 16: jle 0x100c7387
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 0C: je 0x100c7387
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [eax + 0e4h]
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes EB 04: jmp 0x100c738b
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 2ch], ecx
        push 40h
        push ecx
        push ecx
        push edi
        push ebp
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 17 76 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [ebx], 1017523ch
        test eax, eax
        mov dword ptr [ebx + 50h], eax
        ; Exact mapped bytes 74 29: je 0x100c73d3
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ebx + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebx + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebx + 14h]
        mov dword ptr [ebx + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, ebx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes E8 79 7D 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 A9 53 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 78: je 0x100c7481
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 38h
        ; Exact mapped bytes 7E 16: jle 0x100c742d
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100c742d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [esp + 2ch], ecx
        ; Exact mapped bytes EB 08: jmp 0x100c7435
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 2ch], 0
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 6B 75 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [ebx], 1017523ch
        test eax, eax
        mov dword ptr [ebx + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x100c7483
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ebx + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebx + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [ebx + 14h]
        mov dword ptr [ebx + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100c7483
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], ebx
        ; Exact mapped bytes E8 0E 53 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 2ch], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 4B: je 0x100c74ef
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0
        lea ecx, [edi + 70h]
        push 0ffffffh
        lea edx, [ebp + 1a6h]
        push ecx
        lea eax, [edi + 60h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 7ah]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 B1 E6 F4 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe6
        __asm _emit 0xf4
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 4
        mov dword ptr [ebx], 10175338h
        ; Exact mapped bytes E8 BC 52 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebx + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100c74f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], ebx
        ; Exact mapped bytes E8 9D 52 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 4C: je 0x100c755f
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 30 58 1C 10: mov ecx, dword ptr [0x101c5830]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 12: jle 0x100c7534
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c7534
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 340h
        ; Exact mapped bytes EB 02: jmp 0x100c7536
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 1b8h]
        push 40h
        push edx
        lea edx, [ebp + 183h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 63 FD F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c7561
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 2D 52 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 4C: je 0x100c75cf
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 30 58 1C 10: mov ecx, dword ptr [0x101c5830]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x100c75a4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c75a4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x100c75a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 1b8h]
        push 40h
        push edx
        lea edx, [ebp + 1ceh]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F3 FC F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c75d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 BD 51 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 4C: je 0x100c763f
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 30 58 1C 10: mov ecx, dword ptr [0x101c5830]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x100c7614
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c7614
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x100c7616
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 89h]
        push 40h
        push edx
        lea edx, [ebp + 19fh]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 83 FC F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c7641
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0a0h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 47 51 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 4C: je 0x100c76b5
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 30 58 1C 10: mov ecx, dword ptr [0x101c5830]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 10h
        ; Exact mapped bytes 7E 12: jle 0x100c768a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c768a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 400h
        ; Exact mapped bytes EB 02: jmp 0x100c768c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 89h]
        push 40h
        push edx
        lea edx, [ebp + 1d1h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 0D FC F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c76b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 DA 50 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebx
        xor ecx, ecx
        mov byte ptr [esp + 1ch], 9
        cmp ebx, ecx
        ; Exact mapped bytes 74 7B: je 0x100c7755
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 48h
        ; Exact mapped bytes 7E 16: jle 0x100c76fe
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 0C: je 0x100c76fe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 120h]
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes EB 04: jmp 0x100c7702
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 2ch], ecx
        push 40h
        push ecx
        push ecx
        lea ecx, [edi + 0b2h]
        lea edx, [ebp + 2fh]
        push ecx
        push edx
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 97 72 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [ebx], 1017523ch
        test eax, eax
        mov dword ptr [ebx + 50h], eax
        ; Exact mapped bytes 74 29: je 0x100c7753
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ebx + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebx + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebx + 14h]
        mov dword ptr [ebx + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, ebx
        push 0c8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], ecx
        ; Exact mapped bytes E8 B6 79 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        push 90h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 08 50 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 33: je 0x100c77db
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        lea ecx, [edi + 19eh]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 104h]
        lea ecx, [edi + 0b6h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 36h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A7 C3 03 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c77dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ebx, 0fffdh
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        push 90h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 A8 4F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4f
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 36: je 0x100c783e
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        lea edx, [edi + 19eh]
        push 0ffffffh
        push edx
        lea ecx, [ebp + 188h]
        lea edx, [edi + 0b6h]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 104h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 44 C3 03 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c7840
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        push 90h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 47 4F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4f
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 36: je 0x100c789f
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        lea ecx, [edi + 19eh]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 1cch]
        lea ecx, [edi + 0b6h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 19ah]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E3 C2 03 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c78a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        push 90h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 E6 4E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 36: je 0x100c7900
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        lea edx, [edi + 19eh]
        push 0ffffffh
        push edx
        lea ecx, [ebp + 1e5h]
        lea edx, [edi + 0b6h]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 1d6h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 82 C2 03 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c7902
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        push 90h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 85 4E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 36: je 0x100c7961
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        lea ecx, [edi + 19eh]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 212h]
        lea ecx, [edi + 0b6h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 1f8h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 21 C2 03 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c7963
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 27 4E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebx
        xor ecx, ecx
        mov byte ptr [esp + 1ch], 0fh
        cmp ebx, ecx
        ; Exact mapped bytes 74 7B: je 0x100c7a08
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 47h
        ; Exact mapped bytes 7E 16: jle 0x100c79b1
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 0C: je 0x100c79b1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [eax + 11ch]
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes EB 04: jmp 0x100c79b5
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 2ch], ecx
        push 40h
        push ecx
        add edi, 0b2h
        push ecx
        add ebp, 2fh
        push edi
        push ebp
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 E4 6F 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [ebx], 1017523ch
        test eax, eax
        mov dword ptr [ebx + 50h], eax
        ; Exact mapped bytes 74 29: je 0x100c7a06
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ebx + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebx + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebx + 14h]
        mov dword ptr [ebx + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, ebx
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 94h], ecx
        ; Exact mapped bytes E8 43 77 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esp + 14h]
        pop edi
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, esi
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
