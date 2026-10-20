// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5580 .. +0x35B bytes.
extern "C" __declspec(naked) void FUN_587c5580() {
    __asm {
        push -1
        push 58981358h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 40h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 3ch], eax
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
        lea eax, [esp + 54h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 20h]
        mov eax, dword ptr [eax]
        xor edx, edx
        mov dword ptr [esp + 1ch], ecx
        cmp eax, edx
        ; Exact mapped bytes 74 27: je 0x587c55e8
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ecx + 20h]
        mov esi, dword ptr [ecx + 30h]
        mov eax, dword ptr [eax]
        mov esi, dword ptr [esi]
        add esi, eax
        cmp eax, esi
        ; Exact mapped bytes 73 17: jae 0x587c55e8
        __asm _emit 0x73
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 30h]
        dec dword ptr [eax]
        mov eax, dword ptr [ecx + 20h]
        mov ecx, dword ptr [eax]
        lea edx, [ecx + 1]
        mov dword ptr [eax], edx
        movzx eax, byte ptr [ecx]
        ; Exact mapped bytes E9 75 02 00 00: jmp 0x587c585d
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 4ch]
        cmp eax, edx
        ; Exact mapped bytes 0F 84 67 02 00 00: je 0x587c585a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 3ch], edx
        ; Exact mapped bytes 75 1A: jne 0x587c5612
        __asm _emit 0x75
        __asm _emit 0x1a
        push eax
        ; Exact mapped bytes E8 9E 79 1B 00: call 0x5897cf9c
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x79
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 0F 84 50 02 00 00: je 0x587c585a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        ; Exact mapped bytes E9 4B 02 00 00: jmp 0x587c585d
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 4ch], 0fh
        mov dword ptr [esp + 48h], edx
        mov byte ptr [esp + 38h], dl
        push eax
        mov dword ptr [esp + 60h], edx
        ; Exact mapped bytes E8 70 79 1B 00: call 0x5897cf9c
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x79
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 0F 84 19 02 00 00: je 0x587c5851
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 1
        lea ecx, [esp + 3ch]
        ; Exact mapped bytes E8 CC FC FF FF: call 0x587c5310
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 4ch]
        mov eax, dword ptr [esp + 38h]
        cmp edi, 10h
        ; Exact mapped bytes 0F 82 4C 01 00 00: jb 0x587c57a1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x587c567f
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, eax
        cmp edi, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5666
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 38h]
        cmp ecx, ebx
        ; Exact mapped bytes 77 15: ja 0x587c567f
        __asm _emit 0x77
        __asm _emit 0x15
        mov ecx, eax
        cmp edi, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5675
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 38h]
        mov edx, dword ptr [esp + 48h]
        add ecx, edx
        cmp ebx, ecx
        ; Exact mapped bytes 76 11: jbe 0x587c5690
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes E8 EE 75 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edi, dword ptr [esp + 4ch]
        mov edx, dword ptr [esp + 48h]
        mov eax, dword ptr [esp + 38h]
        lea ecx, [esp + 34h]
        cmp ecx, -4
        ; Exact mapped bytes 74 22: je 0x587c56bb
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, eax
        cmp edi, 10h
        ; Exact mapped bytes 73 04: jae 0x587c56a4
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 38h]
        add ecx, edx
        cmp ebx, ecx
        ; Exact mapped bytes 72 11: jb 0x587c56bb
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes E8 C3 75 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edi, dword ptr [esp + 4ch]
        mov edx, dword ptr [esp + 48h]
        mov eax, dword ptr [esp + 38h]
        mov ebp, edx
        cmp edi, 10h
        ; Exact mapped bytes 0F 82 E4 00 00 00: jb 0x587c57aa
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x587c56ec
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, eax
        cmp edi, 10h
        ; Exact mapped bytes 73 04: jae 0x587c56d7
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 38h]
        cmp ecx, esi
        ; Exact mapped bytes 77 11: ja 0x587c56ec
        __asm _emit 0x77
        __asm _emit 0x11
        mov ecx, eax
        cmp edi, 10h
        ; Exact mapped bytes 73 04: jae 0x587c56e6
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 38h]
        add ecx, edx
        cmp esi, ecx
        ; Exact mapped bytes 76 11: jbe 0x587c56fd
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes E8 81 75 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edi, dword ptr [esp + 4ch]
        mov edx, dword ptr [esp + 48h]
        mov eax, dword ptr [esp + 38h]
        lea ecx, [esp + 34h]
        cmp ecx, -4
        ; Exact mapped bytes 74 14: je 0x587c571a
        __asm _emit 0x74
        __asm _emit 0x14
        cmp edi, 10h
        ; Exact mapped bytes 73 04: jae 0x587c570f
        __asm _emit 0x73
        __asm _emit 0x04
        lea eax, [esp + 38h]
        add eax, edx
        cmp esi, eax
        ; Exact mapped bytes 72 05: jb 0x587c571a
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 58 75 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        mov ecx, dword ptr [edi + 3ch]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 10h]
        lea eax, [esp + 20h]
        push eax
        lea eax, [esp + 1ch]
        push eax
        lea eax, [esp + 1fh]
        push eax
        lea eax, [esp + 24h]
        push eax
        add ebx, ebp
        push ebx
        push esi
        lea eax, [edi + 44h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 0F 8C 05 01 00 00: jl 0x587c5851
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 7E 62: jle 0x587c57b3
        __asm _emit 0x7e
        __asm _emit 0x62
        cmp eax, 3
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x587c5851
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 48h], 1
        ; Exact mapped bytes 0F 82 D7 00 00 00: jb 0x587c583c
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea edx, [esp + 30h]
        push edx
        lea ecx, [esp + 3ch]
        ; Exact mapped bytes E8 4B FC FF FF: call 0x587c53c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 94 F7 FF FF: call 0x587c4f10
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea eax, [esp + 1fh]
        push 1
        push eax
        ; Exact mapped bytes E8 D1 74 1B 00: call 0x5897cc5a
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x74
        __asm _emit 0x1b
        __asm _emit 0x00
        movzx esi, byte ptr [esp + 27h]
        add esp, 10h
        lea ecx, [esp + 34h]
        ; Exact mapped bytes E8 E6 29 F8 FF: call 0x58748180
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x587c585d
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esp + 38h]
        ; Exact mapped bytes E9 B1 FE FF FF: jmp 0x587c565b
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [esp + 38h]
        ; Exact mapped bytes E9 19 FF FF FF: jmp 0x587c56cc
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 17h]
        cmp dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x587c5885
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 4ch]
        mov eax, dword ptr [esp + 38h]
        cmp edx, 10h
        ; Exact mapped bytes 0F 82 AA 00 00 00: jb 0x587c587c
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x587c57fc
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c57e3
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 38h]
        cmp ecx, esi
        ; Exact mapped bytes 77 15: ja 0x587c57fc
        __asm _emit 0x77
        __asm _emit 0x15
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c57f2
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 38h]
        mov ebx, dword ptr [esp + 48h]
        add ecx, ebx
        cmp esi, ecx
        ; Exact mapped bytes 76 0D: jbe 0x587c5809
        __asm _emit 0x76
        __asm _emit 0x0d
        ; Exact mapped bytes E8 71 74 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x74
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 4ch]
        mov eax, dword ptr [esp + 38h]
        lea ecx, [esp + 34h]
        cmp ecx, -4
        ; Exact mapped bytes 74 18: je 0x587c582a
        __asm _emit 0x74
        __asm _emit 0x18
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c581b
        __asm _emit 0x73
        __asm _emit 0x04
        lea eax, [esp + 38h]
        mov edx, dword ptr [esp + 48h]
        add eax, edx
        cmp esi, eax
        ; Exact mapped bytes 72 05: jb 0x587c582a
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 48 74 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x74
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        sub eax, esi
        push eax
        push 0
        lea ecx, [esp + 3ch]
        ; Exact mapped bytes E8 14 F5 F6 FF: call 0x58734d50
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 4ch]
        push ecx
        ; Exact mapped bytes E8 57 77 1B 00: call 0x5897cf9c
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 0F 85 E7 FD FF FF: jne 0x587c5638
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 34h]
        ; Exact mapped bytes E8 26 29 F8 FF: call 0x58748180
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        or eax, 0ffffffffh
        mov ecx, dword ptr [esp + 54h]
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
        mov ecx, dword ptr [esp + 3ch]
        xor ecx, esp
        ; Exact mapped bytes E8 62 73 1B 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x73
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4ch
        ret
        lea esi, [esp + 38h]
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x587c57d8
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 48h]
        lea ecx, [esp + 24h]
        push ecx
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 29 FB FF FF: call 0x587c53c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 72 F6 FF FF: call 0x587c4f10
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        sub edi, dword ptr [esp + 18h]
        mov esi, eax
        add esi, edi
        test esi, esi
        ; Exact mapped bytes 7E 1F: jle 0x587c58c9
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F BE 54 0E FF: movsx edx, byte ptr [esi + ecx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0xff
        dec esi
        push eax
        push edx
        ; Exact mapped bytes E8 E6 76 1B 00: call 0x5897cfa8
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x76
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 8
        test esi, esi
        ; Exact mapped bytes 7F E1: jg 0x587c58aa
        __asm _emit 0x7f
        __asm _emit 0xe1
        movzx esi, byte ptr [esp + 17h]
        lea ecx, [esp + 34h]
        ; Exact mapped bytes E8 A9 28 F8 FF: call 0x58748180
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 82: jmp 0x587c585d
        __asm _emit 0xeb
        __asm _emit 0x82
    }
}
