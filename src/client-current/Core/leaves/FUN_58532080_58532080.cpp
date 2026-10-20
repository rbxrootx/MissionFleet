// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58532080 .. +0xA4A bytes.
extern "C" __declspec(naked) void FUN_58532080_58532080() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882950h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1c4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 144h], ecx
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 144h]
        ; Exact mapped bytes 0F BE 84 0A 48 01 00 00: movsx eax, byte ptr [edx + ecx + 0x148]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 58: jne 0x58532123
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ecx + 1214ch], 13h
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [edx + 12150h]
        mov dword ptr [ebp - 16ch], eax
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 C1 17 00 00: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a49f4h
        ; Exact mapped bytes E8 E2 FE FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 E3 5D FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8E 09 00 00: jmp 0x58532ab1
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [ecx + 12134h]
        ; Exact mapped bytes E8 1C F5 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 3
        ; Exact mapped bytes 0F 8C 1A 09 00 00: jl 0x58532a5e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [edx + 12138h]
        ; Exact mapped bytes E8 FB F4 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 FA 08 00 00: je 0x58532a5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 12140h]
        push ecx
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 8A 07 30 00: call 0x58832907
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x07
        __asm _emit 0x30
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [eax + 12114h], 0
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ecx + 1214ch], 12h
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [edx + 12134h]
        mov dword ptr [ebp - 170h], eax
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 24 3C F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ecx + 12138h]
        mov dword ptr [ebp - 174h], edx
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 05 3C F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 12134h]
        mov dword ptr [ebp - 178h], ecx
        push 707070h
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 E3 3E F5 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [edx + 12138h]
        mov dword ptr [ebp - 17ch], eax
        push 707070h
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 C1 3E F5 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 144h]
        cmp dword ptr [ecx + 1212ch], 0
        ; Exact mapped bytes 74 31: je 0x58532260
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [edx + 1212ch]
        ; Exact mapped bytes E8 20 CB F8 FF: call 0x584bed60
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 1212ch]
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 1212ch]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 12124h]
        mov dword ptr [ebp - 184h], ecx
        push 36h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 28 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x28
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        mov edx, dword ptr [ebp - 180h]
        push edx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 C9 49 F5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x49
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 12128h]
        mov dword ptr [ebp - 1c4h], ecx
        push 1cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 28 F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x28
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        mov edx, dword ptr [ebp - 1c8h]
        push edx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 5F 3C F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 12134h]
        ; Exact mapped bytes E8 6E F3 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf3
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 11f9ch
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [edx + 12138h]
        ; Exact mapped bytes E8 49 F3 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf3
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 144h]
        add eax, 11fb4h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 128h]
        push ecx
        ; Exact mapped bytes E8 CA 5E FD FF: call 0x585081f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 05 3A F9 FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 144h]
        add edx, 12014h
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 140h]
        push eax
        ; Exact mapped bytes E8 55 60 FD FF: call 0x585083b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 D3 39 F9 FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x39
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 12094h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 40h
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 72 FF FF: call 0x585295f0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 144h]
        add edx, 11fd4h
        push edx
        ; Exact mapped bytes E8 EF A4 31 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa4
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 0fh
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [edx + ecx + 11fd4h], 0
        mov dword ptr [ebp - 154h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585323d8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 154h]
        add eax, 1
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 73 FF FF: call 0x58529710
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 154h], eax
        ; Exact mapped bytes 7D 6A: jge 0x58532455
        __asm _emit 0x7d
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 72 FF FF: call 0x585296c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C 4C FA FF: call 0x584d7030
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x4c
        __asm _emit 0xfa
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 154h], 0dh
        imul eax, edx
        mov dword ptr [ebp - 188h], eax
        mov eax, 4
        imul ecx, eax, 0fh
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [edx + ecx + 11fd4h]
        mov dword ptr [ebp - 1cch], eax
        mov ecx, dword ptr [ebp - 1cch]
        add ecx, dword ptr [ebp - 188h]
        mov edx, 4
        imul eax, edx, 0fh
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [edx + eax + 11fd4h], ecx
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x585323c9
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 144h]
        cmp dword ptr [eax + 12118h], 0
        ; Exact mapped bytes 0F 85 42 02 00 00: jne 0x585326aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x5853247d
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 9F 2F 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x9f
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 50: je 0x585324d6
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 160h], ecx
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 27: je 0x585324c2
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 160h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 18ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes FF 95 74 FE FF FF: call dword ptr [ebp - 0x18c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585324cc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        ; Exact mapped bytes C7 05 94 75 94 58 00 00 00 00: mov dword ptr [0x58947594], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes 0F BE 94 01 48 01 00 00: movsx edx, byte ptr [ecx + eax + 0x148]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 30h
        ; Exact mapped bytes 7C 1B: jl 0x5853250c
        __asm _emit 0x7c
        __asm _emit 0x1b
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 144h]
        ; Exact mapped bytes 0F BE 84 0A 48 01 00 00: movsx eax, byte ptr [edx + ecx + 0x148]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 39h
        ; Exact mapped bytes 7E 2A: jle 0x58532536
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov ecx, 100h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 144h]
        lea ecx, [eax + edx + 256h]
        push ecx
        mov edx, dword ptr [ebp - 144h]
        add edx, 148h
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 5B: jne 0x5853259a
        __asm _emit 0x75
        __asm _emit 0x5b
        push 21ch
        ; Exact mapped bytes E8 BB EA 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xea
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 15: je 0x58532574
        __asm _emit 0x74
        __asm _emit 0x15
        push 1
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 E4 EB 03 00: call 0x58571150
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853257e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov eax, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes 89 0D 94 75 94 58: mov dword ptr [0x58947594], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push 84h
        push 0
        push 589604e0h
        ; Exact mapped bytes E8 65 A8 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa8
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes 0F BE 94 01 48 01 00 00: movsx edx, byte ptr [ecx + eax + 0x148]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 30h
        ; Exact mapped bytes 0F 8C 8B 00 00 00: jl 0x58532658
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 144h]
        ; Exact mapped bytes 0F BE 84 0A 48 01 00 00: movsx eax, byte ptr [edx + ecx + 0x148]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 39h
        ; Exact mapped bytes 7F 70: jg 0x58532658
        __asm _emit 0x7f
        __asm _emit 0x70
        push 100h
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 15 A8 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 144h]
        movzx eax, word ptr [edx + 248h]
        push eax
        ; Exact mapped bytes FF 15 7C 45 89 58: call dword ptr [0x5889457c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        movzx ecx, ax
        push ecx
        mov edx, dword ptr [ebp - 144h]
        add edx, 148h
        push edx
        push 588a4a18h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes 8B 15 B4 56 90 58: mov edx, dword ptr [0x589056b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 98 2F 00: call 0x5882bf40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x98
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 52: jmp 0x585326aa
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 144h]
        movzx edx, word ptr [ecx + 248h]
        push edx
        ; Exact mapped bytes FF 15 7C 45 89 58: call dword ptr [0x5889457c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        movzx eax, ax
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes 8B 0D B4 56 90 58: mov ecx, dword ptr [0x589056b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 19ch], edx
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 148h
        push ecx
        mov edx, dword ptr [ebp - 19ch]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 98 2F 00: call 0x5882bf40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x98
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 150h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585326c5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 150h]
        add eax, 1
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ebp - 150h]
        cmp edx, dword ptr [ecx + 250h]
        ; Exact mapped bytes 7D 65: jge 0x5853273e
        __asm _emit 0x7d
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 150h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 144h]
        lea edx, [ecx + eax + 256h]
        push edx
        mov eax, dword ptr [ebp - 144h]
        add eax, 148h
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 33: jne 0x58532739
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 144h]
        movzx edx, word ptr [ecx + 248h]
        mov eax, dword ptr [ebp - 150h]
        mov ecx, dword ptr [ebp - 144h]
        movzx eax, word ptr [ecx + eax*2 + 8256h]
        cmp edx, eax
        ; Exact mapped bytes 75 0E: jne 0x58532739
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes 89 0D 38 D2 8F 58: mov dword ptr [0x588fd238], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 05: jmp 0x5853273e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x585326b6
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58532759
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 158h]
        add edx, 1
        mov dword ptr [ebp - 158h], edx
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [ebp - 158h]
        cmp ecx, dword ptr [eax + 250h]
        ; Exact mapped bytes 7D 18: jge 0x58532785
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [edx + 24ch]
        cmp eax, dword ptr [ebp - 158h]
        ; Exact mapped bytes 75 02: jne 0x58532783
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58532785
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C5: jmp 0x5853274a
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov dword ptr [ebp - 1d0h], 80h
        mov dword ptr [ebp - 14ch], 0
        mov dword ptr [ebp - 14ch], 588a4a20h
        lea ecx, [ebp - 148h]
        push ecx
        push 0f003fh
        push 0
        mov edx, dword ptr [ebp - 14ch]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x585327f8
        __asm _emit 0x74
        __asm _emit 0x31
        lea eax, [ebp - 15ch]
        push eax
        lea ecx, [ebp - 148h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 588a44dah
        push 0
        mov edx, dword ptr [ebp - 14ch]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 0
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1a0h], eax
        mov eax, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 1a4h], eax
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        push 0
        push 1
        push 0
        push 588a4a48h
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x5853289f
        __asm _emit 0x74
        __asm _emit 0x6a
        lea eax, [ebp - 15ch]
        push eax
        lea ecx, [ebp - 148h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 588a4a50h
        push 0
        mov edx, dword ptr [ebp - 14ch]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], eax
        mov eax, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 1ach], eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        push 0
        push 1
        push 0
        push 588a4a58h
        mov edx, dword ptr [ebp - 1ach]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 4
        mov eax, dword ptr [ebp - 144h]
        add eax, 248h
        push eax
        push 4
        push 0
        push 588a4a60h
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x5853291d
        __asm _emit 0x74
        __asm _emit 0x56
        lea edx, [ebp - 15ch]
        push edx
        lea eax, [ebp - 148h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 588a4a68h
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        mov edx, dword ptr [ebp - 144h]
        add edx, 248h
        push edx
        push 4
        push 0
        push 588a4a70h
        mov eax, dword ptr [ebp - 148h]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 0
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1b0h], eax
        mov ecx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 1b4h], ecx
        mov edx, dword ptr [ebp - 1b0h]
        push edx
        push 0
        push 1
        push 0
        push 588a4a78h
        mov eax, dword ptr [ebp - 1b4h]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x585329c4
        __asm _emit 0x74
        __asm _emit 0x6a
        lea ecx, [ebp - 15ch]
        push ecx
        lea edx, [ebp - 148h]
        push edx
        push 0
        push 0f003fh
        push 0
        push 588a4a84h
        push 0
        mov eax, dword ptr [ebp - 14ch]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1b8h], eax
        mov ecx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 1bch], ecx
        mov edx, dword ptr [ebp - 1b8h]
        push edx
        push 0
        push 1
        push 0
        push 588a4a90h
        mov eax, dword ptr [ebp - 1bch]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 4
        push 0
        push 4
        push 0
        push 588a4a9ch
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x58532a2d
        __asm _emit 0x74
        __asm _emit 0x4b
        lea edx, [ebp - 15ch]
        push edx
        lea eax, [ebp - 148h]
        push eax
        push 0
        push 0f003fh
        push 0
        push 588a4aach
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        push 0
        push 4
        push 0
        push 588a4abch
        mov edx, dword ptr [ebp - 148h]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 148h]
        push eax
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 E7 72 F7 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x72
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 D5 72 F7 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x72
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 53: jmp 0x58532ab1
        __asm _emit 0xeb
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ecx + 1214ch], 13h
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [edx + 12150h]
        mov dword ptr [ebp - 1c0h], eax
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 2E 0E 00 00: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a4acch
        ; Exact mapped bytes E8 4F F5 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 50 54 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 8A E5 2F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe5
        __asm _emit 0x2f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
