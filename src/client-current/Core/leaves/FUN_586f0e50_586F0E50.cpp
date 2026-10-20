// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F0E50 .. +0x388F bytes.
extern "C" __declspec(naked) void FUN_586f0e50_586F0E50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888d1ddh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 748h
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
        ; Exact mapped bytes E8 D4 13 D9 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x13
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3a28h
        push 198h
        ; Exact mapped bytes E8 4E 01 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 16: je 0x586f0edc
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b3214h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D9 F4 08 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f0ee3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 20ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [edx + 60h], eax
        push 54h
        ; Exact mapped bytes E8 01 01 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 44: je 0x586f0f57
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 210h], edx
        push 15h
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 F4 3B D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x3b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 CE 13 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x13
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f0f5e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 218h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 218h]
        mov dword ptr [edx + ecx + 64h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 21ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 0B 46 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 57 00 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 44: je 0x586f1001
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 220h], eax
        push 16h
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 4A 3B D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 24 13 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f1008
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 228h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 228h]
        mov dword ptr [edx + ecx + 64h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 22ch], eax
        push 0
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 54 4D D9 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 230h], eax
        push 0f0h
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 CF 44 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 8B FF 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 44: je 0x586f10cd
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 234h], edx
        push 17h
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 7E 3A D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x3a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 238h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 58 12 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f10d4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 23ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 23ch]
        mov dword ptr [edx + ecx + 6ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 240h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 95 44 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 E1 FE 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 44: je 0x586f1177
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 244h], eax
        push 18h
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 D4 39 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 248h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AE 11 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x11
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f117e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 24ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 24ch]
        mov dword ptr [edx + ecx + 6ch], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 250h], eax
        push 101h
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 EB 43 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 5ch
        ; Exact mapped bytes E8 37 FE 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 1B: je 0x586f11f8
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 7D 27 DD FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x27
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f11ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 254h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 254h]
        mov dword ptr [edx + ecx + 84h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 258h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 25 28 DD FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x28
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 25ch], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 0A 4C D9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x4c
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 86 FD 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 5F: je 0x586f12ed
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 260h], eax
        push 19h
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 79 38 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x38
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 268h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 264h]
        push edx
        mov eax, dword ptr [ebp - 268h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 38 10 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x10
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f12f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 26ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 26ch]
        mov dword ptr [ecx + eax + 74h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 74h]
        mov dword ptr [ebp - 270h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 75 42 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 C1 FC 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 5F: je 0x586f13b2
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 274h], edx
        push 1ah
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 B4 37 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x37
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 27ch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 278h]
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 73 0F D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f13b9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 280h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 280h]
        mov dword ptr [edx + ecx + 74h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 74h]
        mov dword ptr [ebp - 284h], eax
        push 101h
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 B0 41 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 5ch
        ; Exact mapped bytes E8 FC FB 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 1B: je 0x586f1433
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 42 25 DD FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x25
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f143a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 288h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [ecx + eax + 84h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 28ch], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 EA 25 DD FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x25
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 CF 49 D9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x49
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 4B FB 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfb
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 5F: je 0x586f1528
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 294h], eax
        push 1bh
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 3E 36 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x36
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 29ch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 298h]
        push ecx
        mov edx, dword ptr [ebp - 29ch]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 FD 0D D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f152f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 2a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a0h]
        mov dword ptr [eax + edx + 7ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 2a4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 3A 40 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 86 FA 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 5F: je 0x586f15ed
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2a8h], ecx
        push 1ch
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 79 35 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x35
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 2b0h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 2ach]
        push edx
        mov eax, dword ptr [ebp - 2b0h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 38 0D D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f15f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 2b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2b4h]
        mov dword ptr [eax + edx + 7ch], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 7ch]
        mov dword ptr [ebp - 2b8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 75 3F 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x3f
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 BE F9 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf9
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 7E: je 0x586f16da
        __asm _emit 0x74
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2bch], eax
        push 5
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 5B 34 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x34
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2c4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2c8h], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e8h
        push edx
        mov eax, dword ptr [ebp - 2c0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2c4h]
        push edx
        mov eax, dword ptr [ebp - 2c8h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 0E A6 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f16e4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 2cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2cch]
        mov dword ptr [edx + 8ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 2d0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 8E 3E 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3e
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 DA F8 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 59: je 0x586f1799
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2d4h], ecx
        push 20h
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 C7 33 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x33
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 2d8h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e8h
        push ecx
        mov edx, dword ptr [ebp - 2d8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 8F 0B D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f17a3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 2dch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2dch]
        mov dword ptr [ecx + eax + 94h], edx
        push 54h
        ; Exact mapped bytes E8 32 F8 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 59: je 0x586f1841
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2e0h], ecx
        push 1fh
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 1F 33 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x33
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 2e4h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e8h
        push ecx
        mov edx, dword ptr [ebp - 2e4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 E7 0A D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f184b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 2e8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2e8h]
        mov dword ptr [eax + edx + 94h], ecx
        push 0ach
        ; Exact mapped bytes E8 87 F7 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 7E: je 0x586f1911
        __asm _emit 0x74
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2ech], eax
        push 6
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 24 32 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x32
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f8h], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 25bh
        push edx
        mov eax, dword ptr [ebp - 2f0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2f4h]
        push edx
        mov eax, dword ptr [ebp - 2f8h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 D7 A3 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f191b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 2fch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2fch]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 300h], edx
        push 101h
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 57 3C 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 A3 F6 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 59: je 0x586f19d0
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 304h], ecx
        push 20h
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 90 31 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x31
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 25bh
        push ecx
        mov edx, dword ptr [ebp - 308h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 58 09 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f19da
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 30ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30ch]
        mov dword ptr [ecx + eax + 9ch], edx
        push 54h
        ; Exact mapped bytes E8 FB F5 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 59: je 0x586f1a78
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 310h], ecx
        push 1fh
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 E8 30 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 314h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 25bh
        push ecx
        mov edx, dword ptr [ebp - 314h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 B0 08 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f1a82
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 318h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 318h]
        mov dword ptr [eax + edx + 9ch], ecx
        push 0ach
        ; Exact mapped bytes E8 50 F5 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x586f1b6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 31ch], eax
        push 8
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 E9 2F D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 324h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 328h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 32ch], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1d4h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 280h
        push edx
        mov eax, dword ptr [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 324h]
        push ecx
        mov edx, dword ptr [ebp - 328h]
        push edx
        mov eax, dword ptr [ebp - 32ch]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 7E A1 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f1b74
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 330h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 330h]
        mov dword ptr [edx + 360h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 360h]
        mov dword ptr [ebp - 334h], edx
        push 101h
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 FE 39 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 2a7h
        mov dword ptr [ebp - 14h], 0a6h
        mov dword ptr [ebp - 1ch], 10h
        push 0ach
        ; Exact mapped bytes E8 33 F4 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf4
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f1c7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 338h], ecx
        push 0
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 CC 2E D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 340h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 344h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 348h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 33ch]
        push edx
        mov eax, dword ptr [ebp - 340h]
        push eax
        mov ecx, dword ptr [ebp - 344h]
        push ecx
        mov edx, dword ptr [ebp - 348h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 6D A0 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f1c85
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 34ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 34ch]
        mov dword ptr [ecx + 0a4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 350h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 ED 38 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes E8 2E F3 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf3
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f1d80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 354h], ecx
        push 0
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 C7 2D D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 358h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 35ch], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 360h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 364h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 358h]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        push eax
        mov ecx, dword ptr [ebp - 360h]
        push ecx
        mov edx, dword ptr [ebp - 364h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 68 9F DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x9f
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f1d8a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 368h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 368h]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 36ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 E8 37 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes E8 29 F2 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf2
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f1e85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 370h], ecx
        push 0
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 C2 2C D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 378h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 37ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 380h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 374h]
        push edx
        mov eax, dword ptr [ebp - 378h]
        push eax
        mov ecx, dword ptr [ebp - 37ch]
        push ecx
        mov edx, dword ptr [ebp - 380h]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 63 9E DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x9e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f1e8f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 384h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 384h]
        mov dword ptr [ecx + 0b0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 388h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 E3 36 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes E8 24 F1 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf1
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f1f8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 38ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 BD 2B D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x2b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 390h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 394h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 398h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 39ch], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 390h]
        push edx
        mov eax, dword ptr [ebp - 394h]
        push eax
        mov ecx, dword ptr [ebp - 398h]
        push ecx
        mov edx, dword ptr [ebp - 39ch]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 5E 9D DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f1f94
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 3a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3a0h]
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 3a4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 DE 35 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes E8 1F F0 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf0
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f208f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 3a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 B8 2A D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x2a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ach], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 3b0h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3b4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3b8h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 3ach]
        push edx
        mov eax, dword ptr [ebp - 3b0h]
        push eax
        mov ecx, dword ptr [ebp - 3b4h]
        push ecx
        mov edx, dword ptr [ebp - 3b8h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 59 9C DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9c
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f2099
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 3bch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3bch]
        mov dword ptr [ecx + 0bch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 3c0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 D9 34 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes E8 1A EF 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xef
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f2194
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 3c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 B3 29 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x29
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3c8h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 3cch], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3d0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3d4h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 3c8h]
        push edx
        mov eax, dword ptr [ebp - 3cch]
        push eax
        mov ecx, dword ptr [ebp - 3d0h]
        push ecx
        mov edx, dword ptr [ebp - 3d4h]
        push edx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 54 9B DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9b
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f219e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 3d8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3d8h]
        mov dword ptr [ecx + 120h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 3dch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 D4 33 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes E8 15 EE 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xee
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f2299
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 3e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 AE 28 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x28
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3e4h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 3e8h], edx
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
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 3e4h]
        push edx
        mov eax, dword ptr [ebp - 3e8h]
        push eax
        mov ecx, dword ptr [ebp - 3ech]
        push ecx
        mov edx, dword ptr [ebp - 3f0h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 4F 9A DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f22a3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 3f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3f4h]
        mov dword ptr [ecx + 124h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 3f8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 CF 32 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x32
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes E8 10 ED 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f239e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 3fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes E8 A9 27 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x27
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 400h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 404h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 408h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 40ch], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 400h]
        push edx
        mov eax, dword ptr [ebp - 404h]
        push eax
        mov ecx, dword ptr [ebp - 408h]
        push ecx
        mov edx, dword ptr [ebp - 40ch]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 4A 99 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x99
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f23a8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov eax, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 410h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 410h]
        mov dword ptr [ecx + 0c8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 414h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 CA 31 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes E8 0B EC 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f24a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 418h], ecx
        push 0
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 A4 26 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x26
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 41ch], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 420h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 424h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 428h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 41ch]
        push edx
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 424h]
        push ecx
        mov edx, dword ptr [ebp - 428h]
        push edx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 45 98 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x98
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f24ad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 42ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 42ch]
        mov dword ptr [ecx + 364h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 364h]
        mov dword ptr [ebp - 430h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 C5 30 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        push 0ach
        ; Exact mapped bytes E8 FD EA 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x586f25ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 434h], edx
        push 0
        mov ecx, dword ptr [ebp - 434h]
        ; Exact mapped bytes E8 96 25 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x25
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 438h], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 43ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 440h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 444h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 1]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx - 71h]
        push eax
        mov ecx, dword ptr [ebp - 438h]
        push ecx
        mov edx, dword ptr [ebp - 43ch]
        push edx
        mov eax, dword ptr [ebp - 440h]
        push eax
        mov ecx, dword ptr [ebp - 444h]
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 2E 97 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x97
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f25c4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 448h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 448h]
        mov dword ptr [eax + 110h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 110h]
        mov dword ptr [ebp - 44ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 AE 2F 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2f
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 F7 E9 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x586f26c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 450h], edx
        push 0
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 90 24 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 454h], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 458h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 45ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 460h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 1]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx - 38h]
        push eax
        mov ecx, dword ptr [ebp - 454h]
        push ecx
        mov edx, dword ptr [ebp - 458h]
        push edx
        mov eax, dword ptr [ebp - 45ch]
        push eax
        mov ecx, dword ptr [ebp - 460h]
        push ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 28 96 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x96
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f26ca
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 464h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 464h]
        mov dword ptr [eax + 114h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 114h]
        mov dword ptr [ebp - 468h], eax
        push 101h
        mov ecx, dword ptr [ebp - 468h]
        ; Exact mapped bytes E8 A8 2E 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        push 54h
        ; Exact mapped bytes E8 E3 E8 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 76: je 0x586f27ad
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 46ch], ecx
        push 29h
        mov ecx, dword ptr [ebp - 46ch]
        ; Exact mapped bytes E8 D0 23 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x23
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 470h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 474h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [ecx + edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 470h]
        push ecx
        mov edx, dword ptr [ebp - 474h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 7B FB D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f27b7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 478h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 478h]
        mov dword ptr [eax + edx + 0d4h], ecx
        push 54h
        ; Exact mapped bytes E8 1E E8 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 79: je 0x586f2875
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 47ch], eax
        push 27h
        mov ecx, dword ptr [ebp - 47ch]
        ; Exact mapped bytes E8 0B 23 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x23
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 480h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 484h], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        lea edx, [eax + ecx + 1]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax - 5ch]
        push edx
        mov eax, dword ptr [ebp - 480h]
        push eax
        mov ecx, dword ptr [ebp - 484h]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 B3 FA D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfa
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f287f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 488h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 488h]
        mov dword ptr [eax + edx], ecx
        push 54h
        ; Exact mapped bytes E8 4B E7 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe7
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 79: je 0x586f2948
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 48ch], eax
        push 28h
        mov ecx, dword ptr [ebp - 48ch]
        ; Exact mapped bytes E8 38 22 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x22
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 490h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 494h], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        lea edx, [eax + ecx + 1]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax - 5ch]
        push edx
        mov eax, dword ptr [ebp - 490h]
        push eax
        mov ecx, dword ptr [ebp - 494h]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 E0 F9 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf9
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f2952
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 498h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 498h]
        mov dword ptr [eax + ecx], edx
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 49ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 49ch]
        ; Exact mapped bytes E8 F8 2B 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 4a0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes E8 C5 2B 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2b
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 0E E6 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x586f2aa1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 4a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes E8 A7 20 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x20
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4a8h], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 4ach], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4b0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4b4h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 4a8h]
        push eax
        mov ecx, dword ptr [ebp - 4ach]
        push ecx
        mov edx, dword ptr [ebp - 4b0h]
        push edx
        mov eax, dword ptr [ebp - 4b4h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 47 92 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f2aab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 4b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4b8h]
        mov dword ptr [edx + 0ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 4bch], edx
        push 101h
        mov ecx, dword ptr [ebp - 4bch]
        ; Exact mapped bytes E8 C7 2A 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        push 54h
        ; Exact mapped bytes E8 02 E5 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe5
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 76: je 0x586f2b8e
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 4c0h], eax
        push 29h
        mov ecx, dword ptr [ebp - 4c0h]
        ; Exact mapped bytes E8 EF 1F D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4c4h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 4c8h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        lea edx, [eax + ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax - 5ch]
        push edx
        mov eax, dword ptr [ebp - 4c4h]
        push eax
        mov ecx, dword ptr [ebp - 4c8h]
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 9A F7 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf7
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f2b98
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov edx, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 4cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4cch]
        mov dword ptr [ecx + eax + 0d4h], edx
        push 54h
        ; Exact mapped bytes E8 3D E4 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 79: je 0x586f2c56
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 4d0h], ecx
        push 27h
        mov ecx, dword ptr [ebp - 4d0h]
        ; Exact mapped bytes E8 2A 1F D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4d4h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 4d8h], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [ecx + edx + 1]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 4d4h]
        push ecx
        mov edx, dword ptr [ebp - 4d8h]
        push edx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 D2 F6 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf6
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f2c60
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 4dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4dch]
        mov dword ptr [eax + edx], ecx
        push 54h
        ; Exact mapped bytes E8 6A E3 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe3
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 79: je 0x586f2d29
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 4e0h], eax
        push 28h
        mov ecx, dword ptr [ebp - 4e0h]
        ; Exact mapped bytes E8 57 1E D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4e4h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 4e8h], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        lea edx, [eax + ecx + 1]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax - 5ch]
        push edx
        mov eax, dword ptr [ebp - 4e4h]
        push eax
        mov ecx, dword ptr [ebp - 4e8h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 FF F5 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf5
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f2d33
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 4ech], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 0e0h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4ech]
        mov dword ptr [edx + eax], ecx
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 4f0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 4f0h]
        ; Exact mapped bytes E8 17 28 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x28
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 4f4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 4f4h]
        ; Exact mapped bytes E8 E4 27 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x27
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 2D E2 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe2
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x586f2e82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 4f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 4f8h]
        ; Exact mapped bytes E8 C6 1C D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x1c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4fch], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 500h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 504h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 508h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 4fch]
        push eax
        mov ecx, dword ptr [ebp - 500h]
        push ecx
        mov edx, dword ptr [ebp - 504h]
        push edx
        mov eax, dword ptr [ebp - 508h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 66 8E DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f2e8c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov ecx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 50ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 50ch]
        mov dword ptr [edx + 0cch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 510h], edx
        push 101h
        mov ecx, dword ptr [ebp - 510h]
        ; Exact mapped bytes E8 E6 26 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x26
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        push 54h
        ; Exact mapped bytes E8 21 E1 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe1
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 154h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 76: je 0x586f2f6f
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 514h], eax
        push 29h
        mov ecx, dword ptr [ebp - 514h]
        ; Exact mapped bytes E8 0E 1C D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 51ch], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        lea edx, [eax + ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax - 5ch]
        push edx
        mov eax, dword ptr [ebp - 518h]
        push eax
        mov ecx, dword ptr [ebp - 51ch]
        push ecx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 B9 F3 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf3
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f2f79
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov edx, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 520h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 520h]
        mov dword ptr [ecx + eax + 0d4h], edx
        push 54h
        ; Exact mapped bytes E8 5D E0 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe0
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 79: je 0x586f3036
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 524h], ecx
        push 27h
        mov ecx, dword ptr [ebp - 524h]
        ; Exact mapped bytes E8 4A 1B D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 528h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 52ch], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [ecx + edx + 1]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 528h]
        push ecx
        mov edx, dword ptr [ebp - 52ch]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 F2 F2 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf2
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3040
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov eax, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 530h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0e0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 530h]
        mov dword ptr [eax + edx], ecx
        push 54h
        ; Exact mapped bytes E8 8B DF 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xdf
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 79: je 0x586f3108
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 534h], eax
        push 28h
        mov ecx, dword ptr [ebp - 534h]
        ; Exact mapped bytes E8 78 1A D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 538h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 53ch], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        lea edx, [eax + ecx + 1]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax - 5ch]
        push edx
        mov eax, dword ptr [ebp - 538h]
        push eax
        mov ecx, dword ptr [ebp - 53ch]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 20 F2 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3112
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov edx, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 540h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 0e0h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 540h]
        mov dword ptr [edx + eax], ecx
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 544h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 544h]
        ; Exact mapped bytes E8 3A 24 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 548h], eax
        push 101h
        mov ecx, dword ptr [ebp - 548h]
        ; Exact mapped bytes E8 08 24 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 51 DE 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xde
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 16ch], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x586f325e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 54ch], edx
        push 0
        mov ecx, dword ptr [ebp - 54ch]
        ; Exact mapped bytes E8 EA 18 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x18
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 550h], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 554h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 558h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 55ch], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 550h]
        push eax
        mov ecx, dword ptr [ebp - 554h]
        push ecx
        mov edx, dword ptr [ebp - 558h]
        push edx
        mov eax, dword ptr [ebp - 55ch]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 8A 8A DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3268
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov ecx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 560h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 560h]
        mov dword ptr [edx + 0d0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 564h], edx
        push 101h
        mov ecx, dword ptr [ebp - 564h]
        ; Exact mapped bytes E8 0A 23 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x23
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        push 0ach
        ; Exact mapped bytes E8 42 DD 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xdd
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 174h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f336c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 568h], eax
        push 0
        mov ecx, dword ptr [ebp - 568h]
        ; Exact mapped bytes E8 DB 17 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x17
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 56ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 570h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 574h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 578h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 56ch]
        push ecx
        mov edx, dword ptr [ebp - 570h]
        push edx
        mov eax, dword ptr [ebp - 574h]
        push eax
        mov ecx, dword ptr [ebp - 578h]
        push ecx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 7C 89 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3376
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov edx, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 57ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 57ch]
        mov dword ptr [eax + 0b4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 580h], eax
        push 101h
        mov ecx, dword ptr [ebp - 580h]
        ; Exact mapped bytes E8 FC 21 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        push 0ach
        ; Exact mapped bytes E8 3D DC 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f3471
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 584h], eax
        push 0
        mov ecx, dword ptr [ebp - 584h]
        ; Exact mapped bytes E8 D6 16 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x16
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 588h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 58ch], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 590h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 594h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 588h]
        push ecx
        mov edx, dword ptr [ebp - 58ch]
        push edx
        mov eax, dword ptr [ebp - 590h]
        push eax
        mov ecx, dword ptr [ebp - 594h]
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 77 88 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x88
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f347b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 598h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 598h]
        mov dword ptr [eax + 0c0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 59ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 59ch]
        ; Exact mapped bytes E8 F7 20 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        push 0ach
        ; Exact mapped bytes E8 38 DB 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdb
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 184h], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f3576
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 5a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 5a0h]
        ; Exact mapped bytes E8 D1 15 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x15
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 5a4h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 5a8h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5ach], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5b0h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 5a4h]
        push ecx
        mov edx, dword ptr [ebp - 5a8h]
        push edx
        mov eax, dword ptr [ebp - 5ach]
        push eax
        mov ecx, dword ptr [ebp - 5b0h]
        push ecx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 72 87 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x87
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3580
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 5b4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 5b4h]
        mov dword ptr [eax + 0c4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 5b8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 5b8h]
        ; Exact mapped bytes E8 F2 1F 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 18h], 2a7h
        mov dword ptr [ebp - 14h], 0b6h
        push 0ach
        ; Exact mapped bytes E8 25 DA 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xda
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18ch], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x586f368a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 5bch], eax
        push 0
        mov ecx, dword ptr [ebp - 5bch]
        ; Exact mapped bytes E8 BE 14 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 5c0h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 5c4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5c8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5cch], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 5c0h]
        push eax
        mov ecx, dword ptr [ebp - 5c4h]
        push ecx
        mov edx, dword ptr [ebp - 5c8h]
        push edx
        mov eax, dword ptr [ebp - 5cch]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 5E 86 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x86
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3694
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 5d0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 5d0h]
        mov dword ptr [edx + 128h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 5d4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 5d4h]
        ; Exact mapped bytes E8 DE 1E 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x1e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 10h
        mov dword ptr [ebp - 14h], eax
        push 0ach
        ; Exact mapped bytes E8 1F D9 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd9
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f378f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 5d8h], edx
        push 0
        mov ecx, dword ptr [ebp - 5d8h]
        ; Exact mapped bytes E8 B8 13 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x13
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 5dch], eax
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 5e0h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5e4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5e8h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 5dch]
        push edx
        mov eax, dword ptr [ebp - 5e0h]
        push eax
        mov ecx, dword ptr [ebp - 5e4h]
        push ecx
        mov edx, dword ptr [ebp - 5e8h]
        push edx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 59 85 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3799
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 5ech], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 5ech]
        mov dword ptr [ecx + 130h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [ebp - 5f0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 5f0h]
        ; Exact mapped bytes E8 D9 1D 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, 40h
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes E8 1A D8 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd8
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 19ch], eax
        mov byte ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 19ch], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f3894
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 5f4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 5f4h]
        ; Exact mapped bytes E8 B3 12 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x12
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 5f8h], eax
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 5fch], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 600h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 604h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 5f8h]
        push ecx
        mov edx, dword ptr [ebp - 5fch]
        push edx
        mov eax, dword ptr [ebp - 600h]
        push eax
        mov ecx, dword ptr [ebp - 604h]
        push ecx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 54 84 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f389e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov edx, dword ptr [ebp - 1a0h]
        mov dword ptr [ebp - 608h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 608h]
        mov dword ptr [eax + 12ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12ch]
        mov dword ptr [ebp - 60ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 60ch]
        ; Exact mapped bytes E8 D4 1C 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 10h
        mov dword ptr [ebp - 14h], ecx
        push 0ach
        ; Exact mapped bytes E8 15 D7 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a4h], eax
        mov byte ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 1a4h], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x586f399a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 610h], eax
        push 0
        mov ecx, dword ptr [ebp - 610h]
        ; Exact mapped bytes E8 AE 11 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x11
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 614h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 618h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 61ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 620h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 614h]
        push eax
        mov ecx, dword ptr [ebp - 618h]
        push ecx
        mov edx, dword ptr [ebp - 61ch]
        push edx
        mov eax, dword ptr [ebp - 620h]
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 4E 83 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x83
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f39a4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov ecx, dword ptr [ebp - 1a8h]
        mov dword ptr [ebp - 624h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 624h]
        mov dword ptr [edx + 138h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 138h]
        mov dword ptr [ebp - 628h], edx
        push 101h
        mov ecx, dword ptr [ebp - 628h]
        ; Exact mapped bytes E8 CE 1B 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 10h
        mov dword ptr [ebp - 14h], eax
        push 0ach
        ; Exact mapped bytes E8 0F D6 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ach], eax
        mov byte ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 1ach], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f3a9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 62ch], edx
        push 0
        mov ecx, dword ptr [ebp - 62ch]
        ; Exact mapped bytes E8 A8 10 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x10
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 630h], eax
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 634h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 638h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 63ch], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 630h]
        push edx
        mov eax, dword ptr [ebp - 634h]
        push eax
        mov ecx, dword ptr [ebp - 638h]
        push ecx
        mov edx, dword ptr [ebp - 63ch]
        push edx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 49 82 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x82
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3aa9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov eax, dword ptr [ebp - 1b0h]
        mov dword ptr [ebp - 640h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 640h]
        mov dword ptr [ecx + 14ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 14ch]
        mov dword ptr [ebp - 644h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 644h]
        ; Exact mapped bytes E8 C9 1A 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 14ch]
        mov dword ptr [ebp - 648h], eax
        push 0
        mov ecx, dword ptr [ebp - 648h]
        ; Exact mapped bytes E8 8D 24 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 10h
        mov dword ptr [ebp - 14h], ecx
        push 0ach
        ; Exact mapped bytes E8 EE D4 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd4
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b4h], eax
        mov byte ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 1b4h], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x586f3bc1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 64ch], eax
        push 0
        mov ecx, dword ptr [ebp - 64ch]
        ; Exact mapped bytes E8 87 0F D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 650h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 654h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 658h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 65ch], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 650h]
        push eax
        mov ecx, dword ptr [ebp - 654h]
        push ecx
        mov edx, dword ptr [ebp - 658h]
        push edx
        mov eax, dword ptr [ebp - 65ch]
        push eax
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 27 81 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x81
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3bcb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov ecx, dword ptr [ebp - 1b8h]
        mov dword ptr [ebp - 660h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 660h]
        mov dword ptr [edx + 134h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [ebp - 664h], edx
        push 101h
        mov ecx, dword ptr [ebp - 664h]
        ; Exact mapped bytes E8 A7 19 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 668h], ecx
        push 0
        mov ecx, dword ptr [ebp - 668h]
        ; Exact mapped bytes E8 6B 23 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x23
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1eh
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 3ah
        mov dword ptr [ebp - 14h], eax
        push 0ach
        ; Exact mapped bytes E8 C3 D3 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd3
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f3ceb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 66ch], edx
        push 0
        mov ecx, dword ptr [ebp - 66ch]
        ; Exact mapped bytes E8 5C 0E D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 670h], eax
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 674h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 678h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 67ch], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 670h]
        push edx
        mov eax, dword ptr [ebp - 674h]
        push eax
        mov ecx, dword ptr [ebp - 678h]
        push ecx
        mov edx, dword ptr [ebp - 67ch]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 FD 7F DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7f
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3cf5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov eax, dword ptr [ebp - 1c0h]
        mov dword ptr [ebp - 680h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 680h]
        mov dword ptr [ecx + 13ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 13ch]
        mov dword ptr [ebp - 684h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 684h]
        ; Exact mapped bytes E8 7D 18 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, 11h
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes E8 BE D2 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd2
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c4h], eax
        mov byte ptr [ebp - 4], 34h
        cmp dword ptr [ebp - 1c4h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f3df0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 688h], ecx
        push 0
        mov ecx, dword ptr [ebp - 688h]
        ; Exact mapped bytes E8 57 0D D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 68ch], eax
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 690h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 694h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 698h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 68ch]
        push ecx
        mov edx, dword ptr [ebp - 690h]
        push edx
        mov eax, dword ptr [ebp - 694h]
        push eax
        mov ecx, dword ptr [ebp - 698h]
        push ecx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 F8 7E DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3dfa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov edx, dword ptr [ebp - 1c8h]
        mov dword ptr [ebp - 69ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 69ch]
        mov dword ptr [eax + 140h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 140h]
        mov dword ptr [ebp - 6a0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 6a0h]
        ; Exact mapped bytes E8 78 17 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x17
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 11h
        mov dword ptr [ebp - 14h], ecx
        push 0ach
        ; Exact mapped bytes E8 B9 D1 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd1
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1cch], eax
        mov byte ptr [ebp - 4], 35h
        cmp dword ptr [ebp - 1cch], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x586f3ef6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 6a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 6a4h]
        ; Exact mapped bytes E8 52 0C D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 6a8h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 6ach], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6b0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6b4h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 6a8h]
        push eax
        mov ecx, dword ptr [ebp - 6ach]
        push ecx
        mov edx, dword ptr [ebp - 6b0h]
        push edx
        mov eax, dword ptr [ebp - 6b4h]
        push eax
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 F2 7D DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f3f00
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov ecx, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 6b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 6b8h]
        mov dword ptr [edx + 144h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 144h]
        mov dword ptr [ebp - 6bch], edx
        push 101h
        mov ecx, dword ptr [ebp - 6bch]
        ; Exact mapped bytes E8 72 16 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x16
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 11h
        mov dword ptr [ebp - 14h], eax
        push 0ach
        ; Exact mapped bytes E8 B3 D0 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd0
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d4h], eax
        mov byte ptr [ebp - 4], 36h
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x586f3ffb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 6c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 6c0h]
        ; Exact mapped bytes E8 4C 0B D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 6c4h], eax
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 6c8h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6cch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6d0h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 6c4h]
        push edx
        mov eax, dword ptr [ebp - 6c8h]
        push eax
        mov ecx, dword ptr [ebp - 6cch]
        push ecx
        mov edx, dword ptr [ebp - 6d0h]
        push edx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 ED 7C DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x7c
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4005
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d8h], 0
        mov eax, dword ptr [ebp - 1d8h]
        mov dword ptr [ebp - 6d4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 6d4h]
        mov dword ptr [ecx + 148h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 148h]
        mov dword ptr [ebp - 6d8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 6d8h]
        ; Exact mapped bytes E8 6D 15 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 B9 CF 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1dch], eax
        mov byte ptr [ebp - 4], 37h
        cmp dword ptr [ebp - 1dch], 0
        ; Exact mapped bytes 74 4C: je 0x586f40ad
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0
        push 0
        push 0efe5d4h
        mov edx, dword ptr [ebp + 10h]
        add edx, 92h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 142h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 86h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 7bh
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 0B E3 D8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe3
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f40b7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e0h], 0
        mov edx, dword ptr [ebp - 1e0h]
        mov dword ptr [ebp - 6dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 6dch]
        mov dword ptr [eax + 260h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 260h]
        mov dword ptr [ebp - 6e0h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 6e0h]
        ; Exact mapped bytes E8 88 1D D9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 260h]
        mov dword ptr [ebp - 6e4h], eax
        push 588b3228h
        mov ecx, dword ptr [ebp - 6e4h]
        ; Exact mapped bytes E8 89 1F D9 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 70ch], 10h
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x586f4133
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 1fh
        ; Exact mapped bytes 0F 8D 5A 02 00 00: jge 0x586f4397
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 10: jne 0x586f4153
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 28h], 0c7h
        mov dword ptr [ebp - 24h], 0b5h
        ; Exact mapped bytes EB 6C: jmp 0x586f41bf
        __asm _emit 0xeb
        __asm _emit 0x6c
        cmp dword ptr [ebp - 20h], 9
        ; Exact mapped bytes 75 10: jne 0x586f4169
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 28h], 1a6h
        mov dword ptr [ebp - 24h], 0b5h
        ; Exact mapped bytes EB 56: jmp 0x586f41bf
        __asm _emit 0xeb
        __asm _emit 0x56
        cmp dword ptr [ebp - 20h], 11h
        ; Exact mapped bytes 75 10: jne 0x586f417f
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 28h], 0c7h
        mov dword ptr [ebp - 24h], 165h
        ; Exact mapped bytes EB 40: jmp 0x586f41bf
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp dword ptr [ebp - 20h], 14h
        ; Exact mapped bytes 75 10: jne 0x586f4195
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 28h], 1a6h
        mov dword ptr [ebp - 24h], 153h
        ; Exact mapped bytes EB 2A: jmp 0x586f41bf
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp - 20h], 19h
        ; Exact mapped bytes 75 10: jne 0x586f41ab
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 28h], 0c7h
        mov dword ptr [ebp - 24h], 1b5h
        ; Exact mapped bytes EB 14: jmp 0x586f41bf
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp dword ptr [ebp - 20h], 1dh
        ; Exact mapped bytes 75 0E: jne 0x586f41bf
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [ebp - 28h], 1a6h
        mov dword ptr [ebp - 24h], 1c5h
        push 0ach
        ; Exact mapped bytes E8 3B CE 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xce
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e4h], eax
        mov byte ptr [ebp - 4], 38h
        cmp dword ptr [ebp - 1e4h], 0
        ; Exact mapped bytes 74 76: je 0x586f4255
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 6e8h], eax
        push 4
        mov ecx, dword ptr [ebp - 6e8h]
        ; Exact mapped bytes E8 D8 08 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 6ech], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6f0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6f4h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 6ech]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 6f0h]
        push edx
        mov eax, dword ptr [ebp - 6f4h]
        push eax
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 93 7A DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f425f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        mov ecx, dword ptr [ebp - 1e8h]
        mov dword ptr [ebp - 6f8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 6f8h]
        mov dword ptr [eax + edx*4 + 264h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 264h]
        mov dword ptr [ebp - 6fch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 6fch]
        ; Exact mapped bytes E8 0B 13 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x13
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 57 CD 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcd
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ech], eax
        mov byte ptr [ebp - 4], 39h
        cmp dword ptr [ebp - 1ech], 0
        ; Exact mapped bytes 74 50: je 0x586f4313
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 10h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 28h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 1]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 A5 E0 D8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe0
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f431d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        mov edx, dword ptr [ebp - 1f0h]
        mov dword ptr [ebp - 700h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 700h]
        mov dword ptr [ecx + eax*4 + 2e0h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 2e0h]
        mov dword ptr [ebp - 704h], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 704h]
        ; Exact mapped bytes E8 1A 1B D9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 2e0h]
        mov dword ptr [ebp - 708h], eax
        push 6
        mov ecx, dword ptr [ebp - 708h]
        ; Exact mapped bytes E8 FA 59 DC FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x59
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [ebp - 70ch]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E9 93 FD FF FF: jmp 0x586f412a
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 63 CC 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xcc
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f4h], eax
        mov byte ptr [ebp - 4], 3ah
        cmp dword ptr [ebp - 1f4h], 0
        ; Exact mapped bytes 74 79: je 0x586f4430
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 710h], eax
        push 2
        mov ecx, dword ptr [ebp - 710h]
        ; Exact mapped bytes E8 00 07 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 714h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 718h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 71ch], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 183h
        push edx
        mov eax, dword ptr [ebp - 714h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 718h]
        push edx
        mov eax, dword ptr [ebp - 71ch]
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 B8 78 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x78
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f443a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        mov ecx, dword ptr [ebp - 1f8h]
        mov dword ptr [ebp - 720h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 720h]
        mov dword ptr [edx + 248h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 724h], edx
        push 101h
        mov ecx, dword ptr [ebp - 724h]
        ; Exact mapped bytes E8 38 11 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 81 CB 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xcb
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1fch], eax
        mov byte ptr [ebp - 4], 3bh
        cmp dword ptr [ebp - 1fch], 0
        ; Exact mapped bytes 74 77: je 0x586f4510
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 728h], ecx
        push 3
        mov ecx, dword ptr [ebp - 728h]
        ; Exact mapped bytes E8 1E 06 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 72ch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 730h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 734h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 18h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 226h
        push eax
        mov ecx, dword ptr [ebp - 72ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 730h]
        push eax
        mov ecx, dword ptr [ebp - 734h]
        push ecx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 D8 77 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x77
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f451a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 200h], 0
        mov edx, dword ptr [ebp - 200h]
        mov dword ptr [ebp - 738h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 738h]
        mov dword ptr [eax + 24ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 73ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 73ch]
        ; Exact mapped bytes E8 58 10 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 A1 CA 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xca
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 204h], eax
        mov byte ptr [ebp - 4], 3ch
        cmp dword ptr [ebp - 204h], 0
        ; Exact mapped bytes 74 78: je 0x586f45f1
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 740h], edx
        push 1
        mov ecx, dword ptr [ebp - 740h]
        ; Exact mapped bytes E8 3E 05 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 744h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 748h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 74ch], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 280h
        push ecx
        mov edx, dword ptr [ebp - 744h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 748h]
        push ecx
        mov edx, dword ptr [ebp - 74ch]
        push edx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 F7 76 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x76
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f45fb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 208h], 0
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [ebp - 750h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 750h]
        mov dword ptr [ecx + 250h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 250h]
        mov dword ptr [ebp - 754h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 754h]
        ; Exact mapped bytes E8 77 0F 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 35ch], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 368h], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x586f4665
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 3
        ; Exact mapped bytes 7D 24: jge 0x586f468f
        __asm _emit 0x7d
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 0f8h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 104h], 0
        ; Exact mapped bytes EB CD: jmp 0x586f465c
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 36ch], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EA 18 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x18
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
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
