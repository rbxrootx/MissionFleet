// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 2983 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873CEE0 .. +0xBA7 bytes.
extern "C" __declspec(naked) void FUN_5873cee0_segment_00() {
    __asm {
        push -1
        push 5897ddcah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 12ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 128h], eax
        push ebx
        push ebp
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
        lea eax, [esp + 140h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 154h]
        mov esi, ecx
        cmp dword ptr [esi + 4c8h], 0ah
        mov dword ptr [esp + 24h], ebp
        ; Exact mapped bytes 0F 84 28 0B 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 9C 24 50 01 00 00: mov bx, word ptr [esp + 0x150]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp dword ptr [esi + 47ch], edi
        ; Exact mapped bytes 74 24: je 0x5873cf6b
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 FB 16: cmp bx, 0x16
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x16
        ; Exact mapped bytes 74 1E: je 0x5873cf6b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 490h]
        mov dword ptr [esi + 47ch], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5873cf6b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 490h], edi
        cmp dword ptr [esi + 480h], edi
        ; Exact mapped bytes 74 1E: je 0x5873cf91
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 494h]
        mov dword ptr [esi + 480h], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5873cf91
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 494h], edi
        movzx eax, bx
        mov dword ptr [esi + 484h], edi
        cmp eax, 1ah
        ; Exact mapped bytes 0F 87 BA 0A 00 00: ja 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xba
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 5873dac4h]
        ; Exact mapped bytes FF 24 85 88 DA 73 58: jmp dword ptr [eax*4 + 0x5873da88]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x73
        __asm _emit 0x58
        cmp ebp, edi
        ; Exact mapped bytes 0F 84 A4 0A 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 3D 74 45 A2 58: cmp dword ptr [0x58a24574], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 79: je 0x5873d03a
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [esi + 340h]
        push edx
        mov edx, dword ptr [esi + 4b0h]
        push edx
        mov edx, dword ptr [esi + 4ach]
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 10488h]
        mov eax, dword ptr [eax + 10490h]
        push edx
        mov edx, dword ptr [esi + 8]
        push edx
        mov edx, dword ptr [esi + 4]
        push edx
        mov edx, dword ptr [esi + 74h]
        add edx, 3a0h
        push edx
        mov edx, dword ptr [esi + 78h]
        push edx
        mov edx, dword ptr [esi + 7ch]
        push edx
        push ecx
        push eax
        lea eax, [esp + 64h]
        push 5898cce8h
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 30h
        push edi
        lea ecx, [esp + 18h]
        push ecx
        lea edx, [esp + 44h]
        push edx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        push eax
        lea eax, [esp + 48h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4c8h]
        or ebp, 0ffffffffh
        mov ebx, 4
        lea edx, [ebp + 3]
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x5873d0db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 2cch]
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 35: jne 0x5873d095
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [esi + 4d8h]
        mov dword ptr [esi + 31ch], edx
        cmp ecx, edi
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5873d105
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 F6 D5 FF FF: call 0x5873a670
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 23h
        ; Exact mapped bytes E8 F9 EF 1A 00: call 0x588ec080
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xef
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [esi + 4d8h], edi
        mov dword ptr [esi + 4dch], ebp
        ; Exact mapped bytes EB 70: jmp 0x5873d105
        __asm _emit 0xeb
        __asm _emit 0x70
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 65: jne 0x5873d0ff
        __asm _emit 0x75
        __asm _emit 0x65
        cmp dword ptr [esi + 31ch], edi
        ; Exact mapped bytes 7E 08: jle 0x5873d0aa
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [esi + 31ch], edx
        ; Exact mapped bytes EB 06: jmp 0x5873d0b0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 4c8h], edi
        mov ecx, dword ptr [esi + 4d8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 4B: je 0x5873d105
        __asm _emit 0x74
        __asm _emit 0x4b
        push edi
        ; Exact mapped bytes E8 B0 D5 FF FF: call 0x5873a670
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 23h
        ; Exact mapped bytes E8 B3 EF 1A 00: call 0x588ec080
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xef
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [esi + 4d8h], edi
        mov dword ptr [esi + 4dch], ebp
        ; Exact mapped bytes EB 2A: jmp 0x5873d105
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp eax, 64h
        ; Exact mapped bytes 75 1B: jne 0x5873d0fb
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 4d8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 11: je 0x5873d0fb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 39 96 CC 02 00 00: cmp word ptr [esi + 0x2cc], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x5873d0fb
        __asm _emit 0x75
        __asm _emit 0x08
        push edi
        ; Exact mapped bytes E8 A7 D5 FF FF: call 0x5873a6a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x5873d0ff
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x5873d105
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 4c8h], edi
        mov edx, dword ptr [esi + 33ch]
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esi + 324h], edx
        mov dword ptr [esi + 4d8h], edi
        mov dword ptr [esi + 4dch], ebp
        mov dword ptr [esi + 4cch], edi
        mov dword ptr [esi + 45ch], edi
        mov dword ptr [esi + 46ch], edi
        movzx ecx, word ptr [eax]
        movzx edx, word ptr [eax + 2]
        cmp dword ptr [esi + 474h], edi
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5873d1f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C1: movsx eax, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc1
        ; Exact mapped bytes 0F BF CA: movsx ecx, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xca
        lea edx, [esp + 14h]
        mov dword ptr [esp + 18h], ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes E8 A0 D0 FF FF: call 0x5873a200
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        cmp eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 0F 85 EC 08 00 00: jne 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        ; Exact mapped bytes E8 D6 FA 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 148h], edi
        cmp eax, edi
        ; Exact mapped bytes 74 4F: je 0x5873d1d9
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 22h
        ; Exact mapped bytes 7E 14: jle 0x5873d1ad
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0C: je 0x5873d1ad
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edi, dword ptr [ecx + 190h]
        add edi, 880h
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 4a4h]
        push 1388h
        push ecx
        mov ecx, dword ptr [esi + 4a0h]
        push ecx
        push edi
        push edx
        push 2
        mov ecx, eax
        ; Exact mapped bytes E8 E9 12 03 00: call 0x5876e4c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5873d1db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 102h
        mov ecx, eax
        mov dword ptr [esp + 14ch], ebp
        ; Exact mapped bytes E8 32 5B 1C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5b
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes E9 6A 08 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        mov edi, dword ptr [esi + 74h]
        add eax, 139h
        shl eax, 4
        mov eax, dword ptr [eax + edi]
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes 0F BF EA: movsx ebp, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xea
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes 0F BF D9: movsx ebx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd9
        mov ecx, dword ptr [eax + 8]
        push ebp
        push ebx
        push ecx
        push edx
        ; Exact mapped bytes E8 F4 ED 02 00: call 0x5876c010
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        lea edi, [eax + eax*4]
        lea eax, [ecx + 1]
        cdq
        sub eax, edx
        mov edx, ecx
        add esp, 10h
        add edi, edi
        sar eax, 1
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5873d23e
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        ; Exact mapped bytes 74 0A: je 0x5873d24a
        __asm _emit 0x74
        __asm _emit 0x0a
        lea edx, [eax + eax]
        sub ecx, edx
        imul ecx, eax
        ; Exact mapped bytes EB 02: jmp 0x5873d24c
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, eax
        neg eax
        add eax, eax
        add eax, eax
        add eax, eax
        shl ecx, 4
        mov dword ptr [esp + 24h], eax
        push edi
        lea eax, [esp + 20h]
        mov dword ptr [esp + 2ch], ecx
        push eax
        lea ecx, [esp + 2ch]
        push ecx
        ; Exact mapped bytes E8 31 ED 02 00: call 0x5876bfa0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        imul ecx, ecx, 56h
        add dword ptr [esp + 28h], ebx
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        add esp, 0ch
        lea edx, [esp + 1ch]
        add eax, ebp
        push edx
        mov ecx, esi
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes E8 60 CF FF FF: call 0x5873a200
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        cmp eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 0F 85 AC 07 00 00: jne 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        ; Exact mapped bytes E8 96 F9 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 148h], 1
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x5873d322
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 22h
        ; Exact mapped bytes 7E 17: jle 0x5873d2f4
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5873d2f4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 880h
        ; Exact mapped bytes EB 02: jmp 0x5873d2f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 4a4h]
        push 1388h
        push ecx
        mov ecx, dword ptr [esi + 4a0h]
        push ecx
        push edx
        push edi
        push 2
        mov ecx, eax
        ; Exact mapped bytes E8 A0 11 03 00: call 0x5876e4c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5873d324
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 102h
        mov ecx, eax
        mov dword ptr [esp + 14ch], 0ffffffffh
        ; Exact mapped bytes E8 E5 59 1C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes E9 1D 07 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4d8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 06: je 0x5873d350
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 50 D3 FF FF: call 0x5873a6a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp + 4]
        mov dword ptr [esi + 4dch], eax
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 FA CD 04 00: call 0x5878a160
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [esi + 4d8h], eax
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 4a0h], edx
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esi + 4a4h], eax
        mov dword ptr [esi + 4c8h], 64h
        ; Exact mapped bytes E8 60 F8 19 00: call 0x588dcbf0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf8
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C5 06 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4d8h]
        push 1
        ; Exact mapped bytes E8 FB D2 FF FF: call 0x5873a6a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B3 06 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 3D 74 45 A2 58: cmp dword ptr [0x58a24574], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 78: je 0x5873d42a
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [esi + 340h]
        mov edx, dword ptr [esi + 4b0h]
        mov eax, dword ptr [esi + 4ach]
        push ecx
        mov ecx, dword ptr [esi + 8]
        push edx
        mov edx, dword ptr [esi + 4]
        push eax
        mov eax, dword ptr [esi + 74h]
        push ecx
        mov ecx, dword ptr [esi + 78h]
        push edx
        mov edx, dword ptr [esi + 7ch]
        add eax, 3a0h
        push eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [eax + 10488h]
        push edx
        mov edx, dword ptr [eax + 10490h]
        push ecx
        push edx
        lea eax, [esp + 64h]
        push 5898cc88h
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 30h
        push edi
        lea ecx, [esp + 18h]
        push ecx
        lea edx, [esp + 44h]
        push edx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        push eax
        lea eax, [esp + 48h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 4c8h]
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 24 06 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 2cch]
        mov edx, 1
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 0F 06 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 05 06 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [edx + 3]
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 74 09: je 0x5873d46a
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 F3 05 00 00: jne 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 BE D6 02 00 00: cmp word ptr [esi + 0x2d6], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 E6 05 00 00: jbe 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 4cch], edi
        mov dword ptr [esi + 45ch], edi
        cmp ebp, edi
        ; Exact mapped bytes 0F 84 D2 05 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, ebx
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x5873d55a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 340h]
        cmp eax, dword ptr [esi + 324h]
        ; Exact mapped bytes 0F 8C B1 00 00 00: jl 0x5873d556
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4d8h]
        mov dword ptr [esi + 348h], edi
        mov dword ptr [esi + 4c8h], ebx
        cmp ecx, edi
        ; Exact mapped bytes 74 23: je 0x5873d4de
        __asm _emit 0x74
        __asm _emit 0x23
        push edi
        ; Exact mapped bytes E8 AF D1 FF FF: call 0x5873a670
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 23h
        ; Exact mapped bytes E8 B2 EB 1A 00: call 0x588ec080
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [esi + 4d8h], edi
        mov dword ptr [esi + 4dch], 0ffffffffh
        movzx eax, word ptr [ebp + 4]
        mov dword ptr [esi + 4dch], eax
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 6C CC 04 00: call 0x5878a160
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + 4d8h], eax
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 4a0h], ecx
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [esi + 4a4h], edx
        ; Exact mapped bytes E8 DC F6 19 00: call 0x588dcbf0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf6
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 41 05 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4d8h]
        push 1
        ; Exact mapped bytes E8 47 D1 FF FF: call 0x5873a670
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4d8h]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 0F 85 1F 05 00 00: jne 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push 83h
        push 23h
        ; Exact mapped bytes E8 AF EB 1A 00: call 0x588ec100
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xeb
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes E9 07 05 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, ebx
        ; Exact mapped bytes 75 23: jne 0x5873d57d
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [esi + 31ch], edx
        ; Exact mapped bytes 75 1B: jne 0x5873d57d
        __asm _emit 0x75
        __asm _emit 0x1b
        movzx eax, word ptr [ebp + 4]
        cmp dword ptr [esi + 4dch], eax
        ; Exact mapped bytes 0F 85 EB 04 00 00: jne 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 46ch], edx
        ; Exact mapped bytes E9 E0 04 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 46ch], edi
        mov esi, dword ptr [esi + 4d8h]
        cmp esi, edi
        ; Exact mapped bytes 0F 84 CC 04 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 D7 D0 FF FF: call 0x5873a670
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 04 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 5
        cmp dword ptr [esi + 4c8h], ebx
        ; Exact mapped bytes 74 D8: je 0x5873d583
        __asm _emit 0x74
        __asm _emit 0xd8
        ; Exact mapped bytes 39 3D 74 45 A2 58: cmp dword ptr [0x58a24574], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 78: je 0x5873d62b
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [esi + 340h]
        mov edx, dword ptr [esi + 4b0h]
        mov eax, dword ptr [esi + 4ach]
        push ecx
        mov ecx, dword ptr [esi + 8]
        push edx
        mov edx, dword ptr [esi + 4]
        push eax
        mov eax, dword ptr [esi + 74h]
        push ecx
        mov ecx, dword ptr [esi + 78h]
        push edx
        mov edx, dword ptr [esi + 7ch]
        add eax, 3a0h
        push eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [eax + 10488h]
        push edx
        mov edx, dword ptr [eax + 10490h]
        push ecx
        push edx
        lea eax, [esp + 64h]
        push 5898cc28h
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 30h
        push edi
        lea ecx, [esp + 18h]
        push ecx
        lea edx, [esp + 44h]
        push edx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        push eax
        lea eax, [esp + 48h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [esi + 74h]
        mov dword ptr [esi + 4c8h], ebx
        mov dword ptr [esi + 31ch], edi
        mov dword ptr [esi + 45ch], edi
        mov eax, dword ptr [edx + 6060h]
        add eax, 384h
        cdq
        mov ecx, 0e10h
        idiv ecx
        lea eax, [esp + 2ch]
        mov dword ptr [esp + 2ch], 0ffffff38h
        mov dword ptr [esp + 30h], edi
        push edx
        lea edx, [esp + 38h]
        push edx
        push eax
        ; Exact mapped bytes E8 31 E9 02 00: call 0x5876bfa0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [esp + 40h]
        add esp, 0ch
        mov dword ptr [esi + 4a0h], ecx
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [esp + 38h]
        mov dword ptr [esi + 4a4h], edx
        cmp dword ptr [esi + 474h], edi
        ; Exact mapped bytes 0F 84 E8 FE FF FF: je 0x5873d583
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 39 3D DC 8E 9C 58: cmp dword ptr [0x589c8edc], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 DC FE FF FF: je 0x5873d583
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
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
        cmp dword ptr [ecx + 21c34h], edi
        ; Exact mapped bytes 0F 85 CA FE FF FF: jne 0x5873d583
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebp, edi
        ; Exact mapped bytes 75 7F: jne 0x5873d73c
        __asm _emit 0x75
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 74: jne 0x5873d73c
        __asm _emit 0x75
        __asm _emit 0x74
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, 26h
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 16: jle 0x5873d6f0
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], edi
        ; Exact mapped bytes 74 0E: je 0x5873d6f0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes EB 02: jmp 0x5873d6f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 92 A2 1C 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa2
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 27: jle 0x5873d732
        __asm _emit 0x7e
        __asm _emit 0x27
        cmp dword ptr [eax + 194h], edi
        ; Exact mapped bytes 74 1F: je 0x5873d732
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 98h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 540h], edi
        ; Exact mapped bytes E9 51 FE FF FF: jmp 0x5873d583
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 540h], edi
        ; Exact mapped bytes E9 3C FE FF FF: jmp 0x5873d583
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4c8h]
        cmp eax, edi
        ; Exact mapped bytes 74 0E: je 0x5873d75f
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 1
        ; Exact mapped bytes 74 09: je 0x5873d75f
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, 64h
        ; Exact mapped bytes 0F 85 FE 02 00 00: jne 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 340h]
        cmp eax, dword ptr [esi + 33ch]
        ; Exact mapped bytes 0F 8D EC 02 00 00: jge 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 190h
        mov dword ptr [esi + 324h], eax
        mov dword ptr [esi + 348h], 64h
        ; Exact mapped bytes E9 D2 02 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4c8h]
        cmp eax, edi
        ; Exact mapped bytes 74 0E: je 0x5873d7a3
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 1
        ; Exact mapped bytes 74 09: je 0x5873d7a3
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, 64h
        ; Exact mapped bytes 0F 85 BA 02 00 00: jne 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 340h]
        add eax, 0fffffe70h
        cmp eax, 2710h
        ; Exact mapped bytes 0F 8E A4 02 00 00: jle 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 324h], eax
        mov dword ptr [esi + 348h], 0ffffff9ch
        ; Exact mapped bytes E9 8F 02 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 340h]
        add eax, 190h
        cmp eax, dword ptr [esi + 33ch]
        ; Exact mapped bytes 0F 8D 78 02 00 00: jge 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 324h], eax
        mov dword ptr [esi + 348h], 0c8h
        ; Exact mapped bytes E9 63 02 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 340h]
        add eax, 0fffffe70h
        cmp eax, 2710h
        ; Exact mapped bytes 0F 8E 4D 02 00 00: jle 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 324h], eax
        mov dword ptr [esi + 348h], 0ffffff38h
        ; Exact mapped bytes E9 38 02 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 4
        cmp dword ptr [esi + 4c8h], ebx
        ; Exact mapped bytes 0F 84 27 02 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 BE D6 02 00 00: cmp word ptr [esi + 0x2d6], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 1A 02 00 00: jbe 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 9E CC 02 00 00: cmp word ptr [esi + 0x2cc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 0D 02 00 00: jne 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, edi
        ; Exact mapped bytes 0F 84 05 02 00 00: je 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 47ch], 1
        mov dword ptr [esi + 480h], edi
        ; Exact mapped bytes 0F BF 4D 00: movsx ecx, word ptr [ebp]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x00
        mov dword ptr [esi + 488h], ecx
        ; Exact mapped bytes 0F BF 55 02: movsx edx, word ptr [ebp + 2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x02
        mov ecx, dword ptr [esi + 490h]
        mov dword ptr [esi + 48ch], edx
        mov dword ptr [esi + 4cch], edi
        mov dword ptr [esi + 45ch], edi
        mov dword ptr [esi + 348h], edi
        mov dword ptr [esi + 4c8h], ebx
        mov dword ptr [esi + 31ch], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5873d8b2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 490h], edi
        mov ecx, dword ptr [esi + 494h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5873d8ca
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 494h], edi
        push 58h
        ; Exact mapped bytes E8 7D F3 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf3
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 148h], 2
        cmp eax, edi
        ; Exact mapped bytes 74 51: je 0x5873d938
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 24h
        ; Exact mapped bytes 7E 16: jle 0x5873d90c
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x5873d90c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 900h
        ; Exact mapped bytes EB 02: jmp 0x5873d90e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 48ch]
        push 1388h
        push ecx
        mov ecx, dword ptr [esi + 488h]
        push ecx
        push edx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 FA 70 FF FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5873d93a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 102h
        mov ecx, eax
        mov dword ptr [esp + 14ch], 0ffffffffh
        mov dword ptr [esi + 490h], eax
        ; Exact mapped bytes E8 C9 53 1C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x53
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 74h]
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov dl, byte ptr [edx + 354h]
        cmp dl, byte ptr [ecx + 354h]
        mov ecx, dword ptr [esi + 490h]
        ; Exact mapped bytes 75 0C: jne 0x5873d982
        __asm _emit 0x75
        __asm _emit 0x0c
        push 1
        ; Exact mapped bytes E8 73 3C FF FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 68 3C FF FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x5873da5d
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 4
        lea ebp, [ebx - 3]
        cmp dword ptr [esi + 4c8h], ebx
        ; Exact mapped bytes 75 19: jne 0x5873d9b6
        __asm _emit 0x75
        __asm _emit 0x19
        cmp dword ptr [esi + 31ch], ebp
        ; Exact mapped bytes 75 11: jne 0x5873d9b6
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 66 39 9E CC 02 00 00: cmp word ptr [esi + 0x2cc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x5873d9b6
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [esi + 47ch], edi
        ; Exact mapped bytes 75 45: jne 0x5873d9fb
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 66 83 BE CC 02 00 00 03: cmp word ptr [esi + 0x2cc], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x5873da5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 340h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp eax, 32h
        ; Exact mapped bytes 7D 7D: jge 0x5873da5d
        __asm _emit 0x7d
        __asm _emit 0x7d
        ; Exact mapped bytes 66 39 BE D6 02 00 00: cmp word ptr [esi + 0x2d6], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 74: jbe 0x5873da5d
        __asm _emit 0x76
        __asm _emit 0x74
        mov dword ptr [esi + 4c8h], ebx
        mov dword ptr [esi + 31ch], ebp
        mov dword ptr [esi + 484h], ebp
        mov dword ptr [esi + 46ch], ebp
        ; Exact mapped bytes EB 5A: jmp 0x5873da5d
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes 66 83 BE 2C 02 00 00 04: cmp word ptr [esi + 0x22c], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 7D 50: jge 0x5873da5d
        __asm _emit 0x7d
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 34ch]
        mov edx, dword ptr [esi + 500h]
        mov eax, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [edx + 8]
        mov edx, dword ptr [esi + 4]
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esi + 74h]
        push eax
        push edx
        ; Exact mapped bytes E8 70 F6 19 00: call 0x588dd0a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf6
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 86 2C 02 00 00: inc word ptr [esi + 0x22c]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x5873da5d
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, esi
        mov dword ptr [esi + 46ch], 1
        ; Exact mapped bytes E8 D6 F0 FF FF: call 0x5873cb20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x5873da5d
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, esi
        mov dword ptr [esi + 46ch], 1
        ; Exact mapped bytes E8 53 F2 FF FF: call 0x5873ccb0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 140h]
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
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 128h]
        xor ecx, esp
        ; Exact mapped bytes E8 5C F1 23 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf1
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 138h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
