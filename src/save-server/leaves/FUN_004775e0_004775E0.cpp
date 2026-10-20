// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004775E0 .. +0x3AB bytes.
extern "C" __declspec(naked) void FUN_004775e0_004775E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], 0
        push 0ch
        ; Exact mapped bytes E8 BC 92 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes C7 05 60 74 68 00 00 00 00 00: mov dword ptr [0x687460], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 18 03 68 00 FF FF FF FF: mov dword ptr [0x680318], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 18 03 68 00: mov eax, dword ptr [0x680318]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 08 03 68 00: mov dword ptr [0x680308], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        push 63f324h
        ; Exact mapped bytes E8 B1 59 00 00: call 0x47cfd0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x477763
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes E8 1A 93 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push 687468h
        ; Exact mapped bytes FF 15 B0 B8 68 00: call dword ptr [0x68b8b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 84 11 01 00 00: je 0x47775e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 60 74 68 00 01 00 00 00: mov dword ptr [0x687460], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 68 74 68 00: mov ecx, dword ptr [0x687468]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        imul ecx, ecx, 3ch
        ; Exact mapped bytes 89 0D 70 02 68 00: mov dword ptr [0x680270], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 AE 74 68 00: mov dx, word ptr [0x6874ae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xae
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x477689
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes A1 BC 74 68 00: mov eax, dword ptr [0x6874bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        imul eax, eax, 3ch
        ; Exact mapped bytes 8B 0D 70 02 68 00: mov ecx, dword ptr [0x680270]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, eax
        ; Exact mapped bytes 89 0D 70 02 68 00: mov dword ptr [0x680270], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 02 75 68 00: mov dx, word ptr [0x687502]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x4776be
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 3D 10 75 68 00 00: cmp dword ptr [0x687510], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1F: je 0x4776be
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes C7 05 74 02 68 00 01 00 00 00: mov dword ptr [0x680274], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 75 68 00: mov eax, dword ptr [0x687510]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 2B 05 BC 74 68 00: sub eax, dword ptr [0x6874bc]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        imul eax, eax, 3ch
        ; Exact mapped bytes A3 78 02 68 00: mov dword ptr [0x680278], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x4776d2
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 74 02 68 00 00 00 00 00: mov dword ptr [0x680274], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 78 02 68 00 00 00 00 00: mov dword ptr [0x680278], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        push 0
        push 3fh
        ; Exact mapped bytes 8B 15 FC 02 68 00: mov edx, dword ptr [0x6802fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        push -1
        push 68746ch
        push 220h
        ; Exact mapped bytes A1 50 75 68 00: mov eax, dword ptr [0x687550]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x47770f
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0C: jne 0x47770f
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D FC 02 68 00: mov ecx, dword ptr [0x6802fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [ecx + 3fh], 0
        ; Exact mapped bytes EB 09: jmp 0x477718
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 FC 02 68 00: mov edx, dword ptr [0x6802fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [edx], 0
        lea eax, [ebp - 8]
        push eax
        push 0
        push 3fh
        ; Exact mapped bytes 8B 0D 00 03 68 00: mov ecx, dword ptr [0x680300]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        push -1
        push 6874c0h
        push 220h
        ; Exact mapped bytes 8B 15 50 75 68 00: mov edx, dword ptr [0x687550]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x477755
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0B: jne 0x477755
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes A1 00 03 68 00: mov eax, dword ptr [0x680300]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [eax + 3fh], 0
        ; Exact mapped bytes EB 09: jmp 0x47775e
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 0D 00 03 68 00: mov ecx, dword ptr [0x680300]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [ecx], 0
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x477987
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x47778d
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 83 3D 14 75 68 00 00: cmp dword ptr [0x687514], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 26: je 0x47779c
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 14 75 68 00: mov ecx, dword ptr [0x687514]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 2A AA FF FF: call 0x4721b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x47779c
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0ch
        ; Exact mapped bytes E8 BC 91 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 EB 01 00 00: jmp 0x477987
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes A1 14 75 68 00: mov eax, dword ptr [0x687514]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B7 FB FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 10ch
        push 63f31ch
        push 2
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 7F DF FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F3 EF FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes A3 14 75 68 00: mov dword ptr [0x687514], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 14 75 68 00 00: cmp dword ptr [0x687514], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x4777ed
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0ch
        ; Exact mapped bytes E8 6B 91 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 9A 01 00 00: jmp 0x477987
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes A1 14 75 68 00: mov eax, dword ptr [0x687514]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 74 E1 FE FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 0ch
        ; Exact mapped bytes E8 4A 91 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push 3
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 15 FC 02 68 00: mov edx, dword ptr [0x6802fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 25 DE FE FF: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes A1 FC 02 68 00: mov eax, dword ptr [0x6802fc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [eax + 3], 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 3
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2dh
        ; Exact mapped bytes 75 12: jne 0x47784d
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 7A E7 FE FF: call 0x465fd0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        imul eax, eax, 0e10h
        ; Exact mapped bytes A3 70 02 68 00: mov dword ptr [0x680270], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2bh
        ; Exact mapped bytes 74 16: je 0x477885
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 7C 16: jl 0x477890
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 39h
        ; Exact mapped bytes 7F 0B: jg 0x477890
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB D4: jmp 0x477864
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 3ah
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x477935
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 1F E7 FE FF: call 0x465fd0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        imul eax, eax, 3ch
        ; Exact mapped bytes 8B 0D 70 02 68 00: mov ecx, dword ptr [0x680270]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, eax
        ; Exact mapped bytes 89 0D 70 02 68 00: mov dword ptr [0x680270], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 30h
        ; Exact mapped bytes 7C 16: jl 0x4778e6
        __asm _emit 0x7c
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 39h
        ; Exact mapped bytes 7F 0B: jg 0x4778e6
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB DF: jmp 0x4778c5
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 3ah
        ; Exact mapped bytes 75 44: jne 0x477935
        __asm _emit 0x75
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 CD E6 FE FF: call 0x465fd0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 15 70 02 68 00: mov edx, dword ptr [0x680270]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, eax
        ; Exact mapped bytes 89 15 70 02 68 00: mov dword ptr [0x680270], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 7C 16: jl 0x477935
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 39h
        ; Exact mapped bytes 7F 0B: jg 0x477935
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB DF: jmp 0x477914
        __asm _emit 0xeb
        __asm _emit 0xdf
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x477949
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 15 70 02 68 00: mov edx, dword ptr [0x680270]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        ; Exact mapped bytes 89 15 70 02 68 00: mov dword ptr [0x680270], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        ; Exact mapped bytes 89 0D 74 02 68 00: mov dword ptr [0x680274], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 02 68 00 00: cmp dword ptr [0x680274], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x47797e
        __asm _emit 0x74
        __asm _emit 0x20
        push 3
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes A1 00 03 68 00: mov eax, dword ptr [0x680300]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D1 DC FE FF: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 00 03 68 00: mov ecx, dword ptr [0x680300]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [ecx + 3], 0
        ; Exact mapped bytes EB 09: jmp 0x477987
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 00 03 68 00: mov edx, dword ptr [0x680300]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [edx], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
