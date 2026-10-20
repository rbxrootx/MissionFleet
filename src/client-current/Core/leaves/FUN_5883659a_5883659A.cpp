// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883659A .. +0x23C bytes.
extern "C" __declspec(naked) void FUN_5883659a_5883659A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        push 588f15a4h
        xor esi, esi
        ; Exact mapped bytes E8 A6 5D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D E0 42 89 58: mov edi, dword ptr [0x588942e0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        pop ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 588f15b8h
        mov ebx, eax
        ; Exact mapped bytes E8 90 5D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 588f15c8h
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 7F 5D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 08: jne 0x588365e6
        __asm _emit 0x75
        __asm _emit 0x08
        push 2
        pop eax
        ; Exact mapped bytes E9 E9 01 00 00: jmp 0x588367cf
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f15dch
        ; Exact mapped bytes E8 63 5D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 9E 05 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 F4 83 96 58: mov dword ptr [0x589683f4], eax
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 76: je 0x58836677
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 74 41 89 58: mov edx, dword ptr [0x58894174]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 15 08 84 96 58: mov dword ptr [0x58968408], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 2A: je 0x58836641
        __asm _emit 0x74
        __asm _emit 0x2a
        push edx
        push eax
        push 588f15f8h
        ; Exact mapped bytes E8 30 5D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5d
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
        ; Exact mapped bytes E8 57 3A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 83 96 58: mov eax, dword ptr [0x589683f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, edi
        ; Exact mapped bytes 73 32: jae 0x58836677
        __asm _emit 0x73
        __asm _emit 0x32
        cmp dword ptr [ebp - 4], esi
        ; Exact mapped bytes 75 2D: jne 0x58836677
        __asm _emit 0x75
        __asm _emit 0x2d
        test ebx, ebx
        ; Exact mapped bytes 74 04: je 0x58836652
        __asm _emit 0x74
        __asm _emit 0x04
        cmp eax, ebx
        ; Exact mapped bytes 73 25: jae 0x58836677
        __asm _emit 0x73
        __asm _emit 0x25
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x58836674
        __asm _emit 0x74
        __asm _emit 0x1e
        push edi
        push 588f1608h
        ; Exact mapped bytes E8 F2 5C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5c
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
        ; Exact mapped bytes E8 19 3A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor esi, esi
        inc esi
        push 588f1620h
        ; Exact mapped bytes E8 D2 5C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 0D 05 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 F0 83 96 58: mov dword ptr [0x589683f0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 79: je 0x5883670b
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 B8 42 89 58: mov edx, dword ptr [0x588942b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 15 04 84 96 58: mov dword ptr [0x58968404], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 2A: je 0x588366d2
        __asm _emit 0x74
        __asm _emit 0x2a
        push edx
        push eax
        push 588f1634h
        ; Exact mapped bytes E8 9F 5C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x5c
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
        ; Exact mapped bytes E8 C6 39 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes A1 F0 83 96 58: mov eax, dword ptr [0x589683f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, edi
        ; Exact mapped bytes 73 35: jae 0x5883670b
        __asm _emit 0x73
        __asm _emit 0x35
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 2F: jne 0x5883670b
        __asm _emit 0x75
        __asm _emit 0x2f
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x588366e8
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 39 1D F4 83 96 58: cmp dword ptr [0x589683f4], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 23: jae 0x5883670b
        __asm _emit 0x73
        __asm _emit 0x23
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x5883670a
        __asm _emit 0x74
        __asm _emit 0x1e
        push edi
        push 588f1644h
        ; Exact mapped bytes E8 5C 5C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5c
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
        ; Exact mapped bytes E8 83 39 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        inc esi
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        push 588f165ch
        ; Exact mapped bytes E8 38 5C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x588367c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f166ch
        ; Exact mapped bytes E8 1C 5C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 57 04 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 F8 83 96 58: mov dword ptr [0x589683f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 79: je 0x588367c1
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 24 45 89 58: mov edx, dword ptr [0x58894524]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 15 0C 84 96 58: mov dword ptr [0x5896840c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 2A: je 0x58836788
        __asm _emit 0x74
        __asm _emit 0x2a
        push edx
        push eax
        push 588f167ch
        ; Exact mapped bytes E8 E9 5B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5b
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
        ; Exact mapped bytes E8 10 39 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes A1 F8 83 96 58: mov eax, dword ptr [0x589683f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, edi
        ; Exact mapped bytes 73 35: jae 0x588367c1
        __asm _emit 0x73
        __asm _emit 0x35
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 2F: jne 0x588367c1
        __asm _emit 0x75
        __asm _emit 0x2f
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x5883679e
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 39 1D F4 83 96 58: cmp dword ptr [0x589683f4], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 23: jae 0x588367c1
        __asm _emit 0x73
        __asm _emit 0x23
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x588367c0
        __asm _emit 0x74
        __asm _emit 0x1e
        push edi
        push 588f168ch
        ; Exact mapped bytes E8 A6 5B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5b
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
        ; Exact mapped bytes E8 CD 38 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        inc esi
        xor eax, eax
        ; Exact mapped bytes C6 05 97 7D 96 58 01: mov byte ptr [0x58967d97], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x97
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        test esi, esi
        sete al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
