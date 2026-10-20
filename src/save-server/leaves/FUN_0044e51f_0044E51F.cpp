// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044E51F .. +0x7B6 bytes.
extern "C" __declspec(naked) void FUN_0044e51f_0044E51F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dda1h
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
        mov dword ptr [ebp - 0e8h], ecx
        mov eax, dword ptr [ebp - 0e8h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 14: je 0x44e566
        __asm _emit 0x74
        __asm _emit 0x14
        push 19eh
        push 67702ch
        ; Exact mapped bytes E8 DF A7 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa7
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e566
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x44e546
        __asm _emit 0x75
        __asm _emit 0xda
        push 28h
        lea edx, [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 28 C3 68 00: call dword ptr [0x68c328]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 0e8h]
        add edx, 4ch
        push edx
        push 640cd0h
        push 3
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 DD FB FF FF: call 0x44e179
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 3C: jge 0x44e5e1
        __asm _emit 0x7d
        __asm _emit 0x3c
        lea ecx, [ebp - 70h]
        push ecx
        push 677094h
        ; Exact mapped bytes E8 62 20 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 6770c4h
        ; Exact mapped bytes E8 51 20 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        push 6770e0h
        push 67710ch
        ; Exact mapped bytes E8 3F 20 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 E1 06 00 00: jmp 0x44ecc2
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 0e8h]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 18 0A 00 00: call 0x44f023
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x44e6b7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        add eax, 70h
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 70h]
        and edx, 20000h
        test edx, edx
        ; Exact mapped bytes 74 54: je 0x44e6b7
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 0e8h]
        add eax, 0b8h
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 27: jge 0x44e6b7
        __asm _emit 0x7d
        __asm _emit 0x27
        lea ecx, [ebp - 70h]
        push ecx
        push 677110h
        ; Exact mapped bytes E8 77 1F 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 67713ch
        ; Exact mapped bytes E8 66 1F 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 92 05 00 00: jmp 0x44ec49
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x44e6d7
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x44e6d7
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c8h
        push 67702ch
        ; Exact mapped bytes E8 6E A6 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e6d7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x44e6b7
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x44e7d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x44e7d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        push 640cc0h
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 0F 8C BB 00 00 00: jl 0x44e7d4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 3
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x44e7d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x44e74e
        __asm _emit 0x75
        __asm _emit 0x14
        push 1cfh
        push 67702ch
        ; Exact mapped bytes E8 F7 A5 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e74e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x44e734
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 78h], 0
        lea edx, [ebp - 74h]
        push edx
        lea eax, [ebp - 78h]
        push eax
        push -1
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 74h]
        sub eax, dword ptr [ebp - 78h]
        cmp eax, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 74 14: je 0x44e794
        __asm _emit 0x74
        __asm _emit 0x14
        push 1d6h
        push 67702ch
        ; Exact mapped bytes E8 B1 A5 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e794
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x44e775
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 05: jge 0x44e7cf
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 7A 04 00 00: jmp 0x44ec49
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0C 04 00 00: jmp 0x44ebe0
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x44e8d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        push 640cb0h
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 0F 8C CE 00 00 00: jl 0x44e8d4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x44e820
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e3h
        push 67702ch
        ; Exact mapped bytes E8 25 A5 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e820
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x44e806
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x44e83d
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 59: jmp 0x44e896
        __asm _emit 0xeb
        __asm _emit 0x59
        push 0
        push 1000h
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 53 B2 09 00: call 0x4e9aa8
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 0c0h]
        push ecx
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 62 73 06 00: call 0x4b5bd0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        lea edx, [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 60 B4 09 00: call 0x4e9cf6
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 27: jge 0x44e8cf
        __asm _emit 0x7d
        __asm _emit 0x27
        lea eax, [ebp - 70h]
        push eax
        push 677158h
        ; Exact mapped bytes E8 5F 1D 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 677184h
        ; Exact mapped bytes E8 4E 1D 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 7A 03 00 00: jmp 0x44ec49
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0C 03 00 00: jmp 0x44ebe0
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 1ch]
        push edx
        push 640ca0h
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 0F 8C C0 02 00 00: jl 0x44ebbc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x44e916
        __asm _emit 0x75
        __asm _emit 0x14
        push 1feh
        push 67702ch
        ; Exact mapped bytes E8 2F A4 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e916
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x44e8fc
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x44ea01
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], 0
        lea ecx, [ebp - 0cch]
        push ecx
        push 1
        push 0
        ; Exact mapped bytes FF 15 2C C3 68 00: call dword ptr [0x68c32c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8C AE 00 00 00: jl 0x44e9fc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 75 14: jne 0x44e96b
        __asm _emit 0x75
        __asm _emit 0x14
        push 207h
        push 67702ch
        ; Exact mapped bytes E8 DA A3 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa3
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e96b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x44e94e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 0d0h], 0
        lea eax, [ebp - 0d0h]
        push eax
        push 0
        push 1012h
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 B4 C2 68 00: call dword ptr [0x68c2b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7C 4B: jl 0x44e9ea
        __asm _emit 0x7c
        __asm _emit 0x4b
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 75 14: jne 0x44e9bc
        __asm _emit 0x75
        __asm _emit 0x14
        push 20dh
        push 67702ch
        ; Exact mapped bytes E8 89 A3 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa3
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44e9bc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x44e99f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0cch]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes E9 80 01 00 00: jmp 0x44eb81
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 6F 01 00 00: je 0x44eb7a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        mov dword ptr [ebp - 0d4h], eax
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 C8 B9 68 00: call dword ptr [0x68b9c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], eax
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 44: je 0x44ea7e
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 28: je 0x44ea7e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x44ea8f
        __asm _emit 0xeb
        __asm _emit 0x11
        mov dword ptr [ebp - 18h], 8007000eh
        mov dword ptr [ebp - 0e0h], 0
        mov dword ptr [ebp - 0dch], 0
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x44eb78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0dch]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        ; Exact mapped bytes FF 15 2C C3 68 00: call dword ptr [0x68c32c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8C AF 00 00 00: jl 0x44eb78
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 75 14: jne 0x44eae6
        __asm _emit 0x75
        __asm _emit 0x14
        push 22dh
        push 67702ch
        ; Exact mapped bytes E8 5F A2 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44eae6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x44eac9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 0e4h], 0
        lea ecx, [ebp - 0e4h]
        push ecx
        push 0
        push 0
        push 12h
        push 0
        mov edx, dword ptr [ebp - 0dch]
        push edx
        ; Exact mapped bytes FF 15 B8 C2 68 00: call dword ptr [0x68c2b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7C 4B: jl 0x44eb66
        __asm _emit 0x7c
        __asm _emit 0x4b
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 75 14: jne 0x44eb38
        __asm _emit 0x75
        __asm _emit 0x14
        push 232h
        push 67702ch
        ; Exact mapped bytes E8 0D A2 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44eb38
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x44eb1b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 0e4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes EB 07: jmp 0x44eb81
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 8000ffffh
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 27: jge 0x44ebba
        __asm _emit 0x7d
        __asm _emit 0x27
        lea edx, [ebp - 70h]
        push edx
        push 6771a0h
        ; Exact mapped bytes E8 74 1A 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 6771cch
        ; Exact mapped bytes E8 63 1A 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x44ec49
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x44ebe0
        __asm _emit 0xeb
        __asm _emit 0x24
        lea ecx, [ebp - 70h]
        push ecx
        push 6771e8h
        ; Exact mapped bytes E8 4B 1A 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 677218h
        ; Exact mapped bytes E8 3A 1A 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 69: jmp 0x44ec49
        __asm _emit 0xeb
        __asm _emit 0x69
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 63: jne 0x44ec49
        __asm _emit 0x75
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 70h]
        and ecx, 20000h
        test ecx, ecx
        ; Exact mapped bytes 75 50: jne 0x44ec49
        __asm _emit 0x75
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 0e8h]
        add edx, 0b8h
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 22: jge 0x44ec49
        __asm _emit 0x7d
        __asm _emit 0x22
        lea eax, [ebp - 70h]
        push eax
        push 677234h
        ; Exact mapped bytes E8 E0 19 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 677260h
        ; Exact mapped bytes E8 CF 19 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 4B: jge 0x44ec9a
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 0e8h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 3F: je 0x44ec9a
        __asm _emit 0x74
        __asm _emit 0x3f
        push 1
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [eax + 4ch], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0C: je 0x44ecac
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0D: je 0x44ecbf
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7C 07: jl 0x44ecbf
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp - 18h]
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
