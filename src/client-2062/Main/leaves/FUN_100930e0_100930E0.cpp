// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100930E0 .. +0x9C9 bytes.
extern "C" __declspec(naked) void FUN_100930e0_100930E0() {
    __asm {
        push -1
        push 10170a66h
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
        ; Exact mapped bytes E8 8B B8 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        xor ebx, ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        mov cl, byte ptr [esp + 28h]
        lea edi, [esi + 74h]
        mov dword ptr [esp + 1ch], ebx
        mov byte ptr [edi], cl
        mov dword ptr [edi + 4], ebx
        mov dword ptr [edi + 8], ebx
        mov dword ptr [edi + 0ch], ebx
        mov dl, byte ptr [esp + 28h]
        lea ebp, [esi + 84h]
        mov byte ptr [ebp], dl
        mov dword ptr [ebp + 4], ebx
        mov dword ptr [ebp + 8], ebx
        mov dword ptr [ebp + 0ch], ebx
        mov dword ptr [esi], 10175ef0h
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 0f4h], ebx
        mov dword ptr [esi + 0f8h], ebx
        mov eax, dword ptr [edi + 4]
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 0D: je 0x100931ac
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [edi + 0ch]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 8
        ; Exact mapped bytes 73 7B: jae 0x10093227
        __asm _emit 0x73
        __asm _emit 0x7b
        push 20h
        ; Exact mapped bytes E8 ED 95 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x95
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, dword ptr [edi + 4]
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [edi + 8]
        add esp, 4
        cmp ebx, eax
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 74 24: je 0x100931f0
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [esp + 38h]
        push ebx
        push edx
        ; Exact mapped bytes E8 B9 EB FA FF: call 0x10041d90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xeb
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 3ch]
        add ebx, 4
        add esp, 8
        add edx, 4
        cmp ebx, eax
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes 75 DC: jne 0x100931cc
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [edi + 8]
        mov ecx, dword ptr [edi + 4]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 D1 B9 00 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        push eax
        ; Exact mapped bytes E8 7C 95 0D 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x95
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 34h]
        add esp, 4
        mov ecx, edi
        lea edx, [ebx + 20h]
        mov dword ptr [edi + 0ch], edx
        ; Exact mapped bytes E8 F4 EA FA FF: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xff
        lea eax, [ebx + eax*4]
        mov dword ptr [edi + 4], ebx
        mov dword ptr [edi + 8], eax
        xor ebx, ebx
        mov eax, dword ptr [ebp + 4]
        cmp eax, ebx
        ; Exact mapped bytes 74 0D: je 0x1009323b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 8
        ; Exact mapped bytes 73 79: jae 0x100932b4
        __asm _emit 0x73
        __asm _emit 0x79
        push 20h
        ; Exact mapped bytes E8 5E 95 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x95
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 4]
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [ebp + 8]
        add esp, 4
        cmp edi, eax
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 74 24: je 0x1009327f
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [esp + 38h]
        push edi
        push edx
        ; Exact mapped bytes E8 2A EB FA FF: call 0x10041d90
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xeb
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 3ch]
        add edi, 4
        add esp, 8
        add edx, 4
        cmp edi, eax
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes 75 DC: jne 0x1009325b
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push eax
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 42 B9 00 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 4]
        push eax
        ; Exact mapped bytes E8 ED 94 0D 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, dword ptr [esp + 34h]
        add esp, 4
        mov ecx, ebp
        lea edx, [edi + 20h]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes E8 65 EA FA FF: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xff
        lea eax, [edi + eax*4]
        mov dword ptr [ebp + 4], edi
        mov dword ptr [ebp + 8], eax
        push 54h
        ; Exact mapped bytes E8 E5 94 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 6C: je 0x10093339
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 0ah
        ; Exact mapped bytes 7E 0F: jle 0x100932e8
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100932e8
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100932ea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B0 B6 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1009333b
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
        ; Exact mapped bytes EB 02: jmp 0x1009333b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 94h], edi
        ; Exact mapped bytes E8 53 94 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 6C: je 0x100933cb
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 9
        ; Exact mapped bytes 7E 0F: jle 0x1009337a
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x1009337a
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 24h]
        ; Exact mapped bytes EB 02: jmp 0x1009337c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1E B6 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100933cd
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
        ; Exact mapped bytes EB 02: jmp 0x100933cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 5ch
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 98h], edi
        ; Exact mapped bytes E8 C1 93 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 10: je 0x100933ff
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 73 19 F8 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10093401
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 5ch
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 8D 93 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 10: je 0x10093433
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3F 19 F8 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10093435
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9ch]
        push esi
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 24 1A F8 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        push esi
        ; Exact mapped bytes E8 18 1A F8 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0xff
        lea eax, [esi + 0a4h]
        mov dword ptr [esp + 34h], 8
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 38h], 20h
        push 54h
        ; Exact mapped bytes E8 27 93 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 7D: je 0x10093508
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 34h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x100934b1
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100934b1
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x100934b1
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100934b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 9ch]
        push 40h
        push ebx
        push ebx
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 E1 B4 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1009350a
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
        ; Exact mapped bytes EB 02: jmp 0x1009350a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 34h]
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 30h], eax
        mov eax, dword ptr [esp + 38h]
        sub eax, 4
        dec edx
        cmp eax, 18h
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 0F 8F 39 FF FF FF: jg 0x10093472
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 34h], 5bh
        mov dword ptr [esp + 38h], 16ch
        push 54h
        ; Exact mapped bytes E8 50 92 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x92
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 7D: je 0x100935df
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 34h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x10093588
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x10093588
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x10093588
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x1009358a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 0a0h]
        push 40h
        push ebx
        push ebx
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 0A B4 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100935e1
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
        ; Exact mapped bytes EB 02: jmp 0x100935e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [esi + eax - 0c0h], edi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 34h]
        inc eax
        mov dword ptr [esp + 34h], eax
        add eax, -5bh
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3C FF FF FF: jl 0x10093549
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0ach]
        push 0fffffeffh
        ; Exact mapped bytes E8 43 BB 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 101h
        ; Exact mapped bytes E8 33 BB 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 69 91 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x91
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 4B: je 0x10093692
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x10093662
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x10093662
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x10093664
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 2ch]
        mov edi, dword ptr [esp + 28h]
        push 40h
        lea edx, [ebp + 0c8h]
        push edx
        lea edx, [edi + 15h]
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
        ; Exact mapped bytes E8 30 3C F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x3c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x1009369c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edi, dword ptr [esp + 28h]
        mov ebp, dword ptr [esp + 2ch]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 EF 90 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 46: je 0x10093707
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x100936df
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100936df
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 80h
        ; Exact mapped bytes EB 02: jmp 0x100936e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0c8h]
        push 40h
        push edx
        lea edx, [edi + 3dh]
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
        ; Exact mapped bytes E8 BB 3B F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10093709
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 82 90 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 49: je 0x10093777
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x1009374c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1009374c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x1009374e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0c8h]
        push 40h
        push edx
        lea edx, [edi + 88h]
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
        ; Exact mapped bytes E8 4B 3B F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10093779
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 12 90 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 46: je 0x100937e4
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x100937bc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100937bc
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x100937be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0eh]
        push 40h
        add edi, 8fh
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
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
        ; Exact mapped bytes E8 DE 3A F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x3a
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100937e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 A8 8F 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8f
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 29: je 0x10093833
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 0a0h]
        push 40h
        push ebx
        lea ecx, [ebp + 10h]
        push ebx
        add edx, 15h
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 88 B1 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb1
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10093835
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0cch], edi
        ; Exact mapped bytes E8 59 8F 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8f
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 29: je 0x10093882
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esi + 0a0h]
        push 40h
        push ebx
        lea ecx, [ebp + 10h]
        push ebx
        add edx, 3dh
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 39 B1 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb1
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10093884
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0d0h], edi
        ; Exact mapped bytes E8 07 8F 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 4D: je 0x100938f6
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 30h
        ; Exact mapped bytes 7E 12: jle 0x100938c7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100938c7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c00h
        ; Exact mapped bytes EB 02: jmp 0x100938c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0eh]
        push 40h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 47h
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
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
        ; Exact mapped bytes E8 CC 39 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100938f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 93 8E 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 4D: je 0x1009396a
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 31h
        ; Exact mapped bytes 7E 12: jle 0x1009393b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1009393b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c40h
        ; Exact mapped bytes EB 02: jmp 0x1009393d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 28h]
        add ebp, 0eh
        push 40h
        add edx, 6bh
        push ebp
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
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
        ; Exact mapped bytes E8 58 39 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009396c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d8h], eax
        mov eax, dword ptr [esi + 0d4h]
        push 101h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [eax + 50h], ebx
        mov eax, dword ptr [esi + 0d8h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 0bch]
        ; Exact mapped bytes E8 C7 B7 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 B7 B7 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 101h
        ; Exact mapped bytes E8 A7 B7 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 101h
        ; Exact mapped bytes E8 97 B7 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        push 0a8h
        ; Exact mapped bytes E8 CD 8D 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 18: je 0x100939fb
        __asm _emit 0x74
        __asm _emit 0x18
        push 40h
        push ebx
        push ebx
        push 0c8h
        push 0c8h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 27 24 00 00: call 0x10095e20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100939fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 94h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0fch], eax
        ; Exact mapped bytes E8 48 B7 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        ; Exact mapped bytes 66 C7 86 B4 00 00 00 01 00: mov word ptr [esi + 0xb4], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E DC 00 00 00: mov word ptr [esi + 0xdc], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E DE 00 00 00: mov word ptr [esi + 0xde], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E E0 00 00 00: mov word ptr [esi + 0xe0], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E E2 00 00 00: mov word ptr [esi + 0xe2], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E E4 00 00 00: mov word ptr [esi + 0xe4], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E E6 00 00 00: mov word ptr [esi + 0xe6], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0e8h], ebx
        mov dword ptr [esi + 0ech], ebx
        mov ecx, eax
        mov edx, 0bfffh
        cmp eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 74 04: je 0x10093a6d
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp eax, ecx
        ; Exact mapped bytes 75 ED: jne 0x10093a61
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and edx, 0e5f0h
        mov dword ptr [esi + 0b8h], ebx
        or dh, 5
        ; Exact mapped bytes 66 89 9E E2 00 00 00: mov word ptr [esi + 0xe2], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
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
