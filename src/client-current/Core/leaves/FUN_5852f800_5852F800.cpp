// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5852F800 .. +0x4CE bytes.
extern "C" __declspec(naked) void FUN_5852f800_5852F800() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588827d4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 44h
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
        push 9
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 3C 83 F9 FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, 1
        imul ecx, eax, 0
        mov byte ptr [ecx + 589604e0h], 42h
        mov edx, 1
        shl edx, 0
        mov byte ptr [edx + 589604e0h], 0
        ; Exact mapped bytes A1 58 06 96 58: mov eax, dword ptr [0x58960658]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 83 3D 5C 06 96 58 00: cmp dword ptr [0x5896065c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x5852f882
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 5C 06 96 58: mov ecx, dword ptr [0x5896065c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 5C 06 96 58: mov ecx, dword ptr [0x5896065c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 83 3D EC 90 94 58 00: cmp dword ptr [0x589490ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x5852f8b3
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 0D EC 90 94 58: mov dword ptr [0x589490ec], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 15 64 05 96 58: mov dword ptr [0x58960564], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 27 00 00: call 0x58532030
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5852f8e3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D AD 00 00 00: jge 0x5852f99a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 0c4h], 0
        ; Exact mapped bytes 75 60: jne 0x5852f95d
        __asm _emit 0x75
        __asm _emit 0x60
        push 54h
        ; Exact mapped bytes E8 00 17 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x17
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 22: je 0x5852f939
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        sub ecx, 0ah
        push ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EC 29 F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x29
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852f940
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx + ecx*4 + 0c4h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c4h]
        mov dword ptr [ebp - 28h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 36 5C 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c4h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AC 64 F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x64
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x5852f8da
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 121b8h]
        mov dword ptr [ebp - 30h], edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6E 5C 28 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 121b8h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E8 5B 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 38h], edx
        push 69h
        push 0a5h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 34 5C 28 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 3ch], edx
        push 69h
        push 0a5h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 10 5C 28 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 40h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 7E 5B 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5b
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 44h], eax
        push 101h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5C 5B 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5b
        __asm _emit 0x28
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 52 5B 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x5b
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 98h], 40000000h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 0
        push 84h
        push 0
        push 589604e0h
        ; Exact mapped bytes E8 7D D3 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd3
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        push 1e0h
        push 0
        push 58947a38h
        ; Exact mapped bytes E8 69 D3 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd3
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        push 3c8h
        push 0
        push 58948d20h
        ; Exact mapped bytes E8 55 D3 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd3
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        push 1ch
        push 0
        push 589605ach
        ; Exact mapped bytes E8 44 D3 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd3
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5852fae1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 19h
        ; Exact mapped bytes 7D 36: jge 0x5852fb1d
        __asm _emit 0x7d
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx*4 + 58948c60h], 0
        ; Exact mapped bytes 74 27: je 0x5852fb1b
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax*4 + 58948c60h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 41 15 30 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax*4 + 58948c60h], 0
        ; Exact mapped bytes EB BB: jmp 0x5852fad8
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12134h]
        mov dword ptr [ebp - 4ch], edx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AA 65 F5 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x65
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12138h]
        mov dword ptr [ebp - 50h], ecx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 91 65 F5 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x65
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 12134h]
        ; Exact mapped bytes E8 A3 09 FA FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12138h]
        ; Exact mapped bytes E8 A5 1F 29 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1f
        __asm _emit 0x29
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 11 25 00: call 0x58780d00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x11
        __asm _emit 0x25
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 06 96 58: mov ecx, dword ptr [0x58960624]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F DC FD FF: call 0x5850d810
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 75 FA FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x75
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D C2 17 00: call 0x586abe00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc2
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 9D FF FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x5852fc15
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 96 F8 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B 8B 13 00: call 0x586686c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x8b
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 96 F8 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F9 89 13 00: call 0x586685c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x89
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 73 FA FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 15 13 00: call 0x586610f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x15
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 73 FA FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 14 13 00: call 0x58660ff0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 92 F8 FF: call 0x584b8e70
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F B9 0E 00: call 0x5861b530
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb9
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 9B 07 00: call 0x585a9810
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 59 06 00: call 0x585955a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 19 03 00: call 0x58561590
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x5852fc59
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 F3 03 00: call 0x5856ef60
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 ED FC FF: call 0x584fe9d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 23 00 00: call 0x58532010
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], 1
        push 0ffffh
        push 588a4afch
        ; Exact mapped bytes E8 70 23 FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 74 82 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 4F 19 00: call 0x586c4c20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 121a8h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 12148h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
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
