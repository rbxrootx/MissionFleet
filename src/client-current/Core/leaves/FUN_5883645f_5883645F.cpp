// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883645F .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_5883645f_5883645F() {
    __asm {
        push esi
        push edi
        push 588f16e0h
        xor edi, edi
        ; Exact mapped bytes E8 E6 5E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5e
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
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 08: jne 0x58836483
        __asm _emit 0x75
        __asm _emit 0x08
        push 2
        pop eax
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x58836597
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f16f0h
        ; Exact mapped bytes E8 C6 5E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 01 07 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 FC 83 96 58: mov dword ptr [0x589683fc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 69: je 0x58836507
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 30 45 89 58: mov edx, dword ptr [0x58894530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 15 10 84 96 58: mov dword ptr [0x58968410], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 2A: je 0x588364de
        __asm _emit 0x74
        __asm _emit 0x2a
        push edx
        push eax
        push 588f16fch
        ; Exact mapped bytes E8 93 5E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x5e
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
        ; Exact mapped bytes E8 BA 3B 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 FC 83 96 58: mov eax, dword ptr [0x589683fc]
        __asm _emit 0xa1
        __asm _emit 0xfc
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
        cmp eax, esi
        ; Exact mapped bytes 73 25: jae 0x58836507
        __asm _emit 0x73
        __asm _emit 0x25
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x58836504
        __asm _emit 0x74
        __asm _emit 0x1e
        push esi
        push 588f1710h
        ; Exact mapped bytes E8 62 5E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5e
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
        ; Exact mapped bytes E8 89 3B 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor edi, edi
        inc edi
        push 588f172ch
        ; Exact mapped bytes E8 42 5E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 7D 06 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 00 84 96 58: mov dword ptr [0x58968400], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x58836589
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 40 45 89 58: mov edx, dword ptr [0x58894540]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 15 14 84 96 58: mov dword ptr [0x58968414], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 2A: je 0x58836562
        __asm _emit 0x74
        __asm _emit 0x2a
        push edx
        push eax
        push 588f1738h
        ; Exact mapped bytes E8 0F 5E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x5e
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
        ; Exact mapped bytes E8 36 3B 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3b
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
        ; Exact mapped bytes A1 00 84 96 58: mov eax, dword ptr [0x58968400]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, esi
        ; Exact mapped bytes 73 23: jae 0x58836589
        __asm _emit 0x73
        __asm _emit 0x23
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x58836588
        __asm _emit 0x74
        __asm _emit 0x1e
        push esi
        push 588f174ch
        ; Exact mapped bytes E8 DE 5D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xde
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
        ; Exact mapped bytes E8 05 3B 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        inc edi
        xor eax, eax
        ; Exact mapped bytes C6 05 18 84 96 58 01: mov byte ptr [0x58968418], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        test edi, edi
        sete al
        pop edi
        pop esi
        ret
    }
}
