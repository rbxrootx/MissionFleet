// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10092880 .. +0x6DC bytes.
extern "C" __declspec(naked) void FUN_10092880_10092880() {
    __asm {
        sub esp, 84h
        push ebx
        push ebp
        mov ebx, dword ptr [esp + 90h]
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 2D B0 50 17 10: mov ebp, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        lea ecx, [ebx + 1]
        mov eax, dword ptr [esi + 70h]
        mov byte ptr [esi + 0a0h], 1
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100928b5
        __asm _emit 0x74
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100928b5
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 0F BF 43 1A: movsx eax, word ptr [ebx + 0x1a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0x1a
        cmp eax, 6
        ; Exact mapped bytes 0F 87 AD 00 00 00: ja 0x1009296f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 5C 2F 09 10: jmp dword ptr [eax*4 + 0x10092f5c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x10
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x1009296f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 101abb50h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x1009296f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x1009296c
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 7B: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, 101abb34h
        test edx, edx
        ; Exact mapped bytes 74 72: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x72
        push edx
        ; Exact mapped bytes EB 6C: jmp 0x1009296c
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 65: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, 101abb24h
        test ecx, ecx
        ; Exact mapped bytes 74 5C: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x5c
        push ecx
        ; Exact mapped bytes EB 56: jmp 0x1009296c
        __asm _emit 0xeb
        __asm _emit 0x56
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, 101abb18h
        test edx, edx
        ; Exact mapped bytes 74 46: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x46
        push edx
        ; Exact mapped bytes EB 40: jmp 0x1009296c
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, 101aba94h
        test ecx, ecx
        ; Exact mapped bytes 74 30: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x30
        push ecx
        ; Exact mapped bytes EB 2A: jmp 0x1009296c
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, 101abb0ch
        test edx, edx
        ; Exact mapped bytes 74 1A: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x1a
        push edx
        ; Exact mapped bytes EB 14: jmp 0x1009296c
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101aba84h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x1009296f
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edi, dword ptr [esp + 9ch]
        mov edx, dword ptr [edi + 0a4h]
        mov eax, dword ptr [edi + 0a0h]
        mov ecx, dword ptr [edi + 9ch]
        push edx
        push eax
        push ecx
        lea edx, [esp + 20h]
        push 101abbf0h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 78h]
        add esp, 14h
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x100929b8
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [esp + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100929b8
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [esp + 14h]
        push edx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 66 8B 87 AC 00 00 00: mov ax, word ptr [edi + 0xac]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 44 24 10: mov word ptr [esp + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 10h]
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 8C 24 F9 FF: call 0x10024e60
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 7ch]
        add eax, 328h
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100929eb
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100929eb
        __asm _emit 0x74
        __asm _emit 0x04
        push eax
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 80h]
        lea ecx, [ebx + 1ch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10092a03
        __asm _emit 0x74
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10092a03
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 84h]
        mov eax, dword ptr [ebx + 34h]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [ebx + 34h]
        cmp eax, 0ah
        ; Exact mapped bytes 0F 87 5A 01 00 00: ja 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 78 2F 09 10: jmp dword ptr [eax*4 + 0x10092f78]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x10
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 101abbe8h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x10092b72
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 101abbe0h
        test edx, edx
        ; Exact mapped bytes 0F 84 11 01 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x10092b72
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 101abbd8h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x10092b72
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 101abbd0h
        test edx, edx
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x10092b72
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 101abbc8h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x10092b72
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 101abbc0h
        test edx, edx
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x10092b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes EB 7B: jmp 0x10092b72
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 71: je 0x10092b75
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, 101abbb8h
        test ecx, ecx
        ; Exact mapped bytes 74 68: je 0x10092b75
        __asm _emit 0x74
        __asm _emit 0x68
        push ecx
        ; Exact mapped bytes EB 62: jmp 0x10092b72
        __asm _emit 0xeb
        __asm _emit 0x62
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x10092b75
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, 101abbb0h
        test edx, edx
        ; Exact mapped bytes 74 4F: je 0x10092b75
        __asm _emit 0x74
        __asm _emit 0x4f
        push edx
        ; Exact mapped bytes EB 49: jmp 0x10092b72
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x10092b75
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, 101abba8h
        test ecx, ecx
        ; Exact mapped bytes 74 36: je 0x10092b75
        __asm _emit 0x74
        __asm _emit 0x36
        push ecx
        ; Exact mapped bytes EB 30: jmp 0x10092b72
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x10092b75
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, 101abba0h
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x10092b75
        __asm _emit 0x74
        __asm _emit 0x1d
        push edx
        ; Exact mapped bytes EB 17: jmp 0x10092b72
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [esi + 88h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10092b75
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101abb98h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10092b75
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [ebx + 48h]
        test eax, eax
        ; Exact mapped bytes 0F 84 14 02 00 00: je 0x10092d94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 57 1C 10: mov ecx, dword ptr [0x101c5734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x10092cc1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 4]
        test edx, edx
        ; Exact mapped bytes 74 59: je 0x10092bee
        __asm _emit 0x74
        __asm _emit 0x59
        mov edi, dword ptr [edx + 164h]
        dec eax
        cmp edi, eax
        ; Exact mapped bytes 76 4E: jbe 0x10092bee
        __asm _emit 0x76
        __asm _emit 0x4e
        push eax
        mov ecx, edx
        ; Exact mapped bytes E8 48 30 F8 FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10092bdd
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 54 02 00 00: jmp 0x10092e42
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x10092c0e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10092c0e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x10092c10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 8ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10092c45
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x10092c65
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10092c65
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x10092c67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10092c9c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov ecx, dword ptr [esi + 8ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 B4 C4 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 101h
        ; Exact mapped bytes E8 A4 C4 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 01 00 00: jmp 0x10092e42
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x10092ce1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10092ce1
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x10092ce3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 8ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10092d18
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x10092d38
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10092d38
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x10092d3a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10092d6f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov ecx, dword ptr [esi + 8ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 E1 C3 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 101h
        ; Exact mapped bytes E8 D1 C3 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc3
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x10092e42
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x10092db4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10092db4
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x10092db6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 8ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10092deb
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x10092e0b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10092e0b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x10092e0d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10092e42
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [ebx + 3ch]
        lea edi, [ebx + 3ch]
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x10092e6d
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebx + 40h]
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x10092e6d
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esi + 94h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x10092ea2
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, 101abafch
        test ecx, ecx
        ; Exact mapped bytes 74 39: je 0x10092ea2
        __asm _emit 0x74
        __asm _emit 0x39
        push ecx
        push eax
        ; Exact mapped bytes EB 33: jmp 0x10092ea0
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 F7 F9 F7 FF: call 0x10012870
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x10092e91
        __asm _emit 0x75
        __asm _emit 0x14
        mov byte ptr [esi + 0a0h], al
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 D1 9D FB FF: call 0x1004cc60
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x10092ea2
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 94h]
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10092ea2
        __asm _emit 0x74
        __asm _emit 0x04
        push eax
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 0F BF 43 44: movsx eax, word ptr [ebx + 0x44]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0x44
        cmp eax, 6
        ; Exact mapped bytes 0F 87 80 00 00 00: ja 0x10092f2f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 A4 2F 09 10: jmp dword ptr [eax*4 + 0x10092fa4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x10
        mov eax, dword ptr [esi + 98h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 6C: je 0x10092f2f
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, 101abafch
        test edx, edx
        ; Exact mapped bytes 74 63: je 0x10092f2f
        __asm _emit 0x74
        __asm _emit 0x63
        push edx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes EB 5D: jmp 0x10092f2f
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov eax, dword ptr [esi + 98h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x10092f2f
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, 101abb90h
        test ecx, ecx
        ; Exact mapped bytes 74 47: je 0x10092f2f
        __asm _emit 0x74
        __asm _emit 0x47
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes EB 41: jmp 0x10092f2f
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [esi + 98h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x10092f2f
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, 101abb84h
        test edx, edx
        ; Exact mapped bytes 74 2B: je 0x10092f2f
        __asm _emit 0x74
        __asm _emit 0x2b
        push edx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes EB 25: jmp 0x10092f2f
        __asm _emit 0xeb
        __asm _emit 0x25
        push 101abb7ch
        ; Exact mapped bytes EB 13: jmp 0x10092f24
        __asm _emit 0xeb
        __asm _emit 0x13
        push 101abb74h
        ; Exact mapped bytes EB 0C: jmp 0x10092f24
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 101abb68h
        ; Exact mapped bytes EB 05: jmp 0x10092f24
        __asm _emit 0xeb
        __asm _emit 0x05
        push 101abb5ch
        mov ecx, dword ptr [esi + 98h]
        ; Exact mapped bytes E8 91 01 00 00: call 0x100930c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 0a0h], 1
        ; Exact mapped bytes 75 17: jne 0x10092f4f
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 1f00h
        cmp eax, 500h
        ; Exact mapped bytes 75 07: jne 0x10092f4f
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 84h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
