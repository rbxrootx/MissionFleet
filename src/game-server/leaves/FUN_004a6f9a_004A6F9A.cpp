// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A6F9A .. +0x852 bytes.
extern "C" __declspec(naked) void FUN_004a6f9a_004A6F9A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fd34h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 80h], ecx
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 2ch], 0
        push 22h
        push 5d052ch
        mov eax, dword ptr [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 76 41 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 80004005h
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ecx + 20h]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 75 07: jne 0x4a7007
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CE 07 00 00: jmp 0x4a77d5
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 F8 9E 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 E9 9E 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 38 01 00 00: call dword ptr [edx + 0x138]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x4a7068
        __asm _emit 0x75
        __asm _emit 0x2a
        mov dword ptr [ebp - 60h], 80004005h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 FB 67 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 EC 67 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes E9 6D 07 00 00: jmp 0x4a77d5
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 3A 9F 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9f
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 36 E5 08 00: call 0x5355ac
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        push 0e005h
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 14 4C 07 00: call 0x51bc99
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ecx + 2ch]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 2A: jne 0x4a70c5
        __asm _emit 0x75
        __asm _emit 0x2a
        mov dword ptr [ebp - 64h], 80004005h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 9E 67 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 8F 67 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes E9 10 07 00 00: jmp 0x4a77d5
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 05: je 0x4a70eb
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 9A 06 00 00: jmp 0x4a7785
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4a7110
        __asm _emit 0x74
        __asm _emit 0x11
        push 3eh
        push 5d052ch
        ; Exact mapped bytes E8 F5 D8 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a7110
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4a70eb
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 60 A8 04 00: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 14: je 0x4a7145
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes E9 B0 02 00 00: jmp 0x4a73f5
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 2C 01 00 00: call dword ptr [edx + 0x12c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 2E: jne 0x4a7194
        __asm _emit 0x75
        __asm _emit 0x2e
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 11: jne 0x4a717d
        __asm _emit 0x75
        __asm _emit 0x11
        push 4fh
        push 5d052ch
        ; Exact mapped bytes E8 88 D8 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a717d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4a7166
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        ; Exact mapped bytes E9 F1 05 00 00: jmp 0x4a7785
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9D 5E 09 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x5e
        __asm _emit 0x09
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 74 11: je 0x4a71b2
        __asm _emit 0x74
        __asm _emit 0x11
        push 54h
        push 5d052ch
        ; Exact mapped bytes E8 53 D8 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a71b2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x4a7194
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax + 0c0h], ecx
        mov edx, dword ptr [ebp - 38h]
        add edx, 0c0h
        push edx
        lea eax, [ebp - 4ch]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        add edx, 0d8h
        push edx
        mov eax, dword ptr [ebp - 38h]
        add eax, 0d4h
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 05: je 0x4a7206
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 FC 04 00 00: jmp 0x4a7702
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 75 11: jne 0x4a7223
        __asm _emit 0x75
        __asm _emit 0x11
        push 5fh
        push 5d052ch
        ; Exact mapped bytes E8 E2 D7 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd7
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a7223
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4a7206
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 05: je 0x4a7243
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 BF 04 00 00: jmp 0x4a7702
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 0C 01 00 00: call dword ptr [edx + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4a725a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 7A 04 00 00: jmp 0x4a76d4
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4a728b
        __asm _emit 0x74
        __asm _emit 0x11
        push 6bh
        push 5d052ch
        ; Exact mapped bytes E8 7A D7 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd7
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a728b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x4a725a
        __asm _emit 0x75
        __asm _emit 0xc9
        push 6dh
        push 5d052ch
        push 0c0h
        ; Exact mapped bytes E8 BD 5D 04 00: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 14: je 0x4a72c3
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 C5 D2 0B 00: call 0x564580
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4a72cd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 0dch], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 72 A7 04 00: call 0x4f1a6a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0d8h], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x4a73a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0d8h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d8h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4a7339
        __asm _emit 0x74
        __asm _emit 0x11
        push 72h
        push 5d052ch
        ; Exact mapped bytes E8 CC D6 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a7339
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x4a7308
        __asm _emit 0x75
        __asm _emit 0xc9
        push 73h
        push 5d052ch
        push 0c0h
        ; Exact mapped bytes E8 0F 5D 04 00: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 14: je 0x4a7371
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 17 D2 0B 00: call 0x564580
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4a737b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 0e0h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes E8 C4 A6 04 00: call 0x4f1a6a
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 104h
        ; Exact mapped bytes E8 A8 EC 08 00: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 114h
        ; Exact mapped bytes E8 96 EC 08 00: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0e0h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0dch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 90 FC 00 00 00: call dword ptr [eax + 0xfc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4a73f5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 DF 02 00 00: jmp 0x4a76d4
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x4a7415
        __asm _emit 0x75
        __asm _emit 0x14
        push 81h
        push 5d052ch
        ; Exact mapped bytes E8 F0 D5 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd5
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a7415
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4a73f5
        __asm _emit 0x75
        __asm _emit 0xda
        push 58eab8h
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes E8 09 4C 0A 00: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 74 9B 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 0C: jne 0x4a744b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 3F: jmp 0x4a748a
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 56 23 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], esp
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        ; Exact mapped bytes E8 3C 9B FE FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 74 7F: je 0x4a7538
        __asm _emit 0x74
        __asm _emit 0x7f
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 E9 9A 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 0C: jne 0x4a74d6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 94h], 0
        ; Exact mapped bytes EB 3F: jmp 0x4a7515
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 CB 22 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], esp
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        ; Exact mapped bytes E8 B1 9A FE FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0d8h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0d8h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [eax + 0c0h]
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 74 14: je 0x4a755d
        __asm _emit 0x74
        __asm _emit 0x14
        push 90h
        push 5d052ch
        ; Exact mapped bytes E8 A8 D4 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a755d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a7538
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x4a7583
        __asm _emit 0x75
        __asm _emit 0x14
        push 91h
        push 5d052ch
        ; Exact mapped bytes E8 82 D4 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a7583
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4a7563
        __asm _emit 0x75
        __asm _emit 0xda
        push 1
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0dch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 74 20: je 0x4a75d5
        __asm _emit 0x74
        __asm _emit 0x20
        push 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0e0h]
        push edx
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0A 35 08 00: call 0x52aae9
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 80h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 34 01 00 00: call dword ptr [eax + 0x134]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 74 22: je 0x4a762f
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0d8h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 34 01 00 00: call dword ptr [edx + 0x134]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 100h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d4h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0d4h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        push 5
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C3 7C 04 00: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 07 7E 04 00: call 0x4ef47b
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 98 4D 09 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x4d
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 20 01 00 00: call dword ptr [edx + 0x120]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 0bch], 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 78h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 8F 61 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 80 61 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x4a77d5
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x4a76ee
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b1h
        push 5d052ch
        ; Exact mapped bytes E8 17 D3 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd3
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a76ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a76d4
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 28: call dword ptr [ecx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 74: je 0x4a7785
        __asm _emit 0x74
        __asm _emit 0x74
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 14: jne 0x4a772b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b7h
        push 5d052ch
        ; Exact mapped bytes E8 DA D2 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a772b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a7711
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 30 01 00 00: call dword ptr [edx + 0x130]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ecx + 0c0h], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x4a7773
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bch
        push 5d052ch
        ; Exact mapped bytes E8 92 D2 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a7773
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a7759
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 2C: call dword ptr [ecx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x2c
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x4a779f
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c0h
        push 5d052ch
        ; Exact mapped bytes E8 66 D2 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a779f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4a7785
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 7ch], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 89 60 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 7A 60 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 7ch]
        lea esp, [ebp - 0a4h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
