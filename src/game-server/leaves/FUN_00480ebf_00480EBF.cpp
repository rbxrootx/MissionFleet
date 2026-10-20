// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00480EBF .. +0x558 bytes.
extern "C" __declspec(naked) void FUN_00480ebf_00480EBF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 0F: je 0x480ee6
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 0E 95 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x480f1f
        __asm _emit 0x75
        __asm _emit 0x39
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 63 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 94 D3 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 E7 04 00 00: jmp 0x481406
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 C6 94 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F 30 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 4B: jne 0x480f83
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B0 94 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 89 30 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 35: jne 0x480f83
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A 94 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 8D 94 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 1C: jne 0x480f83
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 94 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 74 74: je 0x480ff7
        __asm _emit 0x74
        __asm _emit 0x74
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 62 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 7E 62 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 D7 D2 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 BC D2 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 0F 04 00 00: jmp 0x481406
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 1
        ; Exact mapped bytes 75 74: jne 0x481074
        __asm _emit 0x75
        __asm _emit 0x74
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B 62 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 01 62 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 5A D2 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 3F D2 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 92 03 00 00: jmp 0x481406
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax + 8e8h]
        mov eax, dword ptr [ecx + 18h]
        cmp eax, dword ptr [edx + 20h]
        ; Exact mapped bytes 7C 20: jl 0x4810b4
        __asm _emit 0x7c
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 8e8h]
        mov edx, dword ptr [eax + 1ch]
        cmp edx, dword ptr [ecx + 24h]
        ; Exact mapped bytes 73 74: jae 0x481128
        __asm _emit 0x73
        __asm _emit 0x74
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 61 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 2
        push 0
        push 80020d01h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 4D 61 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 A6 D1 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 8B D1 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 DE 02 00 00: jmp 0x481406
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 18h]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 7C 14: jl 0x481150
        __asm _emit 0x7c
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 1ch]
        cmp edx, dword ptr [ecx + 24h]
        ; Exact mapped bytes 73 74: jae 0x4811c4
        __asm _emit 0x73
        __asm _emit 0x74
        push 0
        push 0
        push 0
        push 2
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB 60 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020d01h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 B1 60 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 0A D1 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 EF D0 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x481406
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 8e8h]
        mov edx, dword ptr [eax + 1ch]
        sub edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx + 8e8h]
        cmp edx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 73 74: jae 0x481267
        __asm _emit 0x73
        __asm _emit 0x74
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 60 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 2
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 0E 60 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 67 D0 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 4C D0 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 9F 01 00 00: jmp 0x481406
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 1ch]
        sub edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 73 74: jae 0x4812f5
        __asm _emit 0x73
        __asm _emit 0x74
        push 0
        push 0
        push 0
        push 2
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A 5F 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 80 5F 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 D9 CF FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 BE CF FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x481406
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 30h], 1
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C 5F 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 8e8h]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 75 07: jne 0x48132f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x481406
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C EA FF FF: call 0x47fd57
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 75 3B: jne 0x48137f
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 75 29: jne 0x48137f
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 E9 FF FF: call 0x47fca7
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 2D E9 FF FF: call 0x47fca7
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x481401
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 46 91 F8 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 32 91 F8 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 0C: je 0x4813b3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E DE FF FF: call 0x47f201
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 74 18: je 0x4813dd
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 24 DE FF FF: call 0x47f201
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE E8 FF FF: call 0x47fca7
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 A6 E8 FF FF: call 0x47fca7
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CF 73 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
