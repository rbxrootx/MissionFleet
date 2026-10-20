// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58835D10 .. +0x3F3 bytes.
extern "C" __declspec(naked) void FUN_58835d10_58835D10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588928e1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, 2504h
        ; Exact mapped bytes E8 C5 BD FF FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ebx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 2510h], eax
        ; Exact mapped bytes E8 ED 64 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        lea ecx, [ebp - 4c4h]
        mov dword ptr [ebp - 2508h], esi
        ; Exact mapped bytes E8 B0 94 00 00: call 0x5883f216
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        push 58836b29h
        lea ecx, [ebp - 4c4h]
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 C9 EE 00 00: call 0x58844c42
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, esi
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 06 AF 01 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 DF AE 01 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 250ch], eax
        ; Exact mapped bytes A1 CC 7D 96 58: mov eax, dword ptr [0x58967dcc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        push 50h
        pop ecx
        cmove eax, ecx
        lea ecx, [ebp - 2504h]
        ; Exact mapped bytes A3 CC 7D 96 58: mov dword ptr [0x58967dcc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 CD FF FF: call 0x58832ad4
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 16b8h]
        ; Exact mapped bytes E8 3D CD FF FF: call 0x58832af8
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 75 51: jne 0x58835e14
        __asm _emit 0x75
        __asm _emit 0x51
        push 588f1e00h
        mov dword ptr [ebp - 2300h], eax
        mov dword ptr [ebp - 22dch], 0a4h
        ; Exact mapped bytes E8 76 65 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        or esi, 0ffffffffh
        push esi
        push eax
        lea eax, [ebp - 22fch]
        push 20h
        push eax
        ; Exact mapped bytes E8 8D 08 03 00: call 0x5886667d
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        push esi
        add eax, 1478h
        push eax
        lea eax, [ebp - 22d8h]
        push 20h
        push eax
        ; Exact mapped bytes E8 73 08 03 00: call 0x5886667d
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 24h
        xor ebx, ebx
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x58835ee5
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1
        push 4
        mov dword ptr [ebp - 550h], eax
        pop eax
        push 2
        pop ecx
        cmove eax, ecx
        mov dword ptr [ebp - 874h], 0a4h
        mov dword ptr [ebp - 50ch], eax
        lea eax, [ebp - 894h]
        push eax
        push ecx
        lea ecx, [ebp - 4c4h]
        ; Exact mapped bytes E8 42 9B 00 00: call 0x5883f98c
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f1e00h
        ; Exact mapped bytes E8 FF 64 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        or esi, 0ffffffffh
        push esi
        push eax
        lea eax, [ebp - 870h]
        push 20h
        push eax
        ; Exact mapped bytes E8 16 08 03 00: call 0x5886667d
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        push esi
        add eax, 1478h
        push eax
        lea eax, [ebp - 14b4h]
        push 20h
        push eax
        ; Exact mapped bytes E8 FC 07 03 00: call 0x5886667d
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2510h]
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58835ea4
        __asm _emit 0x74
        __asm _emit 0x16
        push esi
        push eax
        lea eax, [ebp - 850h]
        push 100h
        push eax
        ; Exact mapped bytes E8 DC 07 03 00: call 0x5886667d
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 10h
        test ebx, ebx
        ; Exact mapped bytes 74 16: je 0x58835ebe
        __asm _emit 0x74
        __asm _emit 0x16
        push esi
        push ebx
        lea eax, [ebp - 750h]
        push 200h
        push eax
        ; Exact mapped bytes E8 C2 07 03 00: call 0x5886667d
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        xor ebx, ebx
        add eax, 1898h
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 74 16: je 0x58835ee5
        __asm _emit 0x74
        __asm _emit 0x16
        push esi
        push eax
        lea eax, [ebp - 1094h]
        push 400h
        push eax
        ; Exact mapped bytes E8 8E 00 03 00: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 10h
        push 3
        pop esi
        cmp edi, 1
        ; Exact mapped bytes 0F 84 E0 01 00 00: je 0x588360d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 250ch]
        mov eax, ecx
        cdq
        idiv esi
        inc ecx
        imul eax, edx, 204h
        mov dword ptr [ebp - 250ch], ecx
        lea esi, [eax + 58967dd0h]
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 0F 84 AD 01 00 00: je 0x588360c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea ecx, [ebp - 4c4h]
        push eax
        ; Exact mapped bytes FF 35 EC 60 90 58: push dword ptr [0x589060ec]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes FF 35 CC 7D 96 58: push dword ptr [0x58967dcc]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 DB 98 00 00: call 0x5883f80e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 62 01 00 00: jne 0x5883609d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 05 EC 83 96 58: cmp dword ptr [0x589683ec], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1E: je 0x58835f61
        __asm _emit 0x74
        __asm _emit 0x1e
        push esi
        push 588f2008h
        ; Exact mapped bytes E8 05 64 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 2C 41 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes FF 35 A8 7D 96 58: push dword ptr [0x58967da8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, eax
        lea ecx, [ebp - 4c4h]
        push eax
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 6D: jne 0x58835fe2
        __asm _emit 0x75
        __asm _emit 0x6d
        push eax
        lea eax, [ebp - 2504h]
        push eax
        ; Exact mapped bytes E8 7F C0 00 00: call 0x58842001
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x58835faa
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D A8 7D 96 58: mov ecx, dword ptr [0x58967da8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 37: je 0x58835fc7
        __asm _emit 0x74
        __asm _emit 0x37
        xor edi, edi
        inc edi
        ; Exact mapped bytes 39 05 EC 83 96 58: cmp dword ptr [0x589683ec], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x588360c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push 588f2014h
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x58836083
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 6ah
        ; Exact mapped bytes 74 18: je 0x58835fc7
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x588360c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 588f2058h
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x58836083
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        inc edi
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x588360c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 588f2034h
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x58836083
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 16b8h]
        push eax
        ; Exact mapped bytes E8 C9 CE 00 00: call 0x58842eb7
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x5883602c
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes A1 A8 7D 96 58: mov eax, dword ptr [0x58967da8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        xor edi, edi
        inc edi
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x58836013
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x588360c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 588f2074h
        ; Exact mapped bytes EB 70: jmp 0x58836083
        __asm _emit 0xeb
        __asm _emit 0x70
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x588360c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f20b4h
        ; Exact mapped bytes E8 29 63 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5D: jmp 0x58836089
        __asm _emit 0xeb
        __asm _emit 0x5d
        cmp eax, 12fh
        ; Exact mapped bytes 75 1D: jne 0x58836050
        __asm _emit 0x75
        __asm _emit 0x1d
        xor edi, edi
        mov dword ptr [ebp - 2508h], 755h
        inc edi
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 7C: je 0x588360c5
        __asm _emit 0x74
        __asm _emit 0x7c
        push 588f2090h
        ; Exact mapped bytes EB D5: jmp 0x58836025
        __asm _emit 0xeb
        __asm _emit 0xd5
        cmp eax, 130h
        ; Exact mapped bytes 75 1D: jne 0x58836074
        __asm _emit 0x75
        __asm _emit 0x1d
        xor edi, edi
        mov dword ptr [ebp - 2508h], 755h
        inc edi
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 58: je 0x588360c5
        __asm _emit 0x74
        __asm _emit 0x58
        push 588f20a0h
        ; Exact mapped bytes EB B1: jmp 0x58836025
        __asm _emit 0xeb
        __asm _emit 0xb1
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 48: je 0x588360c5
        __asm _emit 0x74
        __asm _emit 0x48
        push eax
        push 588f20c4h
        ; Exact mapped bytes E8 CB 62 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 F2 3F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 28: jmp 0x588360c5
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1F: je 0x588360c5
        __asm _emit 0x74
        __asm _emit 0x1f
        push eax
        push esi
        push 588f1e5ch
        ; Exact mapped bytes E8 A1 62 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 C8 3F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push 3
        inc ebx
        pop esi
        cmp ebx, esi
        ; Exact mapped bytes 0F 8C 17 FE FF FF: jl 0x58835ee8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 84 61 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4c4h]
        ; Exact mapped bytes E8 D9 92 00 00: call 0x5883f3ba
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2508h]
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
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 51 AF FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
