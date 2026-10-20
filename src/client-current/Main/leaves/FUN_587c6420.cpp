// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6420 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_587c6420() {
    __asm {
        push -1
        push 58981448h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
        push ebx
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
        push 0
        lea ecx, [esp + 1ch]
        ; Exact mapped bytes E8 AF B2 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb2
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D BC 85 A2 58 00: cmp dword ptr [0x58a285bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 8C 4A A2 58: mov ebx, dword ptr [0x58a24a8c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x8c
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 30h], 0
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 75 2D: jne 0x587c6499
        __asm _emit 0x75
        __asm _emit 0x2d
        push 0
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 89 B2 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb2
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D BC 85 A2 58 00: cmp dword ptr [0x58a285bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x587c6490
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes A1 B8 85 A2 58: mov eax, dword ptr [0x58a285b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        inc eax
        ; Exact mapped bytes A3 B8 85 A2 58: mov dword ptr [0x58a285b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A3 BC 85 A2 58: mov dword ptr [0x58a285bc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [esp + 14h]
        ; Exact mapped bytes E8 8F B2 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb2
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, dword ptr [esp + 38h]
        ; Exact mapped bytes 8B 35 BC 85 A2 58: mov esi, dword ptr [0x58a285bc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xbc
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edi]
        cmp esi, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 22: jae 0x587c64cc
        __asm _emit 0x73
        __asm _emit 0x22
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + esi*4]
        test ecx, ecx
        ; Exact mapped bytes 75 1C: jne 0x587c64d0
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 74 16: je 0x587c64d0
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 1D B3 1A 00: call 0x589717dc
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb3
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 12: jae 0x587c64d6
        __asm _emit 0x73
        __asm _emit 0x12
        mov edx, dword ptr [eax + 8]
        mov esi, dword ptr [edx + esi*4]
        ; Exact mapped bytes EB 06: jmp 0x587c64d2
        __asm _emit 0xeb
        __asm _emit 0x06
        xor ecx, ecx
        ; Exact mapped bytes EB E4: jmp 0x587c64b4
        __asm _emit 0xeb
        __asm _emit 0xe4
        mov esi, ecx
        test esi, esi
        ; Exact mapped bytes 75 6B: jne 0x587c6541
        __asm _emit 0x75
        __asm _emit 0x6b
        test ebx, ebx
        ; Exact mapped bytes 74 04: je 0x587c64de
        __asm _emit 0x74
        __asm _emit 0x04
        mov esi, ebx
        ; Exact mapped bytes EB 63: jmp 0x587c6541
        __asm _emit 0xeb
        __asm _emit 0x63
        lea eax, [esp + 10h]
        push edi
        push eax
        ; Exact mapped bytes E8 A7 FD FF FF: call 0x587c6290
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp eax, -1
        ; Exact mapped bytes 75 1D: jne 0x587c650e
        __asm _emit 0x75
        __asm _emit 0x1d
        push 5899ae84h
        lea ecx, [esp + 20h]
        ; Exact mapped bytes E8 D3 6A 1B 00: call 0x5897cfd2
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6a
        __asm _emit 0x1b
        __asm _emit 0x00
        push 589af080h
        lea ecx, [esp + 20h]
        push ecx
        ; Exact mapped bytes E8 6A 67 1B 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x67
        __asm _emit 0x1b
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        push 0
        lea ecx, [esp + 3ch]
        ; Exact mapped bytes 89 35 8C 4A A2 58: mov dword ptr [0x58a24a8c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x8c
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD B1 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb1
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c652f
        __asm _emit 0x73
        __asm _emit 0x04
        inc eax
        mov dword ptr [esi + 4], eax
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 F0 B1 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb1
        __asm _emit 0x1a
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 63 B3 1A 00: call 0x589718a1
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb3
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 30h], 0ffffffffh
        ; Exact mapped bytes E8 D6 B1 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb1
        __asm _emit 0x1a
        __asm _emit 0x00
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
        pop ebx
        add esp, 24h
        ret
    }
}
