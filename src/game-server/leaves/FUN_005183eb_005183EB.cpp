// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005183EB .. +0x7EC bytes.
extern "C" __declspec(naked) void FUN_005183eb_005183EB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57dc10h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0f0h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ech], ecx
        push 37dh
        push 5c8c2ch
        mov eax, dword ptr [ebp - 0ech]
        push eax
        ; Exact mapped bytes E8 38 2D FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ech]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x518450
        __asm _emit 0x75
        __asm _emit 0x14
        push 37eh
        push 5c8c2ch
        ; Exact mapped bytes E8 B5 C5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518450
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x518428
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 24: je 0x518484
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 0ch]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x51847e
        __asm _emit 0x75
        __asm _emit 0x14
        push 380h
        push 5c8c2ch
        ; Exact mapped bytes E8 87 C5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51847e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x518460
        __asm _emit 0x75
        __asm _emit 0xdc
        mov dword ptr [ebp - 10h], 0
        push 0
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 A9 D1 01 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 418h
        mov ecx, dword ptr [ebp - 0ech]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 5F: je 0x51851c
        __asm _emit 0x74
        __asm _emit 0x5f
        push 38ch
        push 5c8c2ch
        mov eax, dword ptr [ebp - 1ch]
        imul eax, eax, 14h
        push eax
        ; Exact mapped bytes E8 60 4B FD FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5184f7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7D 1D: jge 0x51851c
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 A5 F1 FF FF: call 0x5176bf
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D2: jmp 0x5184ee
        __asm _emit 0xeb
        __asm _emit 0xd2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 8E B1 05 00 00: jle 0x518ad7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ech]
        mov edx, dword ptr [ecx + 64h]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 0F 85 86 01 00 00: jne 0x5186c0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ech]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 2E: je 0x51857d
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 0ch]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 24: je 0x51857d
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        mov eax, dword ptr [ebp - 0ech]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 1D FC FF FF: call 0x518195
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 43 01 00 00: jmp 0x5186c0
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 29: je 0x5185ac
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x5185ac
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        push 7fffh
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 EE FB FF FF: call 0x518195
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x5186c0
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 26: je 0x5185d8
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x5185d8
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 0
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 C2 FB FF FF: call 0x518195
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x5186c0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x518664
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 74 7C: je 0x518664
        __asm _emit 0x74
        __asm _emit 0x7c
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 61 D7 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 53 DA 01 00: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 2
        push ecx
        lea edx, [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 47 EB FF FF: call 0x517155
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        and eax, 20h
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 10: je 0x51862d
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 2B D8 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0E: jmp 0x51863b
        __asm _emit 0xeb
        __asm _emit 0x0e
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 05 D8 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0f0h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 33 FB FF FF: call 0x518195
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 5C: jmp 0x5186c0
        __asm _emit 0xeb
        __asm _emit 0x5c
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 31: je 0x51869b
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 0ech]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 21: je 0x51869b
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        mov edx, dword ptr [ebp - 0ech]
        mov eax, dword ptr [edx + 54h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 FC FA FF FF: call 0x518195
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 25: jmp 0x5186c0
        __asm _emit 0xeb
        __asm _emit 0x25
        push 0
        mov eax, dword ptr [ebp + 0ch]
        and eax, 2
        neg eax
        sbb eax, eax
        and eax, 7fffh
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 D5 FA FF FF: call 0x518195
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea edx, [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 5E F5 FF FF: call 0x517c38
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 0F 84 CC 03 00 00: je 0x518abf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], 0
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [eax + 84h], 0
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x518732
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7D 31: jge 0x51876b
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 48h]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 9]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 19: je 0x518769
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 48h]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax + 4], 0
        ; Exact mapped bytes 74 09: je 0x518769
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4ch]
        add edx, 1
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes EB BE: jmp 0x518729
        __asm _emit 0xeb
        __asm _emit 0xbe
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 8E 61 01 00 00: jle 0x5188d6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 54h], eax
        push 3bch
        push 5c8c2ch
        mov ecx, dword ptr [ebp - 54h]
        imul ecx, ecx, 18h
        push ecx
        ; Exact mapped bytes E8 A2 48 FD FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0b0h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 25: je 0x5187cf
        __asm _emit 0x74
        __asm _emit 0x25
        push 519cb0h
        mov edx, dword ptr [ebp - 54h]
        push edx
        push 18h
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        ; Exact mapped bytes E8 7F 4C F2 FF: call 0x43d440
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x4c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 0f4h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x5187d9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 0ach], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x51880e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 1
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 50h]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x5188d6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 9]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x5188d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax + 4], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x5188d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        imul edx, edx, 18h
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [eax + edx], ecx
        mov edx, dword ptr [ebp - 50h]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp - 4ch]
        imul eax, eax, 18h
        mov ecx, dword ptr [ebp - 40h]
        mov esi, dword ptr [ebp - 10h]
        mov edx, dword ptr [esi + edx + 4]
        mov dword ptr [ecx + eax + 4], edx
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 D8 D4 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 0ech]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes FF 90 E8 00 00 00: call dword ptr [eax + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 49 A1 FE FF: call 0x5029ed
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4ch]
        imul edx, edx, 18h
        mov eax, dword ptr [ebp - 40h]
        lea ecx, [eax + edx + 8]
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 1
        mov dword ptr [ebp - 4ch], ecx
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x518805
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ech]
        mov eax, dword ptr [edx + 64h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x518902
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 0ech]
        mov edx, dword ptr [ecx + 64h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x518902
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 0ech]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 54h], ecx
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x518914
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 48h]
        add edx, 1
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7D 1D: jge 0x518939
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 48h]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 EB ED FF FF: call 0x517722
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D2: jmp 0x51890b
        __asm _emit 0xeb
        __asm _emit 0xd2
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 8E 6D 01 00 00: jle 0x518ab0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes EB 09: jmp 0x518955
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 68h]
        add ecx, 1
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 68h]
        cmp edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F 8D 37 01 00 00: jge 0x518a98
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        imul eax, eax, 18h
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 4]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 67 5F FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x518a93
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 C2 D3 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 14 37 02 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 68h]
        imul ecx, ecx, 18h
        mov edx, dword ptr [ebp - 40h]
        lea ecx, [edx + ecx + 8]
        ; Exact mapped bytes E8 FA D4 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0c0h], ecx
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        lea edx, [ebp - 0c8h]
        push edx
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 CC D4 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 85 D2 01 00: call 0x535c67
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0b8h], ecx
        mov dword ptr [ebp - 0b4h], edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 9C CF 01 00: call 0x5359a8
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 68h]
        imul eax, eax, 18h
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax]
        push edx
        mov eax, dword ptr [ebp - 0ech]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 0cch], ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        lea ecx, [ebp - 0d8h]
        push ecx
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 44 D4 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C3 D1 01 00: call 0x535c2d
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 84h], edx
        mov dword ptr [ebp - 80h], eax
        push 15h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 84h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 FD 67 FD FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 B4 FE FF FF: jmp 0x51894c
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        ; Exact mapped bytes E8 5C 49 FD FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 0ech]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [edx + 84h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        ; Exact mapped bytes E8 35 49 FD FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        lea ecx, [ebp - 9ch]
        ; Exact mapped bytes E8 6F D2 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 9ch]
        ; Exact mapped bytes E8 5E D5 01 00: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and eax, 2
        push eax
        lea ecx, [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 4F E6 FF FF: call 0x517155
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 9ch]
        ; Exact mapped bytes E8 3F D3 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        sub edx, eax
        mov dword ptr [ebp - 14h], edx
        lea ecx, [ebp - 9ch]
        ; Exact mapped bytes E8 16 D3 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, eax
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 2
        push edx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 1
        push eax
        lea ecx, [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 4F CD FF FF: call 0x51589b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 8ch], edx
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes 7E 0B: jle 0x518b73
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0f8h], edx
        ; Exact mapped bytes EB 0C: jmp 0x518b7f
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 7E 0B: jle 0x518b9e
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0C: jmp 0x518baa
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 0fch], ecx
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
