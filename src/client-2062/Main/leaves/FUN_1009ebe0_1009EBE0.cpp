// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009EBE0 .. +0x96B bytes.
extern "C" __declspec(naked) void FUN_1009ebe0_1009EBE0() {
    __asm {
        push -1
        push 10171068h
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
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        push ebp
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 EB FD FF FF: call 0x1009ea10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10175fc0h
        ; Exact mapped bytes E8 68 DB 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xdb
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 7B: je 0x1009ecc5
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 226h
        ; Exact mapped bytes 7E 12: jle 0x1009ec6d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1009ec6d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 898h]
        ; Exact mapped bytes EB 02: jmp 0x1009ec6f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 7d0h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 28 FD 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1009ecbf
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ebp, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x1009ecc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90ch], edi
        ; Exact mapped bytes E8 C7 DA 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xda
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 29: je 0x1009ed14
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [esp + 28h]
        push 7dah
        push ebx
        lea eax, [ebp + 3dh]
        push ebx
        add ecx, 10h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AA FC 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1009ed16
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 914h], edi
        ; Exact mapped bytes E8 78 DA 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 29: je 0x1009ed63
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [esp + 28h]
        push 7d9h
        push ebx
        add ebp, 3dh
        push ebx
        add edx, 10h
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5B FC 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1009ed65
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 914h]
        mov ecx, 0fffbh
        mov dword ptr [esi + 918h], edi
        xor edi, edi
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 918h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 914h]
        mov dword ptr [eax + 50h], edi
        mov eax, dword ptr [esi + 918h]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [esi + 918h]
        ; Exact mapped bytes E8 AF 03 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 28h]
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 34h], ebp
        lea ebx, [esi + 984h]
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [ebx - 8dch], 0
        push 58h
        mov byte ptr [esi + eax + 0c8h], 0
        ; Exact mapped bytes E8 C0 D9 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x1009ee77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 13h
        ; Exact mapped bytes 7E 12: jle 0x1009ee16
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1009ee16
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 4c0h]
        ; Exact mapped bytes EB 02: jmp 0x1009ee18
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 34h]
        push 834h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7D FB 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x1009ee71
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebp, dword ptr [esp + 34h]
        ; Exact mapped bytes EB 02: jmp 0x1009ee79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0a0h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 10 D9 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd9
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 47: je 0x1009eee7
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 12: jle 0x1009eec1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009eec1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 780h
        ; Exact mapped bytes EB 02: jmp 0x1009eec3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 2ch]
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 834h
        push edi
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 DB 83 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x83
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x1009eeed
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebx + 20h], eax
        ; Exact mapped bytes E8 A1 D8 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 46: je 0x1009ef55
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 12: jle 0x1009ef30
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009ef30
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 700h
        ; Exact mapped bytes EB 02: jmp 0x1009ef32
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 834h
        lea edx, [ebp + 2]
        push edi
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 6D 83 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x83
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009ef57
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx - 68h], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        push 6ch
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 34 D8 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 35: je 0x1009efb1
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 12: jle 0x1009ef9d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009ef9d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 440h
        ; Exact mapped bytes EB 02: jmp 0x1009ef9f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7d1h
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B1 33 F9 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x33
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009efb3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [ebx - 20h], eax
        ; Exact mapped bytes E8 0E 36 F9 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x36
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [esp + 38h]
        add ebx, 4
        inc eax
        add ebp, 2ah
        cmp eax, 8
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes 0F 8C E5 FD FF FF: jl 0x1009edc3
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 39h
        ; Exact mapped bytes 7E 11: jle 0x1009effd
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1009effd
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0e40h
        ; Exact mapped bytes EB 02: jmp 0x1009efff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 93ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 3ah
        ; Exact mapped bytes 7E 11: jle 0x1009f024
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1009f024
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0e80h
        ; Exact mapped bytes EB 02: jmp 0x1009f026
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov dword ptr [esi + 940h], eax
        ; Exact mapped bytes E8 6A D7 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd7
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 53: je 0x1009f099
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 19h
        ; Exact mapped bytes 7E 12: jle 0x1009f067
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009f067
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 640h
        ; Exact mapped bytes EB 02: jmp 0x1009f069
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 28h]
        add edi, 82h
        push 834h
        add edx, 112h
        push edi
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 29 82 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009f09b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 9f4h], eax
        lea ebp, [esi + 9d4h]
        mov ebx, 4
        push 0fch
        ; Exact mapped bytes E8 E5 D6 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd6
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 45: je 0x1009f110
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 12: jle 0x1009f0ec
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009f0ec
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 840h]
        ; Exact mapped bytes EB 02: jmp 0x1009f0ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 70h
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 0eeh
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 84 01 06 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1009f112
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 34 08: mov word ptr [edi + 0x26], 0x834
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x34
        __asm _emit 0x08
        ; Exact mapped bytes 74 06: je 0x1009f12d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 73 FE 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009f13a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C6 FD 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        add ebp, 4
        dec ebx
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x1009f0b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 2ch]
        lea ebp, [esi + 9e4h]
        mov dword ptr [esp + 38h], 3
        lea ebx, [edx + 44h]
        push 0fch
        ; Exact mapped bytes E8 3D D6 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd6
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 3E: je 0x1009f1b1
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 12: jle 0x1009f194
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009f194
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 840h]
        ; Exact mapped bytes EB 02: jmp 0x1009f196
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 28h]
        push ebx
        add ecx, 0e0h
        push ecx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E3 00 06 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1009f1b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 34 08: mov word ptr [edi + 0x26], 0x834
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x34
        __asm _emit 0x08
        ; Exact mapped bytes 74 06: je 0x1009f1ce
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D2 FD 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009f1db
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 25 FD 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        add ebp, 4
        add ebx, 0ah
        dec eax
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 69 FF FF FF: jne 0x1009f159
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 A6 D5 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd5
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 43: je 0x1009f24d
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 20h
        ; Exact mapped bytes 7E 12: jle 0x1009f22b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009f22b
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 800h]
        ; Exact mapped bytes EB 02: jmp 0x1009f22d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        lea ecx, [ebx + 70h]
        push ecx
        lea ecx, [ebp + 11ah]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 45 00 06 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x1009f257
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9cch], eax
        ; Exact mapped bytes E8 34 D5 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd5
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 3B: je 0x1009f2b7
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 12: jle 0x1009f29d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009f29d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 840h
        ; Exact mapped bytes EB 02: jmp 0x1009f29f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 70h]
        push edx
        lea edx, [ebp + 400h]
        push edx
        push 1
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DB FF 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1009f2b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9c8h], eax
        ; Exact mapped bytes E8 D2 D4 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd4
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 3B: je 0x1009f319
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 12: jle 0x1009f2ff
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009f2ff
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 840h
        ; Exact mapped bytes EB 02: jmp 0x1009f301
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 70h]
        push edx
        lea edx, [ebp + 0d2h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 79 FF 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1009f31b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 9c8h]
        mov dword ptr [esi + 9d0h], eax
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 34 08: mov word ptr [edi + 0x26], 0x834
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x34
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009f33f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 61 FC 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009f34c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B4 FB 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [esi + 9cch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 34 08: mov word ptr [edi + 0x26], 0x834
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x34
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009f365
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3B FC 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009f372
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8E FB 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [esi + 9d0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 34 08: mov word ptr [edi + 0x26], 0x834
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x34
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009f38b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 15 FC 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009f398
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 68 FB 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 FE D3 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd3
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 4C: je 0x1009f3fe
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 12: jle 0x1009f3d3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009f3d3
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 540h]
        ; Exact mapped bytes EB 02: jmp 0x1009f3d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 65h]
        push 834h
        push ecx
        lea ecx, [ebp + 130h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C4 7E F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009f400
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9fch], eax
        ; Exact mapped bytes E8 8B D3 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd3
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 4C: je 0x1009f471
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 12: jle 0x1009f446
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009f446
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 500h
        ; Exact mapped bytes EB 02: jmp 0x1009f448
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 73h]
        push 834h
        push edx
        lea edx, [ebp + 130h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 51 7E F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009f473
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9fch]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a00h], eax
        ; Exact mapped bytes E8 D2 FC 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a00h]
        push 101h
        ; Exact mapped bytes E8 C2 FC 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9fch]
        mov ecx, 7fffh
        push 0a0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a00h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 DF D2 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 4F: je 0x1009f520
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 17h
        ; Exact mapped bytes 7E 12: jle 0x1009f4f2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009f4f2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x1009f4f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, 82h
        push 834h
        add ebp, 0e4h
        push ebx
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 A2 7D F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009f522
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, esi
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 9f8h], eax
        ; Exact mapped bytes E8 9C 07 00 00: call 0x1009fcd0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
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
