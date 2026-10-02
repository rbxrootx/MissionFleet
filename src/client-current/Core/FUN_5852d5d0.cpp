// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5852D5D0 .. +0x85A bytes.
extern "C" __declspec(naked) void FUN_5852d5d0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882797h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0cch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        push 2
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 74 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 96 F5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 E2 39 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x39
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 42: je 0x5852d677
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 73 F5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x73
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 3
        ; Exact mapped bytes 8B 0D BC 06 96 58: mov ecx, dword ptr [0x589606bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 74 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 64h], ecx
        push 40h
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2E 9A FF FF: call 0x585270a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852d67e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 68h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes A3 7C 06 96 58: mov dword ptr [0x5896067c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 58h
        ; Exact mapped bytes E8 6A 39 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x39
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 30: je 0x5852d6dd
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 73 F5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x73
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 70h], ecx
        push 40h
        mov edx, dword ptr [ebp - 6ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C8 99 FF FF: call 0x585270a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5852d6e4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 74h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 74h]
        ; Exact mapped bytes 89 15 80 06 96 58: mov dword ptr [0x58960680], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0fffffeffh
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 7E 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7e
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 F2 38 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x38
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 2F: je 0x5852d754
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 72 F5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x72
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes A1 24 5F 96 58: mov eax, dword ptr [0x58965f24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], eax
        push 40h
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 51 99 FF FF: call 0x585270a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852d75b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 80h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes 89 0D 84 06 96 58: mov dword ptr [0x58960684], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0fffffeffh
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 7E 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7e
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 7F F6 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        sub edx, 1
        ; Exact mapped bytes 66 89 55 E4: mov word ptr [ebp - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe4
        movzx eax, word ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 86 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 7F F6 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        sub ecx, 2
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        movzx edx, word ptr [ebp - 12h]
        push edx
        ; Exact mapped bytes 8B 0D 80 06 96 58: mov ecx, dword ptr [0x58960680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 86 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 7C 06 96 58: mov ecx, dword ptr [0x5896067c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 7F F6 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        sub eax, 2
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes 8B 0D 84 06 96 58: mov ecx, dword ptr [0x58960684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 86 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 0C 38 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x38
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 6B: je 0x5852d876
        __asm _emit 0x74
        __asm _emit 0x6b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 7E F6 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7e
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        sub edx, 1
        ; Exact mapped bytes 66 89 55 EA: mov word ptr [ebp - 0x16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xea
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 E8 F5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 91 F5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes A1 24 5F 96 58: mov eax, dword ptr [0x58965f24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8ch], eax
        movzx ecx, word ptr [ebp - 16h]
        push ecx
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov eax, dword ptr [ebp - 88h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 AF 4A F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5852d87d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 90h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 90h]
        ; Exact mapped bytes A3 88 06 96 58: mov dword ptr [0x58960688], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0fch
        ; Exact mapped bytes E8 62 37 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x37
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 75: je 0x5852d92a
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 E7 F5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe7
        __asm _emit 0xf5
        __asm _emit 0xff
        add eax, 10h
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 90 F5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0xf5
        __asm _emit 0xff
        add eax, 1ah
        mov dword ptr [ebp - 98h], eax
        push 0cch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 71 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x71
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        push 5
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 4B D0 28 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd0
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852d931
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0a4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [edx + 5896068ch], eax
        push 0fch
        ; Exact mapped bytes E8 A5 36 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x36
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 75: je 0x5852d9e7
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 E7 F5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe7
        __asm _emit 0xf5
        __asm _emit 0xff
        add eax, 1eh
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 90 F5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x90
        __asm _emit 0xf5
        __asm _emit 0xff
        add eax, 1ah
        mov dword ptr [ebp - 0ach], eax
        push 0cch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 71 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x71
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        push 5
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 8E CF 28 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xcf
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5852d9ee
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0b8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ecx + 5896068ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ecx + 5896068ch]
        mov dword ptr [ebp - 0bch], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 7C F6 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 35 84 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [edx + 5896068ch]
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 7C F6 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        sub ecx, 1
        ; Exact mapped bytes 66 89 4D E6: mov word ptr [ebp - 0x1a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe6
        movzx edx, word ptr [ebp - 1ah]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 FC 83 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x83
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ecx + 5896068ch]
        mov dword ptr [ebp - 0c4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 08 7B 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x7b
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [eax + 5896068ch]
        mov dword ptr [ebp - 0c8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 E4 7A 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7a
        __asm _emit 0x28
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 84 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 88 06 96 58: mov ecx, dword ptr [0x58960688]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 83 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x83
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [eax + 5896068ch]
        mov dword ptr [ebp - 0cch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 D9 83 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x83
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [edx + 5896068ch]
        mov dword ptr [ebp - 0d0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 B8 83 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 12 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E8 B1 96 FA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 12 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 60 20 96 58: mov eax, dword ptr [0x58962060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 12 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        push 44ch
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 82 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x82
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 2C 06 96 58: mov edx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 10 06 96 58: mov eax, dword ptr [0x58960610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 20 06 96 58: mov edx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 28 06 96 58: mov eax, dword ptr [0x58960628]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 68 06 96 58: mov ecx, dword ptr [0x58960668]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 38 06 96 58: mov edx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 34 06 96 58: mov eax, dword ptr [0x58960634]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 40 06 96 58: mov edx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 70 06 96 58: mov eax, dword ptr [0x58960670]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D D0 20 96 58: mov ecx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 18 06 96 58: mov edx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 11 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 48 06 96 58: mov eax, dword ptr [0x58960648]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 10 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 30 06 96 58: mov ecx, dword ptr [0x58960630]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 10 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 4C 06 96 58: mov edx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 10 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 58 06 96 58: mov eax, dword ptr [0x58960658]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 10 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 54 06 96 58: mov ecx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 10 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 0b0h
        ; Exact mapped bytes E8 31 33 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x33
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 6
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 19: je 0x5852dcff
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 56 3F 18 00: call 0x586b1c50
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3f
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852dd06
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0d8h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes A3 44 06 96 58: mov dword ptr [0x58960644], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 10 F8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 82 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x82
        __asm _emit 0xf5
        __asm _emit 0xff
        push 28h
        push 0b4h
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 78 28 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x78
        __asm _emit 0x28
        __asm _emit 0x00
        push 0fa0h
        ; Exact mapped bytes 8B 0D 44 06 96 58: mov ecx, dword ptr [0x58960644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 81 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 40 06 96 58: mov ecx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 78 28 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x78
        __asm _emit 0x28
        __asm _emit 0x00
        push 7d0h
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 80 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0b54h
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 80 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0bb8h
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 80 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0fa0h
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 80 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        push 39d0h
        ; Exact mapped bytes 8B 0D 40 06 96 58: mov ecx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 80 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0fa0h
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 80 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        push 4e20h
        ; Exact mapped bytes 8B 0D 68 06 96 58: mov ecx, dword ptr [0x58960668]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 80 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 01: or ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 12130h]
        ; Exact mapped bytes E8 2F 0F F9 FF: call 0x584bed30
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x0f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12130h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 12130h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
