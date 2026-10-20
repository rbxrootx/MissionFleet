// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B4D20 .. +0x87F bytes.
extern "C" __declspec(naked) void FUN_586b4d20_586B4D20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b81bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0fch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        push 40h
        push 0
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 08 D5 DC FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588b0d68h
        push 58h
        ; Exact mapped bytes E8 85 C2 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3B: je 0x586b4dca
        __asm _emit 0x74
        __asm _emit 0x3b
        push 27h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 FD DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 2
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4B 1A DD FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x1a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b4dd1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 74h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 78h], edx
        push 101h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 B6 07 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 7ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 43 A7 DE FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa7
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 80h], eax
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 20 10 DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x10
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 DC C1 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc1
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3B: je 0x586b4e73
        __asm _emit 0x74
        __asm _emit 0x3b
        push 28h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B FC DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A2 19 DD FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x19
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b4e7a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 8ch], ecx
        push 0c8h
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 91 06 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 88 A6 DE FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa6
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 BF 0E DD FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0e
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 1B C1 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc1
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 38: je 0x586b4f31
        __asm _emit 0x74
        __asm _emit 0x38
        push 29h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA FB DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        movzx eax, word ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E4 18 DD FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x18
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b4f38
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 9ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0a0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 43 06 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 CA A5 DE FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa5
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 A1 0E DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 5D C0 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc0
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 38: je 0x586b4fef
        __asm _emit 0x74
        __asm _emit 0x38
        push 2ah
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C FB DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        movzx edx, word ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 26 18 DD FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x18
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b4ff6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0b4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 85 05 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 0C A5 DE FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa5
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 E3 0D DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 9F BF 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xbf
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 42: je 0x586b50b7
        __asm _emit 0x74
        __asm _emit 0x42
        push 1
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 33h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 190h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 26h
        push ecx
        ; Exact mapped bytes 8B 15 44 20 96 58: mov edx, dword ptr [0x58962044]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 FE D2 DC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b50be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0c4h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 8A 0D DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 06 BF 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xbf
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 47: je 0x586b5155
        __asm _emit 0x74
        __asm _emit 0x47
        push 1
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 98h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 190h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 32h
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 60 D2 DC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b515c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ecx + eax + 0c4h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 D4 0C DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0c
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 50 BE 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbe
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 46: je 0x586b520a
        __asm _emit 0x74
        __asm _emit 0x46
        push 1
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a5h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 190h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 8dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 32h
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 AB D1 DC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd1
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b5211
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0d0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ecx + eax + 0c4h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 0d4h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 1F 0C DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0c
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b5274
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 10h
        ; Exact mapped bytes 0F 8D D0 00 00 00: jge 0x586b534e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 184h
        ; Exact mapped bytes E8 7C BD 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xbd
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 4C: je 0x586b52e4
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0
        push 0
        push 0ffffffh
        imul edx, dword ptr [ebp - 14h], 0ch
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 4ah]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 190h
        push edx
        imul eax, dword ptr [ebp - 14h], 0ch
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 32h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6fh
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 21 8D E1 FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b52eb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [edx + ecx*4 + 7ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 7ch]
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 55 0B DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0b
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 7ch]
        mov dword ptr [ebp - 0e0h], ecx
        push 10h
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 A8 A0 DE FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa0
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x586b526b
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 AC BC 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xbc
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 40: je 0x586b53a8
        __asm _emit 0x74
        __asm _emit 0x40
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B F7 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 80h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0b4h
        push eax
        push 4
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 CD 55 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b53af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [eax + edx + 0bch], ecx
        push 0fch
        ; Exact mapped bytes E8 26 BC 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xbc
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 40: je 0x586b542e
        __asm _emit 0x74
        __asm _emit 0x40
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 F6 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 8ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0b4h
        push eax
        push 4
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 47 55 10 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b5435
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [edx + ecx + 0bch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 0f4h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 0ah
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 FB 09 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x09
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 0f8h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 D0 09 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 0fch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 D8 00 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 100h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 B0 00 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 0
        push 58h
        ; Exact mapped bytes E8 F3 BA 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xba
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 29: je 0x586b554a
        __asm _emit 0x74
        __asm _emit 0x29
        movzx eax, word ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0f5h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 78h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 CB 12 DD FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x12
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586b5551
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 104h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 108h], edx
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 CD 9F DE FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x9f
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
