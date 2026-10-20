// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461DB4 .. +0xAF8 bytes.
extern "C" __declspec(naked) void FUN_00461db4_00461DB4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f7d5h
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
        sub esp, 0dch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 58h], eax
        push 101h
        push 67ca48h
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes E8 6F 84 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 74 0C: je 0x461e03
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 06: je 0x461e03
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x461e0d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004003h
        ; Exact mapped bytes E9 8C 0A 00 00: jmp 0x462899
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 0A: jne 0x461e1f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80070057h
        ; Exact mapped bytes E9 7A 0A 00 00: jmp 0x462899
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [edx + 24h], eax
        mov ecx, dword ptr [ebp + 24h]
        mov dword ptr [ecx], 0
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 58h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 18: je 0x461e72
        __asm _emit 0x74
        __asm _emit 0x18
        lea ecx, [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 58h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x461e82
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 8000ffffh
        ; Exact mapped bytes E9 17 0A 00 00: jmp 0x462899
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 B3 42 12 00: call 0x58613d
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x42
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 14: jne 0x461eab
        __asm _emit 0x75
        __asm _emit 0x14
        push 11fh
        push 67ca48h
        ; Exact mapped bytes E8 9A 6E 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x461eab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x461e91
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4ch], 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 64 BE 0E 00: call 0x54dd33
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xbe
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 3C: jne 0x461f20
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp + 0ch]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x461efc
        __asm _emit 0x74
        __asm _emit 0x0e
        push -1
        push 0
        push 0f106h
        ; Exact mapped bytes E8 2D 4C 09 00: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], 8000ffffh
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 56 43 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x43
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E9 79 09 00 00: jmp 0x462899
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 ED FB FF FF: call 0x461b1d
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 42 09 00 00: je 0x46287a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 5ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x461f58
        __asm _emit 0x75
        __asm _emit 0x14
        push 12fh
        push 67ca48h
        ; Exact mapped bytes E8 ED 6D 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6d
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x461f58
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x461f38
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 A1 2D 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x2d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp + 0ch]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x461f8b
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        push edx
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 6D AC 06 00: call 0x4ccbf8
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 0F 84 13 02 00 00: je 0x4621ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x462028
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 09: je 0x461fe5
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 75 0B: jne 0x461ff0
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 0
        ; Exact mapped bytes EB 18: jmp 0x462008
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        ; Exact mapped bytes E8 21 B6 0E 00: call 0x54d624
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp + 14h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 6B: jne 0x4620a5
        __asm _emit 0x75
        __asm _emit 0x6b
        lea ecx, [ebp - 0ach]
        push ecx
        push 1
        ; Exact mapped bytes FF 15 24 C2 68 00: call dword ptr [0x68c224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 7D 32: jge 0x46208a
        __asm _emit 0x7d
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 0c8h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 7C A8 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 EC 41 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x41
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E9 0F 08 00 00: jmp 0x462899
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        mov eax, dword ptr [ebp - 0ach]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ach]
        push edx
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 45: jmp 0x4620ea
        __asm _emit 0xeb
        __asm _emit 0x45
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 0ch], 1
        ; Exact mapped bytes 72 0A: jb 0x4620ba
        __asm _emit 0x72
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        cmp dword ptr [edx], 18h
        ; Exact mapped bytes 74 30: je 0x4620ea
        __asm _emit 0x74
        __asm _emit 0x30
        mov dword ptr [ebp - 0cch], 80070057h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 1C A8 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 8C 41 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E9 AF 07 00 00: jmp 0x462899
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 4F: je 0x462141
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx], 18h
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 4], 1
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [eax + 8], 1
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx + 0ch], 1
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 94 63 0C 00: call 0x5284bd
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx + 10h], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 9D 63 0C 00: call 0x5284d6
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx + 14h], eax
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 1C: je 0x462166
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ach]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ach]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 0ach], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x462141
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 08: je 0x46217c
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 30: jne 0x4621ac
        __asm _emit 0x75
        __asm _emit 0x30
        mov dword ptr [ebp - 0d0h], 8000ffffh
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 5A A7 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 CA 40 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x40
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E9 ED 06 00 00: jmp 0x462899
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x4621e6
        __asm _emit 0x74
        __asm _emit 0x30
        mov dword ptr [ebp - 0d4h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 20 A7 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 90 40 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E9 B3 06 00 00: jmp 0x462899
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 16 2B 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 84h], edx
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 19: je 0x462223
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 7F F2 0C 00: call 0x531494
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf2
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 C5 A8 06 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x462239
        __asm _emit 0xeb
        __asm _emit 0x16
        lea eax, [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 40 08 07 00: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E8 ED 06 00: call 0x4d1021
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 1C 2B 0C 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x2b
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 1fh
        ; Exact mapped bytes 7E 0D: jle 0x462256
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1fh
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 7D AF 06 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        push 14h
        push 0
        lea ecx, [ebp - 0a4h]
        push ecx
        ; Exact mapped bytes E8 5A 36 00 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0a4h], 14h
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 2C 2B 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x2b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 7B 2A 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 F4 2A 0C 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x2a
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x4622c9
        __asm _emit 0x74
        __asm _emit 0x2d
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        add ecx, eax
        push ecx
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 3B A9 06 00: call 0x4ccbf8
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], 0f040h
        ; Exact mapped bytes EB 39: jmp 0x462302
        __asm _emit 0xeb
        __asm _emit 0x39
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 D9 2A 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 9ch], eax
        push 104h
        push 104h
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 AF AD 06 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xad
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 B8 2A 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x2a
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 87 CD 07 00: call 0x4df07f
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xcd
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], 0f049h
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 45 39 08 00: call 0x4e5c4f
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x39
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 27 3B 08 00: call 0x4e5e47
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], 1
        lea edx, [ebp - 50h]
        push edx
        lea eax, [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 47 F8 FF FF: call 0x461b82
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push 5854a0h
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 38 45 0D 00: call 0x536880
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x45
        __asm _emit 0x0d
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 21 F8 0C 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf8
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 43 45 07 00: call 0x4d6899
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x45
        __asm _emit 0x07
        __asm _emit 0x00
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 A6 29 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x29
        __asm _emit 0x0c
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        lea edx, [ebp - 0a4h]
        push edx
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 43 44 0D 00: call 0x5367b7
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x46241b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 EC F7 0C 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0E 45 07 00: call 0x4d6899
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x45
        __asm _emit 0x07
        __asm _emit 0x00
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 06 F8 FF FF: call 0x461ba5
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 56 3B 08 00: call 0x4e5efd
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        push -1
        push 0
        push 0f106h
        ; Exact mapped bytes E8 74 47 09 00: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], 8000ffffh
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 1E A5 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 9D 3B 08 00: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 06 A5 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 F7 A4 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 EB A4 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 5B 3E 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3e
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E9 7E 04 00 00: jmp 0x462899
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 B3 60 0C 00: call 0x5284d6
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 8F 60 0C 00: call 0x5284bd
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 52 60 0C 00: call 0x52848b
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes 73 0B: jae 0x462449
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 45 60 0C 00: call 0x52848b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 53 60 0C 00: call 0x5284a4
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes 76 0B: jbe 0x462461
        __asm _emit 0x76
        __asm _emit 0x0b
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 46 60 0C 00: call 0x5284a4
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 22 60 0C 00: call 0x52848b
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 73 0B: jae 0x462479
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 15 60 0C 00: call 0x52848b
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 23 60 0C 00: call 0x5284a4
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 76 0B: jbe 0x462491
        __asm _emit 0x76
        __asm _emit 0x0b
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 16 60 0C 00: call 0x5284a4
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 7ch]
        cmp eax, dword ptr [ebp - 74h]
        sbb ecx, ecx
        and ecx, 0fffffffeh
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        cmp dword ptr [ebp - 7ch], 0ffffh
        ; Exact mapped bytes 75 0C: jne 0x4624ba
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0e8h], 0ffffh
        ; Exact mapped bytes EB 0F: jmp 0x4624c9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 7ch]
        add edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0e8h], edx
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 7ch], eax
        push 0f043h
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 9E 77 07 00: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4624fa
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c3h
        push 67ca48h
        ; Exact mapped bytes E8 4B 68 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4624fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4624d2
        __asm _emit 0x75
        __asm _emit 0xd2
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 0C: jmp 0x462522
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 0F 84 EF 01 00 00: je 0x46271d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        xor edx, edx
        mov ecx, 2
        div ecx
        cmp edx, 1
        ; Exact mapped bytes 75 0D: jne 0x46254c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 02: jne 0x46254c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB CA: jmp 0x462516
        __asm _emit 0xeb
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 3ch]
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 0D: jne 0x462569
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 02: jne 0x462569
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB AD: jmp 0x462516
        __asm _emit 0xeb
        __asm _emit 0xad
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x462602
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 0F 86 80 00 00 00: jbe 0x462602
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], 0
        mov dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4625a7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0c0h]
        add eax, 1
        mov dword ptr [ebp - 0c0h], eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0c0h]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 73 3D: jae 0x4625f4
        __asm _emit 0x73
        __asm _emit 0x3d
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 75 34: jne 0x4625f4
        __asm _emit 0x75
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [edx + eax*8 + 10h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 7F 1E: jg 0x4625f2
        __asm _emit 0x7f
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [eax + ecx*8 + 14h]
        cmp edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 7C 0A: jl 0x4625f2
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 1
        ; Exact mapped bytes EB A4: jmp 0x462598
        __asm _emit 0xeb
        __asm _emit 0xa4
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 75 05: jne 0x462602
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 14 FF FF FF: jmp 0x462516
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 26 F5 FF FF: call 0x461b3c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 05: jne 0x462621
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x46271d
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 49 18 0D 00: call 0x533e74
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x18
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        push 8
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 3E 18 0D 00: call 0x533e74
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x18
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        push 0
        push 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 12 FE 0C 00: call 0x532455
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0x0c
        __asm _emit 0x00
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 4E 21 0D 00: call 0x53479d
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x21
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 A7 41 0D 00: call 0x5367fe
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x41
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x462667
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 70h], 1
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x46271d
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 18 6E 68 00 00: cmp dword ptr [0x686e18], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x462684
        __asm _emit 0x74
        __asm _emit 0x14
        lea ecx, [ebp - 50h]
        push ecx
        lea edx, [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 B8 F4 FF FF: call 0x461b3c
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 14: jne 0x46269e
        __asm _emit 0x75
        __asm _emit 0x14
        push 1fch
        push 67ca48h
        ; Exact mapped bytes E8 A7 66 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x66
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x46269e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x462684
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 5ch], 0
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 1C: je 0x4626cd
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 1ch]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov dword ptr [ebp - 5ch], eax
        lea ecx, [ebp - 50h]
        push ecx
        lea edx, [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 7E F4 FF FF: call 0x461b5f
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 56 41 0D 00: call 0x53683f
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x41
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x462702
        __asm _emit 0x7c
        __asm _emit 0x15
        push 0
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 A8 2D 12 00: call 0x5854a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2d
        __asm _emit 0x12
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x462702
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 09: je 0x46270b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 70h], 1
        ; Exact mapped bytes EB 12: jmp 0x46271d
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 24h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp + 24h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 F9 FD FF FF: jmp 0x462516
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 75 0A: jne 0x46272d
        __asm _emit 0x75
        __asm _emit 0x0a
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 DD 41 0D 00: call 0x536908
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x41
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x462735
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 92 41 0D 00: call 0x5368c7
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x41
        __asm _emit 0x0d
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 34 F4 0C 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 56 41 07 00: call 0x4d6899
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        lea edx, [ebp - 50h]
        push edx
        lea eax, [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 4E F4 FF FF: call 0x461ba5
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 9E 37 08 00: call 0x4e5efd
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x462838
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 66: je 0x4627d5
        __asm _emit 0x74
        __asm _emit 0x66
        mov dword ptr [ebp - 0dch], 80040160h
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 64 A1 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 E3 37 08 00: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 4C A1 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 3D A1 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 31 A1 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 A1 3A 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3a
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x462899
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], 8000ffffh
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 FE A0 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 7D 37 08 00: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 E6 A0 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 D7 A0 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 CB A0 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 3B 3A 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x3a
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes EB 61: jmp 0x462899
        __asm _emit 0xeb
        __asm _emit 0x61
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 A5 A0 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 24 37 08 00: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 8D A0 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 7E A0 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 72 A0 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 D8 39 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x39
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e4h]
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
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
