// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58833660 .. +0x33F bytes.
extern "C" __declspec(naked) void FUN_58833660_58833660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes E8 C4 8B 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 20 84 96 58: mov eax, dword ptr [0x58968420]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        mov esi, 755h
        cmp eax, 3
        ; Exact mapped bytes 72 09: jb 0x58833694
        __asm _emit 0x72
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 9C 7D 96 58 01: cmp dword ptr [0x58967d9c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 72 1E: jb 0x588336b2
        __asm _emit 0x72
        __asm _emit 0x1e
        push eax
        push 588f0d7ch
        ; Exact mapped bytes E8 B4 8C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [edi + 28h]
        push eax
        ; Exact mapped bytes E8 E0 69 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 20 84 96 58: mov eax, dword ptr [0x58968420]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        add esp, 0ch
        inc eax
        ; Exact mapped bytes 83 3D B8 7D 96 58 00: cmp dword ptr [0x58967db8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes A3 20 84 96 58: mov dword ptr [0x58968420], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1A: je 0x588336db
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 83 3D BC 7D 96 58 00: cmp dword ptr [0x58967dbc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 18 02 00 00: jne 0x588338e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C0 7D 96 58 00: cmp dword ptr [0x58967dc0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 0B 02 00 00: jne 0x588338e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi + 1], 0
        ; Exact mapped bytes 0F 85 01 02 00 00: jne 0x588338e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 75 2A: jne 0x58833714
        __asm _emit 0x75
        __asm _emit 0x2a
        cmp eax, 3
        ; Exact mapped bytes 0F 82 F3 01 00 00: jb 0x588338e6
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f0d90h
        ; Exact mapped bytes E8 56 8C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [edi + 28h]
        push eax
        ; Exact mapped bytes E8 83 69 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov esi, 262h
        ; Exact mapped bytes E9 D2 01 00 00: jmp 0x588338e6
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 2098h], 0
        ; Exact mapped bytes 75 21: jne 0x5883373e
        __asm _emit 0x75
        __asm _emit 0x21
        push 588f0dach
        ; Exact mapped bytes E8 2C 8C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [edi + 28h]
        push eax
        ; Exact mapped bytes E8 59 69 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov esi, 28ah
        ; Exact mapped bytes E9 A8 01 00 00: jmp 0x588338e6
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 90 7D 96 58: mov eax, dword ptr [0x58967d90]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5883378d
        __asm _emit 0x74
        __asm _emit 0x46
        and dword ptr [ebp - 108h], 0
        lea ecx, [ebp - 108h]
        push ecx
        push eax
        ; Exact mapped bytes FF 15 F4 43 89 58: call dword ptr [0x588943f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5883378d
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp - 108h], 103h
        ; Exact mapped bytes 74 21: je 0x5883378d
        __asm _emit 0x74
        __asm _emit 0x21
        push 588f0dc8h
        ; Exact mapped bytes E8 DD 8B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [edi + 28h]
        push eax
        ; Exact mapped bytes E8 0A 69 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov esi, 26ch
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x588338e6
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push 588f0de4h
        ; Exact mapped bytes E8 BB 8B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 00 44 89 58: mov ebx, dword ptr [0x58894400]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        pop ecx
        push eax
        push 0
        push 100000h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 42: jne 0x588337ef
        __asm _emit 0x75
        __asm _emit 0x42
        push 588f0df8h
        ; Exact mapped bytes E8 9C 8B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 0
        push 100000h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x588337ef
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 588f0e04h
        ; Exact mapped bytes E8 7C 8B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [edi + 28h]
        push eax
        ; Exact mapped bytes E8 A8 68 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov esi, 294h
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x588338e5
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 588f0e28h
        ; Exact mapped bytes E8 53 8B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 0
        push 100000h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 42: jne 0x58833851
        __asm _emit 0x75
        __asm _emit 0x42
        push 588f0e3ch
        ; Exact mapped bytes E8 3A 8B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 0
        push 100000h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x58833851
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 588f0e48h
        ; Exact mapped bytes E8 1A 8B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [edi + 28h]
        push eax
        ; Exact mapped bytes E8 46 68 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov esi, 276h
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x588338e5
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A1 A0 7D 96 58: mov eax, dword ptr [0x58967da0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x588338e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 24 84 96 58 00: cmp dword ptr [0x58968424], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 23: jne 0x58833891
        __asm _emit 0x75
        __asm _emit 0x23
        push eax
        push 588f0e6ch
        ; Exact mapped bytes E8 DA 8A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [edi + 28h]
        push eax
        ; Exact mapped bytes E8 06 68 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes C7 05 24 84 96 58 01 00 00 00: mov dword ptr [0x58968424], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D B8 42 89 58: mov ebx, dword ptr [0x588942b8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 2B 05 AC 7D 96 58: sub eax, dword ptr [0x58967dac]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 A0 7D 96 58: cmp eax, dword ptr [0x58967da0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 76 3E: jbe 0x588338e5
        __asm _emit 0x76
        __asm _emit 0x3e
        ; Exact mapped bytes A1 B0 7D 96 58: mov eax, dword ptr [0x58967db0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 E8 60 90 58: cmp dword ptr [0x589060e8], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 77 20: ja 0x588338d4
        __asm _emit 0x77
        __asm _emit 0x20
        push eax
        push 588f0e8ch
        ; Exact mapped bytes E8 94 8A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [edi + 28h]
        push eax
        ; Exact mapped bytes E8 C0 67 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov esi, 29eh
        ; Exact mapped bytes EB 11: jmp 0x588338e5
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes A3 AC 7D 96 58: mov dword ptr [0x58967dac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A1 E8 60 90 58: mov eax, dword ptr [0x589060e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A3 B0 7D 96 58: mov dword ptr [0x58967db0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        pop ebx
        ; Exact mapped bytes A1 A4 7D 96 58: mov eax, dword ptr [0x58967da4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x58833988
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3D 28 84 96 58 00: cmp byte ptr [0x58968428], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x58833988
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 08: jne 0x5883390d
        __asm _emit 0x75
        __asm _emit 0x08
        cmp esi, 755h
        ; Exact mapped bytes 75 05: jne 0x58833912
        __asm _emit 0x75
        __asm _emit 0x05
        cmp eax, 3
        ; Exact mapped bytes 75 48: jne 0x5883395a
        __asm _emit 0x75
        __asm _emit 0x48
        push 588f0ebch
        ; Exact mapped bytes E8 37 8A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 104h]
        push 100h
        push eax
        ; Exact mapped bytes E8 62 3E 02 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 104h]
        ; Exact mapped bytes C6 05 28 84 96 58 01: mov byte ptr [0x58968428], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        push eax
        lea eax, [esi + 787789e0h]
        push 1
        push eax
        ; Exact mapped bytes E8 C4 23 00 00: call 0x58835d10
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 755h
        ; Exact mapped bytes 75 32: jne 0x58833988
        __asm _emit 0x75
        __asm _emit 0x32
        mov esi, eax
        ; Exact mapped bytes EB 2E: jmp 0x58833988
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp eax, 2
        ; Exact mapped bytes 75 08: jne 0x58833967
        __asm _emit 0x75
        __asm _emit 0x08
        cmp esi, 755h
        ; Exact mapped bytes 75 05: jne 0x5883396c
        __asm _emit 0x75
        __asm _emit 0x05
        cmp eax, 4
        ; Exact mapped bytes 75 1C: jne 0x58833988
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        lea ecx, [esi + 787789e0h]
        ; Exact mapped bytes C6 05 28 84 96 58 01: mov byte ptr [0x58968428], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        push 0
        push ecx
        ; Exact mapped bytes E8 8B 23 00 00: call 0x58835d10
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E8 CD 88 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov eax, esi
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 B5 D6 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
