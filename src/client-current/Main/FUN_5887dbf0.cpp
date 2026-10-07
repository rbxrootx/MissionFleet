// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 1706 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DBF0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_5887dbf0_segment_00() {
    __asm {
        sub esp, 10ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 108h], eax
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0a4h]
        push edi
        mov dword ptr [esp + 10h], ecx
        cmp esi, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes 76 05: jbe 0x5887dc1f
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 53 F0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov edi, dword ptr [eax + 98h]
        mov ebp, esi
        mov dword ptr [esp + 14h], 0
        lea ebx, [esi + 22h]
        ; Exact mapped bytes EB 08: jmp 0x5887dc40
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DC40 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_5887dbf0_segment_01() {
    __asm {
        mov esi, dword ptr [eax + 0a8h]
        cmp dword ptr [eax + 0a4h], esi
        ; Exact mapped bytes 76 05: jbe 0x5887dc53
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 1F F0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov eax, dword ptr [eax + 98h]
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x5887dc65
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 74 05: je 0x5887dc6a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 08 F0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp ebp, esi
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x5887dd1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 75 3A: jne 0x5887dcb0
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes E8 F7 EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887dc87
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 EB EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4B E0: mov cx, word ptr [ebx - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0xe0
        mov edx, dword ptr [esp + 120h]
        ; Exact mapped bytes 66 3B 4A 02: cmp cx, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4a
        __asm _emit 0x02
        ; Exact mapped bytes 74 3B: je 0x5887dcd3
        __asm _emit 0x74
        __asm _emit 0x3b
        test edi, edi
        ; Exact mapped bytes 75 18: jne 0x5887dcb4
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 D1 EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 77 17: ja 0x5887dcbf
        __asm _emit 0x77
        __asm _emit 0x17
        test edi, edi
        ; Exact mapped bytes 74 0C: je 0x5887dcb8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB 0A: jmp 0x5887dcba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB C9: jmp 0x5887dc7d
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB EB: jmp 0x5887dca3
        __asm _emit 0xeb
        __asm _emit 0xeb
        xor eax, eax
        cmp ebx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 05: jae 0x5887dcc4
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 AE EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        add ebp, 22h
        add ebx, 22h
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x5887dc40
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x5887dd08
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [edx + 550h]
        ; Exact mapped bytes EB 09: jmp 0x5887dcf0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DCF0 .. +0x5BB bytes.
extern "C" __declspec(naked) void FUN_5887dbf0_segment_02() {
    __asm {
        mov esi, dword ptr [eax + 0cc0h]
        movzx esi, word ptr [esi + 2]
        cmp ecx, esi
        ; Exact mapped bytes 74 11: je 0x5887dd0f
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [eax + 0ce4h]
        test eax, eax
        ; Exact mapped bytes 75 E8: jne 0x5887dcf0
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, 1
        ; Exact mapped bytes EB 16: jmp 0x5887dd25
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [esp + 14h], eax
        mov eax, 2
        ; Exact mapped bytes EB 0B: jmp 0x5887dd25
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [esp + 120h]
        mov eax, dword ptr [esp + 14h]
        cwde
        sub eax, 0
        ; Exact mapped bytes 0F 84 53 03 00 00: je 0x5887e082
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 84 B5 01 00 00: je 0x5887deed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 85 4F 05 00 00: jne 0x5887e290
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x5887ddd4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 24 EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp ebp, dword ptr [edi + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887dd58
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 1A EF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xef
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esp + 120h]
        movzx esi, word ptr [ebp + 8]
        movzx eax, word ptr [edx + 8]
        mov ecx, dword ptr [esp + 14h]
        sub esi, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 5E: jne 0x5887dddb
        __asm _emit 0x75
        __asm _emit 0x5e
        push 5899f3b0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        lea eax, [esp + 20h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push esi
        mov esi, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 264h]
        ; Exact mapped bytes E8 BD 95 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 264h]
        mov ebx, 1
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        lea ecx, [esi + 1f4h]
        mov edx, 3
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, ebx
        ; Exact mapped bytes 75 F3: jne 0x5887ddc0
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ebx, esi
        ; Exact mapped bytes E9 7F 00 00 00: jmp 0x5887de53
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi]
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x5887dd4e
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 1C: jne 0x5887ddfd
        __asm _emit 0x75
        __asm _emit 0x1c
        push 5899f274h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        lea ecx, [esp + 20h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov ebx, dword ptr [esp + 1ch]
        add esp, 0ch
        ; Exact mapped bytes EB 56: jmp 0x5887de53
        __asm _emit 0xeb
        __asm _emit 0x56
        push 5899f550h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        lea edx, [esp + 20h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov ebx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ebx + 264h]
        add esp, 0ch
        push 0
        ; Exact mapped bytes E8 3C 95 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 264h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ecx, [ebx + 1f4h]
        mov edx, 3
        mov edi, edi
        mov eax, dword ptr [ecx]
        mov esi, 0fffeh
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5887de40
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [ebx + 1c8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887de93
        __asm _emit 0x74
        __asm _emit 0x33
        lea edx, [esp + 18h]
        mov esi, 80h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887de8b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887de8b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887de70
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887de8f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887de90
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f528h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, eax
        mov eax, dword ptr [ebx + 1d0h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5887dee2
        __asm _emit 0x74
        __asm _emit 0x36
        test edx, edx
        ; Exact mapped bytes 74 32: je 0x5887dee2
        __asm _emit 0x74
        __asm _emit 0x32
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x5887deda
        __asm _emit 0x74
        __asm _emit 0x1b
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 15: je 0x5887deda
        __asm _emit 0x74
        __asm _emit 0x15
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887deb5
        __asm _emit 0x75
        __asm _emit 0xe7
        push esi
        dec eax
        push esi
        mov byte ptr [eax], 0
        push esi
        ; Exact mapped bytes E9 AF 03 00 00: jmp 0x5887e289
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887dedf
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E9 9C 03 00 00: jmp 0x5887e289
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edx + 8]
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 6F: jne 0x5887df6c
        __asm _emit 0x75
        __asm _emit 0x6f
        push 5899f3b0h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea edx, [esp + 20h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 75 51: jne 0x5887df68
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes E8 56 ED 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xed
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp ebp, dword ptr [edi + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887df26
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 4C ED 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0x0f
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 8]
        mov esi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 264h]
        push eax
        ; Exact mapped bytes E8 26 94 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 264h]
        mov edi, 1
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        lea ecx, [esi + 1f4h]
        mov edx, 3
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x5887df54
        __asm _emit 0x75
        __asm _emit 0xf3
        mov edi, esi
        ; Exact mapped bytes E9 7B 00 00 00: jmp 0x5887dfe3
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi]
        ; Exact mapped bytes EB B0: jmp 0x5887df1c
        __asm _emit 0xeb
        __asm _emit 0xb0
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 1C: jne 0x5887df8e
        __asm _emit 0x75
        __asm _emit 0x1c
        push 5899f274h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea ecx, [esp + 20h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov edi, dword ptr [esp + 1ch]
        add esp, 0ch
        ; Exact mapped bytes EB 55: jmp 0x5887dfe3
        __asm _emit 0xeb
        __asm _emit 0x55
        push 5899f514h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea edx, [esp + 20h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov edi, dword ptr [esp + 1ch]
        mov ecx, dword ptr [edi + 264h]
        add esp, 0ch
        push 0
        ; Exact mapped bytes E8 AB 93 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 264h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ecx, [edi + 1f4h]
        mov edx, 3
        nop
        mov eax, dword ptr [ecx]
        mov esi, 0fffeh
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5887dfd0
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [edi + 1c8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887e023
        __asm _emit 0x74
        __asm _emit 0x33
        lea edx, [esp + 18h]
        mov esi, 80h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e01b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e01b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e000
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e01f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e020
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f4f0h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, eax
        mov eax, dword ptr [edi + 1d0h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x5887e075
        __asm _emit 0x74
        __asm _emit 0x39
        test edx, edx
        ; Exact mapped bytes 74 35: je 0x5887e075
        __asm _emit 0x74
        __asm _emit 0x35
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x5887e06d
        __asm _emit 0x74
        __asm _emit 0x1e
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 18: je 0x5887e06d
        __asm _emit 0x74
        __asm _emit 0x18
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e045
        __asm _emit 0x75
        __asm _emit 0xe7
        push 1
        dec eax
        push esi
        mov byte ptr [eax], 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x5887e28b
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e072
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 1
        push 0
        push 0
        mov ecx, edi
        ; Exact mapped bytes E9 09 02 00 00: jmp 0x5887e28b
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 5899aae4h
        lea eax, [edx + 444h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        cmp dl, byte ptr [ecx]
        ; Exact mapped bytes 75 1A: jne 0x5887e0b0
        __asm _emit 0x75
        __asm _emit 0x1a
        test dl, dl
        ; Exact mapped bytes 74 12: je 0x5887e0ac
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [eax + 1]
        cmp dl, byte ptr [ecx + 1]
        ; Exact mapped bytes 75 0E: jne 0x5887e0b0
        __asm _emit 0x75
        __asm _emit 0x0e
        add eax, 2
        add ecx, 2
        test dl, dl
        ; Exact mapped bytes 75 E4: jne 0x5887e090
        __asm _emit 0x75
        __asm _emit 0xe4
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5887e0b5
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        sbb eax, -1
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x5887e1a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899f4cch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, dword ptr [esp + 14h]
        mov edx, eax
        mov eax, dword ptr [ebx + 1c8h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887e113
        __asm _emit 0x74
        __asm _emit 0x33
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x5887e113
        __asm _emit 0x74
        __asm _emit 0x2f
        mov esi, 80h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e10b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e10b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e0f0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e10f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e110
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f4a8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, eax
        mov eax, dword ptr [ebx + 1d0h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5887e158
        __asm _emit 0x74
        __asm _emit 0x2c
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x5887e158
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e150
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e150
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e135
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e154
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e155
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebx + 1d4h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x5887e19d
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, 5898d61ch
        mov esi, 80h
        nop
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x5887e195
        __asm _emit 0x74
        __asm _emit 0x1b
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 15: je 0x5887e195
        __asm _emit 0x74
        __asm _emit 0x15
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e170
        __asm _emit 0x75
        __asm _emit 0xe7
        push esi
        dec eax
        push esi
        mov byte ptr [eax], 0
        push esi
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x5887e289
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e19a
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x5887e289
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899f484h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, dword ptr [esp + 14h]
        mov edx, eax
        mov eax, dword ptr [ebx + 1c8h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x5887e1f3
        __asm _emit 0x74
        __asm _emit 0x2e
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x5887e1f3
        __asm _emit 0x74
        __asm _emit 0x2a
        mov esi, 80h
        mov edi, edi
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e1eb
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e1eb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e1d0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e1ef
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e1f0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f45ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, eax
        mov eax, dword ptr [ebx + 1d0h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5887e238
        __asm _emit 0x74
        __asm _emit 0x2c
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x5887e238
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e230
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e230
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e215
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e234
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e235
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f434h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, eax
        mov eax, dword ptr [ebx + 1d4h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x5887e283
        __asm _emit 0x74
        __asm _emit 0x32
        test edx, edx
        ; Exact mapped bytes 74 2E: je 0x5887e283
        __asm _emit 0x74
        __asm _emit 0x2e
        mov esi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e27b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e27b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e260
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e27f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e280
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 0
        push 0
        push 1
        mov ecx, ebx
        ; Exact mapped bytes E8 20 C6 FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 118h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 38 E9 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 10ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
