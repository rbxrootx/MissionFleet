// Complete Ghidra body ranges for the selected function.
// 5 discontiguous segments; total 6702 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879DD90 .. +0x3BD bytes.
extern "C" __declspec(naked) void FUN_5879dd90_segment_00() {
    __asm {
        push -1
        push 5898075ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 324h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 320h], eax
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
        lea eax, [esp + 338h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 350h]
        mov esi, ecx
        xor ebp, ebp
        push 589980b8h
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esi + 2fch], ebp
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0d4h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 E6 3E F9 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1a0h]
        push ebp
        ; Exact mapped bytes E8 3A DE 16 00: call 0x5890bc40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xde
        __asm _emit 0x16
        __asm _emit 0x00
        or eax, 0ffffffffh
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esi + 88h]
        mov dword ptr [esi + 2f8h], ebp
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 19ch]
        mov dword ptr [esi + 268h], ebp
        ; Exact mapped bytes E8 EF 14 FC FF: call 0x5875f320
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edi, [esi + 0dch]
        lea ebx, [ebp + 28h]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 D9 14 FC FF: call 0x5875f320
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879de40
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B BC 24 48 03 00 00: mov di, word ptr [esp + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 290h], ebp
        mov dword ptr [esi + 294h], ebp
        mov dword ptr [esi + 298h], ebp
        mov dword ptr [esi + 28ch], 0ffh
        ; Exact mapped bytes 66 83 FF 05: cmp di, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5879df0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FF 06: cmp di, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5879df0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1
        ; Exact mapped bytes 7E 13: jle 0x5879dea8
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0B: je 0x5879dea8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x5879deaa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 6ch]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x5879dedc
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
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0c6h
        ; Exact mapped bytes 0F 8E 9F 00 00 00: jle 0x5879df90
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5879df90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 318h]
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x5879df92
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 126h
        ; Exact mapped bytes 7E 16: jle 0x5879df35
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x5879df35
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 498h]
        ; Exact mapped bytes EB 02: jmp 0x5879df37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 6ch]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x5879df69
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
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 127h
        ; Exact mapped bytes 7E 16: jle 0x5879df90
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x5879df90
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 49ch]
        ; Exact mapped bytes EB 02: jmp 0x5879df92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 78h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 29: je 0x5879dfc5
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 6ch]
        push 101h
        ; Exact mapped bytes E8 4E 4D 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x4d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 0fffffeffh
        ; Exact mapped bytes E8 41 4D 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4d
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov ecx, 8000h
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 78h]
        mov edx, ecx
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 39 BE 6C 02 00 00: cmp word ptr [esi + 0x26c], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 86 17 00 00: jne 0x5879f787
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 34ch]
        cmp edx, 8
        ; Exact mapped bytes 7E 08: jle 0x5879e015
        __asm _emit 0x7e
        __asm _emit 0x08
        mov eax, dword ptr [esi + 7ch]
        mov dword ptr [eax + 54h], ebp
        ; Exact mapped bytes EB 57: jmp 0x5879e06c
        __asm _emit 0xeb
        __asm _emit 0x57
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 20h
        ; Exact mapped bytes 7E 15: jle 0x5879e038
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0D: je 0x5879e038
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 800h
        ; Exact mapped bytes EB 02: jmp 0x5879e03a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x5879e06c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        cmp edx, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 0F 8E 18 13 00 00: jle 0x5879f390
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C4 C3 98 58: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov edi, edi
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 28h]
        lea ecx, [eax + eax*4]
        ; Exact mapped bytes 66 0F B6 04 8A: movzx ax, byte ptr [edx + ecx*4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x8a
        lea ebp, [edx + ecx*4]
        ; Exact mapped bytes 66 39 84 24 48 03 00 00: cmp word ptr [esp + 0x348], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 D9 12 00 00: jne 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esp + 348h]
        dec eax
        cmp eax, 0dh
        ; Exact mapped bytes 0F 87 C7 12 00 00: ja 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc7
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 CC F7 79 58: jmp dword ptr [eax*4 + 0x5879f7cc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0xf7
        __asm _emit 0x79
        __asm _emit 0x58
        mov ecx, dword ptr [ebp]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 24h], 390h
        ; Exact mapped bytes E8 4F AA FD FF: call 0x58778b20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 9F 12 00 00: je 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 2fch]
        movzx eax, word ptr [ebx + 1ch]
        mov ecx, dword ptr [esi + 68h]
        cmp dword ptr [ecx + 160h], eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 7E 19: jle 0x5879e10d
        __asm _emit 0x7e
        __asm _emit 0x19
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x5879e10d
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x5879e10d
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5879e115
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        movzx eax, word ptr [ebx + 4]
        lea edx, [ebx + 33ch]
        push edx
        and eax, 1fh
        push eax
        ; Exact mapped bytes FF 15 40 C0 98 58: call dword ptr [0x5898c040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 13ch]
        push 58998408h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        lea ecx, [esi + 0b4h]
        mov edx, 6
        ; Exact mapped bytes EB 03: jmp 0x5879e150
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879E150 .. +0xD0D bytes.
extern "C" __declspec(naked) void FUN_5879dd90_segment_01() {
    __asm {
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879e150
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0b4h]
        push 1c5h
        ; Exact mapped bytes E8 71 51 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 201h
        ; Exact mapped bytes E8 61 51 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 233h
        ; Exact mapped bytes E8 51 51 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 260h
        ; Exact mapped bytes E8 41 51 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 28dh
        ; Exact mapped bytes E8 31 51 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 2b5h
        ; Exact mapped bytes E8 21 51 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [esp + 38h]
        push 58998390h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 8]
        add esp, 0ch
        push 777777h
        push ecx
        mov ecx, dword ptr [esi + 0b4h]
        lea edx, [esp + 3ch]
        push edx
        ; Exact mapped bytes E8 E5 A6 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa6
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 4]
        push eax
        lea ecx, [esp + 38h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c0h]
        add esp, 0ch
        push 777777h
        push 0
        lea edx, [esp + 3ch]
        push edx
        ; Exact mapped bytes E8 BB A6 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa6
        __asm _emit 0x16
        __asm _emit 0x00
        movzx eax, word ptr [ebx + 0eh]
        shr eax, 4
        and eax, 0ffh
        push eax
        lea ecx, [esp + 38h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c4h]
        add esp, 0ch
        push 777777h
        push 0
        lea edx, [esp + 3ch]
        push edx
        ; Exact mapped bytes E8 88 A6 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa6
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 78h]
        push eax
        lea ecx, [esp + 38h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c8h]
        add esp, 0ch
        push 777777h
        push 0
        lea edx, [esp + 3ch]
        push edx
        ; Exact mapped bytes E9 53 0F 00 00: jmp 0x5879f1c5
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        mov dword ptr [esp + 24h], 0ach
        ; Exact mapped bytes E8 57 A9 FD FF: call 0x58778be0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 E7 10 00 00: je 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 2fch]
        movzx eax, word ptr [ebx + 4]
        ; Exact mapped bytes 8B 0D 58 46 A2 58: mov ecx, dword ptr [0x58a24658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        inc eax
        cmp dword ptr [ecx + 160h], eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 7E 1C: jle 0x5879e2cc
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x5879e2cc
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0F: je 0x5879e2cc
        __asm _emit 0x74
        __asm _emit 0x0f
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5879e2d4
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        lea ecx, [ebx + 78h]
        push ecx
        lea edx, [esp + 138h]
        push 5898d0d4h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        lea ecx, [esi + 0b4h]
        mov edx, 5
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879e2f5
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0b4h]
        push 1c5h
        ; Exact mapped bytes E8 CC 4F 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 1fch
        ; Exact mapped bytes E8 BC 4F 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 233h
        ; Exact mapped bytes E8 AC 4F 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 260h
        ; Exact mapped bytes E8 9C 4F 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 28dh
        ; Exact mapped bytes E8 8C 4F 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [esp + 38h]
        push 58998390h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 0b4h]
        add esp, 0ch
        push 777777h
        push edx
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 50 A5 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa5
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov ecx, eax
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        push ecx
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b8h]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 10 A5 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 1eh]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0bch]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 E5 A4 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa4
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c0h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 BB A4 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa4
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 98h]
        ; Exact mapped bytes E9 83 0D 00 00: jmp 0x5879f1a3
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 24h], 0b4h
        ; Exact mapped bytes E8 69 A8 FD FF: call 0x58778ca0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 39 0F 00 00: je 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 2fch]
        movzx eax, word ptr [ebx + 4]
        ; Exact mapped bytes 8B 0D 54 46 A2 58: mov ecx, dword ptr [0x58a24654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        inc eax
        cmp dword ptr [ecx + 160h], eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 7E 1C: jle 0x5879e47a
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x5879e47a
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0F: je 0x5879e47a
        __asm _emit 0x74
        __asm _emit 0x0f
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5879e482
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        lea edx, [ebx + 78h]
        push edx
        lea eax, [esp + 138h]
        push 5898d0d4h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        lea ecx, [esi + 0b4h]
        mov edx, 6
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879e4a3
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0b4h]
        push 1c5h
        ; Exact mapped bytes E8 1E 4E 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4e
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 1fch
        ; Exact mapped bytes E8 0E 4E 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4e
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 233h
        ; Exact mapped bytes E8 FE 4D 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 260h
        ; Exact mapped bytes E8 EE 4D 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 28dh
        ; Exact mapped bytes E8 DE 4D 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x4d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 2b5h
        ; Exact mapped bytes E8 CE 4D 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [esp + 38h]
        push 58998390h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b4h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 94 A3 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xa3
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov ecx, eax
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        push ecx
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b8h]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 54 A3 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa3
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 1eh]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0bch]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 29 A3 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa3
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c0h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 FF A2 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa2
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 98h]
        push ecx
        push 58998210h
        lea edx, [esp + 3ch]
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c4h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 D1 A2 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa2
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BB 9E 00 00 00 00: cmp word ptr [ebx + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x5879e622
        __asm _emit 0x74
        __asm _emit 0x19
        push 589983ech
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0c8h]
        add esp, 4
        ; Exact mapped bytes E9 9B 0B 00 00: jmp 0x5879f1bd
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 589983d0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0c8h]
        add esp, 4
        ; Exact mapped bytes E9 82 0B 00 00: jmp 0x5879f1bd
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 24h], 0b4h
        ; Exact mapped bytes E8 AE A6 FD FF: call 0x58778d00
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ebx, eax
        mov edx, 224h
        ; Exact mapped bytes 66 39 53 02: cmp word ptr [ebx + 2], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x53
        __asm _emit 0x02
        ; Exact mapped bytes 75 0D: jne 0x5879e66c
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp byte ptr [esi + 2d8h], 2
        ; Exact mapped bytes 0F 84 0E 0D 00 00: je 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea eax, [esp + 238h]
        push 0
        push eax
        ; Exact mapped bytes E8 C8 E5 1D 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe5
        __asm _emit 0x1d
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + 2]
        push ecx
        lea edx, [esp + 244h]
        push 589983bch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 18h
        lea eax, [esp + 234h]
        push eax
        ; Exact mapped bytes FF 15 78 C1 98 58: call dword ptr [0x5898c178]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        inc dword ptr [esi + 2fch]
        movzx eax, word ptr [ebx + 4]
        ; Exact mapped bytes 8B 0D 4C 46 A2 58: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 2
        cmp dword ptr [ecx + 160h], eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 7E 1C: jle 0x5879e6e0
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x5879e6e0
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0F: je 0x5879e6e0
        __asm _emit 0x74
        __asm _emit 0x0f
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5879e6e8
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        movzx edx, word ptr [ebx + 98h]
        lea ecx, [ebx + 78h]
        push ecx
        and edx, 7
        push edx
        ; Exact mapped bytes FF 15 2C C0 98 58: call dword ptr [0x5898c02c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 13ch]
        push 58998394h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        lea ecx, [esi + 0b4h]
        mov edx, 6
        mov edi, edi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879e720
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0b4h]
        push 1c5h
        ; Exact mapped bytes E8 A1 4B 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x4b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 206h
        ; Exact mapped bytes E8 91 4B 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 233h
        ; Exact mapped bytes E8 81 4B 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x4b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 260h
        ; Exact mapped bytes E8 71 4B 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x4b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 28dh
        ; Exact mapped bytes E8 61 4B 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x4b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 2d3h
        ; Exact mapped bytes E8 51 4B 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x4b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [esp + 38h]
        push 58998390h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b4h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 17 A1 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa1
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov ecx, eax
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        push ecx
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b8h]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 D7 A0 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 1eh]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0bch]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 AC A0 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c0h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 82 A0 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        movzx eax, word ptr [ebx + 0a0h]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        push eax
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c4h]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 4B A0 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 9ch]
        and ecx, 7fh
        push ecx
        lea edx, [esp + 38h]
        push 58998254h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c8h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 1A A0 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7B 06 01: cmp word ptr [ebx + 6], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x01
        ; Exact mapped bytes 75 13: jne 0x5879e8d0
        __asm _emit 0x75
        __asm _emit 0x13
        cmp dword ptr [esi + 290h], 0
        ; Exact mapped bytes 75 0A: jne 0x5879e8d0
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esi + 290h], ecx
        ; Exact mapped bytes 66 83 7B 06 02: cmp word ptr [ebx + 6], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x5879e8ea
        __asm _emit 0x75
        __asm _emit 0x13
        cmp dword ptr [esi + 294h], 0
        ; Exact mapped bytes 75 0A: jne 0x5879e8ea
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [esi + 294h], edx
        ; Exact mapped bytes 66 83 7B 06 03: cmp word ptr [ebx + 6], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 D5 08 00 00: jne 0x5879f1ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 298h], 0
        ; Exact mapped bytes 0F 85 C8 08 00 00: jne 0x5879f1ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esi + 298h], eax
        ; Exact mapped bytes E9 B9 08 00 00: jmp 0x5879f1ca
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 24h], 0a8h
        ; Exact mapped bytes E8 38 A4 FD FF: call 0x58778d60
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 48 0A 00 00: je 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 2fch]
        movzx eax, word ptr [ebx + 4]
        ; Exact mapped bytes 8B 0D 50 46 A2 58: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 5
        cmp dword ptr [ecx + 160h], eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 7E 1C: jle 0x5879e96d
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x5879e96d
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0F: je 0x5879e96d
        __asm _emit 0x74
        __asm _emit 0x0f
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5879e975
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        lea edx, [ebx + 78h]
        push edx
        lea eax, [esp + 138h]
        push 5898d0d4h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        lea ecx, [esi + 0b4h]
        mov edx, 6
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879e996
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0b4h]
        push 1c5h
        ; Exact mapped bytes E8 2B 49 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x49
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 1fch
        ; Exact mapped bytes E8 1B 49 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x49
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 233h
        ; Exact mapped bytes E8 0B 49 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x49
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 260h
        ; Exact mapped bytes E8 FB 48 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x48
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 28dh
        ; Exact mapped bytes E8 EB 48 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x48
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 2d3h
        ; Exact mapped bytes E8 DB 48 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x48
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [esp + 38h]
        push 58998390h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b4h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 A1 9E 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov ecx, eax
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        push ecx
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b8h]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 61 9E 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 1eh]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0bch]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 36 9E 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c0h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 0C 9E 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        movzx eax, word ptr [ebx + 0a2h]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        push eax
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c4h]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 D5 9D 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 98h]
        shr ecx, 4
        and ecx, 7fh
        push ecx
        lea edx, [esp + 38h]
        push 58998254h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c8h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 A1 9D 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7B 06 01: cmp word ptr [ebx + 6], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x01
        ; Exact mapped bytes 75 13: jne 0x5879eb49
        __asm _emit 0x75
        __asm _emit 0x13
        cmp dword ptr [esi + 290h], 0
        ; Exact mapped bytes 75 0A: jne 0x5879eb49
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esi + 290h], ecx
        ; Exact mapped bytes 66 83 7B 06 02: cmp word ptr [ebx + 6], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x5879eb63
        __asm _emit 0x75
        __asm _emit 0x13
        cmp dword ptr [esi + 294h], 0
        ; Exact mapped bytes 75 0A: jne 0x5879eb63
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [esi + 294h], edx
        ; Exact mapped bytes 66 83 7B 06 03: cmp word ptr [ebx + 6], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 5C 06 00 00: jne 0x5879f1ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 298h], 0
        ; Exact mapped bytes 0F 85 4F 06 00 00: jne 0x5879f1ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esi + 298h], eax
        ; Exact mapped bytes E9 40 06 00 00: jmp 0x5879f1ca
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ach]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b4h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 24h], 0ach
        ; Exact mapped bytes E8 FC A1 FD FF: call 0x58778dc0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 AC 07 00 00: je 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 2fch]
        movzx eax, word ptr [ebx + 4]
        ; Exact mapped bytes 8B 0D 6C 46 A2 58: mov ecx, dword ptr [0x58a2466c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        inc eax
        cmp dword ptr [ecx + 160h], eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 7E 1C: jle 0x5879ec07
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x5879ec07
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0F: je 0x5879ec07
        __asm _emit 0x74
        __asm _emit 0x0f
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5879ec0f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        lea edx, [ebx + 78h]
        push edx
        lea eax, [esp + 138h]
        push 5898d0d4h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        lea ecx, [esi + 0b4h]
        mov edx, 6
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879ec30
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0b4h]
        push 1c5h
        ; Exact mapped bytes E8 91 46 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 1fch
        ; Exact mapped bytes E8 81 46 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 233h
        ; Exact mapped bytes E8 71 46 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 260h
        ; Exact mapped bytes E8 61 46 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 28dh
        ; Exact mapped bytes E8 51 46 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 2bfh
        ; Exact mapped bytes E8 41 46 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [esp + 38h]
        push 58998390h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b4h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 07 9C 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9c
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov ecx, eax
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        push ecx
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b8h]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 C7 9B 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        cmp dword ptr [esi + 270h], 1ch
        ; Exact mapped bytes 7C 16: jl 0x5879ed28
        __asm _emit 0x7c
        __asm _emit 0x16
        movzx ecx, word ptr [ebx + 1eh]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        ; Exact mapped bytes EB 1D: jmp 0x5879ed45
        __asm _emit 0xeb
        __asm _emit 0x1d
        movzx eax, word ptr [ebx + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        push eax
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        mov ecx, dword ptr [esi + 0bch]
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 74 9B 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c0h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 4A 9B 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 9ah]
        and ecx, 0ffh
        push ecx
        lea edx, [esp + 38h]
        push 589983b8h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c4h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 16 9B 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 9ch]
        push ecx
        lea edx, [esp + 38h]
        push 589983b8h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c8h]
        ; Exact mapped bytes E9 DD 03 00 00: jmp 0x5879f1b6
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 24h], 0b4h
        ; Exact mapped bytes E8 30 A0 FD FF: call 0x58778e20
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 80 05 00 00: je 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 2fch]
        movzx eax, word ptr [ebx + 4]
        ; Exact mapped bytes 8B 0D 68 46 A2 58: mov ecx, dword ptr [0x58a24668]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 7E 1C: jle 0x5879ee32
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x5879ee32
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0F: je 0x5879ee32
        __asm _emit 0x74
        __asm _emit 0x0f
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5879ee3a
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        lea edx, [ebx + 78h]
        push edx
        lea eax, [esp + 138h]
        push 5898d0d4h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        lea ecx, [esi + 0b4h]
        mov edx, 6
        ; Exact mapped bytes EB 03: jmp 0x5879ee60
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879EE60 .. +0x5BD bytes.
extern "C" __declspec(naked) void FUN_5879dd90_segment_02() {
    __asm {
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879ee60
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0b4h]
        push 1c5h
        ; Exact mapped bytes E8 61 44 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 1fch
        ; Exact mapped bytes E8 51 44 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 233h
        ; Exact mapped bytes E8 41 44 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 260h
        ; Exact mapped bytes E8 31 44 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 28dh
        ; Exact mapped bytes E8 21 44 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 2b5h
        ; Exact mapped bytes E8 11 44 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [esp + 38h]
        push 58998390h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b4h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 D7 99 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        push edx
        push eax
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b8h]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 A3 99 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        movzx eax, word ptr [ebx + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        push eax
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0bch]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 6F 99 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c0h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 45 99 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        movzx eax, word ptr [ebx + 0aeh]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        push eax
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c4h]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 0E 99 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 0aah]
        push ecx
        lea edx, [esp + 38h]
        push 589983b0h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c8h]
        ; Exact mapped bytes E9 D5 01 00 00: jmp 0x5879f1b6
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 24h], 0d4h
        ; Exact mapped bytes E8 38 9F FD FF: call 0x58778f30
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 78 03 00 00: je 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 2fch]
        ; Exact mapped bytes 8B 0D 48 46 A2 58: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 18h], eax
        movzx eax, word ptr [ebx + 4]
        add eax, 2
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 1C: jle 0x5879f03d
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x5879f03d
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0F: je 0x5879f03d
        __asm _emit 0x74
        __asm _emit 0x0f
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5879f045
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        lea edx, [ebx + 78h]
        push edx
        lea eax, [esp + 138h]
        push 5898d0d4h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        lea ecx, [esi + 0b4h]
        mov edx, 5
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879f066
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0b4h]
        push 1c5h
        ; Exact mapped bytes E8 5B 42 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 1fch
        ; Exact mapped bytes E8 4B 42 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 233h
        ; Exact mapped bytes E8 3B 42 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 260h
        ; Exact mapped bytes E8 2B 42 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 28dh
        ; Exact mapped bytes E8 1B 42 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [esp + 38h]
        push 58998390h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b4h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 E1 97 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        push edx
        push eax
        lea edx, [esp + 3ch]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0b8h]
        add esp, 10h
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 AD 97 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 1eh]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0bch]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 71 97 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c0h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E8 47 97 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 0aah]
        mov eax, 88888889h
        imul ecx
        add edx, ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        lea edx, [esp + 38h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c4h]
        add esp, 0ch
        lea eax, [esp + 34h]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 06 97 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        cmp dword ptr [esp + 18h], 0
        ; Exact mapped bytes 0F 84 A5 01 00 00: je 0x5879f37a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        ; Exact mapped bytes E8 6F DA 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xda
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 340h], 0
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5879f21a
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push 1feh
        add ecx, 75h
        push ecx
        mov ecx, dword ptr [esp + 1ch]
        add edx, 0fah
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C8 74 01 00: call 0x587b66e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5879f21c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        cmp dword ptr [esi + 2f4h], 0
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 340h], 0ffffffffh
        push 18h
        ; Exact mapped bytes 75 74: jne 0x5879f2b3
        __asm _emit 0x75
        __asm _emit 0x74
        ; Exact mapped bytes E8 0A DA 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xda
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 340h], 1
        test ebx, ebx
        ; Exact mapped bytes 74 3E: je 0x5879f29a
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp + 4]
        mov ebp, dword ptr [ebp + 8]
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ebx + 0ch], ebp
        mov ebp, dword ptr [esp + 20h]
        push ebp
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx], 0
        mov dword ptr [ebx + 14h], ecx
        mov dword ptr [ebx + 10h], eax
        ; Exact mapped bytes E8 A8 22 1D 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x22
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        push ebp
        push edx
        push eax
        mov dword ptr [ebx + 8], eax
        ; Exact mapped bytes E8 B7 DA 1D 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xda
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 02: jmp 0x5879f29c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov dword ptr [esi + 2f4h], ebx
        mov dword ptr [esi + 2f8h], ebx
        mov dword ptr [esi + 2f0h], ebx
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x5879f333
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 D9 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd9
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 340h], 2
        test ebx, ebx
        ; Exact mapped bytes 74 3E: je 0x5879f30e
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp + 4]
        mov ebp, dword ptr [ebp + 8]
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ebx + 0ch], ebp
        mov ebp, dword ptr [esp + 20h]
        push ebp
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx], 0
        mov dword ptr [ebx + 14h], ecx
        mov dword ptr [ebx + 10h], eax
        ; Exact mapped bytes E8 34 22 1D 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x22
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        push ebp
        push edx
        push eax
        mov dword ptr [ebx + 8], eax
        ; Exact mapped bytes E8 43 DA 1D 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xda
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 02: jmp 0x5879f310
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 2f4h]
        mov dword ptr [eax + 4], ebx
        mov eax, dword ptr [esi + 2f4h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [esi + 2f4h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [esi + 2f4h], eax
        mov ecx, dword ptr [esi + 2f4h]
        push 777777h
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        lea edx, [esp + 13ch]
        push edx
        mov dword ptr [esp + 34ch], 0ffffffffh
        ; Exact mapped bytes E8 73 95 16 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 8E 52 02 00 00: cmp cx, word ptr [esi + 0x252]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x5879f37a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 1ch]
        inc eax
        cmp eax, dword ptr [esp + 34ch]
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 8C F0 EC FF FF: jl 0x5879e080
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B BC 24 48 03 00 00: mov di, word ptr [esp + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FF 06: cmp di, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 5D 01 00 00: je 0x5879f4ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FF 05: cmp di, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x5879f4ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2e8h]
        push 0
        ; Exact mapped bytes E8 17 0F 00 00: call 0x587a02d0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FF 0B: cmp di, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0b
        ; Exact mapped bytes 75 3D: jne 0x5879f3fc
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [esp + 34ch]
        mov eax, dword ptr [esi + 2f0h]
        xor ecx, ecx
        test edx, edx
        ; Exact mapped bytes 7E 1B: jle 0x5879f3ed
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov edi, dword ptr [esi + 2a8h]
        mov ebx, dword ptr [eax + 8]
        cmp dword ptr [ebx], edi
        ; Exact mapped bytes 74 0A: je 0x5879f3e9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 4]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C F1: jl 0x5879f3d8
        __asm _emit 0x7c
        __asm _emit 0xf1
        ; Exact mapped bytes EB 04: jmp 0x5879f3ed
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 24h], ecx
        cmp ecx, edx
        ; Exact mapped bytes 75 51: jne 0x5879f442
        __asm _emit 0x75
        __asm _emit 0x51
        xor edx, edx
        ; Exact mapped bytes 66 89 96 B0 02 00 00: mov word ptr [esi + 0x2b0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 46: jmp 0x5879f442
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes 66 83 FF 0C: cmp di, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0c
        ; Exact mapped bytes 75 40: jne 0x5879f442
        __asm _emit 0x75
        __asm _emit 0x40
        mov edx, dword ptr [esp + 34ch]
        mov eax, dword ptr [esi + 2f0h]
        xor ecx, ecx
        test edx, edx
        ; Exact mapped bytes 7E 20: jle 0x5879f435
        __asm _emit 0x7e
        __asm _emit 0x20
        mov edi, dword ptr [esi + 2ach]
        ; Exact mapped bytes EB 03: jmp 0x5879f420
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F420 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_5879dd90_segment_03() {
    __asm {
        mov ebx, dword ptr [eax + 8]
        cmp dword ptr [ebx], edi
        ; Exact mapped bytes 74 0A: je 0x5879f431
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 4]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C F1: jl 0x5879f420
        __asm _emit 0x7c
        __asm _emit 0xf1
        ; Exact mapped bytes EB 04: jmp 0x5879f435
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 24h], ecx
        cmp ecx, edx
        ; Exact mapped bytes 75 09: jne 0x5879f442
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes 66 89 86 B2 02 00 00: mov word ptr [esi + 0x2b2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 300h], 0
        ; Exact mapped bytes 74 5B: je 0x5879f4a6
        __asm _emit 0x74
        __asm _emit 0x5b
        xor ebp, ebp
        cmp dword ptr [esi + 300h], 0
        ; Exact mapped bytes 74 50: je 0x5879f4a6
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 5F 8D 16 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x5879f4a6
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 90 91 16 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        lea edi, [esi + 0b4h]
        mov ebx, 6
        ; Exact mapped bytes EB 03: jmp 0x5879f480
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F480 .. +0x34A bytes.
extern "C" __declspec(naked) void FUN_5879dd90_segment_04() {
    __asm {
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 79 91 16 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879f480
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, esi
        ; Exact mapped bytes E8 CA 84 FF FF: call 0x58797960
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 13 BF FF FF: call 0x5879b3b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebp
        cmp ebp, 3e8h
        ; Exact mapped bytes 7C A7: jl 0x5879f44d
        __asm _emit 0x7c
        __asm _emit 0xa7
        mov ecx, dword ptr [esi + 0b0h]
        push 0
        ; Exact mapped bytes E8 7D 93 16 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x93
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 24h]
        cmp ebx, -1
        ; Exact mapped bytes 75 07: jne 0x5879f4c3
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebx, dword ptr [esi + 2fch]
        dec ebx
        cmp dword ptr [esi + 300h], 0
        ; Exact mapped bytes 74 16: je 0x5879f4e2
        __asm _emit 0x74
        __asm _emit 0x16
        xor edi, edi
        test ebx, ebx
        ; Exact mapped bytes 76 10: jbe 0x5879f4e2
        __asm _emit 0x76
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes E8 A7 DF FF FF: call 0x5879d480
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5879f4e2
        __asm _emit 0x74
        __asm _emit 0x05
        inc edi
        cmp edi, ebx
        ; Exact mapped bytes 72 F0: jb 0x5879f4d2
        __asm _emit 0x72
        __asm _emit 0xf0
        mov ecx, dword ptr [esi + 0b0h]
        push ebx
        ; Exact mapped bytes E8 42 93 16 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x93
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2fch]
        mov dword ptr [esi + 300h], ecx
        ; Exact mapped bytes E9 73 01 00 00: jmp 0x5879f672
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2e8h]
        push 1
        ; Exact mapped bytes E8 C4 0D 00 00: call 0x587a02d0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FF 05: cmp di, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 0B 01 00 00: jne 0x5879f621
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2a0h]
        cmp edi, -1
        ; Exact mapped bytes 74 26: je 0x5879f547
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [esp + 34ch]
        mov eax, dword ptr [esi + 2f0h]
        xor ecx, ecx
        test edx, edx
        ; Exact mapped bytes 7E 13: jle 0x5879f547
        __asm _emit 0x7e
        __asm _emit 0x13
        mov ebx, dword ptr [eax + 8]
        cmp dword ptr [ebx], edi
        ; Exact mapped bytes 0F 84 1C 01 00 00: je 0x5879f65b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C ED: jl 0x5879f534
        __asm _emit 0x7c
        __asm _emit 0xed
        mov ebp, dword ptr [esp + 24h]
        cmp ebp, -1
        ; Exact mapped bytes 75 07: jne 0x5879f557
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebp, dword ptr [esi + 2fch]
        dec ebp
        cmp dword ptr [esi + 300h], 0
        ; Exact mapped bytes 74 63: je 0x5879f5c3
        __asm _emit 0x74
        __asm _emit 0x63
        mov dword ptr [esp + 24h], 0
        cmp dword ptr [esi + 300h], 0
        ; Exact mapped bytes 74 52: je 0x5879f5c3
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 44 8C 16 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x5879f5c3
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 75 90 16 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x00
        lea edi, [esi + 0b4h]
        mov ebx, 6
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 63 90 16 00: call 0x58908600
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x5879f596
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, esi
        ; Exact mapped bytes E8 B4 83 FF FF: call 0x58797960
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 FD BD FF FF: call 0x5879b3b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        inc eax
        cmp eax, 3e8h
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 7C A5: jl 0x5879f568
        __asm _emit 0x7c
        __asm _emit 0xa5
        mov ecx, dword ptr [esi + 0b0h]
        push 0
        ; Exact mapped bytes E8 60 92 16 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x00
        cmp dword ptr [esi + 300h], 0
        ; Exact mapped bytes 74 17: je 0x5879f5f0
        __asm _emit 0x74
        __asm _emit 0x17
        xor edi, edi
        test ebp, ebp
        ; Exact mapped bytes 76 11: jbe 0x5879f5f0
        __asm _emit 0x76
        __asm _emit 0x11
        nop
        mov ecx, esi
        ; Exact mapped bytes E8 99 DE FF FF: call 0x5879d480
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5879f5f0
        __asm _emit 0x74
        __asm _emit 0x05
        inc edi
        cmp edi, ebp
        ; Exact mapped bytes 72 F0: jb 0x5879f5e0
        __asm _emit 0x72
        __asm _emit 0xf0
        mov ecx, dword ptr [esi + 0b0h]
        push ebp
        ; Exact mapped bytes E8 34 92 16 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2e8h]
        xor ecx, ecx
        add eax, 5
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 5F: je 0x5879f66b
        __asm _emit 0x74
        __asm _emit 0x5f
        inc ecx
        inc eax
        cmp ecx, 8
        ; Exact mapped bytes 7C F4: jl 0x5879f607
        __asm _emit 0x7c
        __asm _emit 0xf4
        mov edx, dword ptr [esi + 2fch]
        mov dword ptr [esi + 300h], edx
        ; Exact mapped bytes EB 51: jmp 0x5879f672
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edi, dword ptr [esi + 2a4h]
        cmp edi, -1
        ; Exact mapped bytes 0F 84 17 FF FF FF: je 0x5879f547
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 34ch]
        mov eax, dword ptr [esi + 2f0h]
        xor ecx, ecx
        test edx, edx
        ; Exact mapped bytes 0F 8E 00 FF FF FF: jle 0x5879f547
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [eax + 8]
        cmp dword ptr [ebx], edi
        ; Exact mapped bytes 74 0D: je 0x5879f65b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 4]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C F1: jl 0x5879f647
        __asm _emit 0x7c
        __asm _emit 0xf1
        ; Exact mapped bytes E9 EC FE FF FF: jmp 0x5879f547
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 E3 FE FF FF: je 0x5879f547
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, ecx
        ; Exact mapped bytes E9 EC FE FF FF: jmp 0x5879f557
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 BE DF FF FF: call 0x5879d630
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 34ch]
        lea eax, [eax + eax*4]
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [esi + 27ch], edx
        mov edx, dword ptr [ecx + eax*4 + 4]
        mov dword ptr [esi + 280h], edx
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [esi + 284h], edx
        mov eax, dword ptr [ecx + eax*4 + 0ch]
        mov dword ptr [esi + 288h], eax
        cmp dword ptr [esi + 2fch], 0
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x5879f776
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 2ch]
        cmp edi, -1
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5879f749
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 0d0c090h
        push edi
        ; Exact mapped bytes E8 DE 8B 16 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 0d0c090h
        push edi
        ; Exact mapped bytes E8 CD 8B 16 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 0d0c090h
        push edi
        ; Exact mapped bytes E8 BC 8B 16 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 0d0c090h
        push edi
        ; Exact mapped bytes E8 AB 8B 16 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 0d0c090h
        push edi
        ; Exact mapped bytes E8 9A 8B 16 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 0d0c090h
        push edi
        ; Exact mapped bytes E8 89 8B 16 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 0d0c090h
        push edi
        ; Exact mapped bytes E8 78 8B 16 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0cch]
        push 0d0c090h
        push edi
        ; Exact mapped bytes E8 67 8B 16 00: call 0x589082b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        cmp dword ptr [esi + 300h], 0
        mov eax, 1
        mov dword ptr [esi + 268h], eax
        ; Exact mapped bytes 7E 43: jle 0x5879f7a0
        __asm _emit 0x7e
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ecx + 50h], eax
        mov ecx, esi
        ; Exact mapped bytes E8 F3 81 FF FF: call 0x58797960
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 3C BC FF FF: call 0x5879b3b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2A: jmp 0x5879f7a0
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 589980b8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes EB 0E: jmp 0x5879f795
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 88h]
        mov dword ptr [edx + 50h], ebp
        push 5899839ch
        mov ecx, dword ptr [esi + 19ch]
        ; Exact mapped bytes E8 C0 FB FB FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 338h]
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
        mov ecx, dword ptr [esp + 320h]
        xor ecx, esp
        ; Exact mapped bytes E8 19 D4 1D 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd4
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 330h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
