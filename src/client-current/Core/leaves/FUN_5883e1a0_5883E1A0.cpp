// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E1A0 .. +0x33D bytes.
extern "C" __declspec(naked) void FUN_5883e1a0_5883E1A0() {
    __asm {
        push 28h
        mov eax, 58892ba0h
        ; Exact mapped bytes E8 BF 43 FF FF: call 0x5883256b
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, ecx
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 74 0B: je 0x5883e1d7
        __asm _emit 0x74
        __asm _emit 0x0b
        push 58968e70h
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor ebx, ebx
        mov dword ptr [ebp - 4], ebx
        cmp dword ptr [esi + 50h], ebx
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x5883e2e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 54h]
        mov ecx, esi
        ; Exact mapped bytes E8 70 F8 FF FF: call 0x5883da5f
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 0C: jne 0x5883e1ff
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 0ch
        ; Exact mapped bytes E9 C0 02 00 00: jmp 0x5883e4bf
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 54h]
        push dword ptr [esi + 50h]
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 83 E6 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        add esp, 0ch
        mov dword ptr [esi + 2ch], eax
        mov ecx, dword ptr [esi + 2ch]
        lea edi, [esi + 30h]
        mov eax, dword ptr [esi + 4]
        add ecx, -10h
        push 10h
        add eax, ecx
        push eax
        push edi
        ; Exact mapped bytes E8 63 E6 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [edi], 32812622h
        ; Exact mapped bytes 0F 85 49 01 00 00: jne 0x5883e385
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 3ch], 32812621h
        ; Exact mapped bytes 0F 85 3C 01 00 00: jne 0x5883e385
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 24h], 1
        mov eax, dword ptr [esi + 34h]
        mov ecx, dword ptr [esi + 38h]
        add eax, 10h
        add ecx, eax
        mov eax, dword ptr [esi + 2ch]
        sub eax, ecx
        mov dword ptr [esi + 28h], ecx
        mov dword ptr [esi + 8], eax
        mov eax, dword ptr [esi + 34h]
        push 10h
        mov dword ptr [esi + 40h], eax
        lea eax, [ebp - 20h]
        push ebx
        push eax
        ; Exact mapped bytes E8 9B EB 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2ch]
        add esp, 0ch
        sub ecx, dword ptr [esi + 28h]
        cmp ecx, 10h
        ; Exact mapped bytes 76 17: jbe 0x5883e29a
        __asm _emit 0x76
        __asm _emit 0x17
        mov eax, dword ptr [esi + 4]
        add eax, -10h
        add eax, ecx
        push 10h
        push eax
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 F9 E5 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 20h], 32812624h
        ; Exact mapped bytes 0F 85 F9 00 00 00: jne 0x5883e3a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 32812623h
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x5883e3a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        lea eax, [ebp - 20h]
        push eax
        push edi
        ; Exact mapped bytes E8 D0 E5 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 28h]
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        sub dword ptr [esi + 2ch], eax
        add ecx, 10h
        mov edx, dword ptr [ebp - 1ch]
        add ecx, edx
        mov eax, dword ptr [esi + 2ch]
        mov byte ptr [esi + 24h], 1
        sub eax, ecx
        mov dword ptr [esi + 28h], ecx
        mov dword ptr [esi + 40h], edx
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x5883e39d
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push 80h
        push 3
        push ebx
        push 3
        push 80000000h
        push edi
        ; Exact mapped bytes FF 15 80 43 89 58: call dword ptr [0x58894380]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 75 0C: jne 0x5883e312
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 1
        ; Exact mapped bytes E9 AD 01 00 00: jmp 0x5883e4bf
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 2ch], eax
        cmp eax, -1
        ; Exact mapped bytes 75 13: jne 0x5883e335
        __asm _emit 0x75
        __asm _emit 0x13
        push edi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 4ch], 0bh
        ; Exact mapped bytes E9 8A 01 00 00: jmp 0x5883e4bf
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 22 F7 FF FF: call 0x5883da5f
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 13: jne 0x5883e354
        __asm _emit 0x75
        __asm _emit 0x13
        push edi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 4ch], 2
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x5883e4bf
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea eax, [ebp - 2ch]
        push eax
        push dword ptr [esi + 2ch]
        push dword ptr [esi + 4]
        push edi
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [esi + 2ch]
        ; Exact mapped bytes 0F 84 9D FE FF FF: je 0x5883e216
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 4ch], 3
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x5883e4bf
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push ebx
        push edi
        ; Exact mapped bytes E8 82 EA 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2ch]
        add esp, 0ch
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 40h], ebx
        mov dword ptr [esi + 8], eax
        mov eax, dword ptr [esi + 2ch]
        cmp eax, dword ptr [esi + 28h]
        ; Exact mapped bytes 73 0F: jae 0x5883e3b7
        __asm _emit 0x73
        __asm _emit 0x0f
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 2ch], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 40h], ebx
        cmp byte ptr [esi + 24h], bl
        ; Exact mapped bytes 74 73: je 0x5883e42f
        __asm _emit 0x74
        __asm _emit 0x73
        cmp dword ptr [esi], ebx
        ; Exact mapped bytes 75 24: jne 0x5883e3e4
        __asm _emit 0x75
        __asm _emit 0x24
        push 0f0000000h
        push 1
        push 588c1dc0h
        push ebx
        push esi
        ; Exact mapped bytes FF 15 00 40 89 58: call dword ptr [0x58894000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5883e3e4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 4
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x5883e4bf
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 48h]
        cmp dword ptr [edi], ebx
        ; Exact mapped bytes 74 0A: je 0x5883e3f5
        __asm _emit 0x74
        __asm _emit 0x0a
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 0C 40 89 58: call dword ptr [0x5889400c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi], ebx
        push edi
        push ebx
        push ebx
        push 8003h
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 14 40 89 58: call dword ptr [0x58894014]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5883e415
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 5
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x5883e4bf
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 62 2D 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 24h]
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 10 40 89 58: call dword ptr [0x58894010]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5883e43b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4ch], 6
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x5883e4bf
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 44h]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x5883e450
        __asm _emit 0x74
        __asm _emit 0x0c
        push ecx
        ; Exact mapped bytes FF 15 54 40 89 58: call dword ptr [0x58894054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [esi + 44h]
        mov dword ptr [eax], ebx
        push eax
        push ebx
        push dword ptr [edi]
        push 6801h
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 1C 40 89 58: call dword ptr [0x5889401c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5883e46e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 4ch], 7
        ; Exact mapped bytes EB 51: jmp 0x5883e4bf
        __asm _emit 0xeb
        __asm _emit 0x51
        push dword ptr [esi + 8]
        mov ecx, esi
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 62 00 00 00: call 0x5883e4dd
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 09: jne 0x5883e488
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 4ch], 58h
        ; Exact mapped bytes EB 37: jmp 0x5883e4bf
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edi, dword ptr [ebp - 30h]
        cmp edi, dword ptr [esi + 8]
        cmova edi, dword ptr [esi + 8]
        push edi
        push dword ptr [esi + 4]
        push dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F2 E3 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        add esp, 0ch
        mov byte ptr [edi + eax], bl
        cmp byte ptr [esi + 10h], bl
        ; Exact mapped bytes 75 11: jne 0x5883e4bd
        __asm _emit 0x75
        __asm _emit 0x11
        cmp dword ptr [esi + 4], ebx
        ; Exact mapped bytes 74 0C: je 0x5883e4bd
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 47 B1 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 4], ebx
        mov bl, 1
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x5883e4d3
        __asm _emit 0x74
        __asm _emit 0x0b
        push 58968e70h
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov al, bl
        ; Exact mapped bytes E8 4F 40 FF FF: call 0x58832529
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
