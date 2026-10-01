// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C35A0 .. +0x6A8 bytes.
extern "C" __declspec(naked) void FUN_587c35a0() {
    __asm {
        push -1
        push 58981201h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 28h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 20h], esi
        mov eax, dword ptr [esp + 38h]
        push 40h
        xor ebx, ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push eax
        ; Exact mapped bytes E8 C1 FB 13 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 70h
        mov dword ptr [esp + 34h], ebx
        mov dword ptr [esi], 5899ac14h
        ; Exact mapped bytes E8 43 96 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x96
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 30h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 24: je 0x587c363f
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ebx
        push 0ffffffh
        push 20h
        push 0c8h
        push 14h
        push 0ah
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 43 FC F6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587c3641
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 68 4A A2 58: mov dword ptr [0x58a24a68], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 68 4A A2 58: mov eax, dword ptr [0x58a24a68]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebp, 1
        mov dword ptr [eax + 68h], ebp
        ; Exact mapped bytes 8B 3D 68 4A A2 58: mov edi, dword ptr [0x58a24a68]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 7ff8h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 30h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c367c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D4 F8 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c3689
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 57 F8 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 BE 95 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x95
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 30h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 24: je 0x587c36c4
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ebx
        push 0ffffffh
        push 2ch
        push 0c8h
        push 20h
        push 0ah
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BE FB F6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfb
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587c36c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 64 4A A2 58: mov dword ptr [0x58a24a64], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 64 4A A2 58: mov edx, dword ptr [0x58a24a64]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 68h], ebp
        ; Exact mapped bytes 8B 3D 64 4A A2 58: mov edi, dword ptr [0x58a24a64]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 40h]
        mov eax, 7ff8h
        mov byte ptr [esp + 30h], bl
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c36fd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 53 F8 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c370a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D6 F7 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0x13
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 3D 95 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x95
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 30h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 24: je 0x587c3745
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ebx
        push 0ffffffh
        push 38h
        push 0c8h
        push 2ch
        push 0ah
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3D FB F6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xfb
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587c3747
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 60 4A A2 58: mov dword ptr [0x58a24a60], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 60 4A A2 58: mov eax, dword ptr [0x58a24a60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [eax + 68h], ebp
        ; Exact mapped bytes 8B 3D 60 4A A2 58: mov edi, dword ptr [0x58a24a60]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 7ff8h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 30h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c377d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D3 F7 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf7
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c378a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 56 F7 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf7
        __asm _emit 0x13
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 BD 94 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x94
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 30h], 4
        cmp eax, ebx
        ; Exact mapped bytes 74 24: je 0x587c37c5
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ebx
        push 0ffffffh
        push 44h
        push 0c8h
        push 38h
        push 0ah
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BD FA F6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587c37c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 5C 4A A2 58: mov dword ptr [0x58a24a5c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 5C 4A A2 58: mov edx, dword ptr [0x58a24a5c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 68h], ebp
        ; Exact mapped bytes 8B 3D 5C 4A A2 58: mov edi, dword ptr [0x58a24a5c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 40h]
        mov eax, 7ff8h
        mov byte ptr [esp + 30h], bl
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c37fe
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 52 F7 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf7
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c380b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D5 F6 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf6
        __asm _emit 0x13
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 3C 94 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x94
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 30h], 5
        cmp eax, ebx
        ; Exact mapped bytes 74 24: je 0x587c3846
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ebx
        push 0ffffffh
        push 50h
        push 0c8h
        push 44h
        push 0ah
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3C FA F6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587c3848
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 58 4A A2 58: mov dword ptr [0x58a24a58], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 58 4A A2 58: mov eax, dword ptr [0x58a24a58]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [eax + 68h], ebp
        ; Exact mapped bytes 8B 3D 58 4A A2 58: mov edi, dword ptr [0x58a24a58]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 7ff8h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 30h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c387e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D2 F6 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf6
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c388b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 55 F6 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf6
        __asm _emit 0x13
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 BC 93 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x93
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 30h], 6
        cmp eax, ebx
        ; Exact mapped bytes 74 24: je 0x587c38c6
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ebx
        push 0ffffffh
        push 5ch
        push 0c8h
        push 50h
        push 0ah
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BC F9 F6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587c38c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 54 4A A2 58: mov dword ptr [0x58a24a54], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 54 4A A2 58: mov edx, dword ptr [0x58a24a54]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 68h], ebp
        ; Exact mapped bytes 8B 3D 54 4A A2 58: mov edi, dword ptr [0x58a24a54]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 40h]
        mov eax, 7ff8h
        mov byte ptr [esp + 30h], bl
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c38ff
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 51 F6 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf6
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c390c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D4 F5 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 3B 93 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x93
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 30h], 7
        cmp eax, ebx
        ; Exact mapped bytes 74 24: je 0x587c3947
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ebx
        push 0ffffffh
        push 68h
        push 0c8h
        push 5ch
        push 0ah
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3B F9 F6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587c3949
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 50 4A A2 58: mov dword ptr [0x58a24a50], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 50 4A A2 58: mov eax, dword ptr [0x58a24a50]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [eax + 68h], ebp
        ; Exact mapped bytes 8B 3D 50 4A A2 58: mov edi, dword ptr [0x58a24a50]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 7ff8h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 30h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c397f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D1 F5 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c398c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 54 F5 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        push 70h
        mov dword ptr [esi + 60h], ebx
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 6ch], ebx
        ; Exact mapped bytes E8 AF 92 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x92
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 30h], 8
        cmp eax, ebx
        ; Exact mapped bytes 74 29: je 0x587c39d8
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ebx
        push 0ffffffh
        push 28h
        push 400h
        push 19h
        push 39ch
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AC F8 F6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf8
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x587c39da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 89 3D 6C 45 A2 58: mov dword ptr [0x58a2456c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 40h]
        mov eax, 7d00h
        mov byte ptr [esp + 30h], bl
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c39fa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 56 F5 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c3a07
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D9 F4 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0x13
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 40 92 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x92
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 30h], 9
        cmp eax, ebx
        ; Exact mapped bytes 74 29: je 0x587c3a47
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ebx
        push 0ffffffh
        push 39h
        push 400h
        push 2ah
        push 39ch
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3D F8 F6 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x587c3a49
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 89 3D 70 45 A2 58: mov dword ptr [0x58a24570], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 40h]
        mov edx, 7d00h
        mov byte ptr [esp + 30h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c3a69
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E7 F4 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf4
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c3a76
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6A F4 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf4
        __asm _emit 0x13
        __asm _emit 0x00
        lea eax, [esp + 14h]
        push eax
        push 0f003fh
        push ebx
        push 58997258h
        push 80000002h
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 2ch], 400h
        mov dword ptr [esp + 4ch], ebx
        ; Exact mapped bytes FF 15 08 C0 98 58: call dword ptr [0x5898c008]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 7D: jne 0x587c3b22
        __asm _emit 0x75
        __asm _emit 0x7d
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esp + 18h]
        lea edx, [esp + 3ch]
        push edx
        lea eax, [esp + 24h]
        push eax
        push ebx
        push 5899ad20h
        push ecx
        ; Exact mapped bytes FF 15 04 C0 98 58: call dword ptr [0x5898c004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 4A: jne 0x587c3b13
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 15 6C 45 A2 58: mov edx, dword ptr [0x58a2456c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 6ch]
        mov ecx, dword ptr [esp + 38h]
        mov eax, 10624dd3h
        mul ecx
        shr edx, 6
        imul edx, edx, 3e8h
        mov eax, ecx
        sub eax, edx
        push eax
        sub ecx, eax
        mov eax, 10624dd3h
        mul ecx
        shr edx, 6
        push edx
        push 5899acfch
        xor ebp, ebp
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        push edi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        mov eax, dword ptr [esp + 14h]
        push eax
        ; Exact mapped bytes FF 15 00 C0 98 58: call dword ptr [0x5898c000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        cmp ebp, ebx
        ; Exact mapped bytes 74 35: je 0x587c3b57
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 15 AC 31 9C 58: mov edx, dword ptr [0x589c31ac]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x31
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes A1 44 31 9C 58: mov eax, dword ptr [0x589c3144]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 6C 45 A2 58: mov ecx, dword ptr [0x58a2456c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 6ch]
        xor edx, 0aah
        push edx
        push eax
        push 5899acfch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        push edi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes A1 6C 45 A2 58: mov eax, dword ptr [0x58a2456c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        add eax, 24h
        mov edx, 0fffeh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        push 121b4h
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes E8 D6 90 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x90
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov byte ptr [esp + 30h], 0ah
        cmp eax, ebx
        ; Exact mapped bytes 74 1B: je 0x587c3ba3
        __asm _emit 0x74
        __asm _emit 0x1b
        push 2710h
        push 258h
        push 320h
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2F 9B FC FF: call 0x5878d6d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587c3ba5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 94 45 A2 58: mov dword ptr [0x58a24594], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 94 45 A2 58: mov eax, dword ptr [0x58a24594]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        add eax, 24h
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D 94 45 A2 58: mov edi, dword ptr [0x58a24594]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 40h]
        mov eax, 2710h
        mov byte ptr [esp + 30h], bl
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c3be6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6A F3 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf3
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587c3bf3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 ED F2 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf2
        __asm _emit 0x13
        __asm _emit 0x00
        push 4838h
        ; Exact mapped bytes E8 51 90 1B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x90
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 30h], 0bh
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x587c3c16
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 CC 71 12 00: call 0x588eade0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x71
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587c3c18
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 10 48 A2 58: mov dword ptr [0x58a24810], eax
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 74h], 64h
        mov dword ptr [esi + 78h], ebx
        mov dword ptr [esi + 7ch], ebx
        mov dword ptr [esi + 80h], ebx
        mov eax, esi
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ret 4
    }
}
