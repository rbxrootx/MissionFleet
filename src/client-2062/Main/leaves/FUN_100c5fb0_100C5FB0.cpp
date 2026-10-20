// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C5FB0 .. +0x359 bytes.
extern "C" __declspec(naked) void FUN_100c5fb0_100C5FB0() {
    __asm {
        push -1
        push 1017279ah
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
        ; Exact mapped bytes E8 5B 15 F8 FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xff
        push 54h
        mov dword ptr [esp + 20h], 0
        mov dword ptr [esi], 10176308h
        ; Exact mapped bytes E8 96 67 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 75: je 0x100c6091
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 25h
        ; Exact mapped bytes 7E 12: jle 0x100c603c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100c603c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 94h]
        ; Exact mapped bytes EB 02: jmp 0x100c603e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5E 89 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100c6089
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100c6093
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], ecx
        ; Exact mapped bytes E8 B8 90 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 E5 66 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 73: je 0x100c6140
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 24h
        ; Exact mapped bytes 7E 12: jle 0x100c60ed
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100c60ed
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x100c60ef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AD 88 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100c613a
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
        ; Exact mapped bytes EB 02: jmp 0x100c6142
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], edi
        ; Exact mapped bytes E8 49 66 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 46: je 0x100c61ad
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 30 58 1C 10: mov ecx, dword ptr [0x101c5830]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x100c6188
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c6188
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 80h
        ; Exact mapped bytes EB 02: jmp 0x100c618a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 4]
        push 40h
        push edx
        lea edx, [ebp + 22h]
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
        ; Exact mapped bytes E8 15 11 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c61af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 DC 65 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x65
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 43: je 0x100c6217
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 30 58 1C 10: mov ecx, dword ptr [0x101c5830]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100c61f2
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100c61f2
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100c61f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 4]
        push 40h
        push edx
        lea edx, [ebp + 3eh]
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
        ; Exact mapped bytes E8 AB 10 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c6219
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 72 65 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x65
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 46: je 0x100c6284
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 30 58 1C 10: mov ecx, dword ptr [0x101c5830]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x100c625f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c625f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x100c6261
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 4]
        push 40h
        push edx
        lea edx, [ebp + 5dh]
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
        ; Exact mapped bytes E8 3E 10 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c6286
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 05 65 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x65
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 3F: je 0x100c62ea
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 30 58 1C 10: mov ecx, dword ptr [0x101c5830]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100c62c5
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100c62c7
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, 4
        push 40h
        add ebp, 7ah
        push ebx
        push ebp
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
        ; Exact mapped bytes E8 D8 0F F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c62ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 94h], eax
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
