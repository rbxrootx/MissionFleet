// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B6CA .. +0x96D bytes.
extern "C" __declspec(naked) void FUN_0056b6ca_0056B6CA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fe9ch
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
        sub esp, 88h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 84h], ecx
        push 412h
        push 5d053ch
        mov eax, dword ptr [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 59 FA F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfa
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 84h]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 07: jne 0x56b740
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E0 08 00 00: jmp 0x56c020
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 84h]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 51: je 0x56b7a0
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [eax + 0c0h]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 28: je 0x56b78c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 0ach]
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx + 0ach]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov eax, 1
        ; Exact mapped bytes E9 94 08 00 00: jmp 0x56c020
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 90 10 01 00 00: call dword ptr [eax + 0x110]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 B2 5E FE FF: call 0x55165d
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 39 0F FD FF: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x56b7bd
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 63 08 00 00: jmp 0x56c020
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 42 57 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 33 57 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 90 38 01 00 00: call dword ptr [eax + 0x138]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x56b81e
        __asm _emit 0x75
        __asm _emit 0x2a
        mov dword ptr [ebp - 64h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 45 20 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 36 20 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes E9 02 08 00 00: jmp 0x56c020
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 84 57 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 80 9D FC FF: call 0x5355ac
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 0e005h
        lea ecx, [ebp - 5ch]
        push ecx
        ; Exact mapped bytes E8 5E 04 FB FF: call 0x51bc99
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0xfb
        __asm _emit 0xff
        push 58e430h
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 0ach]
        push eax
        ; Exact mapped bytes E8 34 06 FE FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 2A: jne 0x56b885
        __asm _emit 0x75
        __asm _emit 0x2a
        mov dword ptr [ebp - 68h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 DE 1F F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 CF 1F F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes E9 9B 07 00 00: jmp 0x56c020
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x56b89a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 35 07 00 00: jmp 0x56bfcf
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x56b8af
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 20 07 00 00: jmp 0x56bfcf
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56b8d7
        __asm _emit 0x74
        __asm _emit 0x14
        push 444h
        push 5d053ch
        ; Exact mapped bytes E8 2E 91 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b8d7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x56b8af
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 99 60 F8 FF: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 90 2C 01 00 00: call dword ptr [eax + 0x12c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 31: jne 0x56b93b
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x56b924
        __asm _emit 0x75
        __asm _emit 0x14
        push 44dh
        push 5d053ch
        ; Exact mapped bytes E8 E1 90 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b924
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x56b90a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        ; Exact mapped bytes E9 94 06 00 00: jmp 0x56bfcf
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 F6 16 FD FF: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 74 14: je 0x56b95c
        __asm _emit 0x74
        __asm _emit 0x14
        push 451h
        push 5d053ch
        ; Exact mapped bytes E8 A9 90 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b95c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x56b93b
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + 0c0h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x56b986
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C6 05 00 00: jmp 0x56bf4c
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        add edx, 0c0h
        push edx
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        add edx, 0d8h
        push edx
        mov eax, dword ptr [ebp - 58h]
        add eax, 0d4h
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x56b9c0
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 5E 05 00 00: jmp 0x56bf1e
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x56b9e0
        __asm _emit 0x75
        __asm _emit 0x14
        push 460h
        push 5d053ch
        ; Exact mapped bytes E8 25 90 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b9e0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x56b9c0
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 58h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 92 0C 01 00 00: call dword ptr [edx + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x56b9fd
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 21 05 00 00: jmp 0x56bf1e
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56ba31
        __asm _emit 0x74
        __asm _emit 0x14
        push 467h
        push 5d053ch
        ; Exact mapped bytes E8 D4 8F FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56ba31
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C6: jne 0x56b9fd
        __asm _emit 0x75
        __asm _emit 0xc6
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 23 FC FF FF: call 0x56b663
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 46eh
        push 5d053ch
        push 0c0h
        ; Exact mapped bytes E8 08 16 F8 FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x16
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 14: je 0x56ba78
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 10 8B FF FF: call 0x564580
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x56ba82
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 6ch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [edx + 0dch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 0dch]
        ; Exact mapped bytes E8 BD 5F F8 FF: call 0x4f1a6a
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x56bbaf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 0d8h]
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 0d8h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56baf1
        __asm _emit 0x74
        __asm _emit 0x14
        push 473h
        push 5d053ch
        ; Exact mapped bytes E8 14 8F FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56baf1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C6: jne 0x56babd
        __asm _emit 0x75
        __asm _emit 0xc6
        mov eax, dword ptr [ebp - 60h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 6C: je 0x56bb6b
        __asm _emit 0x74
        __asm _emit 0x6c
        push 476h
        push 5d053ch
        push 0c0h
        ; Exact mapped bytes E8 4C 15 F8 FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 14: je 0x56bb34
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 54 8A FF FF: call 0x564580
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x56bb3e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 74h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [eax + 0e0h], ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 01 5F F8 FF: call 0x4f1a6a
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 44: jmp 0x56bbaf
        __asm _emit 0xeb
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 58h]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 74 25: je 0x56bb9c
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 0d8h]
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 0d8h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [edx + 0d8h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x56bb6b
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ecx + 0d8h], 0
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes FF 15 A4 28 5E 00: call dword ptr [0x5e28a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56bbd1
        __asm _emit 0x74
        __asm _emit 0x14
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 104h
        ; Exact mapped bytes E8 91 A4 FC FF: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x56bbe3
        __asm _emit 0xeb
        __asm _emit 0x12
        lea ecx, [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 104h
        ; Exact mapped bytes E8 7D A4 FC FF: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 114h
        ; Exact mapped bytes E8 6B A4 FC FF: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 0e0h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 0dch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 92 FC 00 00 00: call dword ptr [edx + 0xfc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x56bc20
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FE 02 00 00: jmp 0x56bf1e
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes FF 15 A4 28 5E 00: call dword ptr [0x5e28a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x56bc4c
        __asm _emit 0x74
        __asm _emit 0x1e
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 84h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 92 18 01 00 00: call dword ptr [edx + 0x118]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x56bc68
        __asm _emit 0xeb
        __asm _emit 0x1c
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 90 18 01 00 00: call dword ptr [eax + 0x118]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x56bc88
        __asm _emit 0x75
        __asm _emit 0x14
        push 49ah
        push 5d053ch
        ; Exact mapped bytes E8 7D 8D FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bc88
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x56bc68
        __asm _emit 0x75
        __asm _emit 0xda
        push 58eab8h
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 96 03 FE FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 01 53 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 0C: jne 0x56bcbe
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 90h], 0
        ; Exact mapped bytes EB 3F: jmp 0x56bcfd
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 E3 DA F3 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xda
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], esp
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        ; Exact mapped bytes E8 C9 52 F2 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x52
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 58h]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 74 20: je 0x56bd52
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 0d8h]
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 0d8h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx + 0c0h]
        cmp dword ptr [edx + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x56bd7b
        __asm _emit 0x75
        __asm _emit 0x14
        push 4a4h
        push 5d053ch
        ; Exact mapped bytes E8 8A 8C FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bd7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x56bd52
        __asm _emit 0x75
        __asm _emit 0xd1
        push 1
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx + 0c0h]
        mov eax, dword ptr [edx + 0dch]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [eax + 0c0h]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 74 29: je 0x56bde8
        __asm _emit 0x74
        __asm _emit 0x29
        push 1
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 0c0h]
        mov ecx, dword ptr [eax + 0e0h]
        push ecx
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 90 28 01 00 00: call dword ptr [eax + 0x128]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 84h]
        mov ecx, dword ptr [ecx + 0c0h]
        ; Exact mapped bytes E8 EE EC FB FF: call 0x52aae9
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 0d4h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 92 34 01 00 00: call dword ptr [edx + 0x134]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 74 22: je 0x56be4b
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 0d8h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 84h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 92 34 01 00 00: call dword ptr [edx + 0x134]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 100h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 0d4h]
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 0d4h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [eax + 0ach]
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx + 0ach]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        push 5
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 89 34 F8 FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 CD 35 F8 FF: call 0x4ef47b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 5E 05 FD FF: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 8F A7 FF FF: call 0x566654
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 84h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 92 20 01 00 00: call dword ptr [edx + 0x120]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [eax + 0bch], 1
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 7ch], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 45 19 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 36 19 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x56c020
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x56bf38
        __asm _emit 0x75
        __asm _emit 0x14
        push 4c8h
        push 5d053ch
        ; Exact mapped bytes E8 CD 8A FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bf38
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x56bf1e
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 84h]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 74: je 0x56bfcf
        __asm _emit 0x74
        __asm _emit 0x74
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 14: jne 0x56bf75
        __asm _emit 0x75
        __asm _emit 0x14
        push 4ceh
        push 5d053ch
        ; Exact mapped bytes E8 90 8A FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bf75
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x56bf5b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 90 30 01 00 00: call dword ptr [eax + 0x130]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ecx + 0c0h], 0
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x56bfbd
        __asm _emit 0x75
        __asm _emit 0x14
        push 4d3h
        push 5d053ch
        ; Exact mapped bytes E8 48 8A FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bfbd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x56bfa3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 51 2C: call dword ptr [ecx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x2c
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x56bfe9
        __asm _emit 0x75
        __asm _emit 0x14
        push 4d8h
        push 5d053ch
        ; Exact mapped bytes E8 1C 8A FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bfe9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x56bfcf
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 80h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 3E 18 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x18
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 2F 18 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x18
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 80h]
        lea esp, [ebp - 0a0h]
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
