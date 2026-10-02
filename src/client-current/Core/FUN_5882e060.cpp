// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E060 .. +0x405 bytes.
extern "C" __declspec(naked) void FUN_5882e060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        ; Exact mapped bytes 83 3D 74 5F 96 58 00: cmp dword ptr [0x58965f74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E2 03 00 00: je 0x5882e460
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 5F 96 58 00: cmp dword ptr [0x58965f78], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D5 03 00 00: je 0x5882e460
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 58h], 1
        push 1
        ; Exact mapped bytes FF 15 20 45 89 58: call dword ptr [0x58894520]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        sub eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 3B 0D C0 5F 90 58: cmp ecx, dword ptr [0x58905fc0]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 0F 86 94 01 00 00: jbe 0x5882e259
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 83 3D CC 60 96 58 00: cmp dword ptr [0x589660cc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 30: je 0x5882e107
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 15 CC 60 96 58: mov edx, dword ptr [0x589660cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D CC 60 96 58: mov ecx, dword ptr [0x589660cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes 83 3D 24 5F 96 58 00: cmp dword ptr [0x58965f24], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x5882e107
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes A1 24 5F 96 58: mov eax, dword ptr [0x58965f24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        sub eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 83 3D C4 60 96 58 00: cmp dword ptr [0x589660c4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x5882e22f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 5F 90 58: mov ecx, dword ptr [0x58905fc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        shl ecx, 1
        cmp dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 0F 83 FE 00 00 00: jae 0x5882e22f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 44 44 89 58: call dword ptr [0x58894444]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x5882e22f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 68 C5 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0xc5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 76 C6 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x76
        __asm _emit 0xc6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 83 3D B8 60 96 58 00: cmp dword ptr [0x589660b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x5882e192
        __asm _emit 0x74
        __asm _emit 0x10
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D 78 5F 96 58: mov ecx, dword ptr [0x58965f78]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F FA FF FF: call 0x5882dba0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes 8B 15 78 5F 96 58: mov edx, dword ptr [0x58965f78]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D C4 60 96 58: mov ecx, dword ptr [0x589660c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 72 F8 FF: call 0x587b5430
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        sub eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 83 3D 24 5F 96 58 00: cmp dword ptr [0x58965f24], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 52: je 0x5882e20f
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        ; Exact mapped bytes A1 78 5F 96 58: mov eax, dword ptr [0x58965f78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 72 F8 FF: call 0x587b5430
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], 200h
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 87 C5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x87
        __asm _emit 0xc5
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 DE C5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xde
        __asm _emit 0xc5
        __asm _emit 0xff
        shl eax, 10h
        or esi, eax
        mov dword ptr [ebp - 68h], esi
        lea ecx, [ebp - 74h]
        push ecx
        ; Exact mapped bytes 8B 15 C8 60 96 58: mov edx, dword ptr [0x589660c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D C8 60 96 58: mov ecx, dword ptr [0x589660c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 10h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED EB F8 FF: call 0x587bce10
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        sub eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 83 3D BC 60 96 58 00: cmp dword ptr [0x589660bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 15: je 0x5882e24d
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes C7 05 BC 60 96 58 00 00 00 00: mov dword ptr [0x589660bc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5882e259
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 03 05 C0 5F 90 58: add eax, dword ptr [0x58905fc0]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 34h], eax
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 50h]
        push ecx
        ; Exact mapped bytes FF 15 78 44 89 58: call dword ptr [0x58894478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 9F 01 00 00: je 0x5882e41b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes FF 15 50 44 89 58: call dword ptr [0x58894450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 76 01 00 00: je 0x5882e40a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes FF 15 74 44 89 58: call dword ptr [0x58894474]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 60 96 58: mov ecx, dword ptr [0x589660c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        add ecx, 1
        ; Exact mapped bytes 89 0D C0 60 96 58: mov dword ptr [0x589660c0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 200h
        ; Exact mapped bytes 77 33: ja 0x5882e2ef
        __asm _emit 0x77
        __asm _emit 0x33
        cmp dword ptr [ebp - 18h], 200h
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x5882e36d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        sub eax, 100h
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0fh
        ; Exact mapped bytes 0F 87 1F 01 00 00: ja 0x5882e3fd
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, byte ptr [ecx + 5882e480h]
        ; Exact mapped bytes FF 24 95 78 E4 82 58: jmp dword ptr [edx*4 + 0x5882e478]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xe4
        __asm _emit 0x82
        __asm _emit 0x58
        cmp dword ptr [ebp - 18h], 462h
        ; Exact mapped bytes 77 32: ja 0x5882e32a
        __asm _emit 0x77
        __asm _emit 0x32
        cmp dword ptr [ebp - 18h], 462h
        ; Exact mapped bytes 74 2E: je 0x5882e32f
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 18h]
        sub eax, 201h
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 90h
        ; Exact mapped bytes 0F 87 E4 00 00 00: ja 0x5882e3fd
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, byte ptr [ecx + 5882e498h]
        ; Exact mapped bytes FF 24 95 90 E4 82 58: jmp dword ptr [edx*4 + 0x5882e490]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x82
        __asm _emit 0x58
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x5882e3fd
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D0 60 96 58 00: cmp dword ptr [0x589660d0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x5882e34e
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes 8B 0D D0 60 96 58: mov ecx, dword ptr [0x589660d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 F3 FF FF: call 0x5882d710
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1A: jmp 0x5882e368
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 588be1dch
        push 588be81ch
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x5882e408
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C8 60 96 58 00: cmp dword ptr [0x589660c8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5882e3fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 24 5F 96 58 00: cmp dword ptr [0x58965f24], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 18: je 0x5882e39b
        __asm _emit 0x74
        __asm _emit 0x18
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        cmp dword ptr [ebp - 4ch], 101h
        ; Exact mapped bytes 75 3F: jne 0x5882e3e3
        __asm _emit 0x75
        __asm _emit 0x3f
        cmp dword ptr [ebp - 48h], 2ch
        ; Exact mapped bytes 75 39: jne 0x5882e3e3
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D C8 60 96 58: mov ecx, dword ptr [0x589660c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 85 66 C5 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xc5
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 0F: je 0x5882e3cf
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 78 66 C5 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x66
        __asm _emit 0xc5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB E4: jmp 0x5882e3b3
        __asm _emit 0xeb
        __asm _emit 0xe4
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 18: jmp 0x5882e3fb
        __asm _emit 0xeb
        __asm _emit 0x18
        lea ecx, [ebp - 50h]
        push ecx
        ; Exact mapped bytes 8B 15 C8 60 96 58: mov edx, dword ptr [0x589660c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D C8 60 96 58: mov ecx, dword ptr [0x589660c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 10h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 0B: jmp 0x5882e408
        __asm _emit 0xeb
        __asm _emit 0x0b
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes FF 15 5C 44 89 58: call dword ptr [0x5889445c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 0C: jmp 0x5882e416
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes E8 C1 F7 FF FF: call 0x5882dbd0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 51: jmp 0x5882e467
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes E9 47 FE FF FF: jmp 0x5882e262
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        sub eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        sub eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D C0 5F 90 58: mov ecx, dword ptr [0x58905fc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        sub ecx, dword ptr [ebp - 24h]
        cmp ecx, 3
        ; Exact mapped bytes 76 09: jbe 0x5882e44a
        __asm _emit 0x76
        __asm _emit 0x09
        push 1
        ; Exact mapped bytes FF 15 40 42 89 58: call dword ptr [0x58894240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 5B FC FF FF: jmp 0x5882e0aa
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes FF 15 1C 45 89 58: call dword ptr [0x5889451c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 1
        ; Exact mapped bytes EB 09: jmp 0x5882e467
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes EB 07: jmp 0x5882e467
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E8 6B F7 FF FF: call 0x5882dbd0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
