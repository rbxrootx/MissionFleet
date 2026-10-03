// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 4467 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D26C0 .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_587d26c0_segment_00() {
    __asm {
        push -1
        push 58981cb4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
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
        lea eax, [esp + 30h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 28h], esi
        mov eax, dword ptr [esp + 54h]
        mov ecx, dword ptr [esp + 50h]
        mov edx, dword ptr [esp + 4ch]
        mov edi, dword ptr [esp + 48h]
        mov ebp, dword ptr [esp + 44h]
        push eax
        mov eax, dword ptr [esp + 44h]
        push ecx
        push edx
        push edi
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8E 0A 13 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor ebx, ebx
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 15eh
        push 73h
        push 5
        push 5
        mov ecx, esi
        mov dword ptr [esp + 48h], ebx
        mov dword ptr [esi], 5899b494h
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0c4h], ebx
        mov dword ptr [esi + 130h], ebx
        mov dword ptr [esi + 0a00h], ebx
        mov dword ptr [esi + 0a0h], 163h
        mov dword ptr [esi + 0a4h], 0b4h
        mov dword ptr [esi + 0a8h], 1b1h
        mov dword ptr [esi + 0ach], 94h
        ; Exact mapped bytes E8 3F CF FF FF: call 0x587cf6d0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push 5
        push 5
        mov ecx, esi
        ; Exact mapped bytes E8 F4 CF FF FF: call 0x587cf790
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        mov dword ptr [esi + 780h], ebx
        ; Exact mapped bytes E8 B7 C3 FF FF: call 0x587ceb60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0b8h]
        mov edx, dword ptr [esi + 0bch]
        mov dword ptr [esi + 0dch], ecx
        mov eax, 15h
        xor ecx, ecx
        mov dword ptr [esi + 0e0h], edx
        ; Exact mapped bytes 66 89 86 06 0A 00 00: mov word ptr [esi + 0xa06], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E 04 0A 00 00: mov word ptr [esi + 0xa04], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0e8h], eax
        mov dword ptr [esi + 0e4h], 1
        mov dword ptr [esi + 110h], ebx
        mov dword ptr [esi + 784h], 64h
        mov dword ptr [esi + 788h], ebx
        mov dword ptr [esi + 114h], ebx
        mov edx, 0fffffe9bh
        mov ecx, 0fffffd13h
        lea eax, [esi + 5cch]
        lea edi, [ebx + 5]
        ; Exact mapped bytes EB 09: jmp 0x587d2820
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D2820 .. +0x101C bytes.
extern "C" __declspec(naked) void FUN_587d26c0_segment_01() {
    __asm {
        lea ebp, [ecx + 2beh]
        mov dword ptr [eax - 4], ebp
        lea ebp, [edx - 168h]
        mov dword ptr [eax], ebp
        lea ebp, [ecx + 15fh]
        mov dword ptr [eax + 4], ebp
        lea ebp, [edx - 0b4h]
        mov dword ptr [eax + 8], ebp
        lea ebp, [ecx - 15fh]
        mov dword ptr [eax + 14h], ebp
        lea ebp, [edx + 0b4h]
        mov dword ptr [eax + 18h], ebp
        lea ebp, [ecx - 2beh]
        mov dword ptr [eax + 1ch], ebp
        lea ebp, [edx + 168h]
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], edx
        mov dword ptr [eax + 20h], ebp
        sub ecx, 1b0h
        sub edx, 91h
        add eax, 28h
        sub edi, 1
        ; Exact mapped bytes 75 9F: jne 0x587d2820
        __asm _emit 0x75
        __asm _emit 0x9f
        push 84h
        ; Exact mapped bytes E8 C3 A3 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa3
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 38h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 1C: je 0x587d28b7
        __asm _emit 0x74
        __asm _emit 0x1c
        push 780h
        push 0fffffda8h
        push 4b0h
        push ebx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 DB BF F9 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbf
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587d28b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 9f4h], eax
        ; Exact mapped bytes E8 84 A3 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 38h], 2
        cmp edi, ebx
        ; Exact mapped bytes 74 2A: je 0x587d2906
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 9f4h]
        push 76ch
        push ebx
        push ebx
        push 0fffffda8h
        push 4b0h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 A5 08 13 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x587d2908
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 9f4h]
        mov edx, 0bfffh
        mov dword ptr [esi + 9f8h], edi
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9f4h]
        push 101h
        mov byte ptr [esp + 3ch], bl
        ; Exact mapped bytes E8 EF 03 13 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9f4h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9f8h]
        push 0fffffeffh
        ; Exact mapped bytes E8 D0 03 13 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9f8h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 7A D3 FF FF: call 0x587cfce0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 9ech], 5
        mov dword ptr [esi + 574h], ebx
        mov dword ptr [esi + 578h], ebx
        xor eax, eax
        mov dword ptr [esi + 7a4h], ebx
        mov dword ptr [esi + 7a8h], ebx
        mov dword ptr [esi + 510h], eax
        mov dword ptr [esi + 514h], eax
        mov dword ptr [esi + 518h], eax
        mov dword ptr [esi + 51ch], eax
        mov dword ptr [esi + 520h], eax
        mov dword ptr [esi + 524h], eax
        mov dword ptr [esi + 528h], eax
        mov dword ptr [esi + 52ch], eax
        mov dword ptr [esi + 530h], eax
        mov dword ptr [esi + 534h], eax
        mov dword ptr [esi + 538h], eax
        mov dword ptr [esi + 53ch], eax
        mov dword ptr [esi + 540h], eax
        mov dword ptr [esi + 544h], eax
        mov dword ptr [esi + 548h], eax
        mov dword ptr [esi + 54ch], eax
        mov dword ptr [esi + 550h], eax
        mov dword ptr [esi + 554h], eax
        mov dword ptr [esi + 558h], eax
        mov dword ptr [esi + 55ch], eax
        mov dword ptr [esi + 560h], eax
        mov dword ptr [esi + 564h], eax
        mov dword ptr [esi + 568h], eax
        mov dword ptr [esi + 56ch], eax
        mov dword ptr [esi + 570h], eax
        push ebx
        mov ecx, esi
        mov dword ptr [esi + 4f4h], ebx
        mov dword ptr [esi + 4f8h], ebx
        mov dword ptr [esi + 500h], ebx
        mov dword ptr [esi + 0ac4h], 1
        ; Exact mapped bytes E8 9C 02 13 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x13
        __asm _emit 0x00
        push 14h
        ; Exact mapped bytes E8 03 A2 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa2
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 38h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x587d2a64
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 EE 6C FB FF: call 0x58789750
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587d2a66
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 10h
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 778h], eax
        ; Exact mapped bytes E8 D7 A1 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa1
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        ; Exact mapped bytes 74 11: je 0x587d2a8f
        __asm _emit 0x74
        __asm _emit 0x11
        mov dword ptr [eax], 5899b48ch
        mov dword ptr [eax + 8], ebx
        mov dword ptr [eax + 4], ebx
        mov dword ptr [eax + 0ch], ebx
        ; Exact mapped bytes EB 02: jmp 0x587d2a91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 184h
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 77ch], eax
        ; Exact mapped bytes E8 A9 A1 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa1
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 38h], 5
        cmp eax, ebx
        ; Exact mapped bytes 74 3C: je 0x587d2af1
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esp + 48h]
        push ebx
        push ebx
        push 16dc16h
        lea edx, [ecx + 0c8h]
        push edx
        mov edx, dword ptr [esp + 54h]
        lea edi, [edx + 320h]
        push edi
        add ecx, 96h
        push ecx
        ; Exact mapped bytes 8B 0D 40 45 A2 58: mov ecx, dword ptr [0x58a24540]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 32h
        push edx
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 33 C9 F8 FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x587d2af3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 770h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 3e8h
        mov byte ptr [esp + 38h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d2b13
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3D 04 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d2b20
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C0 03 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 770h]
        push 3ch
        ; Exact mapped bytes E8 A3 C5 F8 FF: call 0x5875f0d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 1A A1 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa1
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 38h], 6
        cmp edi, ebx
        ; Exact mapped bytes 74 7A: je 0x587d2bc0
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 950h
        ; Exact mapped bytes 7E 16: jle 0x587d2b6d
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x587d2b6d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 2540h]
        ; Exact mapped bytes EB 02: jmp 0x587d2b6f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 48h]
        mov edx, dword ptr [esp + 44h]
        push 40h
        push ebx
        push ebx
        add ecx, 14h
        push ecx
        add edx, 39h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 15 06 13 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x587d2bc2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x587d2bc2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 11ch], edi
        ; Exact mapped bytes E8 48 01 13 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [esi + 11ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 11ch]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 7530h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d2c03
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4D 03 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d2c10
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D0 02 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x13
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 37 A0 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa0
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 38h], 7
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x587d2cad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 94fh
        ; Exact mapped bytes 7E 16: jle 0x587d2c54
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x587d2c54
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 253ch]
        ; Exact mapped bytes EB 02: jmp 0x587d2c56
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 48h]
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [esi + 11ch]
        push 40h
        push ebx
        push ebx
        add ecx, 14h
        push ecx
        add edx, 39h
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 28 05 13 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x587d2caf
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x587d2caf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 48h]
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 118h], edi
        ; Exact mapped bytes E8 57 00 13 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [esi + 118h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 118h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 7530h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d2cf4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5C 02 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d2d01
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DF 01 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 43 9F 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9f
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 38h], 8
        cmp eax, ebx
        ; Exact mapped bytes 74 40: je 0x587d2d5b
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 16: jle 0x587d2d40
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x587d2d40
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 700h
        ; Exact mapped bytes EB 02: jmp 0x587d2d42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 14h]
        push ecx
        mov ecx, dword ptr [esp + 48h]
        add ecx, -0fh
        push ecx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A7 43 13 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x43
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587d2d5d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 124h], eax
        ; Exact mapped bytes E8 AD FF 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 124h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov edi, dword ptr [esi + 124h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 7530h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d2d9e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B2 01 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d2dab
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 35 01 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 99 9E 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9e
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 38h], 9
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x587d2e0b
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1bh
        ; Exact mapped bytes 7E 16: jle 0x587d2dea
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x587d2dea
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 6c0h
        ; Exact mapped bytes EB 02: jmp 0x587d2dec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 14h]
        push ecx
        mov ecx, dword ptr [esp + 48h]
        add ecx, -0fh
        push ecx
        push 4
        push edx
        mov edx, dword ptr [esi + 124h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F7 42 13 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x42
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587d2e0d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 120h], eax
        ; Exact mapped bytes E8 FD FE 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 120h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 12 9E 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x9e
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 38h], 0ah
        cmp eax, ebx
        ; Exact mapped bytes 74 43: je 0x587d2e8f
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cdh
        ; Exact mapped bytes 7E 16: jle 0x587d2e74
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x587d2e74
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 3340h
        ; Exact mapped bytes EB 02: jmp 0x587d2e76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 30h]
        push edx
        mov edx, dword ptr [esp + 48h]
        add edx, 9
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 73 42 13 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x42
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587d2e91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 12ch], eax
        ; Exact mapped bytes E8 79 FE 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 12ch]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 7530h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d2ed2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7E 00 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d2edf
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 01 00 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 65 9D 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9d
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 38h], 0bh
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x587d2f42
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cch
        ; Exact mapped bytes 7E 16: jle 0x587d2f21
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x587d2f21
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 3300h
        ; Exact mapped bytes EB 02: jmp 0x587d2f23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 44h]
        add ebp, 30h
        push ebp
        add ecx, 9
        push ecx
        push 8
        push edx
        mov edx, dword ptr [esi + 12ch]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 C0 41 13 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x41
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587d2f44
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 128h], eax
        ; Exact mapped bytes E8 C6 FD 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 128h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea eax, [esi + 580h]
        mov dword ptr [esp + 40h], eax
        mov eax, 0fffffa88h
        sub eax, esi
        mov dword ptr [esp + 20h], eax
        mov eax, 0fffffad0h
        sub eax, esi
        mov dword ptr [esp + 18h], 14h
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 1ch], 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 A7 9C 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9c
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 38h], 0ch
        cmp edi, ebx
        ; Exact mapped bytes 74 7E: je 0x587d3037
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 8B 0D CC 46 A2 58: mov ecx, dword ptr [0x58a246cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, -12h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1F: jle 0x587d2fed
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp eax, ebx
        ; Exact mapped bytes 7C 1B: jl 0x587d2fed
        __asm _emit 0x7c
        __asm _emit 0x1b
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 13: je 0x587d2fed
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ecx + 18ch]
        add edx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 40h]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x587d2fef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push 6eh
        push 118h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 9E 01 13 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x587d3039
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x587d3039
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 40h]
        mov ecx, 7918h
        mov dword ptr [eax + 20ch], edi
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 38h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d305d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F3 FE 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d306a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 76 FE 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esp + 40h]
        mov eax, dword ptr [edx + 20ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 CA 9B 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9b
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 38h], 0dh
        cmp edi, ebx
        ; Exact mapped bytes 74 7D: je 0x587d3113
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 CC 46 A2 58: mov eax, dword ptr [0x58a246cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 18h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1F: jle 0x587d30c6
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp ecx, ebx
        ; Exact mapped bytes 7C 1B: jl 0x587d30c6
        __asm _emit 0x7c
        __asm _emit 0x1b
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 13: je 0x587d30c6
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [eax + 18ch]
        add edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 40h]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x587d30c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push 0a0h
        push 18ch
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C2 00 13 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x587d3115
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x587d3115
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 40h]
        mov ecx, 7918h
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 38h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d3135
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1B FE 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d3142
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9E FD 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0x12
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 40h]
        mov eax, dword ptr [ebp]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 F5 9A 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x9a
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 38h], 0eh
        cmp edi, ebx
        ; Exact mapped bytes 74 1D: je 0x587d3188
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        push ebx
        push ebx
        push 1f5h
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 23 00 13 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x587d318a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp + 218h], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 7919h
        mov byte ptr [esp + 38h], bl
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d31aa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A6 FD 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d31b7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 29 FD 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 218h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 218h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, 1
        add dword ptr [esp + 18h], eax
        add ebp, 4
        sub dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 40h], ebp
        ; Exact mapped bytes 0F 85 B1 FD FF FF: jne 0x587d2fa0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 21 FB 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfb
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 790h]
        push 101h
        ; Exact mapped bytes E8 11 FB 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfb
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 798h]
        push 0fffffeffh
        ; Exact mapped bytes E8 01 FB 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 79ch]
        push 101h
        ; Exact mapped bytes E8 F1 FA 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfa
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 580h]
        push 0fffffeffh
        ; Exact mapped bytes E8 E1 FA 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfa
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 584h]
        push 101h
        ; Exact mapped bytes E8 D1 FA 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfa
        __asm _emit 0x12
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 F8 99 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x99
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov byte ptr [esp + 38h], 0fh
        cmp edi, ebx
        ; Exact mapped bytes 74 73: je 0x587d32db
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes 8B 0D 24 45 A2 58: mov ecx, dword ptr [0x58a24524]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D C3 FF FF: call 0x587cf610
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x587d328e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x587d328e
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 80h]
        ; Exact mapped bytes EB 02: jmp 0x587d3290
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push 1f5h
        push 1
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FD FE 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x587d32dd
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x587d32dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 7918h
        mov dword ptr [esi + 7a0h], edi
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 38h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d32fd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 53 FC 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x587d330a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D6 FB 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7a0h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7a0h]
        push 101h
        ; Exact mapped bytes E8 F7 F9 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7a0h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, esi
        mov dword ptr [esi + 794h], ebx
        ; Exact mapped bytes E8 CB EB FF FF: call 0x587d1f10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 26h
        ; Exact mapped bytes 7E 16: jle 0x587d3369
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0E: je 0x587d3369
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 194h]
        mov eax, dword ptr [edx + 98h]
        ; Exact mapped bytes EB 02: jmp 0x587d336b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0ac0h], ebx
        mov dword ptr [esi + 0ad8h], ebx
        ; Exact mapped bytes 39 1D 34 90 9C 58: cmp dword ptr [0x589c9034], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 75 2F: jne 0x587d33c9
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes A1 10 47 A2 58: mov eax, dword ptr [0x58a24710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, ebx
        ; Exact mapped bytes 74 26: je 0x587d33c9
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 7E 16: jle 0x587d33c2
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0E: je 0x587d33c2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587d33cc
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 03: jmp 0x587d33cc
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 60h], ebx
        push 80h
        ; Exact mapped bytes E8 78 98 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 38h], 10h
        cmp eax, ebx
        ; Exact mapped bytes 74 35: je 0x587d341b
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esp + 54h]
        mov edx, dword ptr [esp + 50h]
        add ecx, 2710h
        push ecx
        mov ecx, dword ptr [esp + 50h]
        push edx
        mov edx, dword ptr [esp + 50h]
        push ecx
        mov ecx, dword ptr [esp + 50h]
        add edx, 115h
        push edx
        add ecx, 118h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 97 74 04 00: call 0x5881a8b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587d341d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0adch], eax
        mov dword ptr [esi + 428h], 95h
        mov dword ptr [esi + 42ch], 16eh
        mov dword ptr [esi + 430h], 0eah
        mov dword ptr [esi + 434h], 18eh
        mov dword ptr [esi + 43ch], 1a9h
        mov dword ptr [esi + 440h], 19ah
        mov dword ptr [esi + 444h], 1c6h
        mov dword ptr [esi + 448h], 1eeh
        mov dword ptr [esi + 44ch], 1e3h
        mov dword ptr [esi + 450h], 0d9h
        mov dword ptr [esi + 454h], 14ah
        mov dword ptr [esi + 458h], 12eh
        mov dword ptr [esi + 460h], 187h
        mov dword ptr [esi + 464h], 188h
        mov dword ptr [esi + 468h], 1deh
        mov dword ptr [esi + 46ch], 1a2h
        mov dword ptr [esi + 470h], 232h
        mov dword ptr [esi + 474h], 1c0h
        mov dword ptr [esi + 478h], 121h
        mov dword ptr [esi + 47ch], 127h
        mov dword ptr [esi + 480h], 176h
        mov dword ptr [esi + 488h], 1cfh
        mov dword ptr [esi + 48ch], 15fh
        mov dword ptr [esi + 490h], 226h
        mov dword ptr [esi + 494h], 17fh
        mov dword ptr [esi + 498h], 27ah
        mov dword ptr [esi + 49ch], 19ch
        mov dword ptr [esi + 4a4h], 102h
        mov dword ptr [esi + 4a8h], 1b9h
        mov dword ptr [esi + 4ach], 122h
        mov dword ptr [esi + 4b0h], 212h
        mov dword ptr [esi + 4b4h], 13dh
        mov eax, 164h
        mov dword ptr [esi + 45ch], eax
        mov dword ptr [esi + 4a0h], eax
        mov ecx, 143h
        mov dword ptr [esi + 438h], ecx
        mov dword ptr [esi + 484h], ecx
        mov dword ptr [esi + 4b8h], 269h
        mov dword ptr [esi + 4bch], 15ah
        mov dword ptr [esi + 4c0h], 2bdh
        mov dword ptr [esi + 4c4h], 177h
        mov dword ptr [esi + 4c8h], 1adh
        mov dword ptr [esi + 4cch], 0ddh
        mov dword ptr [esi + 4d0h], 202h
        mov dword ptr [esi + 4d4h], 0fdh
        mov dword ptr [esi + 4d8h], 25bh
        mov dword ptr [esi + 4dch], 118h
        mov dword ptr [esi + 4e0h], 2b2h
        mov dword ptr [esi + 4e4h], 135h
        mov dword ptr [esi + 4e8h], 306h
        mov dword ptr [esi + 4ech], 152h
        mov dword ptr [esi + 15ch], ebx
        mov dword ptr [esi + 0ae0h], ebx
        mov dword ptr [esi + 134h], ebx
        mov dword ptr [esi + 148h], ebx
        mov dword ptr [esi + 138h], ebx
        mov dword ptr [esi + 14ch], ebx
        mov dword ptr [esi + 13ch], ebx
        mov dword ptr [esi + 150h], ebx
        mov dword ptr [esi + 140h], ebx
        mov dword ptr [esi + 154h], ebx
        mov dword ptr [esi + 144h], ebx
        mov dword ptr [esi + 158h], ebx
        mov byte ptr [esp + 38h], bl
        mov dword ptr [esi + 50ch], ebx
        lea eax, [esi + 598h]
        mov edx, 2
        mov edi, edi
        mov ecx, 2
        mov dword ptr [eax - 10h], ebx
        mov dword ptr [eax], ebx
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 20h], ebx
        add eax, 4
        sub ecx, 1
        ; Exact mapped bytes 75 ED: jne 0x587d3675
        __asm _emit 0x75
        __asm _emit 0xed
        sub edx, 1
        ; Exact mapped bytes 75 E3: jne 0x587d3670
        __asm _emit 0x75
        __asm _emit 0xe3
        push 198h
        ; Exact mapped bytes E8 B7 95 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x95
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        mov byte ptr [esp + 38h], 11h
        cmp eax, ebx
        ; Exact mapped bytes 74 11: je 0x587d36b8
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push ebx
        push 5899b534h
        mov ecx, eax
        ; Exact mapped bytes E8 BA 06 12 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587d36ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 80h
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 130h], eax
        ; Exact mapped bytes E8 80 95 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x95
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        mov byte ptr [esp + 38h], 12h
        cmp eax, ebx
        ; Exact mapped bytes 74 41: je 0x587d371f
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [esi + 130h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x587d36fc
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x587d36fc
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x587d36fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 0A: add dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0a
        movzx edx, dx
        push edx
        push 0fffffdf7h
        push 0fffff9edh
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C3 2F FE FF: call 0x587b66e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587d3721
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 504h], eax
        ; Exact mapped bytes E8 19 95 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x95
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        mov byte ptr [esp + 38h], 13h
        cmp eax, ebx
        ; Exact mapped bytes 74 38: je 0x587d377d
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 130h]
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x587d375d
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 75 02: jne 0x587d375f
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, 5dch
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        movzx edx, dx
        push edx
        push 66h
        push 68h
        push ecx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 95 AD F9 FF: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587d377f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 3ch], bl
        mov dword ptr [esi + 508h], eax
        ; Exact mapped bytes E8 BE 94 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        mov byte ptr [esp + 38h], 14h
        cmp edi, ebx
        ; Exact mapped bytes 74 7C: je 0x587d381e
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [esi + 130h]
        cmp dword ptr [eax + 164h], 9
        ; Exact mapped bytes 7E 0F: jle 0x587d37c0
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x587d37c0
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 24h]
        ; Exact mapped bytes EB 02: jmp 0x587d37c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esi + 508h]
        mov eax, 5dbh
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        movzx ecx, ax
        push ecx
        push ebx
        push ebx
        push 66h
        push 68h
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 BD F9 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf9
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 26: je 0x587d3816
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        mov dword ptr [esi + 50ch], edi
        ; Exact mapped bytes EB 06: jmp 0x587d3824
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 50ch], ebx
        mov eax, esi
        mov ecx, dword ptr [esp + 30h]
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
        add esp, 28h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
