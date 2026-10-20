// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866B0B0 .. +0x39F bytes.
extern "C" __declspec(naked) void FUN_5866b0b0_5866B0B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 9C 98 E1 FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 64 01 00 00: je 0x5866b233
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5866b0e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 64 65 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x65
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 8E 60 1E 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 0F 83 32 01 00 00: jae 0x5866b233
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 44 65 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x65
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [eax + edx]
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        ; Exact mapped bytes FF 15 54 41 89 58: call dword ptr [0x58894154]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x5866b1f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 1D 65 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x65
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dl, byte ptr [eax + ecx + 1]
        mov byte ptr [ebp - 3], dl
        ; Exact mapped bytes 0F BE 45 FD: movsx eax, byte ptr [ebp - 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xfd
        cmp eax, -5fh
        ; Exact mapped bytes 75 09: jne 0x5866b14f
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, -5fh
        ; Exact mapped bytes 74 6C: je 0x5866b1bb
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes 0F BE 55 FD: movsx edx, byte ptr [ebp - 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xfd
        cmp edx, -59h
        ; Exact mapped bytes 75 09: jne 0x5866b161
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, -5dh
        ; Exact mapped bytes 74 5A: je 0x5866b1bb
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 0F BE 4D FD: movsx ecx, byte ptr [ebp - 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfd
        cmp ecx, -20h
        ; Exact mapped bytes 75 09: jne 0x5866b173
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, -5dh
        ; Exact mapped bytes 74 48: je 0x5866b1bb
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 0F BE 45 FD: movsx eax, byte ptr [ebp - 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xfd
        cmp eax, -5bh
        ; Exact mapped bytes 75 09: jne 0x5866b185
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, -5eh
        ; Exact mapped bytes 74 36: je 0x5866b1bb
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 0F BE 55 FD: movsx edx, byte ptr [ebp - 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xfd
        cmp edx, -52h
        ; Exact mapped bytes 75 09: jne 0x5866b197
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, -5fh
        ; Exact mapped bytes 74 24: je 0x5866b1bb
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 0F BE 4D FD: movsx ecx, byte ptr [ebp - 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfd
        cmp ecx, -51h
        ; Exact mapped bytes 75 09: jne 0x5866b1a9
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, -5fh
        ; Exact mapped bytes 74 12: je 0x5866b1bb
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE 45 FD: movsx eax, byte ptr [ebp - 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xfd
        cmp eax, -39h
        ; Exact mapped bytes 75 37: jne 0x5866b1e9
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, -5fh
        ; Exact mapped bytes 75 2E: jne 0x5866b1e9
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D0 62 E6 FF: call 0x584d14a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x62
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B8 62 E6 FF: call 0x584d14a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x62
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 3A: jmp 0x5866b22e
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7C 09: jl 0x5866b206
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, 1fh
        ; Exact mapped bytes 7E 12: jle 0x5866b218
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, 7fh
        ; Exact mapped bytes 74 09: je 0x5866b218
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, 27h
        ; Exact mapped bytes 75 16: jne 0x5866b22e
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 73 62 E6 FF: call 0x584d14a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x62
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A5 FE FF FF: jmp 0x5866b0d8
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 22 97 E1 FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x97
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5866b2d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 FC 63 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x63
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 26 5F 1E 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5f
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        sub eax, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 E2 63 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x63
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        mov al, byte ptr [eax + edx]
        mov byte ptr [ebp - 5], al
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 CE 63 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x63
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 74 48: je 0x5866b2d1
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 0F BE 45 FB: movsx eax, byte ptr [ebp - 5]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xfb
        push eax
        ; Exact mapped bytes E8 C9 6B 1F 00: call 0x58861e5c
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x6b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 30h
        ; Exact mapped bytes 7C 06: jl 0x5866b2a5
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 39h
        ; Exact mapped bytes 7E 1E: jle 0x5866b2c3
        __asm _emit 0x7e
        __asm _emit 0x1e
        cmp dword ptr [ebp - 18h], 61h
        ; Exact mapped bytes 7C 06: jl 0x5866b2b1
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 7ah
        ; Exact mapped bytes 7E 12: jle 0x5866b2c3
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp dword ptr [ebp - 18h], 2ch
        ; Exact mapped bytes 74 0C: je 0x5866b2c3
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 74 06: je 0x5866b2c3
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 5fh
        ; Exact mapped bytes 75 02: jne 0x5866b2c5
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0C: jmp 0x5866b2d1
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 30 52 E6 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 84 96 E1 FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 64 01 00 00: je 0x5866b44b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5866b2f9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 4C 63 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x63
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 76 5E 1E 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5e
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 0F 83 32 01 00 00: jae 0x5866b44b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 2C 63 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x63
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dl, byte ptr [eax + ecx]
        mov byte ptr [ebp - 2], dl
        movzx eax, byte ptr [ebp - 2]
        push eax
        ; Exact mapped bytes FF 15 54 41 89 58: call dword ptr [0x58894154]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x5866b40c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 05 63 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x63
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov al, byte ptr [eax + edx + 1]
        mov byte ptr [ebp - 4], al
        ; Exact mapped bytes 0F BE 4D FC: movsx ecx, byte ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, -5fh
        ; Exact mapped bytes 75 09: jne 0x5866b367
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FE: movsx edx, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xfe
        cmp edx, -5fh
        ; Exact mapped bytes 74 6C: je 0x5866b3d3
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes 0F BE 45 FC: movsx eax, byte ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xfc
        cmp eax, -59h
        ; Exact mapped bytes 75 09: jne 0x5866b379
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D FE: movsx ecx, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfe
        cmp ecx, -5dh
        ; Exact mapped bytes 74 5A: je 0x5866b3d3
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 0F BE 55 FC: movsx edx, byte ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xfc
        cmp edx, -20h
        ; Exact mapped bytes 75 09: jne 0x5866b38b
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 45 FE: movsx eax, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xfe
        cmp eax, -5dh
        ; Exact mapped bytes 74 48: je 0x5866b3d3
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 0F BE 4D FC: movsx ecx, byte ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, -5bh
        ; Exact mapped bytes 75 09: jne 0x5866b39d
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FE: movsx edx, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xfe
        cmp edx, -5eh
        ; Exact mapped bytes 74 36: je 0x5866b3d3
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 0F BE 45 FC: movsx eax, byte ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xfc
        cmp eax, -52h
        ; Exact mapped bytes 75 09: jne 0x5866b3af
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D FE: movsx ecx, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfe
        cmp ecx, -5fh
        ; Exact mapped bytes 74 24: je 0x5866b3d3
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 0F BE 55 FC: movsx edx, byte ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xfc
        cmp edx, -51h
        ; Exact mapped bytes 75 09: jne 0x5866b3c1
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 45 FE: movsx eax, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xfe
        cmp eax, -5fh
        ; Exact mapped bytes 74 12: je 0x5866b3d3
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE 4D FC: movsx ecx, byte ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, -39h
        ; Exact mapped bytes 75 37: jne 0x5866b401
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 0F BE 55 FE: movsx edx, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xfe
        cmp edx, -5fh
        ; Exact mapped bytes 75 2E: jne 0x5866b401
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B8 60 E6 FF: call 0x584d14a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A0 60 E6 FF: call 0x584d14a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x60
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 3A: jmp 0x5866b446
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 0F BE 4D FE: movsx ecx, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfe
        cmp ecx, 1
        ; Exact mapped bytes 7C 09: jl 0x5866b41e
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FE: movsx edx, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xfe
        cmp edx, 1fh
        ; Exact mapped bytes 7E 12: jle 0x5866b430
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE 45 FE: movsx eax, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xfe
        cmp eax, 7fh
        ; Exact mapped bytes 74 09: je 0x5866b430
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D FE: movsx ecx, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfe
        cmp ecx, 27h
        ; Exact mapped bytes 75 16: jne 0x5866b446
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5B 60 E6 FF: call 0x584d14a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x60
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A5 FE FF FF: jmp 0x5866b2f0
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
