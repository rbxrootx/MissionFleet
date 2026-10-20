// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CFE51 .. +0x40E bytes.
extern "C" __declspec(naked) void FUN_004cfe51_004CFE51() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov ecx, 686d24h
        ; Exact mapped bytes E8 CC D7 06 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd7
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 74 1E: je 0x4cfe8b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes FF 15 14 BF 68 00: call dword ptr [0x68bf14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 CB 03 00 00: jmp 0x4d0256
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4cfea5
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e6h
        push 671a64h
        ; Exact mapped bytes E8 A0 8E 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cfea5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4cfe8b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4cfecd
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e8h
        push 671a64h
        ; Exact mapped bytes E8 78 8E 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cfecd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4cfeb3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 82 07 07 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 14h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4cff0d
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20h]
        and ecx, 40000000h
        test ecx, ecx
        ; Exact mapped bytes 0F 85 11 03 00 00: jne 0x4d0214
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 85 07 03 00 00: jne 0x4d0214
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 1C 6E 68 00 00: cmp dword ptr [0x686e1c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 74: je 0x4cff8a
        __asm _emit 0x74
        __asm _emit 0x74
        push -1ah
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 18 BF 68 00: call dword ptr [0x68bf18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 10000h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4cff30
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 24 03 00 00: jmp 0x4d0254
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 28h]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x4cff54
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 28h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 1E: jmp 0x4cff72
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov byte ptr [ebp - 28h], 0
        push 5
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 28: mov ax, word ptr [edx + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x28
        push eax
        ; Exact mapped bytes FF 15 E8 B9 68 00: call dword ptr [0x68b9e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        mov dword ptr [ebp - 20h], ecx
        push 671ba8h
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4cff8a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C8 02 00 00: jmp 0x4d0252
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4cffa4
        __asm _emit 0x75
        __asm _emit 0x14
        push 208h
        push 671a64h
        ; Exact mapped bytes E8 A1 8D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cffa4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4cff8a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 93 01 00 00: je 0x4d014d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 71 F9 FF FF: call 0x4cf934
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4cffdb
        __asm _emit 0x74
        __asm _emit 0x14
        push 212h
        push 671a64h
        ; Exact mapped bytes E8 6A 8D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cffdb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4cffba
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AD F9 FF FF: call 0x4cf99a
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x4d0023
        __asm _emit 0x75
        __asm _emit 0x14
        push 21ah
        push 671a64h
        ; Exact mapped bytes E8 22 8D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0023
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d0009
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x4d00f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x4d00f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 686da8h
        ; Exact mapped bytes E8 56 D6 06 00: call 0x53d6a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x4d00f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x4d00f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 36fh
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 32 F5 FF FF: call 0x4cf5ac
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 70: je 0x4d00f3
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes E8 B6 FA FF FF: call 0x4cfb3e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push -4
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        xor edx, edx
        cmp eax, dword ptr [ebp - 3ch]
        sete dl
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 3B: jne 0x4d00f1
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 3ch]
        push eax
        push -4
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4d00e3
        __asm _emit 0x75
        __asm _emit 0x14
        push 231h
        push 671a64h
        ; Exact mapped bytes E8 62 8C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d00e3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4d00c9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 4B: jmp 0x4d013e
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes E8 46 FA FF FF: call 0x4cfb3e
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        push -4
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4d0128
        __asm _emit 0x75
        __asm _emit 0x14
        push 23ch
        push 671a64h
        ; Exact mapped bytes E8 1D 8C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0128
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d010e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 74 08: je 0x4d013e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], 0
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x4d0214
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4d0167
        __asm _emit 0x74
        __asm _emit 0x14
        push 244h
        push 671a64h
        ; Exact mapped bytes E8 DE 8B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0167
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d014d
        __asm _emit 0x75
        __asm _emit 0xe0
        push -4
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x4d0214
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 634d60h
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 3C BF 68 00: call dword ptr [0x68bf3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7B: jne 0x4d0214
        __asm _emit 0x75
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 634d60h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 1C BF 68 00: call dword ptr [0x68bf1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 634d60h
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 3C BF 68 00: call dword ptr [0x68bf3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 54: jne 0x4d0214
        __asm _emit 0x75
        __asm _emit 0x54
        push 634d60h
        ; Exact mapped bytes FF 15 EC B9 68 00: call dword ptr [0x68b9ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 09: je 0x4d01dd
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 4cfdbeh
        ; Exact mapped bytes EB 07: jmp 0x4d01e4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 4cfb48h
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        push -4
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4d020e
        __asm _emit 0x75
        __asm _emit 0x14
        push 251h
        push 671a64h
        ; Exact mapped bytes E8 37 8B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d020e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d01f4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        ; Exact mapped bytes FF 15 14 BF 68 00: call dword ptr [0x68bf14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x4d024d
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes FF 15 20 BF 68 00: call dword ptr [0x68bf20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes EB 04: jmp 0x4d0256
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB C0: jmp 0x4d0214
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes EB BE: jmp 0x4d0214
        __asm _emit 0xeb
        __asm _emit 0xbe
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
