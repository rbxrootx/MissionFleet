// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DBEE0 .. +0x6BE bytes.
extern "C" __declspec(naked) void FUN_100dbee0_100DBEE0() {
    __asm {
        push -1
        push 101736ceh
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
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebp
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 0B C2 F5 FF: call 0x10038130
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xff
        xor ebx, ebx
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 198h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 101764a8h
        ; Exact mapped bytes E8 55 08 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 0F: je 0x100dbf6a
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101ac318h
        mov ecx, eax
        ; Exact mapped bytes E8 58 3B 02 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100dbf6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 26 08 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 54: je 0x100dbfe0
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 0ah
        ; Exact mapped bytes 7E 12: jle 0x100dbfaa
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100dbfaa
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 280h]
        ; Exact mapped bytes EB 02: jmp 0x100dbfac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EE 29 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        push ebp
        mov ecx, edi
        mov byte ptr [esp + 20h], 3
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes E8 68 9B F3 FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100dbfe2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 64h], ecx
        ; Exact mapped bytes E8 6D 31 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E8 9A 07 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 56: je 0x100dc06c
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100dc02f
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 04: je 0x100dc02f
        __asm _emit 0x74
        __asm _emit 0x04
        mov edx, ecx
        ; Exact mapped bytes EB 02: jmp 0x100dc031
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x100dc04f
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100dc04f
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100dc051
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 28h]
        push 40h
        push ebp
        push edi
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 56 B2 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb2
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100dc06e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 21 07 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 58: je 0x100dc0e7
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100dc0aa
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100dc0aa
        __asm _emit 0x74
        __asm _emit 0x05
        lea edi, [ecx + 40h]
        ; Exact mapped bytes EB 02: jmp 0x100dc0ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x100dc0ca
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100dc0ca
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100dc0cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 DB B1 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb1
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100dc0e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 A3 06 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 5B: je 0x100dc168
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x100dc12b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100dc12b
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [ecx + 80h]
        ; Exact mapped bytes EB 02: jmp 0x100dc12d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x100dc14b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100dc14b
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100dc14d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 5A B1 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb1
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100dc16a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 22 06 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 5B: je 0x100dc1e9
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x100dc1ac
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100dc1ac
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [ecx + 100h]
        ; Exact mapped bytes EB 02: jmp 0x100dc1ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x100dc1cc
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100dc1cc
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100dc1ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D9 B0 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100dc1eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 A4 05 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 5B: je 0x100dc267
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x100dc22a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100dc22a
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [ecx + 140h]
        ; Exact mapped bytes EB 02: jmp 0x100dc22c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x100dc24a
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100dc24a
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100dc24c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 5B B0 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100dc269
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 26 05 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov edi, 9
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 60: je 0x100dc2ef
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x100dc2ad
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100dc2ad
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [ecx + 180h]
        ; Exact mapped bytes EB 02: jmp 0x100dc2af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x100dc2cd
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100dc2cd
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100dc2cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D8 AF F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xaf
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edi, 9
        ; Exact mapped bytes EB 02: jmp 0x100dc2f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 9E 04 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 60: je 0x100dc372
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100dc330
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100dc330
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [ecx + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x100dc332
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x100dc350
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100dc350
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100dc352
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 55 AF F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xaf
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edi, 9
        ; Exact mapped bytes EB 02: jmp 0x100dc374
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 1B 04 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 60: je 0x100dc3f5
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [esi + 60h]
        cmp dword ptr [edx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x100dc3b3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x100dc3b3
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [edx + 200h]
        ; Exact mapped bytes EB 02: jmp 0x100dc3b5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x100dc3d3
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100dc3d3
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100dc3d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D2 AE F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xae
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edi, 9
        ; Exact mapped bytes EB 02: jmp 0x100dc3f7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 68h]
        mov dword ptr [esi + 78h], eax
        mov ebp, 3
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [edx + 70h], ebx
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [eax + 70h], ebx
        mov ecx, dword ptr [esi + 70h]
        mov dword ptr [ecx + 70h], ebx
        mov edx, dword ptr [esi + 74h]
        mov dword ptr [edx + 70h], ebx
        mov eax, dword ptr [esi + 78h]
        mov dword ptr [eax + 70h], ebx
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [ecx + 70h], ebx
        mov edx, dword ptr [esi + 80h]
        mov dword ptr [edx + 70h], ebx
        mov eax, dword ptr [esi + 84h]
        mov dword ptr [eax + 70h], ebx
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 11: jle 0x100dc455
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100dc455
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x100dc457
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 68h]
        push 1
        push eax
        ; Exact mapped bytes E8 9E B4 F3 FF: call 0x10017900
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb4
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 11: jle 0x100dc47e
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100dc47e
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x100dc480
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        push 1
        push eax
        ; Exact mapped bytes E8 72 B4 F3 FF: call 0x10017900
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb4
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 11: jle 0x100dc4aa
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100dc4aa
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x100dc4ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        push 1
        push eax
        ; Exact mapped bytes E8 46 B4 F3 FF: call 0x10017900
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb4
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x100dc4d6
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100dc4d6
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x100dc4d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 6ch]
        push 1
        push eax
        ; Exact mapped bytes E8 1D B4 F3 FF: call 0x10017900
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb4
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x100dc4ff
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100dc4ff
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x100dc501
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 70h]
        push 1
        push eax
        ; Exact mapped bytes E8 F4 B3 F3 FF: call 0x10017900
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x100dc528
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100dc528
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x100dc52a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 74h]
        push 1
        push eax
        ; Exact mapped bytes E8 CB B3 F3 FF: call 0x10017900
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x100dc551
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100dc551
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x100dc553
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 78h]
        push 1
        push eax
        ; Exact mapped bytes E8 A2 B3 F3 FF: call 0x10017900
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x100dc57a
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100dc57a
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x100dc57c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 7ch]
        push 1
        push eax
        ; Exact mapped bytes E8 79 B3 F3 FF: call 0x10017900
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
