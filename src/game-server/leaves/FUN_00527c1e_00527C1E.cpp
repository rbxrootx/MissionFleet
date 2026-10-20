// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527C1E .. +0x431 bytes.
extern "C" __declspec(naked) void FUN_00527c1e_00527C1E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x527c44
        __asm _emit 0x7d
        __asm _emit 0x14
        push 230h
        push 5c8e54h
        ; Exact mapped bytes E8 C1 CD 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527c44
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x527c2a
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 7E 14: jle 0x527c64
        __asm _emit 0x7e
        __asm _emit 0x14
        push 231h
        push 5c8e54h
        ; Exact mapped bytes E8 A1 CD 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527c64
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x527c4a
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes FF 15 1C 27 5E 00: call dword ptr [0x5e271c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x527c7b
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CB 03 00 00: jmp 0x528046
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F0 50 FD FF: call 0x4fcd70
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 60h]
        cmp dword ptr [edx + 44h], 0
        ; Exact mapped bytes 74 14: je 0x527c9d
        __asm _emit 0x74
        __asm _emit 0x14
        push 239h
        push 5c8e54h
        ; Exact mapped bytes E8 68 CD 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527c9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x527c80
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 8
        ; Exact mapped bytes E8 8C E1 00 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 8
        ; Exact mapped bytes E8 94 E1 00 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1D 4E 01 00: call 0x53cae4
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 07 4E 01 00: call 0x53cad3
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 74 14: je 0x527ce5
        __asm _emit 0x74
        __asm _emit 0x14
        push 241h
        push 5c8e54h
        ; Exact mapped bytes E8 20 CD 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527ce5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x527cc7
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 21 47 01 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 08: je 0x527d01
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 13 47 01 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        add edx, 8
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 3ch]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 15 03 00 00: call 0x52804f
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 14h]
        sub edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 11: je 0x527d63
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        push 0
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 D5 4A 01 00: call 0x53c833
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x527d6e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C2 45 01 00: call 0x53c32d
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 25ah
        push 5c8e54h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 DF 33 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x33
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 C8 DF 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 5ch]
        push ecx
        ; Exact mapped bytes FF 15 6C 25 5E 00: call dword ptr [0x5e256c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x527db8
        __asm _emit 0x75
        __asm _emit 0x14
        push 263h
        push 5c8e54h
        ; Exact mapped bytes E8 4D CC 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527db8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x527d90
        __asm _emit 0x75
        __asm _emit 0xd2
        ; Exact mapped bytes E8 10 4D 01 00: call 0x53cad3
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 05: je 0x527dcd
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 FB 01 00 00: jmp 0x527fc8
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 202h
        ; Exact mapped bytes 77 24: ja 0x527e00
        __asm _emit 0x77
        __asm _emit 0x24
        cmp dword ptr [ebp - 64h], 202h
        ; Exact mapped bytes 74 2D: je 0x527e12
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp - 64h], 100h
        ; Exact mapped bytes 0F 84 66 01 00 00: je 0x527f58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 64h], 200h
        ; Exact mapped bytes 74 17: je 0x527e12
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x527fb9
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 64h], 204h
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x527f60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x527fb9
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 8
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 0C: je 0x527e41
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BF 4D B0: movsx ecx, word ptr [ebp - 0x50]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xb0
        sub ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 16: je 0x527e5d
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 50h]
        shr eax, 10h
        and eax, 0ffffh
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        sub ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 1E: jne 0x527e81
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [edx + 10h], ecx
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [edx + 14h], ecx
        mov eax, dword ptr [ebp - 60h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        xor ecx, ecx
        cmp dword ptr [ebp - 58h], 202h
        sete cl
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [edx + 44h], ecx
        mov eax, dword ptr [ebp - 60h]
        add eax, 8
        push eax
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 C3 E1 00 00: call 0x53607b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x527ec5
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 60h]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 49: je 0x527f0e
        __asm _emit 0x74
        __asm _emit 0x49
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 24: je 0x527eef
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [edx + 40h], 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [ebp - 58h], 202h
        ; Exact mapped bytes 74 07: je 0x527f0e
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 1
        mov eax, dword ptr [ebp - 60h]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 74 05: je 0x527f1c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x528044
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 8
        push ecx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 50 E1 00 00: call 0x53607b
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x527f56
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [edx + 40h], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp - 60h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes EB 6B: jmp 0x527fc3
        __asm _emit 0xeb
        __asm _emit 0x6b
        cmp dword ptr [ebp - 54h], 1bh
        ; Exact mapped bytes 74 02: je 0x527f60
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 63: jmp 0x527fc3
        __asm _emit 0xeb
        __asm _emit 0x63
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 31: je 0x527f97
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [eax + 44h], 1
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 40h], 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp - 60h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 60h]
        add eax, 8
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x528042
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 5ch]
        push eax
        ; Exact mapped bytes FF 15 88 25 5E 00: call dword ptr [0x5e2588]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 C8 FD FF FF: jmp 0x527d90
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 0E: je 0x527fdc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 EB 43 01 00: call 0x53c3c5
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x527fe8
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DD 43 01 00: call 0x53c3c5
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 5C 25 5E 00: call dword ptr [0x5e255c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 9A 4D FD FF: call 0x4fcd8f
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 1D: jne 0x528018
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 60h]
        add eax, 8
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [eax + 44h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 40h], 0
        mov edx, dword ptr [ebp - 60h]
        add edx, 8
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 40 E0 00 00: call 0x53607b
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        ; Exact mapped bytes EB 04: jmp 0x528046
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 84: jmp 0x527fc8
        __asm _emit 0xeb
        __asm _emit 0x84
        ; Exact mapped bytes EB 82: jmp 0x527fc8
        __asm _emit 0xeb
        __asm _emit 0x82
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
