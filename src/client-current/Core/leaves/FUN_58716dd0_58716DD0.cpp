// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58716DD0 .. +0x2DB7 bytes.
extern "C" __declspec(naked) void FUN_58716dd0_58716DD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888e34fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 5c8h
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 54 B4 D6 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b4044h
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 1
        ; Exact mapped bytes 66 89 4D D4: mov word ptr [ebp - 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 32h
        ; Exact mapped bytes 66 89 95 FC FD FF FF: mov word ptr [ebp - 0x204], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 32h
        ; Exact mapped bytes 66 89 85 F8 FD FF FF: mov word ptr [ebp - 0x208], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 5fh
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov edx, dword ptr [ebp + 10h]
        add edx, 2dh
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, 0fffffec1h
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        mov ecx, 14h
        ; Exact mapped bytes 66 89 4D DC: mov word ptr [ebp - 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xdc
        push 198h
        ; Exact mapped bytes E8 81 A1 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa1
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 16: je 0x58716ea9
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b3fech
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 0C 95 06 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58716eb0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 20ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 20ch]
        mov dword ptr [eax + 60h], ecx
        push 54h
        ; Exact mapped bytes E8 34 A1 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa1
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 46: je 0x58716f26
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 210h], eax
        push 2
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 27 DC D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xdc
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        push eax
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 FF B3 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58716f2d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 218h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 218h]
        mov dword ptr [ecx + 6ch], edx
        push 54h
        ; Exact mapped bytes E8 B7 A0 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 44: je 0x58716fa1
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 21ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 AA DB D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xdb
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 220h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 84 B3 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58716fa8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 224h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 224h]
        mov dword ptr [edx + 64h], eax
        push 54h
        ; Exact mapped bytes E8 3C A0 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 47: je 0x5871701f
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 228h], edx
        push 1
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 2F DB D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 06 B3 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58717026
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 230h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 230h]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 234h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 55 E5 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe5
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 A1 9F 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x9f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 55: je 0x587170c8
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 238h], edx
        push 6
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 94 DA D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xda
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 240h], ecx
        movzx edx, word ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        push ecx
        mov edx, dword ptr [ebp - 23ch]
        push edx
        mov eax, dword ptr [ebp - 240h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 5D B2 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb2
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x587170cf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 244h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 244h]
        mov dword ptr [edx + 94h], eax
        push 54h
        ; Exact mapped bytes E8 12 9F 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x9f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 58: je 0x5871715a
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 248h], edx
        push 5
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 05 DA D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xda
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 250h], ecx
        ; Exact mapped bytes 0F BF 55 D4: movsx edx, word ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xd4
        add edx, 1
        push edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        push ecx
        mov edx, dword ptr [ebp - 24ch]
        push edx
        mov eax, dword ptr [ebp - 250h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 CB B1 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58717161
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 254h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 254h]
        mov dword ptr [edx + 90h], eax
        push 54h
        ; Exact mapped bytes E8 80 9E 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 58: je 0x587171ec
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 258h], edx
        push 4
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 73 D9 D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 260h], ecx
        movzx edx, word ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 25ch]
        push edx
        mov eax, dword ptr [ebp - 260h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 39 B1 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x587171f3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 264h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 264h]
        mov dword ptr [edx + 9ch], eax
        push 54h
        ; Exact mapped bytes E8 EE 9D 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x9d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 5B: je 0x58717281
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 268h], edx
        push 3
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 E1 D8 D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd8
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 270h], ecx
        ; Exact mapped bytes 0F BF 55 D4: movsx edx, word ptr [ebp - 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xd4
        add edx, 1
        push edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 26ch]
        push edx
        mov eax, dword ptr [ebp - 270h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 A4 B0 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x58717288
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 274h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 274h]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 278h], edx
        push 101h
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 ED E2 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 27ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 CE E2 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 280h], eax
        push 101h
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 AF E2 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 284h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 90 E2 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 D9 9C 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 57: je 0x58717392
        __asm _emit 0x74
        __asm _emit 0x57
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 D7 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 28ch], ecx
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 7ah
        push edx
        ; Exact mapped bytes 0F BF 45 DC: movsx eax, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        lea edx, [ecx + eax + 1feh]
        push edx
        push 0ah
        mov eax, dword ptr [ebp - 288h]
        push eax
        mov ecx, dword ptr [ebp - 28ch]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 E3 35 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58717399
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 290h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 290h]
        mov dword ptr [eax + 70h], ecx
        push 0fch
        ; Exact mapped bytes E8 48 9C 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 60: je 0x58717432
        __asm _emit 0x74
        __asm _emit 0x60
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 D6 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd6
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 298h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 92h
        push ecx
        ; Exact mapped bytes 0F BF 55 DC: movsx edx, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        lea ecx, [eax + edx + 1feh]
        push ecx
        push 0ah
        mov edx, dword ptr [ebp - 294h]
        push edx
        mov eax, dword ptr [ebp - 298h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 46 35 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5871743c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 29ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 29ch]
        mov dword ptr [edx + 74h], eax
        push 0fch
        ; Exact mapped bytes E8 A2 9B 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 5D: je 0x587174d5
        __asm _emit 0x74
        __asm _emit 0x5d
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B D6 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd6
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 2a4h], edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 32h
        push eax
        ; Exact mapped bytes 0F BF 4D DC: movsx ecx, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        lea eax, [edx + ecx + 203h]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 2a0h]
        push ecx
        mov edx, dword ptr [ebp - 2a4h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 A3 34 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587174df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 2a8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2a8h]
        mov dword ptr [ecx + 0a8h], edx
        push 0fch
        ; Exact mapped bytes E8 FC 9A 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9a
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 5D: je 0x5871757b
        __asm _emit 0x74
        __asm _emit 0x5d
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 D5 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 2b0h], ecx
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 41h
        push edx
        ; Exact mapped bytes 0F BF 45 DC: movsx eax, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        lea edx, [ecx + eax + 203h]
        push edx
        push 0ah
        mov eax, dword ptr [ebp - 2ach]
        push eax
        mov ecx, dword ptr [ebp - 2b0h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 FD 33 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58717585
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 2b4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2b4h]
        mov dword ptr [eax + 0ach], ecx
        push 54h
        ; Exact mapped bytes E8 59 9A 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9a
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 64: je 0x58717625
        __asm _emit 0x74
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2b8h], eax
        push 19h
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 46 D5 D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 2c0h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 76h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 205h
        push ecx
        mov edx, dword ptr [ebp - 2bch]
        push edx
        mov eax, dword ptr [ebp - 2c0h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 03 AD D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xad
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5871762f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 2c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2c4h]
        mov dword ptr [edx + 78h], eax
        push 54h
        ; Exact mapped bytes E8 B2 99 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x99
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 66: je 0x587176ce
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2c8h], edx
        push 19h
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 9F D4 D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd4
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 2d0h], ecx
        push 40h
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 8eh
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 205h
        push eax
        mov ecx, dword ptr [ebp - 2cch]
        push ecx
        mov edx, dword ptr [ebp - 2d0h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 5A AC D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xac
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587176d8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 2d4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2d4h]
        mov dword ptr [ecx + 7ch], edx
        push 54h
        ; Exact mapped bytes E8 09 99 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x99
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 64: je 0x58717775
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2d8h], ecx
        push 18h
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 F6 D3 D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 2e0h], eax
        push 40h
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 76h
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 205h
        push edx
        mov eax, dword ptr [ebp - 2dch]
        push eax
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 B3 AB D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5871777f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 2e4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2e4h]
        mov dword ptr [eax + 80h], ecx
        push 54h
        ; Exact mapped bytes E8 5F 98 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 66: je 0x58717821
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2e8h], eax
        push 18h
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 4C D3 D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ech], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 2f0h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 8eh
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 205h
        push ecx
        mov edx, dword ptr [ebp - 2ech]
        push edx
        mov eax, dword ptr [ebp - 2f0h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 07 AB D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5871782b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 2f4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2f4h]
        mov dword ptr [edx + 84h], eax
        push 184h
        ; Exact mapped bytes E8 B0 97 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x97
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 55: je 0x587178bf
        __asm _emit 0x74
        __asm _emit 0x55
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 4ch
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 1c6h
        push edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 40h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 176h
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
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 49 67 DB FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x67
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587178c9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov edx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 2f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2f8h]
        mov dword ptr [eax + 8ch], ecx
        push 0ach
        ; Exact mapped bytes E8 12 97 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x97
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 78: je 0x58717980
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2fch], eax
        push 1
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 AF D1 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 304h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 308h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 5dh
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 228h
        push ecx
        mov edx, dword ptr [ebp - 300h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        push ecx
        mov edx, dword ptr [ebp - 308h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 68 43 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5871798a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 30ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30ch]
        mov dword ptr [ecx + 0b4h], edx
        push 0ach
        ; Exact mapped bytes E8 51 96 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 77: je 0x58717a40
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 310h], ecx
        push 0
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 EE D0 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 314h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 318h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 31ch], eax
        push 40h
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 5dh
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 228h
        push edx
        mov eax, dword ptr [ebp - 314h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 318h]
        push edx
        mov eax, dword ptr [ebp - 31ch]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 A8 42 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x42
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58717a4a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 320h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 320h]
        mov dword ptr [edx + 0b8h], eax
        push 0ach
        ; Exact mapped bytes E8 91 95 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x95
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 79: je 0x58717b02
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 324h], edx
        push 3
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 2E D0 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 328h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 32ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 330h], ecx
        push 40h
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 143h
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 1e3h
        push eax
        mov ecx, dword ptr [ebp - 328h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 32ch]
        push eax
        mov ecx, dword ptr [ebp - 330h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 E6 41 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x41
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58717b0c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 334h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 334h]
        mov dword ptr [eax + 0bch], ecx
        push 0ach
        ; Exact mapped bytes E8 CF 94 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 7A: je 0x58717bc5
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 338h], eax
        push 4
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 6C CF D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xcf
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 340h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 344h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 143h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 1e3h
        push ecx
        mov edx, dword ptr [ebp - 33ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 340h]
        push ecx
        mov edx, dword ptr [ebp - 344h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 23 41 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x41
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58717bcf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 348h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 348h]
        mov dword ptr [ecx + 0c0h], edx
        push 0ach
        ; Exact mapped bytes E8 0C 94 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 7A: je 0x58717c88
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 34ch], ecx
        push 2
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 A9 CE D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xce
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 354h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 358h], eax
        push 40h
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 143h
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 22eh
        push edx
        mov eax, dword ptr [ebp - 350h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 354h]
        push edx
        mov eax, dword ptr [ebp - 358h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 60 40 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x40
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58717c92
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 35ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 35ch]
        mov dword ptr [edx + 0c4h], eax
        push 54h
        ; Exact mapped bytes E8 4C 93 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 63: je 0x58717d31
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 360h], edx
        push 1ah
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 39 CE D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xce
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 364h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 368h], ecx
        push 40h
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 5dh
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 228h
        push eax
        mov ecx, dword ptr [ebp - 364h]
        push ecx
        mov edx, dword ptr [ebp - 368h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 F7 A5 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58717d3b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 36ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 36ch]
        mov dword ptr [ecx + 0d8h], edx
        push 54h
        ; Exact mapped bytes E8 A3 92 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x92
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 67: je 0x58717dde
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 370h], ecx
        push 11h
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 90 CD D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xcd
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 378h], eax
        push 40h
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 143h
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 1e3h
        push edx
        mov eax, dword ptr [ebp - 374h]
        push eax
        mov ecx, dword ptr [ebp - 378h]
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 4A A5 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58717de8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov edx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 37ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 37ch]
        mov dword ptr [eax + 0dch], ecx
        push 54h
        ; Exact mapped bytes E8 F6 91 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 66: je 0x58717e8a
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 380h], eax
        push 11h
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 E3 CC D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xcc
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 384h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 388h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 143h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 22eh
        push ecx
        mov edx, dword ptr [ebp - 384h]
        push edx
        mov eax, dword ptr [ebp - 388h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 9E A4 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58717e94
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 38ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 38ch]
        mov dword ptr [edx + 0e0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 390h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 DE D6 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 394h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 BF D6 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 398h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 A0 D6 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 39ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 81 D6 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 3a0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 62 D6 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 3a4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 43 D6 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 3a8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 24 D6 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 3ach], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 05 D6 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 3b0h], eax
        push 0
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 C9 DF D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdf
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 3b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 AD DF D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xdf
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 3b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 E1 DD D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xdd
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 FA 8F 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x8f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 78: je 0x58718098
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 3bch], eax
        push 5
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 97 CA D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xca
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 3c0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3c4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3c8h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 78h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 25ch
        push ecx
        mov edx, dword ptr [ebp - 3c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        push ecx
        mov edx, dword ptr [ebp - 3c8h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 50 3C DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x3c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587180a2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov eax, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 3cch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3cch]
        mov dword ptr [ecx + 0c8h], edx
        push 0ach
        ; Exact mapped bytes E8 39 8F 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 7A: je 0x5871815b
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 3d0h], ecx
        push 6
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 D6 C9 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 3d4h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3d8h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3dch], eax
        push 40h
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 80h
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 25ch
        push edx
        mov eax, dword ptr [ebp - 3d4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 3d8h]
        push edx
        mov eax, dword ptr [ebp - 3dch]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 8D 3B DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718165
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 3e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3e0h]
        mov dword ptr [edx + 0cch], eax
        push 0ach
        ; Exact mapped bytes E8 76 8E 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x8e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 79: je 0x5871821d
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 3e4h], edx
        push 5
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 13 C9 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3ech], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3f0h], ecx
        push 40h
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 91h
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 25ch
        push eax
        mov ecx, dword ptr [ebp - 3e8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 3ech]
        push eax
        mov ecx, dword ptr [ebp - 3f0h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 CB 3A DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x3a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718227
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 3f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3f4h]
        mov dword ptr [eax + 0d0h], ecx
        push 0ach
        ; Exact mapped bytes E8 B4 8D 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 7A: je 0x587182e0
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 3f8h], eax
        push 6
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 51 C8 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc8
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 3fch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 400h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 404h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 99h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 25ch
        push ecx
        mov edx, dword ptr [ebp - 3fch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 400h]
        push ecx
        mov edx, dword ptr [ebp - 404h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 08 3A DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x3a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587182ea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov eax, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 408h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 408h]
        mov dword ptr [ecx + 0d4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 40ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 88 D2 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 410h], eax
        push 101h
        mov ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes E8 69 D2 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 414h], edx
        push 101h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 4A D2 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 418h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 2B D2 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 74 8C 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 65: je 0x5871840b
        __asm _emit 0x74
        __asm _emit 0x65
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D C7 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc7
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 41ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 420h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 7ah
        push ecx
        ; Exact mapped bytes 0F BF 55 DC: movsx edx, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 0F BF 45 E4: movsx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        lea eax, [ecx + eax + 203h]
        lea ecx, [eax + edx - 5]
        push ecx
        push 0ah
        mov edx, dword ptr [ebp - 41ch]
        push edx
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 6D 25 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x25
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718415
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 424h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 424h]
        mov dword ptr [edx + 0a0h], eax
        push 0fch
        ; Exact mapped bytes E8 C6 8B 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 67: je 0x587184bb
        __asm _emit 0x74
        __asm _emit 0x67
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F C6 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc6
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 428h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 42ch], edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 92h
        push eax
        ; Exact mapped bytes 0F BF 4D DC: movsx ecx, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F BF 55 E4: movsx edx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        lea edx, [eax + edx + 203h]
        lea eax, [edx + ecx - 5]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 428h]
        push ecx
        mov edx, dword ptr [ebp - 42ch]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 BD 24 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587184c5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 430h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 430h]
        mov dword ptr [ecx + 0a4h], edx
        push 0bch
        ; Exact mapped bytes E8 16 8B 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 25: je 0x58718529
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 2F F1 E6 FF: call 0x58587650
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf1
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718533
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 434h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 434h]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 438h], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov ecx, dword ptr [ebp - 438h]
        ; Exact mapped bytes E8 0C D9 D6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd9
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        push 184h
        ; Exact mapped bytes E8 85 8A 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 5F: je 0x587185f4
        __asm _emit 0x74
        __asm _emit 0x5f
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 4ch
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 0F BF 55 E4: movsx edx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe4
        lea eax, [ecx + edx + 1c6h]
        push eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 40h
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 0F BF 45 E4: movsx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe4
        lea ecx, [edx + eax + 176h]
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
        mov ecx, dword ptr [eax + 98h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 14 5A DB FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x5a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587185fe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 43ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 43ch]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 440h], eax
        push 0
        mov ecx, dword ptr [ebp - 440h]
        ; Exact mapped bytes E8 57 D9 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xd9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 444h], edx
        push 0
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 3B D9 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd9
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        push 94h
        ; Exact mapped bytes E8 A4 89 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x89
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 57: je 0x587186cd
        __asm _emit 0x74
        __asm _emit 0x57
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 126h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 1afh
        push ecx
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 0bbh
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 178h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 0B 7C 0A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587186d7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov ecx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 448h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 448h]
        mov dword ptr [ecx + eax + 0e4h], edx
        push 94h
        ; Exact mapped bytes E8 FB 88 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 57: je 0x58718776
        __asm _emit 0x74
        __asm _emit 0x57
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 126h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 23dh
        push ecx
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 0bbh
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 1b5h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 62 7B 0A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718780
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov ecx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 44ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 44ch]
        mov dword ptr [eax + edx + 0e4h], ecx
        push 94h
        ; Exact mapped bytes E8 52 88 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 154h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 57: je 0x5871881f
        __asm _emit 0x74
        __asm _emit 0x57
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 126h
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 254h
        push eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 0bbh
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 241h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        push edx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 B9 7A 0A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718829
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 450h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 450h]
        mov dword ptr [edx + ecx + 0e4h], eax
        push 94h
        ; Exact mapped bytes E8 AA 87 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 62: je 0x587188d2
        __asm _emit 0x74
        __asm _emit 0x62
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 126h
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 0F BF 45 E4: movsx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe4
        lea ecx, [edx + eax + 1afh]
        push ecx
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 0bbh
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 0F BF 4D E4: movsx ecx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe4
        lea edx, [eax + ecx + 178h]
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 06 7A 0A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587188dc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov eax, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 454h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 454h]
        mov dword ptr [eax + edx + 0f0h], ecx
        push 94h
        ; Exact mapped bytes E8 F6 86 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 62: je 0x58718986
        __asm _emit 0x74
        __asm _emit 0x62
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 126h
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 0F BF 4D E4: movsx ecx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe4
        lea edx, [eax + ecx + 23dh]
        push edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 0bbh
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 0F BF 55 E4: movsx edx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe4
        lea eax, [ecx + edx + 1b5h]
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 52 79 0A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x79
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718990
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov ecx, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 458h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 458h]
        mov dword ptr [eax + edx + 0f0h], ecx
        push 94h
        ; Exact mapped bytes E8 42 86 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 16ch], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 74 62: je 0x58718a3a
        __asm _emit 0x74
        __asm _emit 0x62
        push 0
        push 0
        push 0ffffffh
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 126h
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 0F BF 4D E4: movsx ecx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe4
        lea edx, [eax + ecx + 254h]
        push edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 0bbh
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 0F BF 55 E4: movsx edx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe4
        lea eax, [ecx + edx + 241h]
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 9E 78 0A 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718a44
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov ecx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 45ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 45ch]
        mov dword ptr [eax + edx + 0f0h], ecx
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x58718a7d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 8
        ; Exact mapped bytes 0F 8D 37 02 00 00: jge 0x58718cbe
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 76 85 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 174h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 74 6C: je 0x58718b10
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 460h], ecx
        push 12h
        mov ecx, dword ptr [ebp - 460h]
        ; Exact mapped bytes E8 13 C0 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 464h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 468h], eax
        push 40h
        imul ecx, dword ptr [ebp - 28h], 0dh
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        lea eax, [edx + ecx + 0bah]
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 1b5h
        push ecx
        mov edx, dword ptr [ebp - 464h]
        push edx
        mov eax, dword ptr [ebp - 468h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 08 DD D6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xdd
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718b1a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 46ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 46ch]
        mov dword ptr [eax + edx*4 + 0fch], ecx
        push 58h
        ; Exact mapped bytes E8 C0 84 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 74 71: je 0x58718bcb
        __asm _emit 0x74
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 470h], eax
        push 12h
        mov ecx, dword ptr [ebp - 470h]
        ; Exact mapped bytes E8 5D BF D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbf
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 474h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 478h], edx
        push 40h
        imul eax, dword ptr [ebp - 28h], 0dh
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        lea edx, [ecx + eax + 0bah]
        push edx
        ; Exact mapped bytes 0F BF 45 E4: movsx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        lea edx, [ecx + eax + 1b5h]
        push edx
        mov eax, dword ptr [ebp - 474h]
        push eax
        mov ecx, dword ptr [ebp - 478h]
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 4D DC D6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xdc
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718bd5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 47ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 47ch]
        mov dword ptr [ecx + eax*4 + 11ch], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov dword ptr [ebp - 480h], edx
        push 0
        mov ecx, dword ptr [ebp - 480h]
        ; Exact mapped bytes E8 28 6C D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x6c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 11ch]
        mov dword ptr [ebp - 484h], edx
        push 0
        mov ecx, dword ptr [ebp - 484h]
        ; Exact mapped bytes E8 08 6C D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov dword ptr [ebp - 488h], edx
        push 0
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 F8 68 D8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 11ch]
        mov dword ptr [ebp - 48ch], edx
        push 0
        mov ecx, dword ptr [ebp - 48ch]
        ; Exact mapped bytes E8 D8 68 D8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov dword ptr [ebp - 490h], edx
        push -32h
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 18 C9 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 11ch]
        mov dword ptr [ebp - 494h], edx
        push -32h
        mov ecx, dword ptr [ebp - 494h]
        ; Exact mapped bytes E8 F8 C8 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B6 FD FF FF: jmp 0x58718a74
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 3F 83 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 184h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 74 67: je 0x58718d42
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 498h], ecx
        push 20h
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 2C BE D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xbe
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 49ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 4a0h], eax
        push 40h
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 0a5h
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 16eh
        push edx
        mov eax, dword ptr [ebp - 49ch]
        push eax
        mov ecx, dword ptr [ebp - 4a0h]
        push ecx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 E6 95 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x95
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718d4c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 4a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4a4h]
        mov dword ptr [eax + 13ch], ecx
        push 54h
        ; Exact mapped bytes E8 92 82 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18ch], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 74 63: je 0x58718deb
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 4a8h], eax
        push 20h
        mov ecx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes E8 7F BD D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xbd
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 4ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 4b0h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 0a5h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 2fh
        push ecx
        mov edx, dword ptr [ebp - 4ach]
        push edx
        mov eax, dword ptr [ebp - 4b0h]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 3D 95 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x95
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718df5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 4b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4b4h]
        mov dword ptr [edx + 140h], eax
        push 54h
        ; Exact mapped bytes E8 E9 81 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 66: je 0x58718e97
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 4b8h], edx
        push 2ch
        mov ecx, dword ptr [ebp - 4b8h]
        ; Exact mapped bytes E8 D6 BC D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xbc
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 4bch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 4c0h], ecx
        push 40h
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 0beh
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 178h
        push eax
        mov ecx, dword ptr [ebp - 4bch]
        push ecx
        mov edx, dword ptr [ebp - 4c0h]
        push edx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 91 94 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718ea1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 4c4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4c4h]
        mov dword ptr [ecx + 144h], edx
        push 54h
        ; Exact mapped bytes E8 3D 81 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x81
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 19ch], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 19ch], 0
        ; Exact mapped bytes 74 6C: je 0x58718f49
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 4c8h], ecx
        push 2ch
        mov ecx, dword ptr [ebp - 4c8h]
        ; Exact mapped bytes E8 2A BC D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xbc
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 4cch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 4d0h], eax
        push 40h
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 0beh
        push ecx
        ; Exact mapped bytes 0F BF 55 E4: movsx edx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        lea ecx, [eax + edx + 178h]
        push ecx
        mov edx, dword ptr [ebp - 4cch]
        push edx
        mov eax, dword ptr [ebp - 4d0h]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 DF 93 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x93
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58718f53
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov ecx, dword ptr [ebp - 1a0h]
        mov dword ptr [ebp - 4d4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4d4h]
        mov dword ptr [edx + 148h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 144h]
        mov dword ptr [ebp - 4d8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 4d8h]
        ; Exact mapped bytes E8 1F C6 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 148h]
        mov dword ptr [ebp - 4dch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 4dch]
        ; Exact mapped bytes E8 00 C6 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 144h]
        mov dword ptr [ebp - 4e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 4e0h]
        ; Exact mapped bytes E8 14 CF D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xcf
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 148h]
        mov dword ptr [ebp - 4e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 4e4h]
        ; Exact mapped bytes E8 F8 CE D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xce
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 11 80 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a4h], eax
        mov byte ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 1a4h], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x58719099
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 4e8h], ecx
        push 7
        mov ecx, dword ptr [ebp - 4e8h]
        ; Exact mapped bytes E8 AA BA D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xba
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 4ech], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 4f0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4f4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4f8h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 0a2h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 25fh
        push ecx
        mov edx, dword ptr [ebp - 4ech]
        push edx
        mov eax, dword ptr [ebp - 4f0h]
        push eax
        mov ecx, dword ptr [ebp - 4f4h]
        push ecx
        mov edx, dword ptr [ebp - 4f8h]
        push edx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 4F 2C DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587190a3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov eax, dword ptr [ebp - 1a8h]
        mov dword ptr [ebp - 4fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4fch]
        mov dword ptr [ecx + 14ch], edx
        push 0ach
        ; Exact mapped bytes E8 38 7F 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ach], eax
        mov byte ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 1ach], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x58719172
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 500h], ecx
        push 8
        mov ecx, dword ptr [ebp - 500h]
        ; Exact mapped bytes E8 D1 B9 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 504h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 508h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 50ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 510h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 123h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 25fh
        push ecx
        mov edx, dword ptr [ebp - 504h]
        push edx
        mov eax, dword ptr [ebp - 508h]
        push eax
        mov ecx, dword ptr [ebp - 50ch]
        push ecx
        mov edx, dword ptr [ebp - 510h]
        push edx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 76 2B DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x2b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5871917c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov eax, dword ptr [ebp - 1b0h]
        mov dword ptr [ebp - 514h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 514h]
        mov dword ptr [ecx + 150h], edx
        push 0ach
        ; Exact mapped bytes E8 5F 7E 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b4h], eax
        mov byte ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 1b4h], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x58719250
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 518h], ecx
        push 7
        mov ecx, dword ptr [ebp - 518h]
        ; Exact mapped bytes E8 F8 B8 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb8
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 51ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 520h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 524h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 528h], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 0a2h
        push eax
        ; Exact mapped bytes 0F BF 4D E4: movsx ecx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        lea eax, [edx + ecx + 25fh]
        push eax
        mov ecx, dword ptr [ebp - 51ch]
        push ecx
        mov edx, dword ptr [ebp - 520h]
        push edx
        mov eax, dword ptr [ebp - 524h]
        push eax
        mov ecx, dword ptr [ebp - 528h]
        push ecx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 98 2A DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5871925a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov edx, dword ptr [ebp - 1b8h]
        mov dword ptr [ebp - 52ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 52ch]
        mov dword ptr [eax + 154h], ecx
        push 0ach
        ; Exact mapped bytes E8 81 7D 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5871932e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 530h], eax
        push 8
        mov ecx, dword ptr [ebp - 530h]
        ; Exact mapped bytes E8 1A B8 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb8
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 534h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 538h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 53ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 540h], ecx
        push 40h
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 123h
        push edx
        ; Exact mapped bytes 0F BF 45 E4: movsx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        lea edx, [ecx + eax + 25fh]
        push edx
        mov eax, dword ptr [ebp - 534h]
        push eax
        mov ecx, dword ptr [ebp - 538h]
        push ecx
        mov edx, dword ptr [ebp - 53ch]
        push edx
        mov eax, dword ptr [ebp - 540h]
        push eax
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 BA 29 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x29
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58719338
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov ecx, dword ptr [ebp - 1c0h]
        mov dword ptr [ebp - 544h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 544h]
        mov dword ptr [edx + 158h], eax
        push 58h
        ; Exact mapped bytes E8 A6 7C 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c4h], eax
        mov byte ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 1c4h], 0
        ; Exact mapped bytes 74 66: je 0x587193da
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 548h], edx
        push 9
        mov ecx, dword ptr [ebp - 548h]
        ; Exact mapped bytes E8 43 B7 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb7
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 54ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 550h], ecx
        push 40h
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 0b2h
        push edx
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 260h
        push eax
        mov ecx, dword ptr [ebp - 54ch]
        push ecx
        mov edx, dword ptr [ebp - 550h]
        push edx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 3E D4 D6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd4
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587193e4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov eax, dword ptr [ebp - 1c8h]
        mov dword ptr [ebp - 554h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 554h]
        mov dword ptr [ecx + 15ch], edx
        push 58h
        ; Exact mapped bytes E8 FA 7B 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1cch], eax
        mov byte ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 1cch], 0
        ; Exact mapped bytes 74 6C: je 0x5871948c
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 558h], ecx
        push 9
        mov ecx, dword ptr [ebp - 558h]
        ; Exact mapped bytes E8 97 B6 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb6
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 55ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 560h], eax
        push 40h
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 0b2h
        push ecx
        ; Exact mapped bytes 0F BF 55 E4: movsx edx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        lea ecx, [eax + edx + 260h]
        push ecx
        mov edx, dword ptr [ebp - 55ch]
        push edx
        mov eax, dword ptr [ebp - 560h]
        push eax
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 8C D3 D6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58719496
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov ecx, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 564h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 564h]
        mov dword ptr [edx + 160h], eax
        push 0ach
        ; Exact mapped bytes E8 45 7B 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d4h], eax
        mov byte ptr [ebp - 4], 34h
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 74 7D: je 0x58719552
        __asm _emit 0x74
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 568h], edx
        push 0ch
        mov ecx, dword ptr [ebp - 568h]
        ; Exact mapped bytes E8 E2 B5 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 56ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 570h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 574h], ecx
        push 40h
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 8ah
        push edx
        ; Exact mapped bytes 0F BF 45 E4: movsx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 31h
        sub ecx, eax
        push ecx
        mov edx, dword ptr [ebp - 56ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 570h]
        push ecx
        mov edx, dword ptr [ebp - 574h]
        push edx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 96 27 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x27
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5871955c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d8h], 0
        mov eax, dword ptr [ebp - 1d8h]
        mov dword ptr [ebp - 578h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 578h]
        mov dword ptr [ecx + 190h], edx
        push 0ach
        ; Exact mapped bytes E8 7F 7A 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7a
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1dch], eax
        mov byte ptr [ebp - 4], 35h
        cmp dword ptr [ebp - 1dch], 0
        ; Exact mapped bytes 74 7D: je 0x58719618
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 57ch], ecx
        push 0dh
        mov ecx, dword ptr [ebp - 57ch]
        ; Exact mapped bytes E8 1C B5 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 580h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 584h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 588h], eax
        push 40h
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 8ah
        push ecx
        ; Exact mapped bytes 0F BF 55 E4: movsx edx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 57h
        sub eax, edx
        push eax
        mov ecx, dword ptr [ebp - 580h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 584h]
        push eax
        mov ecx, dword ptr [ebp - 588h]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 D0 26 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x26
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58719622
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e0h], 0
        mov edx, dword ptr [ebp - 1e0h]
        mov dword ptr [ebp - 58ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 58ch]
        mov dword ptr [eax + 194h], ecx
        push 0ach
        ; Exact mapped bytes E8 B9 79 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x79
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e4h], eax
        mov byte ptr [ebp - 4], 36h
        cmp dword ptr [ebp - 1e4h], 0
        ; Exact mapped bytes 74 7D: je 0x587196de
        __asm _emit 0x74
        __asm _emit 0x7d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 590h], eax
        push 0eh
        mov ecx, dword ptr [ebp - 590h]
        ; Exact mapped bytes E8 56 B4 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb4
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 594h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 598h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 59ch], edx
        push 40h
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 8ah
        push eax
        ; Exact mapped bytes 0F BF 4D E4: movsx ecx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 77h
        sub edx, ecx
        push edx
        mov eax, dword ptr [ebp - 594h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 598h]
        push edx
        mov eax, dword ptr [ebp - 59ch]
        push eax
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 0A 26 DB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x26
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587196e8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        mov ecx, dword ptr [ebp - 1e8h]
        mov dword ptr [ebp - 5a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 5a0h]
        mov dword ptr [edx + 198h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 5a4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 5a4h]
        ; Exact mapped bytes E8 8A BE 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 5a8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 5a8h]
        ; Exact mapped bytes E8 6B BE 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 198h]
        mov dword ptr [ebp - 5ach], eax
        push 101h
        mov ecx, dword ptr [ebp - 5ach]
        ; Exact mapped bytes E8 4C BE 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 5b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 5b0h]
        ; Exact mapped bytes E8 C0 60 D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x60
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 13b8h
        ; Exact mapped bytes E8 79 78 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ech], eax
        mov byte ptr [ebp - 4], 37h
        cmp dword ptr [ebp - 1ech], 0
        ; Exact mapped bytes 74 5B: je 0x587197fc
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 BF D7 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbf
        __asm _emit 0xd7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 0c8h
        mov dword ptr [ebp - 5b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 5b8h], edx
        push 40h
        push 0
        mov eax, dword ptr [ebp - 5b4h]
        push eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 54h
        push ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 7dh
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 5b8h]
        push ecx
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 5C 92 00 00: call 0x58722a50
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58719806
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        mov edx, dword ptr [ebp - 1f0h]
        mov dword ptr [ebp - 5bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 5bch]
        mov dword ptr [eax + 168h], ecx
        push 3e4h
        ; Exact mapped bytes E8 D5 77 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x77
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f4h], eax
        mov byte ptr [ebp - 4], 38h
        cmp dword ptr [ebp - 1f4h], 0
        ; Exact mapped bytes 74 5F: je 0x587198a4
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C3 BE D7 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xbe
        __asm _emit 0xd7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 0c8h
        mov dword ptr [ebp - 5c0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 5c4h], ecx
        push 40h
        push 0
        mov edx, dword ptr [ebp - 5c0h]
        push edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 40h
        push eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 82h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 5c4h]
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 C4 B7 00 00: call 0x58725060
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587198ae
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        mov ecx, dword ptr [ebp - 1f8h]
        mov dword ptr [ebp - 5c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 5c8h]
        mov dword ptr [edx + 164h], eax
        push 33ch
        ; Exact mapped bytes E8 2D 77 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x77
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1fch], eax
        mov byte ptr [ebp - 4], 39h
        cmp dword ptr [ebp - 1fch], 0
        ; Exact mapped bytes 74 24: je 0x58719911
        __asm _emit 0x74
        __asm _emit 0x24
        push 40h
        push 0
        push 0
        push 1eh
        push 338h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 E7 58 F8 FF: call 0x5869f1f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5871991b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 200h], 0
        mov edx, dword ptr [ebp - 200h]
        mov dword ptr [ebp - 5cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 5cch]
        mov dword ptr [eax + 16ch], ecx
        push 14ch
        ; Exact mapped bytes E8 C0 76 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x76
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 3ah
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 25: je 0x58719979
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        push 32h
        push 2ach
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7C E5 00 00: call 0x58727ef0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58719980
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 5d0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 5d0h]
        mov dword ptr [eax + 170h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 16ch]
        mov dword ptr [ebp - 5d4h], eax
        push 1
        mov ecx, dword ptr [ebp - 5d4h]
        ; Exact mapped bytes E8 48 BC FA FF: call 0x586c5600
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xbc
        __asm _emit 0xfa
        __asm _emit 0xff
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 9C 01 00 00: mov word ptr [edx + 0x19c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 9E 01 00 00: mov word ptr [ecx + 0x19e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + eax + 1a0h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 AB E6 FF: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x58719a22
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 97 C3 D6 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FF BB D7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xbb
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 30h]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 02: jne 0x58719a20
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58719a22
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D4: jmp 0x587199f6
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 90h]
        ; Exact mapped bytes E8 00 AB E6 FF: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x58719a67
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 52 C3 D6 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BA BB D7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbb
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 30h]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 02: jne 0x58719a65
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58719a67
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D4: jmp 0x58719a3b
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes E8 BB AA E6 FF: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x58719aac
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0D C3 D6 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 75 BB D7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xbb
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 30h]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 02: jne 0x58719aaa
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58719aac
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D4: jmp 0x58719a80
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1c4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1c8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1d0h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B3 C4 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc4
        __asm _emit 0xd6
        __asm _emit 0xff
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 84 01 00 00: mov word ptr [edx + 0x184], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 82 01 00 00: mov word ptr [ecx + 0x182], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 80 01 00 00: mov word ptr [eax + 0x180], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 7E 01 00 00: mov word ptr [edx + 0x17e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 7C 01 00 00: mov word ptr [ecx + 0x17c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 7A 01 00 00: mov word ptr [eax + 0x17a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 78 01 00 00: mov word ptr [edx + 0x178], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1cch], 0
        push 0fffffe3eh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DE D2 D9 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd2
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1d4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1d8h], 0
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
