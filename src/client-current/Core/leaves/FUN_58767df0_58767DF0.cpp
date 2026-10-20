// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58767DF0 .. +0x5A7 bytes.
extern "C" __declspec(naked) void FUN_58767df0_58767DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB EB D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xeb
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 13: jne 0x58767e1d
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 9B E0 FF: call 0x58571930
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x9b
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 73 05 00 00: jne 0x58768390
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5eech], 40000h
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x58767f1c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x58767e51
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58767e51
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 51: je 0x58767eb1
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58767e74
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58767e5a
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 94 D8 D2 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd8
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 7C 02: jl 0x58767e85
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x58767eb1
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C6 D9 D2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd9
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A9: jmp 0x58767e5a
        __asm _emit 0xeb
        __asm _emit 0xa9
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x58767ec9
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 07: ja 0x58767ec9
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 48: je 0x58767f17
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 40: je 0x58767f15
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58767ee9
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58767ecf
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 62 D9 D2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd9
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB BA: jmp 0x58767ecf
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x58767ec9
        __asm _emit 0xeb
        __asm _emit 0xb2
        ; Exact mapped bytes E9 74 04 00 00: jmp 0x58768390
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5eech], 50000h
        ; Exact mapped bytes 0F 85 64 03 00 00: jne 0x58768293
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 CD E6 FF: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x58767f68
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ed4h], 55555554h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ee0h], 55555554h
        ; Exact mapped bytes EB 1A: jmp 0x58767f82
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ed4h], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ee0h], 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ed4h]
        xor edx, 55555555h
        cmp edx, 1
        ; Exact mapped bytes 75 58: jne 0x58767fee
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ee0h]
        xor ecx, 55555555h
        cmp ecx, 1
        ; Exact mapped bytes 75 44: jne 0x58767fee
        __asm _emit 0x75
        __asm _emit 0x44
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C AA FF FF: call 0x58762a30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x58767fd4
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ed4h], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ee0h], 55555555h
        ; Exact mapped bytes EB 1A: jmp 0x58767fee
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ed4h], 55555554h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ee0h], 55555554h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ed4h]
        xor ecx, 55555555h
        cmp ecx, 1
        ; Exact mapped bytes 75 57: jne 0x58768059
        __asm _emit 0x75
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ee0h]
        xor eax, 55555555h
        cmp eax, 1
        ; Exact mapped bytes 75 44: jne 0x58768059
        __asm _emit 0x75
        __asm _emit 0x44
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 A7 FF FF: call 0x587627f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x5876803f
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ed4h], 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ee0h], 55555555h
        ; Exact mapped bytes EB 1A: jmp 0x58768059
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ed4h], 55555554h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ee0h], 55555554h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 4F D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 E9 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3B 4F D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 41: je 0x587680ba
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 3
        ; Exact mapped bytes 7C 32: jl 0x587680ba
        __asm _emit 0x7c
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D E9 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 61 FF FF: call 0x5875e210
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x587680ba
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ed4h], 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ee0h], 55555555h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 BE 01 00 00: je 0x5876828e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x587680e2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 12dch]
        ; Exact mapped bytes 0F 8D B3 00 00 00: jge 0x587681a7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12d8h]
        add ecx, dword ptr [ebp - 14h]
        and ecx, 8000003fh
        ; Exact mapped bytes 79 05: jns 0x5876810d
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0ffffffc0h
        inc ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*8 + 12e0h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        lea eax, [eax + edx - 4]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12d8h]
        add edx, dword ptr [ebp - 14h]
        and edx, 8000003fh
        ; Exact mapped bytes 79 05: jns 0x5876813c
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffc0h
        inc edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*8 + 12e4h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        lea ecx, [ecx + eax - 4]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12c4h]
        mov dword ptr [ebp - 20h], eax
        push 101h
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx*4 + 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8F 26 05 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 32 FF FF FF: jmp 0x587680d9
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x587681c8
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587681c8
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 51: je 0x58768228
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587681eb
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB E6: jmp 0x587681d1
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1D D5 D2 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd5
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 7C 02: jl 0x587681fc
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x58768228
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4F D6 D2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB A9: jmp 0x587681d1
        __asm _emit 0xeb
        __asm _emit 0xa9
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x58768240
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 07: ja 0x58768240
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 48: je 0x5876828e
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 40: je 0x5876828c
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58768260
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB E6: jmp 0x58768246
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EB D5 D2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd5
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB BA: jmp 0x58768246
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x58768240
        __asm _emit 0xeb
        __asm _emit 0xb2
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x58768390
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x58768390
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x587682ca
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587682ca
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 51: je 0x5876832a
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587682ed
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x587682d3
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1B D4 D2 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xd4
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 7C 02: jl 0x587682fe
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x5876832a
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4D D5 D2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd5
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB A9: jmp 0x587682d3
        __asm _emit 0xeb
        __asm _emit 0xa9
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x58768342
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 07: ja 0x58768342
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 48: je 0x58768390
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 40: je 0x5876838e
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58768362
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x58768348
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E9 D4 D2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB BA: jmp 0x58768348
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x58768342
        __asm _emit 0xeb
        __asm _emit 0xb2
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
