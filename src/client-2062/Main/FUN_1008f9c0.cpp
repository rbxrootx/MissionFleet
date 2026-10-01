// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x1008F9C0 .. +0xE18 bytes.
extern "C" __declspec(naked) void FUN_1008f9c0() {
    __asm {
        push -1
        push 10170861h
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
        mov ebx, dword ptr [esp + 1ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 AB EF 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        xor eax, eax
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi], 10175eb8h
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esi + 6ch]
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esi + 60h], ecx
        mov dword ptr [esp + 38h], 22h
        mov dword ptr [esp + 34h], edx
        mov ebx, 88h
        push 54h
        ; Exact mapped bytes E8 51 CD 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xcd
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 75: je 0x1008fad6
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 38h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 13: jle 0x1008fa83
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x1008fa83
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1008fa83
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ebx + eax]
        ; Exact mapped bytes EB 02: jmp 0x1008fa85
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
        ; Exact mapped bytes E8 13 EF 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008fad8
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
        ; Exact mapped bytes EB 02: jmp 0x1008fad8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 38h]
        sub ebx, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        add eax, 4
        dec ecx
        cmp ebx, 80h
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 0F 8F 46 FF FF FF: jg 0x1008fa48
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, 20h
        lea ecx, [esi + 74h]
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 34h], ecx
        mov ebx, 80h
        ; Exact mapped bytes EB 04: jmp 0x1008fb1d
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 38h]
        push 54h
        ; Exact mapped bytes E8 7C CC 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 71: je 0x1008fba7
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x1008fb54
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x1008fb54
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1008fb54
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebx]
        ; Exact mapped bytes EB 02: jmp 0x1008fb56
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 42 EE 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008fba9
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x1008fba9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 38h]
        sub ebx, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        add eax, 4
        dec ecx
        cmp ebx, 78h
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 0F 8F 49 FF FF FF: jg 0x1008fb19
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 C6 CB 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xcb
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 4E: je 0x1008fc38
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x1008fc08
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008fc08
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 200h]
        ; Exact mapped bytes EB 02: jmp 0x1008fc0a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        push 40h
        lea ecx, [edi + 16h]
        push ecx
        lea ecx, [ebp + 1bah]
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
        ; Exact mapped bytes E8 8A 76 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x1008fc42
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edi, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 4C CB 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcb
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        mov ebx, 5
        ; Exact mapped bytes 74 45: je 0x1008fcae
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x1008fc86
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008fc86
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x1008fc88
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 16h]
        push 40h
        push edx
        lea edx, [ebp + 1fah]
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
        ; Exact mapped bytes E8 14 76 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008fcb0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 DB CA 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xca
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 74 49: je 0x1008fd1d
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x1008fcf2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008fcf2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x1008fcf4
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
        add edi, 17ah
        push 40h
        add ebp, 1fah
        push edi
        push ebp
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
        ; Exact mapped bytes E8 A5 75 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008fd1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 7ch]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 29 F4 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 101h
        ; Exact mapped bytes E8 19 F4 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 101h
        ; Exact mapped bytes E8 09 F4 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 42 CA 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xca
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 14: je 0x1008fd82
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F0 4F F8 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x4f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008fd84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 90h], eax
        mov ebx, 64h
        mov dword ptr [esp + 38h], 190h
        push 54h
        ; Exact mapped bytes E8 FD C9 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 7B: je 0x1008fe30
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x1008fdd7
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x1008fdd7
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1008fdd7
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x1008fdd9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 B9 EB 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008fe32
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
        ; Exact mapped bytes EB 02: jmp 0x1008fe32
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + eax - 108h], edi
        add eax, 4
        inc ebx
        mov dword ptr [esp + 38h], eax
        lea ecx, [ebx - 64h]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 46 FF FF FF: jl 0x1008fd9c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 88h]
        push 0fffffeffh
        ; Exact mapped bytes E8 FA F2 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        ; Exact mapped bytes E8 EA F2 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push esi
        ; Exact mapped bytes E8 EE 4F F8 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [esp + 28h]
        mov ebp, 82h
        lea edx, [esi + 94h]
        add eax, 8fh
        mov dword ptr [esp + 30h], ebp
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 38h], eax
        mov ebx, 208h
        push 54h
        ; Exact mapped bytes E8 F2 C8 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x1008ff44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x1008fee2
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x1008fee2
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1008fee2
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebx]
        ; Exact mapped bytes EB 02: jmp 0x1008fee4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esi + 90h]
        push 40h
        push 0
        add ecx, 3bh
        push 0
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 AB EA 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1008ff3c
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
        mov ebp, dword ptr [esp + 30h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x1008ff46
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 34h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi], ecx
        ; Exact mapped bytes E8 05 F2 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 38h]
        add ebx, 18h
        add edi, 4
        add ebp, 6
        add ecx, 46h
        cmp ebx, 250h
        mov dword ptr [esp + 34h], edi
        mov dword ptr [esp + 30h], ebp
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 0F 8C 24 FF FF FF: jl 0x1008fea7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 13 C8 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        mov ebx, 12h
        ; Exact mapped bytes 74 53: je 0x1008fff5
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x1008ffbf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008ffbf
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 480h
        ; Exact mapped bytes EB 02: jmp 0x1008ffc1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        push 40h
        lea edx, [edi + 3dh]
        push edx
        lea edx, [ebp + 8fh]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 90h]
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
        ; Exact mapped bytes E8 CD 72 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x1008ffff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edi, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 8C C7 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 4C: je 0x10090070
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 12: jle 0x10090042
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10090042
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 500h
        ; Exact mapped bytes EB 02: jmp 0x10090044
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 3dh]
        push 40h
        push edx
        lea edx, [ebp + 0d5h]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 90h]
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
        ; Exact mapped bytes E8 52 72 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10090072
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 19 C7 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 4C: je 0x100900e3
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 13h
        ; Exact mapped bytes 7E 12: jle 0x100900b5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100900b5
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 4c0h
        ; Exact mapped bytes EB 02: jmp 0x100900b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 3dh]
        push 40h
        push edx
        lea edx, [ebp + 11bh]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 90h]
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
        ; Exact mapped bytes E8 DF 71 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100900e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0c8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 A6 C6 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 18: je 0x10090122
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D0 42 FF FF: call 0x100843f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10090124
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 84h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 67 C6 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 18: je 0x10090161
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A1 58 FF FF: call 0x10085a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10090163
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0b4h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 28 C6 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 18: je 0x100901a0
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 92 21 FF FF: call 0x10082330
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100901a2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 308h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 E9 C5 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 1E: je 0x100901e5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 90h]
        push 2
        push 0
        push 0
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5D 60 FF FF: call 0x10086240
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100901e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 2dch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes E8 A4 C5 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 1E: je 0x1009022a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [esi + 90h]
        push 2
        push 0
        push 0
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F8 AA FF FF: call 0x1008ad20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009022c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 62 C5 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 24: je 0x10090272
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 90h]
        push 40h
        push 0
        add edi, 0c8h
        push 0
        add ebp, 0c8h
        push edi
        push ebp
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 50 F0 FF FF: call 0x1008f2c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10090274
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov ecx, dword ptr [esi + 0a0h]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0ech], 0
        ; Exact mapped bytes E8 C1 EE 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 101h
        ; Exact mapped bytes E8 B1 EE 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 101h
        ; Exact mapped bytes E8 A1 EE 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 DA C4 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 74 14: je 0x100902e9
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 89 4A F8 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100902eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 72 4B F8 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ebp, 24h
        lea edx, [esi + 0ach]
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 34h], edx
        mov ebx, 90h
        ; Exact mapped bytes EB 04: jmp 0x1009031c
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 38h]
        push 54h
        ; Exact mapped bytes E8 7D C4 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 74 77: je 0x100903ac
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x10090353
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x10090353
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10090353
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebx]
        ; Exact mapped bytes EB 02: jmp 0x10090355
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 0b4h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 3D E6 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100903ae
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100903ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 38h]
        sub ebx, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        add eax, 4
        dec ecx
        cmp ebx, 88h
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 0F 8F 40 FF FF FF: jg 0x10090318
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 BE C3 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 3E: je 0x10090430
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ebp, dword ptr [esp + 2ch]
        mov ebx, dword ptr [esp + 28h]
        push 0
        push 0
        lea edx, [ebp + 140h]
        push 0ffffffh
        lea ecx, [ebx + 9bh]
        push edx
        push ecx
        lea edx, [ebp + 7eh]
        lea ecx, [ebx + 48h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 0b4h]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C2 BE F9 FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbe
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x1009043a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [esp + 28h]
        mov ebp, dword ptr [esp + 2ch]
        xor eax, eax
        lea edi, [esi + 0b8h]
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 4F C3 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 39: je 0x1009049a
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        lea edx, [ebp + 140h]
        push 0ffffffh
        lea ecx, [ebx + 0e6h]
        push edx
        push ecx
        lea edx, [ebp + 7eh]
        lea ecx, [ebx + 0a5h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 0b4h]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 58 BE F9 FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xbe
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009049c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 EF C2 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 39: je 0x100904fa
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        lea edx, [ebp + 140h]
        push 0ffffffh
        lea ecx, [ebx + 17bh]
        push edx
        push ecx
        lea edx, [ebp + 7eh]
        lea ecx, [ebx + 0f2h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 0b4h]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 F8 BD F9 FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbd
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100904fc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 8F C2 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 39: je 0x1009055a
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        lea edx, [ebp + 140h]
        push 0ffffffh
        lea ecx, [ebx + 209h]
        push edx
        push ecx
        lea edx, [ebp + 7eh]
        lea ecx, [ebx + 18ah]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 0b4h]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 98 BD F9 FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbd
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009055c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0c4h], eax
        mov eax, edi
        mov byte ptr [esp + 1ch], 0
        mov edx, 4
        mov edi, 0dh
        mov ecx, dword ptr [eax]
        add eax, 4
        or byte ptr [ecx + 24h], 1
        mov ecx, dword ptr [eax - 4]
        dec edx
        mov dword ptr [ecx + 5ch], edi
        ; Exact mapped bytes 75 EE: jne 0x10090573
        __asm _emit 0x75
        __asm _emit 0xee
        push 54h
        ; Exact mapped bytes E8 14 C2 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x10090627
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 40h
        ; Exact mapped bytes 7E 16: jle 0x100905c4
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100905c4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [eax + 100h]
        mov dword ptr [esp + 28h], edx
        ; Exact mapped bytes EB 08: jmp 0x100905cc
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 28h], 0
        mov eax, dword ptr [esi + 0b4h]
        push 40h
        push 0
        lea ecx, [ebp + 80h]
        push 0
        lea edx, [ebx + 45h]
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 C5 E3 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe3
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x10090629
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
        ; Exact mapped bytes EB 02: jmp 0x10090629
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0c8h], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0c8h]
        push 0a0h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 D6 EA 06 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 4C C1 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 4C: je 0x100906b0
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x10090682
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10090682
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x10090684
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 14ch]
        push 40h
        push edx
        lea edx, [ebx + 41h]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 0b4h]
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
        ; Exact mapped bytes E8 12 6C F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100906b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 D9 C0 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc0
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1ah
        ; Exact mapped bytes 74 4F: je 0x10090726
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100906f5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100906f5
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x100906f7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 14ch]
        push 40h
        push edx
        lea edx, [ebx + 80h]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 0b4h]
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
        ; Exact mapped bytes E8 9C 6B F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10090728
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0cch]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 1D EA 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        push 101h
        ; Exact mapped bytes E8 0D EA 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 46 C0 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xc0
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 74 12: je 0x1009077c
        __asm _emit 0x74
        __asm _emit 0x12
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 66 87 FE FF: call 0x10078ee0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009077e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 68h], eax
        mov eax, dword ptr [esi + 3ch]
        mov ecx, eax
        mov edx, 0bfffh
        cmp eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 74 04: je 0x10090794
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp eax, ecx
        ; Exact mapped bytes 75 F0: jne 0x1009078b
        __asm _emit 0x75
        __asm _emit 0xf0
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [esp + 14h]
        pop edi
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        and edx, 0e5f0h
        ; Exact mapped bytes 66 C7 86 F4 00 00 00 00 00: mov word ptr [esi + 0xf4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dh, 5
        mov eax, esi
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
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
        ret 18h
    }
}
