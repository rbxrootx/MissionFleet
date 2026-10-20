// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587683E0 .. +0xC2D bytes.
extern "C" __declspec(naked) void FUN_587683e0_587683E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 15ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 E5 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe5
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 09: jne 0x58768405
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x5876840c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 40000000h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5eech], 50000h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ed8h], 55555555h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 4B D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x4b
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58768455
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 12h
        ; Exact mapped bytes EB 07: jmp 0x5876845c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 96 3A D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x3a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov cl, byte ptr [ebp - 14h]
        mov byte ptr [eax + 5], cl
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 82 3A D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3a
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 5]
        imul eax, edx, 64h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ebch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 40 00 00: call 0x5876c4f0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5f2ch], 0
        ; Exact mapped bytes 74 1B: je 0x587684c9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f2ch]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0C C6 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc6
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587684d0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 84 E7 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5eb8h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 46 73 D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x73
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f34h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 40 70 D3 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x70
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 BA D9 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd9
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f30h]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 88 C5 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 09 E7 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe7
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12cch]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5eb8h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 CB 72 D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x72
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C5 6F D3 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12d0h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f30h]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 23 C5 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 B4 79 D9 FF: call 0x584fff70
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x79
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12d0h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5eb8h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 26 79 D9 FF: call 0x584fff00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x79
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587685ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 E5 C3 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc3
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx edx, cx
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x587686ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5f38h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5f2ch], 0
        ; Exact mapped bytes 74 20: je 0x5876864b
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5f2ch]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 8A C4 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc4
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58768652
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 02 E6 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe6
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 5f38h]
        mov dword ptr [ebp - 68h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 68 D8 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 5f38h]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5eb8h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 A6 71 D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 5f38h]
        mov dword ptr [ebp - 70h], eax
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 9C 6E D3 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x6e
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2A FF FF FF: jmp 0x587685e4
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C 98 FF FF: call 0x58761f40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 A7 E6 FF: call 0x585d2e30
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa7
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 48 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 8A E8 FF: call 0x585f11d0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 A7 E6 FF: call 0x585d2e30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa7
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 48 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 8A E8 FF: call 0x585f11d0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 80 00 00: call 0x587707c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ebch]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 CF 6F E1 FF: call 0x5857f730
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 90h], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 D2 6F D4 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6f
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 D6 37 DF FF: call 0x5855bf60
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x37
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5876879d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 84 9E 01 00 00: je 0x58768945
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 9C 48 D2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x5876886a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 240h]
        mov dword ptr [ebp - 0a8h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 98h], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 0E 48 D2 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 E3 47 D2 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x47
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 3E E6 DF FF: call 0x58566e90
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 240h]
        ; Exact mapped bytes E8 EC B9 DF FF: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb9
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x58768940
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 0ach], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 D8 47 D2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x47
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 66: jne 0x587688f6
        __asm _emit 0x75
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2c0h]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 0b0h], ecx
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 4D 47 D2 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x47
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 FF 21 E0 FF: call 0x5856aae0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x21
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2c0h]
        ; Exact mapped bytes E8 5D B9 DF FF: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb9
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4A: jmp 0x58768940
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 0bch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 4C 47 D2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 0dh
        ; Exact mapped bytes 75 24: jne 0x58768940
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        movzx eax, byte ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 31 B7 FE FF: call 0x58754070
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4F FE FF FF: jmp 0x58768794
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 DD B6 FE FF: call 0x58754030
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 4F C7 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc7
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 129ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 D8 6D D4 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x6d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 129ch], eax
        ; Exact mapped bytes 76 13: jbe 0x58768996
        __asm _emit 0x76
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 BF 6D D4 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x6d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 0C: jmp 0x587689a2
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 129ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 129ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 129ch]
        xor edx, 55555555h
        mov dword ptr [ebp - 24h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + eax + 12a0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx + ecx + 12a0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 12a0h]
        xor ecx, 55555555h
        imul edx, ecx, 64h
        mov dword ptr [ebp - 0c4h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 D7 06 00 00: call 0x587690f0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 129ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 57 FF FF: call 0x5875e1b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12ach], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12b0h]
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 F7 6C D4 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 129ch]
        mov dword ptr [ebp - 0cch], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 64 BF D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xbf
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov dword ptr [ebp - 0d0h], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 C5 BF D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbf
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 0d4h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 71 50 F0 FF: call 0x5866db40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x50
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12b0h]
        mov dword ptr [ebp - 0dch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 A5 D4 D1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd4
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12b0h]
        mov dword ptr [ebp - 0e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 D9 D3 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd3
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12b0h]
        mov dword ptr [ebp - 0e4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 129ch]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 95 53 F0 FF: call 0x5866dec0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e7ch]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 2D 5B D5 FF: call 0x584be680
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x5b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e7ch]
        mov dword ptr [ebp - 0ech], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 21 D4 D1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd4
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e7ch]
        mov dword ptr [ebp - 0f0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 25 62 D5 FF: call 0x584bedb0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x62
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5e80h]
        mov dword ptr [ebp - 0f4h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 CD 5A D5 FF: call 0x584be680
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x5a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e80h]
        mov dword ptr [ebp - 0f8h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 C1 D3 D1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd3
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5e80h]
        mov dword ptr [ebp - 0fch], edx
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 C5 61 D5 FF: call 0x584bedb0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x61
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 73: je 0x58768c65
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e7ch]
        mov dword ptr [ebp - 100h], ecx
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 A2 61 D5 FF: call 0x584bedb0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x61
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e7ch]
        mov dword ptr [ebp - 104h], eax
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 36 60 D5 FF: call 0x584bec60
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x60
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5e80h]
        mov dword ptr [ebp - 108h], edx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 6A 61 D5 FF: call 0x584bedb0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x61
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e80h]
        mov dword ptr [ebp - 10ch], ecx
        push 2
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 FE 5F D5 FF: call 0x584bec60
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5f
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x58768c8e
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10c0h], 0
        ; Exact mapped bytes 74 1D: je 0x58768c8e
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e7ch]
        mov dword ptr [ebp - 110h], ecx
        push 1
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 D3 5F D5 FF: call 0x584bec60
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x5f
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x58768d7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 7F DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x7f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        push 1
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 1A B7 DE FF: call 0x585543d0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb7
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 7F DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 BC B3 DE FF: call 0x58554090
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb3
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 7F DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x7f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 4E 92 DE FF: call 0x58551f40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x92
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 7E DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x7e
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AC 80 DE FF: call 0x58550db0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x80
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 CB D2 FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xcb
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        push 588b5258h
        ; Exact mapped bytes E8 D1 92 DB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x92
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 56 69 E2 FF: call 0x5858f690
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x69
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 33 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x33
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 DC D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xdc
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 128h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 C1 E7 FF: call 0x585e4ec0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc1
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 08 00 00: call 0x58769590
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 D2 01 00 00: je 0x58768f57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 62 F1 FF: call 0x5867f060
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x62
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 8C FF FF: call 0x58761a00
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB E3 D6 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 F7 C2 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc2
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov edx, dword ptr [ebp - 130h]
        push edx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 3F AC F7 FF: call 0x586e3a10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 E3 D6 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 12a0h]
        xor eax, 55555555h
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 ED AE F7 FF: call 0x586e3d00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 9F 30 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x30
        __asm _emit 0xd2
        __asm _emit 0xff
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 140h], eax
        mov edx, dword ptr [ebp - 140h]
        push edx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 64 F1 FF: call 0x5867f260
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x64
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 7D DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7d
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD B2 DE FF: call 0x58554100
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb2
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 E2 D6 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 DB D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xdb
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA 35 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x35
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 84 E5 FF: call 0x585c1290
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 DB D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xdb
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AB 35 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x35
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 68 D4 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 DB D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xdb
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8C 35 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x35
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 C1 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc1
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 1F A6 F7 FF: call 0x586e3500
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 DA D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xda
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4C 35 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x35
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 BA D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xba
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 27: jne 0x58768f32
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA CA D2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 78 F2 FF: call 0x58690730
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x78
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 CA D2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 91 F2 FF: call 0x58692060
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x91
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 25: jmp 0x58768f57
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 CA D2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1C B8 F1 FF: call 0x58684760
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 CA D2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1A CF F1 FF: call 0x58685e70
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xcf
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 1D E6 FF: call 0x585cac90
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 154h], ecx
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 4E 31 00 00: call 0x5876c0d0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e84h]
        mov dword ptr [ebp - 158h], eax
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 22 E5 E7 FF: call 0x585e74c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xe5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 23ch]
        mov dword ptr [ebp - 15ch], edx
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 26 4E 00 00: call 0x5876dde0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x58768fcc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 51 FF FF: call 0x5875e120
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 30: jmp 0x58768ffc
        __asm _emit 0xeb
        __asm _emit 0x30
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58768fde
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 18: jge 0x58768ffc
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx + 11f4h]
        ; Exact mapped bytes E8 77 8A DF FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8a
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D9: jmp 0x58768fd5
        __asm _emit 0xeb
        __asm _emit 0xd9
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 21 D6 FF: call 0x584cb180
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
