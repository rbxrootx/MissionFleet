// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58833A7F .. +0x5E3 bytes.
extern "C" __declspec(naked) void FUN_58833a7f_58833A7F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2b8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        push edi
        lea eax, [ebp - 298h]
        xor ebx, ebx
        push eax
        push 1
        push ebx
        push 588f1954h
        ; Exact mapped bytes E8 A8 88 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 20 40 89 58: mov esi, dword ptr [0x58894020]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        pop ecx
        push eax
        push 80000002h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 3D 24 40 89 58: mov edi, dword ptr [0x58894024]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 6A: jne 0x58833b2e
        __asm _emit 0x75
        __asm _emit 0x6a
        lea eax, [ebp - 2a0h]
        mov dword ptr [ebp - 2a0h], 104h
        push eax
        lea eax, [ebp - 190h]
        push eax
        push ebx
        push ebx
        push 588f1980h
        ; Exact mapped bytes E8 6B 88 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 298h]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x58833b22
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 39 1D EC 83 96 58: cmp dword ptr [0x589683ec], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 24: je 0x58833b22
        __asm _emit 0x74
        __asm _emit 0x24
        lea eax, [ebp - 190h]
        push eax
        push 588f198ch
        ; Exact mapped bytes E8 44 88 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x88
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
        ; Exact mapped bytes E8 6B 65 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp - 298h]
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 298h]
        push eax
        push 3
        push ebx
        push 588f19a0h
        ; Exact mapped bytes E8 11 88 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 80000002h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 0F 85 FC 04 00 00: jne 0x5883404f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 2a0h]
        mov esi, 104h
        push eax
        lea eax, [ebp - 190h]
        mov dword ptr [ebp - 2a0h], esi
        push eax
        push ebx
        push ebx
        push 588f1a04h
        ; Exact mapped bytes E8 DB 87 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 298h]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 45: jne 0x58833bcb
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 39 1D EC 83 96 58: cmp dword ptr [0x589683ec], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 3D: je 0x58833bcb
        __asm _emit 0x74
        __asm _emit 0x3d
        movzx eax, byte ptr [ebp - 18dh]
        push eax
        movzx eax, byte ptr [ebp - 18eh]
        push eax
        movzx eax, byte ptr [ebp - 18fh]
        push eax
        movzx eax, byte ptr [ebp - 190h]
        push eax
        push 588f1a14h
        ; Exact mapped bytes E8 9B 87 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x87
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
        ; Exact mapped bytes E8 C2 64 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        push esi
        lea eax, [ebp - 294h]
        push eax
        ; Exact mapped bytes FF 15 FC 43 89 58: call dword ptr [0x588943fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588f1a38h
        ; Exact mapped bytes E8 70 87 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 294h]
        push eax
        ; Exact mapped bytes E8 C0 5E 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 294h]
        mov edi, ebx
        push ebx
        push 80h
        push 3
        push ebx
        push 3
        push 80000000h
        push eax
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 75 35: jne 0x58833c4e
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 39 1D EC 83 96 58: cmp dword ptr [0x589683ec], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 64: je 0x58833c85
        __asm _emit 0x74
        __asm _emit 0x64
        lea eax, [ebp - 294h]
        push eax
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 588f06c0h
        ; Exact mapped bytes E8 1A 87 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x87
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
        ; Exact mapped bytes E8 41 64 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 37: jmp 0x58833c85
        __asm _emit 0xeb
        __asm _emit 0x37
        push ebx
        push esi
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        ; Exact mapped bytes 39 1D EC 83 96 58: cmp dword ptr [0x589683ec], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1E: je 0x58833c7e
        __asm _emit 0x74
        __asm _emit 0x1e
        push edi
        push 588f06d8h
        ; Exact mapped bytes E8 E8 86 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x86
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
        ; Exact mapped bytes E8 0F 64 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push esi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 588f18b4h
        ; Exact mapped bytes E8 C4 86 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 D4 42 89 58: call dword ptr [0x588942d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x58833dc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f18c4h
        ; Exact mapped bytes E8 A8 86 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 E3 2E 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f18e0h
        mov dword ptr [ebp - 29ch], eax
        ; Exact mapped bytes E8 90 86 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 CB 2E 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f18f8h
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes E8 78 86 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 B3 2E 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 29ch]
        mov dword ptr [ebp - 2b0h], eax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x58833dc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2a4h], ebx
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x58833dc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x58833dc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 2ach]
        push eax
        lea eax, [ebp - 294h]
        push eax
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov dword ptr [ebp - 2a8h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x58833dc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 13 D3 FF FF: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 2a8h]
        mov dword ptr [ebp - 29ch], eax
        lea eax, [ebp - 294h]
        push dword ptr [ebp - 2ach]
        push eax
        ; Exact mapped bytes FF 95 5C FD FF FF: call dword ptr [ebp - 0x2a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 2b8h]
        push eax
        lea eax, [ebp - 2b4h]
        push eax
        push 588f03c8h
        push dword ptr [ebp - 29ch]
        ; Exact mapped bytes FF 95 50 FD FF FF: call dword ptr [ebp - 0x2b0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2b4h]
        cmp dword ptr [ecx], 0feef04bdh
        ; Exact mapped bytes 75 39: jne 0x58833db6
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 39 1D EC 83 96 58: cmp dword ptr [0x589683ec], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 31: je 0x58833db6
        __asm _emit 0x74
        __asm _emit 0x31
        movzx eax, word ptr [ecx + 0ch]
        push eax
        movzx eax, word ptr [ecx + 0eh]
        push eax
        movzx eax, word ptr [ecx + 8]
        push eax
        movzx eax, word ptr [ecx + 0ah]
        push eax
        push 588f1a4ch
        ; Exact mapped bytes E8 B0 85 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x85
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
        ; Exact mapped bytes E8 D7 62 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        push dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 8A D2 FF FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push esi
        ; Exact mapped bytes FF 15 E8 42 89 58: call dword ptr [0x588942e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp edi, 18d10h
        ; Exact mapped bytes 0F 85 26 01 00 00: jne 0x58833efb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 1D EC 83 96 58: cmp dword ptr [0x589683ec], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1C: je 0x58833df9
        __asm _emit 0x74
        __asm _emit 0x1c
        push 588f1a64h
        ; Exact mapped bytes E8 6C 85 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 94 62 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 88h
        lea eax, [ebp - 8ch]
        mov dword ptr [ebp - 8ch], 100ec72ah
        push eax
        push 3
        push ebx
        mov dword ptr [ebp - 88h], 0cda7be06h
        mov dword ptr [ebp - 84h], 0f66faf5h
        mov dword ptr [ebp - 80h], 418aa386h
        mov dword ptr [ebp - 7ch], 6eafc758h
        mov dword ptr [ebp - 78h], 3d92c1f5h
        mov dword ptr [ebp - 74h], 81a856f5h
        mov dword ptr [ebp - 70h], 7c892e48h
        mov dword ptr [ebp - 6ch], 0e3533604h
        mov dword ptr [ebp - 68h], 34167964h
        mov dword ptr [ebp - 64h], 0aeb0e87dh
        mov dword ptr [ebp - 60h], 0ebc53cd7h
        mov dword ptr [ebp - 5ch], 0f22d257ah
        mov dword ptr [ebp - 58h], 0f2f4e4b8h
        mov dword ptr [ebp - 54h], 0dd0b95cdh
        mov dword ptr [ebp - 50h], 279f0a4fh
        mov dword ptr [ebp - 4ch], 52f6b519h
        mov dword ptr [ebp - 48h], 2c017716h
        mov dword ptr [ebp - 44h], 0d39aaef6h
        mov dword ptr [ebp - 40h], 226abf7fh
        mov dword ptr [ebp - 3ch], 0dbf36b91h
        mov dword ptr [ebp - 38h], 0d21c0d93h
        mov dword ptr [ebp - 34h], 14b8b500h
        mov dword ptr [ebp - 30h], 949e3e1ch
        mov dword ptr [ebp - 2ch], 0c68ea97bh
        mov dword ptr [ebp - 28h], 0fa2bf584h
        mov dword ptr [ebp - 24h], 0a50095b5h
        mov dword ptr [ebp - 20h], 8c65b295h
        mov dword ptr [ebp - 1ch], 771931h
        mov dword ptr [ebp - 18h], 924e5bcdh
        mov dword ptr [ebp - 14h], 6642e468h
        mov dword ptr [ebp - 10h], 93d4b517h
        push 588f1a80h
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x58834028
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 17110h
        ; Exact mapped bytes 0F 85 3C 01 00 00: jne 0x58834043
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 1D EC 83 96 58: cmp dword ptr [0x589683ec], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1C: je 0x58833f2b
        __asm _emit 0x74
        __asm _emit 0x1c
        push 588f1a90h
        ; Exact mapped bytes E8 3A 84 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 62 61 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 88h
        lea eax, [ebp - 8ch]
        mov dword ptr [ebp - 8ch], 5369715fh
        push eax
        push 3
        push ebx
        mov dword ptr [ebp - 88h], 0ac548e8ah
        mov dword ptr [ebp - 84h], 5a653f09h
        mov dword ptr [ebp - 80h], 15778d26h
        mov dword ptr [ebp - 7ch], 7bb689eh
        mov dword ptr [ebp - 78h], 0b7f08fedh
        mov dword ptr [ebp - 74h], 150599f1h
        mov dword ptr [ebp - 70h], 0d8a86480h
        mov dword ptr [ebp - 6ch], 0a958c387h
        mov dword ptr [ebp - 68h], 0b3fe26ceh
        mov dword ptr [ebp - 64h], 81a3d707h
        mov dword ptr [ebp - 60h], 76eb8beh
        mov dword ptr [ebp - 5ch], 17446815h
        mov dword ptr [ebp - 58h], 758081beh
        mov dword ptr [ebp - 54h], 21abdba1h
        mov dword ptr [ebp - 50h], 9cbc1fd1h
        mov dword ptr [ebp - 4ch], 0e5f0491dh
        mov dword ptr [ebp - 48h], 0b57f49ddh
        mov dword ptr [ebp - 44h], 39f009e4h
        mov dword ptr [ebp - 40h], 836b2a94h
        mov dword ptr [ebp - 3ch], 0e56db0fh
        mov dword ptr [ebp - 38h], 129f61a3h
        mov dword ptr [ebp - 34h], 9020d7d4h
        mov dword ptr [ebp - 30h], 99c69b54h
        mov dword ptr [ebp - 2ch], 0d503440ch
        mov dword ptr [ebp - 28h], 0a02a9a1bh
        mov dword ptr [ebp - 24h], 0f61c8ca2h
        mov dword ptr [ebp - 20h], 2e57a568h
        mov dword ptr [ebp - 1ch], 8fa54011h
        mov dword ptr [ebp - 18h], 6aec7177h
        mov dword ptr [ebp - 14h], 1ecba069h
        mov dword ptr [ebp - 10h], 5e08e20h
        push 588f1aach
        mov dword ptr [ebp - 0ch], ebx
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes E8 20 83 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 298h]
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov bl, 1
        push dword ptr [ebp - 298h]
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov al, bl
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 F2 CF FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
