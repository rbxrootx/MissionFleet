// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 2986 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878F990 .. +0xBAA bytes.
extern "C" __declspec(naked) void FUN_5878f990_segment_00() {
    __asm {
        push -1
        push 58980263h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
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
        lea eax, [esp + 44h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes E8 92 B4 FF FF: call 0x5878ae50
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 8B B3 FF FF: call 0x5878ad50
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        or edi, 0ffffffffh
        cmp dword ptr [esi + 1210ch], 0
        ; Exact mapped bytes 75 78: jne 0x5878fa49
        __asm _emit 0x75
        __asm _emit 0x78
        push 84h
        ; Exact mapped bytes E8 73 D2 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd2
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 4ch], 0
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x5878fa3d
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 18fh
        ; Exact mapped bytes 7E 17: jle 0x5878fa17
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5878fa17
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [ecx + 63ch]
        ; Exact mapped bytes EB 02: jmp 0x5878fa19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, 3e8h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx ecx, cx
        push ecx
        push 132h
        push 0c9h
        push edx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 55 EE FD FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878fa3f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 4ch], edi
        mov dword ptr [esi + 1210ch], eax
        cmp dword ptr [esi + 12110h], 0
        ; Exact mapped bytes 75 78: jne 0x5878faca
        __asm _emit 0x75
        __asm _emit 0x78
        push 84h
        ; Exact mapped bytes E8 F2 D1 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd1
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 4ch], 1
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x5878fabe
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 1c9h
        ; Exact mapped bytes 7E 17: jle 0x5878fa98
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5878fa98
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 724h]
        ; Exact mapped bytes EB 02: jmp 0x5878fa9a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, 384h
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        movzx edx, dx
        push edx
        push 132h
        push 0c9h
        push ecx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 D4 ED FD FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878fac0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 4ch], edi
        mov dword ptr [esi + 12110h], eax
        mov eax, dword ptr [esi + 12110h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 12110h]
        push 0fffffeffh
        ; Exact mapped bytes E8 37 32 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x32
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12110h]
        mov dword ptr [eax + 78h], 0fffffeffh
        mov eax, dword ptr [esi + 12110h]
        mov edi, 100h
        mov dword ptr [eax + 7ch], edi
        mov ebp, 40000000h
        mov dword ptr [eax + 74h], ebp
        mov ecx, dword ptr [esi + 12110h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 1210ch]
        mov ebx, 101h
        push ebx
        ; Exact mapped bytes E8 F6 31 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x31
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1210ch]
        mov dword ptr [eax + 78h], ebx
        mov eax, dword ptr [esi + 1210ch]
        mov dword ptr [eax + 7ch], edi
        mov dword ptr [eax + 74h], ebp
        mov ecx, dword ptr [esi + 1210ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp dword ptr [esi + 12114h], 0
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x5878fbde
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 EB D0 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd0
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 4ch], 2
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x5878fbce
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 35h
        ; Exact mapped bytes 7E 17: jle 0x5878fb9c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5878fb9c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0d40h
        ; Exact mapped bytes EB 02: jmp 0x5878fb9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, 3e8h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx ecx, cx
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 249h
        push 271h
        push edx
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D4 E1 FC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe1
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878fbd0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 4ch], 0ffffffffh
        mov dword ptr [esi + 12114h], eax
        mov ecx, dword ptr [esi + 12114h]
        push ebx
        ; Exact mapped bytes E8 36 31 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x31
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12114h]
        push 0
        ; Exact mapped bytes E8 E9 30 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12114h]
        mov dword ptr [eax + 80h], edi
        mov ecx, dword ptr [esi + 12114h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp dword ptr [esi + 12118h], 0
        ; Exact mapped bytes 75 7C: jne 0x5878fc95
        __asm _emit 0x75
        __asm _emit 0x7c
        push 84h
        ; Exact mapped bytes E8 2B D0 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd0
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 4ch], 3
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x5878fc85
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 1cah
        ; Exact mapped bytes 7E 17: jle 0x5878fc5f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5878fc5f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [ecx + 728h]
        ; Exact mapped bytes EB 02: jmp 0x5878fc61
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, 384h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx ecx, cx
        push ecx
        push 249h
        push 271h
        push edx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 0D EC FD FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878fc87
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 4ch], 0ffffffffh
        mov dword ptr [esi + 12118h], eax
        mov eax, dword ptr [esi + 12118h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 12118h]
        push 0fffffeffh
        ; Exact mapped bytes E8 6C 30 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x30
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12118h]
        mov dword ptr [eax + 78h], 0fffffeffh
        mov eax, dword ptr [esi + 12118h]
        mov dword ptr [eax + 7ch], edi
        mov dword ptr [eax + 74h], ebp
        mov ecx, dword ptr [esi + 12118h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push 90h
        ; Exact mapped bytes E8 6A CF 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xcf
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 4ch], 4
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5878fd1c
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, 384h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx edx, cx
        push edx
        push 249h
        push 26ch
        push 0
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 F6 E7 FD FF: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878fd1e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebx
        mov ecx, eax
        mov dword ptr [esp + 50h], 0ffffffffh
        mov dword ptr [esi + 1211ch], eax
        ; Exact mapped bytes E8 EC 2F 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2f
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1211ch]
        mov dword ptr [eax + 80h], ebx
        mov eax, dword ptr [esi + 1211ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1211ch]
        push 0
        ; Exact mapped bytes E8 84 2F 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1211ch]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [esi + 1211ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp dword ptr [esi + 13ch], 0
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x5878fe0e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 BE CE 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xce
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 4ch], 5
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x5878fdfe
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0e1h
        ; Exact mapped bytes 7E 17: jle 0x5878fdcc
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5878fdcc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 3840h
        ; Exact mapped bytes EB 02: jmp 0x5878fdce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, 3e8h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx ecx, cx
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 249h
        push 2a8h
        push edx
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A4 DF FC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878fe00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 4ch], 0ffffffffh
        mov dword ptr [esi + 13ch], eax
        mov ecx, dword ptr [esi + 13ch]
        push ebx
        ; Exact mapped bytes E8 06 2F 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2f
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        push 0
        ; Exact mapped bytes E8 B9 2E 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x2e
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 13ch]
        mov dword ptr [eax + 80h], edi
        mov ecx, dword ptr [esi + 13ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp dword ptr [esi + 138h], 0
        ; Exact mapped bytes 75 7C: jne 0x5878fec5
        __asm _emit 0x75
        __asm _emit 0x7c
        push 84h
        ; Exact mapped bytes E8 FB CD 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcd
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 4ch], 6
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x5878feb5
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 1cah
        ; Exact mapped bytes 7E 17: jle 0x5878fe8f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5878fe8f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [ecx + 728h]
        ; Exact mapped bytes EB 02: jmp 0x5878fe91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, 384h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx ecx, cx
        push ecx
        push 249h
        push 2a8h
        push edx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 DD E9 FD FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878feb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 4ch], 0ffffffffh
        mov dword ptr [esi + 138h], eax
        mov eax, dword ptr [esi + 138h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 138h]
        push 0fffffeffh
        ; Exact mapped bytes E8 3C 2E 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x2e
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 138h]
        mov dword ptr [eax + 78h], 0fffffeffh
        mov eax, dword ptr [esi + 138h]
        mov dword ptr [eax + 7ch], edi
        mov dword ptr [eax + 74h], ebp
        mov ecx, dword ptr [esi + 138h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 12124h]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        mov eax, dword ptr [esi + 12124h]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12128h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12140h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        lea edi, [esi + 144h]
        push edi
        push 589977a0h
        ; Exact mapped bytes FF 15 38 C1 98 58: call dword ptr [0x5898c138]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 45: jne 0x5878ff93
        __asm _emit 0x75
        __asm _emit 0x45
        lea eax, [esi + 252h]
        push eax
        push edi
        ; Exact mapped bytes 8B 3D 98 C1 98 58: mov edi, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 8B 8E 52 82 00 00: mov cx, word ptr [esi + 0x8252]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x52
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 9a58h]
        push edx
        lea eax, [esi + 9954h]
        ; Exact mapped bytes 66 89 8E 44 02 00 00: mov word ptr [esi + 0x244], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes C7 05 FC 3E 9C 58 00 00 00 00: mov dword ptr [0x589c3efc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x3e
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        movzx ecx, word ptr [esi + 11a58h]
        mov dword ptr [esi + 9a54h], ecx
        mov eax, dword ptr [esi + 24ch]
        lea ecx, [eax - 2]
        mov edx, 6eh
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 28h], 26fh
        mov dword ptr [esp + 24h], 64h
        cmp ecx, 0ah
        ; Exact mapped bytes 77 4A: ja 0x58790004
        __asm _emit 0x77
        __asm _emit 0x4a
        movzx ecx, byte ptr [ecx + 58790554h]
        ; Exact mapped bytes FF 24 8D 3C 05 79 58: jmp dword ptr [ecx*4 + 0x5879053c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x79
        __asm _emit 0x58
        mov dword ptr [esp + 14h], 18ah
        mov dword ptr [esp + 24h], 0a0h
        ; Exact mapped bytes EB 2A: jmp 0x58790004
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov dword ptr [esp + 14h], 163h
        ; Exact mapped bytes EB 20: jmp 0x58790004
        __asm _emit 0xeb
        __asm _emit 0x20
        mov dword ptr [esp + 14h], 12ah
        ; Exact mapped bytes EB 16: jmp 0x58790004
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [esp + 14h], 0f1h
        ; Exact mapped bytes EB 0C: jmp 0x58790004
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 24h], 5fh
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr [esi + 248h], 0ffffffffh
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esp + 2ch], ebp
        ; Exact mapped bytes 0F 8E 7D 02 00 00: jle 0x5879029d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 8754h]
        lea eax, [esi + 8252h]
        lea ecx, [esi + 252h]
        mov dword ptr [esp + 30h], edx
        lea edi, [esi + 11b64h]
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 2ch], ecx
        push 0ach
        ; Exact mapped bytes E8 00 CC 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcc
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 4ch], 7
        test eax, eax
        ; Exact mapped bytes 74 62: je 0x587900c3
        __asm _emit 0x74
        __asm _emit 0x62
        mov edx, dword ptr [edi - 9710h]
        ; Exact mapped bytes 8B 0D A8 46 A2 58: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 18: jle 0x5879008d
        __asm _emit 0x7e
        __asm _emit 0x18
        test edx, edx
        ; Exact mapped bytes 7C 14: jl 0x5879008d
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5879008d
        __asm _emit 0x74
        __asm _emit 0x0b
        shl edx, 6
        add edx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5879008f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esi + 8]
        add ecx, dword ptr [esp + 28h]
        push 40h
        push ecx
        mov ecx, dword ptr [esp + 28h]
        imul ecx, dword ptr [esp + 2ch]
        add ecx, dword ptr [esi + 4]
        add ecx, dword ptr [esp + 1ch]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 DF DC FC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587900c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi], eax
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0b8h
        mov dword ptr [esp + 4ch], 0ffffffffh
        ; Exact mapped bytes 7E 17: jle 0x587900f7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587900f7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 2e0h]
        ; Exact mapped bytes EB 02: jmp 0x587900f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 4b8h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5879012e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [edi + 4b8h]
        add eax, 4
        mov eax, dword ptr [eax]
        push edx
        push eax
        ; Exact mapped bytes E8 4B 31 17 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x31
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4b8h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 C4 2B 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2b
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 70 2B 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x2b
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 80h], 100h
        mov ebx, dword ptr [edi]
        movzx eax, word ptr [esi + 26h]
        mov ecx, dword ptr [ebx + 40h]
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58790193
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 BD 2D 17 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x2d
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587901a0
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 40 2D 17 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2d
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebx, dword ptr [esp + 34h]
        ; Exact mapped bytes 66 83 BB 00 01 00 00 00: cmp word ptr [ebx + 0x100], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x587901cb
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [edi]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esp + 2ch]
        lea eax, [esi + 144h]
        push eax
        push edx
        ; Exact mapped bytes FF 15 38 C1 98 58: call dword ptr [0x5898c138]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 61: jne 0x58790242
        __asm _emit 0x75
        __asm _emit 0x61
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 66 3B 86 44 02 00 00: cmp ax, word ptr [esi + 0x244]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 55: jne 0x58790242
        __asm _emit 0x75
        __asm _emit 0x55
        cmp ebp, 20h
        ; Exact mapped bytes 7D 50: jge 0x58790242
        __asm _emit 0x7d
        __asm _emit 0x50
        mov dword ptr [esi + 248h], ebp
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 50h], 5
        mov eax, dword ptr [edi + 4b8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 30h]
        ; Exact mapped bytes 8B 15 70 45 A2 58: mov edx, dword ptr [0x58a24570]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 6ch]
        push ecx
        push 5898d0d4h
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 70 45 A2 58: mov eax, dword ptr [0x58a24570]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        add eax, 24h
        add esp, 0ch
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes EB 0B: jmp 0x5879024d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [edi + 4b8h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        lea eax, [ebp + 1]
        mov ecx, eax
        and ecx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x5879025f
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffff8h
        inc ecx
        ; Exact mapped bytes 75 0F: jne 0x58790270
        __asm _emit 0x75
        __asm _emit 0x0f
        add dword ptr [esp + 28h], 19h
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes EB 04: jmp 0x58790274
        __asm _emit 0xeb
        __asm _emit 0x04
        inc dword ptr [esp + 20h]
        add dword ptr [esp + 2ch], 100h
        add dword ptr [esp + 30h], 20h
        mov ebp, eax
        add ebx, 2
        add edi, 4
        cmp ebp, dword ptr [esi + 24ch]
        mov dword ptr [esp + 34h], ebx
        ; Exact mapped bytes 0F 8C AB FD FF FF: jl 0x58790044
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 2ch], eax
        xor ebx, ebx
        cmp dword ptr [esi + 24ch], ebx
        ; Exact mapped bytes 0F 8E 48 01 00 00: jle 0x587903f3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0fffee7a8h
        sub eax, esi
        mov dword ptr [esp + 30h], 0c1h
        lea ebp, [esi + 11b5ch]
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 34h], 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 77 C9 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc9
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov dword ptr [esp + 4ch], 8
        test edi, edi
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x58790378
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 30h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1C: jle 0x5879031d
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x5879031d
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x5879031d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [eax + 18ch]
        add edx, dword ptr [esp + 28h]
        mov ebx, dword ptr [edx + ebp]
        ; Exact mapped bytes EB 02: jmp 0x5879031f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 1210ch]
        push 40h
        push 0
        push 0
        add eax, 253h
        add ecx, 54h
        push eax
        push ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 5D 2E 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2e
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x5879037a
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x5879037a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        mov edi, dword ptr [ebp]
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 EA 0A: sub dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x0a
        mov dword ptr [esp + 4ch], 0ffffffffh
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587903aa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A6 2B 17 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2b
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587903b7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 29 2B 17 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2b
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, 1
        add dword ptr [esp + 30h], eax
        add ebp, 4
        sub dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 03 FF FF FF: jne 0x587902d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 11b5ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 43 29 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x29
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11b60h]
        push 101h
        ; Exact mapped bytes E8 33 29 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x29
        __asm _emit 0x17
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 2ch]
        xor ebx, ebx
        cmp ebp, 80h
        ; Exact mapped bytes 7D 25: jge 0x58790420
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, 80h
        lea eax, [esi + ebp*4 + 11b64h]
        sub ecx, ebp
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 200h], ebx
        mov dword ptr [eax], ebx
        add eax, 4
        sub ecx, 1
        ; Exact mapped bytes 75 F0: jne 0x58790410
        __asm _emit 0x75
        __asm _emit 0xf0
        lea eax, [esp + 1ch]
        push eax
        push 0f003fh
        push ebx
        push 58997258h
        mov ebp, 4
        push 80000002h
        mov dword ptr [esi + 12138h], 11h
        mov dword ptr [esi + 1213ch], 13h
        mov dword ptr [esp + 4ch], ebp
        ; Exact mapped bytes FF 15 08 C0 98 58: call dword ptr [0x5898c008]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x5879051b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 38h]
        push ecx
        mov ecx, dword ptr [esp + 20h]
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esp + 44h]
        push eax
        push ebx
        push 5899779ch
        push ecx
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 50h], ebp
        ; Exact mapped bytes FF 15 04 C0 98 58: call dword ptr [0x5898c004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 0C C0 98 58: mov esi, dword ptr [0x5898c00c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x587904cd
        __asm _emit 0x74
        __asm _emit 0x3b
        lea edx, [esp + 3ch]
        push edx
        lea eax, [esp + 20h]
        push eax
        push ebx
        push 0f003fh
        push ebx
        push 5899779ch
        push ebx
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF 15 10 C0 98 58: call dword ptr [0x5898c010]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [esp + 1ch]
        push ebp
        lea ecx, [esp + 1ch]
        push ecx
        push ebp
        push ebx
        push 5899779ch
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, 20060413h
        cmp dword ptr [esp + 18h], edi
        ; Exact mapped bytes 74 38: je 0x58790510
        __asm _emit 0x74
        __asm _emit 0x38
        push ebx
        push 58997780h
        push 58997764h
        ; Exact mapped bytes FF 15 2C C1 98 58: call dword ptr [0x5898c12c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x58790510
        __asm _emit 0x74
        __asm _emit 0x23
        push 58997764h
        ; Exact mapped bytes FF 15 7C C1 98 58: call dword ptr [0x5898c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 1ch]
        push ebp
        lea eax, [esp + 1ch]
        push eax
        push ebp
        push ebx
        push 5899779ch
        push ecx
        mov dword ptr [esp + 30h], edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [esp + 1ch]
        push edx
        ; Exact mapped bytes FF 15 00 C0 98 58: call dword ptr [0x5898c000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D E8 45 A2 58: mov ecx, dword ptr [0x58a245e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 43 03 00: call 0x587c48f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 44h]
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
        add esp, 3ch
        ret
    }
}
