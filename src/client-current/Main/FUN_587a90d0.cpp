// Complete Ghidra body ranges for the selected function.
// 5 discontiguous segments; total 5041 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A90D0 .. +0xC89 bytes.
extern "C" __declspec(naked) void FUN_587a90d0_segment_00() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        push -1
        push 58980b2ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 340h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 338h], eax
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
        lea eax, [esp + 350h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0ch]
        mov edi, ecx
        test esi, esi
        ; Exact mapped bytes 75 17: jne 0x587a9133
        __asm _emit 0x75
        __asm _emit 0x17
        push 277h
        push 589999a4h
        push 58999c94h
        ; Exact mapped bytes E8 9E 3D 1D 00: call 0x5897cece
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x3d
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 65 F7 FF FF: call 0x587a88a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 74h]
        cmp eax, 15h
        ; Exact mapped bytes 0F 87 B5 03 00 00: ja 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 9C A4 7A 58: jmp dword ptr [eax*4 + 0x587aa49c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xa4
        __asm _emit 0x7a
        __asm _emit 0x58
        mov eax, 1
        ; Exact mapped bytes E9 A6 03 00 00: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 21c48h]
        mov ecx, dword ptr [edx + 54h]
        lea eax, [esp + 1ch]
        add esi, 78h
        push eax
        mov dword ptr [esp + 20h], esi
        ; Exact mapped bytes E8 58 C3 FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 51: je 0x587a91d5
        __asm _emit 0x74
        __asm _emit 0x51
        mov ebx, 1
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        mov edi, ebx
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x587a91ba
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [esi + 6070h], ebx
        ; Exact mapped bytes 75 1A: jne 0x587a91ba
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 21c48h]
        push eax
        push esi
        ; Exact mapped bytes E8 CD C7 FC FF: call 0x58775980
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 02: jne 0x587a91ba
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 5E 18 13 00: call 0x588daa20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x18
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1448h]
        push edi
        ; Exact mapped bytes E8 A2 46 0A 00: call 0x5884d870
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 B4: jne 0x587a9189
        __asm _emit 0x75
        __asm _emit 0xb4
        mov eax, 1
        ; Exact mapped bytes E9 1F 03 00 00: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 15 03 00 00: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp + 10h]
        cmp al, 2
        ; Exact mapped bytes 74 08: je 0x587a91f6
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 3
        ; Exact mapped bytes 0F 85 06 03 00 00: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        test eax, eax
        ; Exact mapped bytes 0F 84 D8 01 00 00: je 0x587a93d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 7ch], 0
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x587a931b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 21c48h]
        push eax
        ; Exact mapped bytes E8 D3 D3 FC FF: call 0x587765f0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D7 02 00 00: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [eax + 0ch]
        lea edx, [esp + 2ch]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 CC B8 08 00: call 0x58834b00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [esp + 5ch]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A0 BE F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 30h]
        ; Exact mapped bytes E8 A6 F2 FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x587a9311
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 2ch]
        ; Exact mapped bytes E8 25 BE FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        lea ecx, [esp + 54h]
        push ecx
        lea ecx, [eax + 8]
        ; Exact mapped bytes E8 96 B8 08 00: call 0x58834b00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [esp + 2ch]
        ; Exact mapped bytes E8 0D BE FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        lea edx, [esp + 6ch]
        push edx
        lea ecx, [eax + 8]
        ; Exact mapped bytes E8 5E BE F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 58h]
        ; Exact mapped bytes E8 64 F2 FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 50: je 0x587a92e0
        __asm _emit 0x74
        __asm _emit 0x50
        lea ecx, [esp + 54h]
        ; Exact mapped bytes E8 E7 BD FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, 7
        push 0
        lea edx, [esp + 0b8h]
        ; Exact mapped bytes 66 89 48 28: mov word ptr [eax + 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x28
        push edx
        lea ecx, [esp + 5ch]
        mov dword ptr [eax + 2ch], ebx
        ; Exact mapped bytes E8 66 F2 FF FF: call 0x587a8520
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 2ch]
        ; Exact mapped bytes E8 BD BD FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        lea ecx, [esp + 6ch]
        push ecx
        lea ecx, [eax + 8]
        ; Exact mapped bytes E8 0E BE F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 58h]
        ; Exact mapped bytes E8 14 F2 FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 B0: jne 0x587a9290
        __asm _emit 0x75
        __asm _emit 0xb0
        push 0
        lea edx, [esp + 90h]
        push edx
        lea ecx, [esp + 34h]
        ; Exact mapped bytes E8 2D F2 FF FF: call 0x587a8520
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 5ch]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E1 BD F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 30h]
        ; Exact mapped bytes E8 E7 F1 FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 85 41 FF FF FF: jne 0x587a9252
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 E3 01 00 00: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x587a93d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 7ch], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x587a93d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 21c48h]
        push eax
        ; Exact mapped bytes E8 B1 D2 FC FF: call 0x587765f0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B5 01 00 00: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 7ch]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 5E BF F8 FF: call 0x587352b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A2 01 00 00: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [eax + 8]
        lea eax, [esp + 44h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 97 B7 08 00: call 0x58834b00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [esp + 7ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 6B BD F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 48h]
        ; Exact mapped bytes E8 71 F1 FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 44: je 0x587a93c7
        __asm _emit 0x74
        __asm _emit 0x44
        lea ecx, [esp + 44h]
        ; Exact mapped bytes E8 F4 BC FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov edx, 7
        mov dword ptr [eax + 2ch], ebx
        ; Exact mapped bytes 66 89 50 28: mov word ptr [eax + 0x28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x28
        push 0
        lea eax, [esp + 0a8h]
        push eax
        lea ecx, [esp + 4ch]
        ; Exact mapped bytes E8 73 F1 FF FF: call 0x587a8520
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 7ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 27 BD F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 48h]
        ; Exact mapped bytes E8 2D F1 FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 BC: jne 0x587a9383
        __asm _emit 0x75
        __asm _emit 0xbc
        mov eax, 1
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 23 01 00 00: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 7ch], 0
        ; Exact mapped bytes 0F 85 19 01 00 00: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 80h]
        test esi, esi
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 21c48h]
        push esi
        ; Exact mapped bytes E8 DD DD FC FF: call 0x587771e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 7
        mov dword ptr [eax + 2ch], ebx
        ; Exact mapped bytes 66 89 48 28: mov word ptr [eax + 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x28
        lea eax, [ecx - 6]
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 78h]
        mov ecx, dword ptr [edx + 21c48h]
        push eax
        ; Exact mapped bytes E8 AC DD FC FF: call 0x587771e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [esp + 20h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 7ch]
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0a0h]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 10490h]
        add eax, dword ptr [ecx + 10488h]
        xor edx, edx
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 49 A2 58: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        push 7fh
        push 0
        mov edi, dword ptr [ecx + edx*4]
        lea edx, [esp + 2cdh]
        push edx
        mov byte ptr [esp + 2d0h], 0
        ; Exact mapped bytes E8 AD 37 1D 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x37
        __asm _emit 0x1d
        __asm _emit 0x00
        movzx eax, word ptr [esp + 28h]
        mov dword ptr [esp + 28h], eax
        xor edx, edx
        mov eax, edi
        mov edi, dword ptr [esp + 28h]
        div edi
        lea ecx, [esp + 2d0h]
        mov eax, ecx
        add esp, 0ch
        mov esi, 80h
        shl edx, 7
        sub edx, eax
        add edx, ebx
        lea eax, [esi + 7fffff7eh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x587a94e1
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x587a94e1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x587a94c6
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587a94e5
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x587a94e6
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        mov byte ptr [ecx], 0
        push 0
        lea ecx, [esp + 2c8h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes E8 C4 CB F8 FF: call 0x587360c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [esp + 350h]
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
        mov ecx, dword ptr [esp + 338h]
        xor ecx, esp
        ; Exact mapped bytes E8 BC 36 1D 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x36
        __asm _emit 0x1d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 24 E9 FF FF: call 0x587a7e50
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 CA: je 0x587a94fc
        __asm _emit 0x74
        __asm _emit 0xca
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 21c48h]
        mov eax, dword ptr [eax + 50h]
        mov eax, dword ptr [eax + 17ch]
        mov dword ptr [esp + 20h], eax
        test eax, eax
        ; Exact mapped bytes 74 AD: je 0x587a94fc
        __asm _emit 0x74
        __asm _emit 0xad
        mov eax, dword ptr [esi + 7ch]
        test eax, eax
        ; Exact mapped bytes 75 5A: jne 0x587a95b0
        __asm _emit 0x75
        __asm _emit 0x5a
        push 54h
        ; Exact mapped bytes E8 F1 36 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x36
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 358h], 0
        test eax, eax
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x587a960f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 8]
        mov edx, dword ptr [esi + 8ch]
        mov ecx, dword ptr [ebx + 4]
        add edx, eax
        mov eax, dword ptr [esi + 88h]
        push 40h
        add eax, ecx
        mov ecx, dword ptr [esi + 80h]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [esp + 30h]
        ; Exact mapped bytes E8 0F 82 F8 FF: call 0x587317b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 28h]
        push eax
        push ebx
        ; Exact mapped bytes E8 B4 86 F8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes EB 61: jmp 0x587a9611
        __asm _emit 0xeb
        __asm _emit 0x61
        cmp eax, 1
        ; Exact mapped bytes 0F 85 43 FF FF FF: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 8E 36 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x36
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 358h], 1
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x587a960f
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebx + 8]
        mov edx, dword ptr [esi + 8ch]
        mov ecx, dword ptr [ebx + 4]
        add edx, eax
        mov eax, dword ptr [esi + 88h]
        push 40h
        add eax, ecx
        mov ecx, dword ptr [esi + 80h]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [esp + 30h]
        ; Exact mapped bytes E8 E0 81 F8 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 28h]
        push eax
        push ebx
        ; Exact mapped bytes E8 25 B4 F8 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x587a9611
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 0F BF 96 84 00 00 00: movsx edx, word ptr [esi + 0x84]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, ebx
        mov dword ptr [esp + 35ch], 0ffffffffh
        ; Exact mapped bytes E8 B5 96 15 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x96
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 86 86 00 00 00: movsx eax, word ptr [esi + 0x86]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 E6 96 15 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x96
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push ebx
        push ecx
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x587a973d
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 04 E8 FF FF: call 0x587a7e50
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 20h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 A4 FE FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 80h
        ; Exact mapped bytes E8 CC 7E 1C 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7e
        __asm _emit 0x1c
        __asm _emit 0x00
        push 80h
        mov ebx, eax
        push 0
        push ebx
        mov dword ptr [esp + 2ch], ebx
        ; Exact mapped bytes E8 D3 35 1D 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x35
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a0h]
        add esp, 10h
        mov dword ptr [esp + 14h], 80h
        mov eax, ebx
        sub edx, ebx
        mov ecx, dword ptr [esp + 14h]
        add ecx, 7fffff7eh
        ; Exact mapped bytes 74 13: je 0x587a96a9
        __asm _emit 0x74
        __asm _emit 0x13
        mov cl, byte ptr [eax + edx]
        test cl, cl
        ; Exact mapped bytes 74 0C: je 0x587a96a9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [eax], cl
        inc eax
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 75 E3: jne 0x587a968a
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes EB 07: jmp 0x587a96b0
        __asm _emit 0xeb
        __asm _emit 0x07
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 75 01: jne 0x587a96b1
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        push 70h
        mov byte ptr [eax], 0
        ; Exact mapped bytes E8 93 35 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x35
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 358h], 2
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x587a9721
        __asm _emit 0x74
        __asm _emit 0x50
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [esi + 80h]
        push 0
        push 0
        push 0ffffffh
        lea ebx, [edx + eax + 0fh]
        push ebx
        mov ebx, dword ptr [esi + 7ch]
        lea ebx, [ecx + ebx + 1f4h]
        push ebx
        add edx, eax
        mov eax, dword ptr [esi + 7ch]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        ; Exact mapped bytes E8 63 9B F8 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x587a9723
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 3e8h
        mov ecx, ebx
        mov dword ptr [esp + 35ch], 0ffffffffh
        ; Exact mapped bytes E8 56 7E F8 FF: call 0x58731590
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7e
        __asm _emit 0xf8
        __asm _emit 0xff
        push ebx
        push 2
        mov edx, dword ptr [esi + 78h]
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 28 F9 FF FF: call 0x587a9070
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 AC FD FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 0F 84 9F FD FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 29 EF FF FF: call 0x587a8690
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 92 FD FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 21c48h]
        mov edx, dword ptr [esi + 7ch]
        mov eax, dword ptr [esi + 78h]
        mov ecx, dword ptr [ecx + 0b0h]
        push edx
        push eax
        ; Exact mapped bytes E8 66 1C 00 00: call 0x587ab3f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6F FD FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        mov edx, dword ptr [edi + 4]
        push ecx
        xor eax, eax
        push edx
        mov ecx, edi
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 C8 F3 FF FF: call 0x587a8b70
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 4]
        mov ebx, eax
        mov eax, dword ptr [esi + 7ch]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 B7 F3 FF FF: call 0x587a8b70
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test ebx, ebx
        ; Exact mapped bytes 74 0F: je 0x587a97ce
        __asm _emit 0x74
        __asm _emit 0x0f
        mov byte ptr [ebx + 9ch], 0
        mov dword ptr [esp + 20h], 1
        test esi, esi
        ; Exact mapped bytes 74 6D: je 0x587a983f
        __asm _emit 0x74
        __asm _emit 0x6d
        mov ecx, dword ptr [esi + 0a8h]
        xor ebx, ebx
        lea edx, [esp + 34h]
        push edx
        mov byte ptr [esi + 9ch], 1
        mov dword ptr [esp + 18h], 1
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0b4h], ebx
        mov dword ptr [esi + 0b8h], ebx
        ; Exact mapped bytes E8 F5 B2 08 00: call 0x58834b00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp byte ptr [esi + 0ah], bl
        ; Exact mapped bytes 74 2F: je 0x587a983f
        __asm _emit 0x74
        __asm _emit 0x2f
        lea ecx, [esp + 34h]
        ; Exact mapped bytes E8 67 B8 FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 BD ED FF FF: call 0x587a85e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [esp + 0c0h]
        push ecx
        lea ecx, [esp + 3ch]
        ; Exact mapped bytes E8 EA EC FF FF: call 0x587a8520
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [esi + 0ah]
        inc ebx
        cmp ebx, edx
        ; Exact mapped bytes 75 D1: jne 0x587a9810
        __asm _emit 0x75
        __asm _emit 0xd1
        cmp dword ptr [esp + 20h], 0
        ; Exact mapped bytes 0F 84 B2 FC FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 0F 84 A7 FC FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 9F FC FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [esi + 78h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov byte ptr [ecx + 21f00h], al
        mov eax, 1
        ; Exact mapped bytes E9 86 FC FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 78h]
        mov ecx, dword ptr [edx + 21c48h]
        push eax
        ; Exact mapped bytes E8 63 CD FC FF: call 0x587765f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 67 FC FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 7ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 10 BA F8 FF: call 0x587352b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 54 FC FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea edi, [eax + 8]
        test edi, edi
        ; Exact mapped bytes 0F 84 49 FC FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [esp + 3ch]
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 41 B2 08 00: call 0x58834b00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [esp + 64h]
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 15 B8 F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 40h]
        ; Exact mapped bytes E8 1B EC FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x587a999b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 3
        lea ecx, [esp + 3ch]
        ; Exact mapped bytes E8 95 B7 FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 11ch], edx
        cmp dword ptr [esi + 80h], ebx
        ; Exact mapped bytes 75 66: jne 0x587a996a
        __asm _emit 0x75
        __asm _emit 0x66
        mov eax, dword ptr [esi + 98h]
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x587a996a
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp dword ptr [esi + 0a0h], 0
        ; Exact mapped bytes 74 53: je 0x587a996a
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [esi + 8ch]
        add ecx, ecx
        add ecx, ecx
        add ecx, ecx
        cmp eax, ecx
        ; Exact mapped bytes 74 17: je 0x587a993e
        __asm _emit 0x74
        __asm _emit 0x17
        push 3b5h
        push 589999a4h
        push 58999b80h
        ; Exact mapped bytes E8 93 35 1D 00: call 0x5897cece
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x35
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [esp + 3ch]
        ; Exact mapped bytes E8 39 B7 FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8ch]
        mov ecx, dword ptr [esi + 0a0h]
        push edx
        mov edx, dword ptr [esi + 88h]
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push edx
        push ecx
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 66 E3 FF FF: call 0x587a7cd0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea edx, [esp + 98h]
        push edx
        lea ecx, [esp + 44h]
        ; Exact mapped bytes E8 A3 EB FF FF: call 0x587a8520
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 64h]
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 57 B7 F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb7
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 40h]
        ; Exact mapped bytes E8 5D EB FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 85 47 FF FF FF: jne 0x587a98e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 59 FB FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 78h], 7
        ; Exact mapped bytes 0F 87 4D FB FF FF: ja 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 7ch]
        movzx edx, byte ptr [esi + 78h]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 BD E3 FF FF: call 0x587a7d80
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 31 FB FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 78h]
        xor ebx, ebx
        mov dword ptr [esp + 14h], ebx
        cmp eax, 1
        ; Exact mapped bytes 0F 85 31 01 00 00: jne 0x587a9b10
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x587a9a03
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 1264h]
        xor eax, 0aaaaaaaah
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 3F: jmp 0x587a9a42
        __asm _emit 0xeb
        __asm _emit 0x3f
        cmp eax, 2
        ; Exact mapped bytes 75 11: jne 0x587a9a19
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 6544h]
        ; Exact mapped bytes EB 25: jmp 0x587a9a3e
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp eax, 3
        ; Exact mapped bytes 0F 85 DA FA FF FF: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 88h]
        mov eax, dword ptr [edi + 4]
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 3C F1 FF FF: call 0x587a8b70
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x587a9a42
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [esp + 14h], ecx
        mov eax, dword ptr [esi + 80h]
        cmp eax, 1
        ; Exact mapped bytes 74 17: je 0x587a9a64
        __asm _emit 0x74
        __asm _emit 0x17
        cmp eax, 2
        ; Exact mapped bytes 74 12: je 0x587a9a64
        __asm _emit 0x74
        __asm _emit 0x12
        cmp eax, 3
        ; Exact mapped bytes 75 71: jne 0x587a9ac8
        __asm _emit 0x75
        __asm _emit 0x71
        mov ebx, dword ptr [esi + 8ch]
        imul ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes EB 64: jmp 0x587a9ac8
        __asm _emit 0xeb
        __asm _emit 0x64
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        test edx, edx
        ; Exact mapped bytes 7D 06: jge 0x587a9a76
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes DB 86 88 00 00 00: fild dword ptr [esi + 0x88]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x587a9a8c
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 8ch]
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes DB 86 8C 00 00 00: fild dword ptr [esi + 0x8c]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 7D 06: jge 0x587a9aa4
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 1A: fnstcw word ptr [esp + 0x1a]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1a
        movzx eax, word ptr [esp + 1ah]
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        or eax, 0c00h
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes D9 6C 24 1C: fldcw word ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DF 7C 24 34: fistp qword ptr [esp + 0x34]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        mov ebx, dword ptr [esp + 34h]
        ; Exact mapped bytes D9 6C 24 1A: fldcw word ptr [esp + 0x1a]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1a
        mov esi, dword ptr [esi + 84h]
        cmp esi, 1
        ; Exact mapped bytes 75 1B: jne 0x587a9aee
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, ebx, 64h
        mov ecx, dword ptr [edx + 4]
        push ebx
        push 0
        ; Exact mapped bytes E8 E9 32 13 00: call 0x588dcdd0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, esi
        ; Exact mapped bytes E9 10 FA FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, 2
        ; Exact mapped bytes 0F 85 05 FA FF FF: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, ebx, 64h
        mov ecx, dword ptr [eax + 4]
        push ebx
        ; Exact mapped bytes E8 48 33 13 00: call 0x588dce50
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        lea eax, [esi - 1]
        ; Exact mapped bytes E9 EE F9 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 0F 85 E3 F9 FF FF: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 80h]
        cmp eax, 1
        ; Exact mapped bytes 75 11: jne 0x587a9b35
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 7ch]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD E2 FF FF: call 0x587a7df0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 40: jmp 0x587a9b75
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp eax, 2
        ; Exact mapped bytes 75 16: jne 0x587a9b50
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [esi + 7ch]
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + edx*4 + 109f4h]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes EB 25: jmp 0x587a9b75
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp eax, 3
        ; Exact mapped bytes 0F 85 A3 F9 FF FF: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 88h]
        mov edx, dword ptr [edi + 4]
        push ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 05 F0 FF FF: call 0x587a8b70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x587a9b79
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 0b0h]
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esi + 80h]
        cmp eax, 1
        ; Exact mapped bytes 74 17: je 0x587a9b9b
        __asm _emit 0x74
        __asm _emit 0x17
        cmp eax, 2
        ; Exact mapped bytes 74 12: je 0x587a9b9b
        __asm _emit 0x74
        __asm _emit 0x12
        cmp eax, 3
        ; Exact mapped bytes 75 71: jne 0x587a9bff
        __asm _emit 0x75
        __asm _emit 0x71
        mov ebx, dword ptr [esi + 8ch]
        imul ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes EB 64: jmp 0x587a9bff
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        test ecx, ecx
        ; Exact mapped bytes 7D 06: jge 0x587a9bad
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [esi + 88h]
        ; Exact mapped bytes DB 86 88 00 00 00: fild dword ptr [esi + 0x88]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 7D 06: jge 0x587a9bc3
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes DB 86 8C 00 00 00: fild dword ptr [esi + 0x8c]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x587a9bdb
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 1A: fnstcw word ptr [esp + 0x1a]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1a
        movzx eax, word ptr [esp + 1ah]
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        or eax, 0c00h
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes D9 6C 24 1C: fldcw word ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DF 7C 24 34: fistp qword ptr [esp + 0x34]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        mov ebx, dword ptr [esp + 34h]
        ; Exact mapped bytes D9 6C 24 1A: fldcw word ptr [esp + 0x1a]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1a
        mov eax, dword ptr [esi + 84h]
        cmp eax, 1
        ; Exact mapped bytes 75 1A: jne 0x587a9c24
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 7ch]
        push ebx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 E1 FF FF: call 0x587a7e10
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 DA F8 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 0F 85 CF F8 FF FF: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [esi + 7ch]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push edx
        ; Exact mapped bytes E8 42 E1 FF FF: call 0x587a7d80
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 B6 F8 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 78h]
        cmp eax, 1
        ; Exact mapped bytes 75 23: jne 0x587a9c73
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [esi + 80h]
        mov esi, dword ptr [esi + 84h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push eax
        ; Exact mapped bytes E8 E7 E0 FF FF: call 0x587a7d50
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 8B F8 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 0F 85 80 F8 FF FF: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [esi + 7ch]
        mov ecx, dword ptr [eax + 21c48h]
        push edx
        ; Exact mapped bytes E8 50 D5 FC FF: call 0x587771e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 64 F8 FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 59 F8 FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 10558h], eax
        mov eax, 1
        ; Exact mapped bytes E9 45 F8 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 78h]
        cmp esi, 1
        ; Exact mapped bytes 75 02: jne 0x587a9cc3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x587a9cce
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp esi, 2
        ; Exact mapped bytes 0F 85 30 F8 FF FF: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 46 79 F8 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 3A 79 F8 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 0E F8 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 78h]
        cmp esi, 1
        ; Exact mapped bytes 75 04: jne 0x587a9cfc
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x587a9d08
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp esi, 2
        ; Exact mapped bytes 0F 85 F7 F7 FF FF: jne 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi - 1]
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [esp + 14h], ecx
        test ecx, ecx
        ; Exact mapped bytes 0F 84 2B FA FF FF: je 0x587a9748
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        and al, 1
        ; Exact mapped bytes 66 0F B6 D0: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        ; Exact mapped bytes 66 03 D2: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 66 03 D2: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov esi, 0fffbh
        ; Exact mapped bytes 66 23 C6: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        lea esi, [ecx + 1390h]
        mov dword ptr [esp + 20h], 8
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x587a9d81
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes EB 07: jmp 0x587a9d60
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A9D60 .. +0x15A bytes.
extern "C" __declspec(naked) void FUN_587a90d0_segment_01() {
    __asm {
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 8B 79 24: mov di, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x24
        mov ebx, 0fffbh
        ; Exact mapped bytes 66 23 FB: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 0B FA: or di, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xfa
        ; Exact mapped bytes 66 89 79 24: mov word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x24
        mov eax, dword ptr [eax + 8]
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x587a9d60
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [esp + 14h]
        add esi, 10h
        sub dword ptr [esp + 20h], 1
        ; Exact mapped bytes 75 C6: jne 0x587a9d51
        __asm _emit 0x75
        __asm _emit 0xc6
        mov ecx, dword ptr [ecx + 78h]
        mov dword ptr [esp + 14h], ecx
        test ecx, ecx
        ; Exact mapped bytes 75 9A: jne 0x587a9d30
        __asm _emit 0x75
        __asm _emit 0x9a
        lea eax, [ecx + 1]
        ; Exact mapped bytes E9 60 F7 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 78h]
        xor edi, edi
        cmp eax, edi
        ; Exact mapped bytes 74 3F: je 0x587a9de6
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 21c48h]
        push eax
        ; Exact mapped bytes E8 27 D4 FC FF: call 0x587771e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd4
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, edi
        ; Exact mapped bytes 0F 84 3B F7 FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 30 F7 FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 80h]
        mov ecx, dword ptr [esi + 7ch]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B2 30 13 00: call 0x588dce90
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        lea eax, [edi + 1]
        ; Exact mapped bytes E9 18 F7 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 88h]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 08 F7 FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 21c48h]
        push eax
        ; Exact mapped bytes E8 EA C7 FC FF: call 0x587765f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, edi
        ; Exact mapped bytes 0F 84 EE F6 FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        lea ebx, [eax + 0ch]
        lea eax, [esp + 24h]
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes E8 DB AC 08 00: call 0x58834b00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [esp + 84h]
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 AC B2 F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 28h]
        ; Exact mapped bytes E8 B2 E6 FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 02 F9 FF FF: je 0x587a9748
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 84h], 0
        ; Exact mapped bytes 74 1D: je 0x587a9e6c
        __asm _emit 0x74
        __asm _emit 0x1d
        lea ecx, [esp + 24h]
        ; Exact mapped bytes E8 28 B2 FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esi + 84h]
        cmp eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 0F 85 CB 00 00 00: jne 0x587a9f37
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 24h]
        ; Exact mapped bytes E8 0B B2 FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        lea ecx, [esp + 4ch]
        push ecx
        lea ecx, [eax + 8]
        ; Exact mapped bytes E8 7C AC 08 00: call 0x58834b00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [esp + 24h]
        ; Exact mapped bytes E8 F3 B1 FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        lea edx, [esp + 74h]
        push edx
        lea ecx, [eax + 8]
        ; Exact mapped bytes E8 44 B2 F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 50h]
        ; Exact mapped bytes E8 4A E6 FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x587a9f37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 14h]
        imul ebx, ebx, 0c8h
        ; Exact mapped bytes EB 06: jmp 0x587a9ec0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A9EC0 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_587a90d0_segment_02() {
    __asm {
        lea ecx, [esp + 4ch]
        ; Exact mapped bytes E8 B7 B1 FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 2C: je 0x587a9efe
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [esi + 80h]
        mov edx, edi
        imul edx, edx, 0c8h
        add edx, dword ptr [esi + 7ch]
        add eax, ebx
        push eax
        push edx
        ; Exact mapped bytes E8 A4 2F 13 00: call 0x588dce90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2f
        __asm _emit 0x13
        __asm _emit 0x00
        inc edi
        cmp edi, 5
        ; Exact mapped bytes 7C 0C: jl 0x587a9efe
        __asm _emit 0x7c
        __asm _emit 0x0c
        inc dword ptr [esp + 14h]
        xor edi, edi
        add ebx, 0c8h
        push 0
        lea eax, [esp + 0a0h]
        push eax
        lea ecx, [esp + 54h]
        ; Exact mapped bytes E8 0F E6 FF FF: call 0x587a8520
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 24h]
        ; Exact mapped bytes E8 66 B1 FF FF: call 0x587a5080
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        lea ecx, [esp + 74h]
        push ecx
        lea ecx, [eax + 8]
        ; Exact mapped bytes E8 B7 B1 F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 50h]
        ; Exact mapped bytes E8 BD E5 FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 89: jne 0x587a9ec0
        __asm _emit 0x75
        __asm _emit 0x89
        push 0
        lea edx, [esp + 0b0h]
        push edx
        lea ecx, [esp + 2ch]
        ; Exact mapped bytes E8 D6 E5 FF FF: call 0x587a8520
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
        lea eax, [esp + 84h]
        push eax
        ; Exact mapped bytes E8 85 B1 F8 FF: call 0x587350e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [esp + 28h]
        ; Exact mapped bytes E8 8B E5 FF FF: call 0x587a84f0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 85 D9 FE FF FF: jne 0x587a9e46
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 87 F5 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 78h]
        cmp eax, 7
        ; Exact mapped bytes 0F 87 79 F5 FF FF: ja 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x79
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 7ch]
        cmp esi, 7
        ; Exact mapped bytes 0F 87 6D F5 FF FF: ja 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6d
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        movzx ecx, byte ptr [edx + 354h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 A1 F7 FF FF: jne 0x587a9748
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov byte ptr [esi + edx + 430h], 1
        mov eax, 1
        ; Exact mapped bytes E9 3F F5 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [esi + 78h]
        mov ecx, dword ptr [eax + 21c48h]
        push edx
        ; Exact mapped bytes E8 0D D2 FC FF: call 0x587771e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 21 F5 FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 16 F5 FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 7ch]
        xor eax, 0aaaaaaaah
        mov dword ptr [ecx + 398h], eax
        mov edx, dword ptr [esi + 80h]
        xor edx, 0aaaaaaaah
        mov dword ptr [ecx + 0d98h], edx
        ; Exact mapped bytes E8 05 FE 12 00: call 0x588d9e10
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 E9 F4 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        push 200h
        lea eax, [esp + 0c8h]
        push 0
        push eax
        ; Exact mapped bytes E8 1F 2C 1D 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edi, dword ptr [esi + 84h]
        xor cl, cl
        add esp, 0ch
        mov byte ptr [esp + 1ah], cl
        test edi, edi
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x587aa109
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 88h]
        test edx, edx
        ; Exact mapped bytes 74 7D: je 0x587aa0c7
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [esi + 8ch]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x587aa086
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 00 01 FE FF: call 0x5878a160
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x587aa1d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 6070h], 0
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x587aa1d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + 1ah], 1
        mov dword ptr [esp + 0c4h], eax
        ; Exact mapped bytes E9 50 01 00 00: jmp 0x587aa1d6
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x587aa1da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 6070h], 0
        ; Exact mapped bytes 74 1C: je 0x587aa0bb
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [eax + 370h], edi
        ; Exact mapped bytes 75 14: jne 0x587aa0bb
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [eax + 374h], edx
        ; Exact mapped bytes 75 0C: jne 0x587aa0bb
        __asm _emit 0x75
        __asm _emit 0x0c
        movzx ebx, cl
        mov dword ptr [esp + ebx*4 + 0c4h], eax
        inc cl
        mov eax, dword ptr [eax + 78h]
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x587aa096
        __asm _emit 0x75
        __asm _emit 0xd4
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x587aa1da
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x587aa1da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x587aa0e0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA0E0 .. +0x288 bytes.
extern "C" __declspec(naked) void FUN_587a90d0_segment_03() {
    __asm {
        cmp dword ptr [eax + 6070h], 0
        ; Exact mapped bytes 74 14: je 0x587aa0fd
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [eax + 370h], edi
        ; Exact mapped bytes 75 0C: jne 0x587aa0fd
        __asm _emit 0x75
        __asm _emit 0x0c
        movzx edx, cl
        mov dword ptr [esp + edx*4 + 0c4h], eax
        inc cl
        mov eax, dword ptr [eax + 78h]
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x587aa0e0
        __asm _emit 0x75
        __asm _emit 0xdc
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x587aa1da
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 74 11: je 0x587aa11e
        __asm _emit 0x74
        __asm _emit 0x11
        mov dword ptr [esp + 0c4h], ebx
        mov byte ptr [esp + 1ah], 1
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x587aa1d6
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esp + 14h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x587aa1da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [ecx + 6070h], 0
        ; Exact mapped bytes 75 04: jne 0x587aa143
        __asm _emit 0x75
        __asm _emit 0x04
        mov bl, 3
        ; Exact mapped bytes EB 13: jmp 0x587aa156
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ebx, dword ptr [esi + 54h]
        and bl, 1fh
        sub bl, 8
        neg bl
        sbb bl, bl
        and bl, 0fah
        add bl, 8
        lea edi, [esi + 54h]
        test edi, edi
        ; Exact mapped bytes 75 17: jne 0x587aa174
        __asm _emit 0x75
        __asm _emit 0x17
        push 59eh
        push 589999a4h
        push 589999d8h
        ; Exact mapped bytes E8 5D 2D 1D 00: call 0x5897cece
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2d
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [edi]
        mov dl, byte ptr [edi]
        mov ecx, eax
        shr ecx, 5
        and dl, 1fh
        and cl, 1fh
        shr eax, 0ah
        cmp bl, dl
        ; Exact mapped bytes 75 39: jne 0x587aa1c3
        __asm _emit 0x75
        __asm _emit 0x39
        movzx edx, dl
        add edx, -2
        cmp edx, 6
        ; Exact mapped bytes 77 2E: ja 0x587aa1c3
        __asm _emit 0x77
        __asm _emit 0x2e
        ; Exact mapped bytes FF 24 95 F4 A4 7A 58: jmp dword ptr [edx*4 + 0x587aa4f4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xa4
        __asm _emit 0x7a
        __asm _emit 0x58
        mov edx, dword ptr [esp + 14h]
        movzx ecx, word ptr [edx + 350h]
        cmp ecx, eax
        ; Exact mapped bytes 75 18: jne 0x587aa1c3
        __asm _emit 0x75
        __asm _emit 0x18
        mov al, byte ptr [esp + 1ah]
        mov edx, dword ptr [esp + 14h]
        movzx ecx, al
        inc al
        mov dword ptr [esp + ecx*4 + 0c4h], edx
        mov byte ptr [esp + 1ah], al
        mov eax, dword ptr [esp + 14h]
        mov eax, dword ptr [eax + 78h]
        mov dword ptr [esp + 14h], eax
        test eax, eax
        ; Exact mapped bytes 0F 85 5C FF FF FF: jne 0x587aa132
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [esp + 1ah]
        test cl, cl
        ; Exact mapped bytes 74 1E: je 0x587aa1fc
        __asm _emit 0x74
        __asm _emit 0x1e
        lea edi, [esp + 0c4h]
        movzx ebx, cl
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587aa1f4
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 3C 5F 13 00: call 0x588e0130
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x13
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EC: jne 0x587aa1e8
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, 1
        ; Exact mapped bytes E9 F8 F2 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, cl
        cmp ecx, 5
        ; Exact mapped bytes 77 B5: ja 0x587aa1c3
        __asm _emit 0x77
        __asm _emit 0xb5
        ; Exact mapped bytes FF 24 8D 10 A5 7A 58: jmp dword ptr [ecx*4 + 0x587aa510]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0x7a
        __asm _emit 0x58
        mov edx, dword ptr [esp + 14h]
        movzx ecx, byte ptr [edx + 354h]
        cmp ecx, eax
        ; Exact mapped bytes 74 87: je 0x587aa1ab
        __asm _emit 0x74
        __asm _emit 0x87
        ; Exact mapped bytes EB 9D: jmp 0x587aa1c3
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov ecx, dword ptr [esp + 14h]
        movzx edx, byte ptr [ecx + 354h]
        cmp edx, eax
        ; Exact mapped bytes 75 8E: jne 0x587aa1c3
        __asm _emit 0x75
        __asm _emit 0x8e
        cmp dword ptr [ecx + 60bch], 1
        ; Exact mapped bytes 0F 84 69 FF FF FF: je 0x587aa1ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x587aa1c3
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [ecx + 100ch]
        movzx ecx, word ptr [edx + 4]
        and ecx, 1fh
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 4B FF FF FF: je 0x587aa1ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5E FF FF FF: jmp 0x587aa1c3
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [ecx + 100ch]
        movzx edx, word ptr [edx + 4]
        mov edi, eax
        and edx, 1fh
        shr edi, 3
        cmp edx, edi
        ; Exact mapped bytes 0F 85 40 FF FF FF: jne 0x587aa1c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 7
        cmp byte ptr [ecx + 354h], al
        ; Exact mapped bytes 0F 84 19 FF FF FF: je 0x587aa1ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2C FF FF FF: jmp 0x587aa1c3
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test cl, cl
        ; Exact mapped bytes 75 30: jne 0x587aa2cb
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [ecx + 6070h], 0
        ; Exact mapped bytes 0F 84 17 FF FF FF: je 0x587aa1c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ecx + 354h]
        movzx edx, cl
        cmp edx, eax
        ; Exact mapped bytes 0F 85 06 FF FF FF: jne 0x587aa1c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp cl, 2
        ; Exact mapped bytes 0F 87 E5 FE FF FF: ja 0x587aa1ab
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F8 FE FF FF: jmp 0x587aa1c3
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp cl, 1
        ; Exact mapped bytes 0F 85 EF FE FF FF: jne 0x587aa1c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 21c48h]
        mov edi, eax
        shr eax, 8
        push eax
        and edi, 0fh
        ; Exact mapped bytes E8 02 C3 FC FF: call 0x587765f0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [esp + 1ch], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 C9 FE FF FF: je 0x587aa1c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        ; Exact mapped bytes 74 4E: je 0x587aa34c
        __asm _emit 0x74
        __asm _emit 0x4e
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 AA AF F8 FF: call 0x587352b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 B3 FE FF FF: je 0x587aa1c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebx + 18h]
        sub edx, dword ptr [ebx + 14h]
        xor edi, edi
        test edx, 0fffffffch
        ; Exact mapped bytes 0F 84 9F FE FF FF: je 0x587aa1c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 84 DB FF FF: call 0x587a7eb0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes 0F 84 72 FE FF FF: je 0x587aa1ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebx + 18h]
        sub edx, dword ptr [ebx + 14h]
        inc edi
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 75 DD: jne 0x587aa324
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 77 FE FF FF: jmp 0x587aa1c3
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 1ch]
        sub ecx, dword ptr [eax + 18h]
        mov dword ptr [esp + 20h], 0
        test ecx, 0fffffffch
        ; Exact mapped bytes 0F 84 5D FE FF FF: je 0x587aa1c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x587aa374
        __asm _emit 0xeb
        __asm _emit 0x0c
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA370 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_587a90d0_segment_04() {
    __asm {
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 20h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 60 DB FF FF: call 0x587a7ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 32: je 0x587aa3b8
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [edi + 18h]
        sub eax, dword ptr [edi + 14h]
        xor ebx, ebx
        test eax, 0fffffffch
        ; Exact mapped bytes 74 23: je 0x587aa3b8
        __asm _emit 0x74
        __asm _emit 0x23
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 13 DB FF FF: call 0x587a7eb0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes 0F 84 01 FE FF FF: je 0x587aa1ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [edi + 18h]
        sub edx, dword ptr [edi + 14h]
        inc ebx
        sar edx, 2
        cmp ebx, edx
        ; Exact mapped bytes 75 DD: jne 0x587aa395
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [ecx + 1ch]
        sub edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [esp + 20h]
        inc eax
        sar edx, 2
        mov dword ptr [esp + 20h], eax
        cmp eax, edx
        ; Exact mapped bytes 75 9E: jne 0x587aa370
        __asm _emit 0x75
        __asm _emit 0x9e
        ; Exact mapped bytes E9 EC FD FF FF: jmp 0x587aa1c3
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        mov edx, dword ptr [edi + 4]
        push ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 8A E7 FF FF: call 0x587a8b70
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 0C F1 FF FF: je 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 7ch]
        dec eax
        cmp eax, 3
        ; Exact mapped bytes 0F 87 FF F0 FF FF: ja 0x587a94fc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 24 85 28 A5 7A 58: jmp dword ptr [eax*4 + 0x587aa528]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xa5
        __asm _emit 0x7a
        __asm _emit 0x58
        mov eax, dword ptr [esi + 80h]
        mov edx, dword ptr [ecx + 0b0h]
        add eax, edx
        cmp eax, 0fa56ea00h
        ; Exact mapped bytes 77 10: ja 0x587aa429
        __asm _emit 0x77
        __asm _emit 0x10
        mov dword ptr [ecx + 0b0h], eax
        mov eax, 1
        ; Exact mapped bytes E9 D5 F0 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ecx + 0b0h], 0fa56ea00h
        mov eax, 1
        ; Exact mapped bytes E9 C1 F0 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 80h]
        sub dword ptr [ecx + 0b0h], eax
        mov eax, 1
        ; Exact mapped bytes E9 AB F0 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 80h]
        imul esi, dword ptr [ecx + 0b0h]
        cmp esi, 0fa56ea00h
        ; Exact mapped bytes 77 C1: ja 0x587aa429
        __asm _emit 0x77
        __asm _emit 0xc1
        mov dword ptr [ecx + 0b0h], esi
        mov eax, 1
        ; Exact mapped bytes E9 86 F0 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 80h]
        test esi, esi
        ; Exact mapped bytes 74 10: je 0x587aa492
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0b0h]
        xor edx, edx
        div esi
        mov dword ptr [ecx + 0b0h], eax
        mov eax, 1
        ; Exact mapped bytes E9 62 F0 FF FF: jmp 0x587a94fe
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
