// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524A6B .. +0x272 bytes.
extern "C" __declspec(naked) void FUN_00524a6b_00524A6B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 300h
        push 5c8174h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 D6 66 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x524aa7
        __asm _emit 0x74
        __asm _emit 0x14
        push 301h
        push 5c8174h
        ; Exact mapped bytes E8 5E FF 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524aa7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x524a8a
        __asm _emit 0x75
        __asm _emit 0xdd
        push 10h
        ; Exact mapped bytes E8 47 29 FD FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x524acc
        __asm _emit 0x75
        __asm _emit 0x14
        push 304h
        push 5c8174h
        ; Exact mapped bytes E8 39 FF 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524acc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x524aad
        __asm _emit 0x75
        __asm _emit 0xdb
        push 3c000h
        ; Exact mapped bytes E8 1F 29 FD FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 11 0A 01 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0A: je 0x524b02
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1E 8B FE FF: call 0x50d620
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 3B 70 01 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 6D 8E FE FF: call 0x50d984
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9C F6 FF FF: call 0x5241be
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], eax
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 21: je 0x524b5c
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 54 26 5E 00: call dword ptr [0x5e2654]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x524b5c
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes FF 15 1C 27 5E 00: call dword ptr [0x5e271c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 10: je 0x524b7b
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 0
        push 1fh
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 24h]
        or al, 10h
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 93 D7 FC FF: call 0x4f232f
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        or ch, 4
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 24h]
        or ecx, 10h
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 B4 1E 5E 00: call dword ptr [0x5e1eb4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        and dh, 0fbh
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes E8 3D D8 FC FF: call 0x4f2421
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x524bf0
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 1F: jne 0x524c0f
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 5c82c0h
        ; Exact mapped bytes E8 17 B0 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb0
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 24h]
        and al, 0efh
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x524c56
        __asm _emit 0x74
        __asm _emit 0x2f
        mov dword ptr [ebp - 28h], 4
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C8 A1 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x524c47
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 28h]
        or al, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FA 22 FD FF: call 0x4f6f4d
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 17: je 0x524c76
        __asm _emit 0x74
        __asm _emit 0x17
        push 97h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1A A6 FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0C: je 0x524c88
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 18: je 0x524ca6
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes FF 15 24 27 5E 00: call dword ptr [0x5e2724]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 0A: jne 0x524ca6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 20 27 5E 00: call dword ptr [0x5e2720]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0A: je 0x524cc1
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5F 89 FE FF: call 0x50d620
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0C: je 0x524cd3
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
