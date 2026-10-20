// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002F310 .. +0x8F7 bytes.
extern "C" __declspec(naked) void FUN_1002f310_1002F310() {
    __asm {
        push -1
        push 1016e17bh
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
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 C0 08 00 00: je 0x1002fbf6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        push ebx
        push ebp
        and ecx, 1f00h
        xor ebp, ebp
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 1A 04 00 00: je 0x1002f767
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 0F 04 00 00: je 0x1002f767
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 0E: cmp cx, 0xe00
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 84 04 04 00 00: je 0x1002f767
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 07: cmp cx, 0x700
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 0F 85 FA 01 00 00: jne 0x1002f568
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a00ch]
        cmp ecx, 9
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x1002f443
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e1ffh
        mov dword ptr [esi + 0a00ch], 10h
        or ah, 1
        mov dword ptr [esi + 94h], 40000000h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A1 E4 7D 1A 10: mov eax, dword ptr [0x101a7de4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, ebp
        ; Exact mapped bytes 74 0A: je 0x1002f3b0
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes A1 4C CE 1A 10: mov eax, dword ptr [0x101ace4c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes EB 2C: jmp 0x1002f3dc
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes A1 04 58 1C 10: mov eax, dword ptr [0x101c5804]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ebp
        ; Exact mapped bytes 74 20: je 0x1002f3d9
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [eax + 170h], ebp
        ; Exact mapped bytes 7E 11: jle 0x1002f3d2
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x1002f3d2
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x1002f3dc
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes EB 03: jmp 0x1002f3dc
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 7ch], ebp
        ; Exact mapped bytes 39 2D 2C 56 1C 10: cmp dword ptr [0x101c562c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 74 25: je 0x1002f409
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 1E: je 0x1002f409
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 8B 15 F8 58 1C 10: mov edx, dword ptr [0x101c58f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes A3 50 58 1C 10: mov dword ptr [0x101c5850], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BC 73 02 00: call 0x100567d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push 20000h
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes 8B 0D C8 58 1C 10: mov ecx, dword ptr [0x101c58c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 43 30 0B 00: call 0x100e2470
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 89 35 DC 56 1C 10: mov dword ptr [0x101c56dc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E9 72 06 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 11h
        ; Exact mapped bytes 0F 85 69 06 00 00: jne 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 4D 2E 00 00: call 0x100322a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0a010h], 12h
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x1002f4f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9fe0h]
        cmp eax, ebp
        ; Exact mapped bytes 75 53: jne 0x1002f4bd
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes A1 E8 56 1C 10: mov eax, dword ptr [0x101c56e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 30h], 2
        ; Exact mapped bytes 75 26: jne 0x1002f49b
        __asm _emit 0x75
        __asm _emit 0x26
        lea ecx, [esi + 9f74h]
        push 68h
        mov dword ptr [esi + 9fdch], ebp
        mov dword ptr [esi + 9fe0h], 1
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 D7 D3 01 00: call 0x1004c870
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 58: jmp 0x1002f4f3
        __asm _emit 0xeb
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 9fdch]
        inc ecx
        mov eax, ecx
        mov dword ptr [esi + 9fdch], ecx
        cmp eax, 465h
        ; Exact mapped bytes 76 42: jbe 0x1002f4f3
        __asm _emit 0x76
        __asm _emit 0x42
        push ebp
        push 63h
        mov ecx, esi
        ; Exact mapped bytes E8 15 1E 00 00: call 0x100312d0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 36: jmp 0x1002f4f3
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp eax, 1
        ; Exact mapped bytes 75 31: jne 0x1002f4f3
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [esi + 9fdch]
        inc ecx
        mov eax, ecx
        mov dword ptr [esi + 9fdch], ecx
        cmp eax, 465h
        ; Exact mapped bytes 76 1B: jbe 0x1002f4f3
        __asm _emit 0x76
        __asm _emit 0x1b
        push ebp
        push 62h
        mov ecx, esi
        mov dword ptr [esi + 9fe0h], ebp
        ; Exact mapped bytes E8 E8 1D 00 00: call 0x100312d0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 7D CC 13 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xcc
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2c8h]
        mov eax, dword ptr [ecx + 28h]
        lea edx, [eax + 24h]
        cmp edx, 100h
        ; Exact mapped bytes 7D 32: jge 0x1002f539
        __asm _emit 0x7d
        __asm _emit 0x32
        add eax, 6
        push eax
        ; Exact mapped bytes E8 10 FC 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2cch]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        push eax
        ; Exact mapped bytes E8 FE FB 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2d8h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 6
        push edx
        ; Exact mapped bytes E8 EC FB 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 7C 05 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        ; Exact mapped bytes E8 DD FB 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2cch]
        push 100h
        ; Exact mapped bytes E8 CD FB 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2d8h]
        push 100h
        ; Exact mapped bytes E8 BD FB 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 4D 05 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 08: cmp cx, 0x800
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 75 1D: jne 0x1002f58c
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [esi + 94h], ebp
        ; Exact mapped bytes 0F 85 3A 05 00 00: jne 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e5fbh
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E9 29 05 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 02: cmp cx, 0x200
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 37: jne 0x1002f5ca
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [esi + 0a010h]
        cmp eax, 16h
        ; Exact mapped bytes 74 09: je 0x1002f5a7
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, 17h
        ; Exact mapped bytes 0F 85 0E 05 00 00: jne 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a01ch]
        mov ecx, dword ptr [esi + 0a018h]
        cmp eax, ecx
        ; Exact mapped bytes 75 07: jne 0x1002f5be
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 52 06 00 00: call 0x1002fc10
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 4B 06 00 00: call 0x1002fc10
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EB 04 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 0D: cmp cx, 0xd00
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 85 E0 04 00 00: jne 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0a034h], 64h
        ; Exact mapped bytes 75 6A: jne 0x1002f648
        __asm _emit 0x75
        __asm _emit 0x6a
        mov ecx, dword ptr [esi + 0a02ch]
        push -1
        push ecx
        ; Exact mapped bytes FF 15 EC 50 17 10: call dword ptr [0x101750ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 0a02ch]
        push edx
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes E8 2F 25 00 00: call 0x10031b30
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [esi + 24h], 2
        mov ecx, esi
        mov dword ptr [esi + 0a00ch], ebp
        ; Exact mapped bytes E8 7E FA FF FF: call 0x1002f090
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 39 AE 48 03 00 00: cmp word ptr [esi + 0x348], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 94 04 00 00: jbe 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 308h]
        mov edi, 0fffeh
        mov eax, dword ptr [edx]
        add edx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 48 03 00 00: mov ax, word ptr [esi + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        inc ecx
        cmp ecx, eax
        ; Exact mapped bytes 7C E9: jl 0x1002f62c
        __asm _emit 0x7c
        __asm _emit 0xe9
        ; Exact mapped bytes E9 6D 04 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34ch]
        cmp eax, 64h
        ; Exact mapped bytes 73 0C: jae 0x1002f65f
        __asm _emit 0x73
        __asm _emit 0x0c
        inc eax
        mov dword ptr [esi + 34ch], eax
        ; Exact mapped bytes E9 56 04 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 354h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E 48 03 00 00: mov cx, word ptr [esi + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        dec ecx
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 3E 04 00 00: jge 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + eax*4 + 30ch]
        cmp dword ptr [eax + 28h], ebp
        ; Exact mapped bytes 75 04: jne 0x1002f687
        __asm _emit 0x75
        __asm _emit 0x04
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 354h]
        cmp eax, ebp
        ; Exact mapped bytes 7C 32: jl 0x1002f6c3
        __asm _emit 0x7c
        __asm _emit 0x32
        mov ecx, dword ptr [esi + eax*4 + 308h]
        mov eax, dword ptr [ecx + 28h]
        add eax, -0ah
        cmp eax, ebp
        ; Exact mapped bytes 7E 08: jle 0x1002f6aa
        __asm _emit 0x7e
        __asm _emit 0x08
        push eax
        ; Exact mapped bytes E8 78 FA 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x1002f6c3
        __asm _emit 0xeb
        __asm _emit 0x19
        push ebp
        ; Exact mapped bytes E8 70 FA 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 354h]
        mov eax, dword ptr [esi + edx*4 + 308h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [esi + 350h], ebp
        ; Exact mapped bytes 76 55: jbe 0x1002f720
        __asm _emit 0x76
        __asm _emit 0x55
        cmp dword ptr [esi + 354h], -1
        ; Exact mapped bytes 75 4C: jne 0x1002f720
        __asm _emit 0x75
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 308h]
        mov eax, dword ptr [ecx + 28h]
        add eax, 2
        cmp eax, 100h
        ; Exact mapped bytes 7D 11: jge 0x1002f6f8
        __asm _emit 0x7d
        __asm _emit 0x11
        push eax
        ; Exact mapped bytes E8 33 FA 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        dec dword ptr [esi + 350h]
        ; Exact mapped bytes E9 BD 03 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        ; Exact mapped bytes E8 1E FA 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 354h]
        mov dword ptr [esi + 34ch], ebp
        inc eax
        mov dword ptr [esi + 350h], ebp
        mov dword ptr [esi + 354h], eax
        ; Exact mapped bytes E9 95 03 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 354h]
        mov ecx, dword ptr [esi + eax*4 + 30ch]
        mov eax, dword ptr [ecx + 28h]
        add eax, 0ah
        cmp eax, 100h
        ; Exact mapped bytes 7D 0B: jge 0x1002f745
        __asm _emit 0x7d
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes E8 E0 F9 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 70 03 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        ; Exact mapped bytes E8 D1 F9 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 354h]
        mov dword ptr [esi + 34ch], ebp
        inc eax
        mov dword ptr [esi + 354h], eax
        ; Exact mapped bytes E9 4E 03 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 58h]
        mov edi, dword ptr [esi + 28h]
        cmp edx, edi
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x1002f80c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 26: jle 0x1002f79d
        __asm _emit 0x7e
        __asm _emit 0x26
        mov ecx, edx
        sub ecx, edi
        cmp ecx, 24h
        ; Exact mapped bytes 7F 0D: jg 0x1002f78d
        __asm _emit 0x7f
        __asm _emit 0x0d
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 98 F9 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 28 03 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, 24h
        mov ecx, esi
        push edi
        ; Exact mapped bytes E8 88 F9 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 18 03 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        sub eax, edx
        cmp eax, 24h
        ; Exact mapped bytes 7F 03: jg 0x1002f7a9
        __asm _emit 0x7f
        __asm _emit 0x03
        push edx
        ; Exact mapped bytes EB 04: jmp 0x1002f7ad
        __asm _emit 0xeb
        __asm _emit 0x04
        add edi, -24h
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 6C F9 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 0a00ch], 11h
        ; Exact mapped bytes 0F 86 F4 02 00 00: jbe 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 98h], ebp
        ; Exact mapped bytes 0F 85 E8 02 00 00: jne 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        xor ebx, ebx
        cmp eax, ebp
        ; Exact mapped bytes 0F 8E D8 02 00 00: jle 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 0b0h]
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 28h]
        cmp eax, 24h
        ; Exact mapped bytes 7F 03: jg 0x1002f7f0
        __asm _emit 0x7f
        __asm _emit 0x03
        push ebp
        ; Exact mapped bytes EB 04: jmp 0x1002f7f4
        __asm _emit 0xeb
        __asm _emit 0x04
        add eax, -24h
        push eax
        ; Exact mapped bytes E8 27 F9 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        inc ebx
        add edi, 4
        cmp ebx, eax
        ; Exact mapped bytes 7C DC: jl 0x1002f7e3
        __asm _emit 0x7c
        __asm _emit 0xdc
        ; Exact mapped bytes E9 A9 02 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 D6 01 00 00: jne 0x1002f9ed
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a00ch]
        cmp ecx, 8
        ; Exact mapped bytes 73 66: jae 0x1002f888
        __asm _emit 0x73
        __asm _emit 0x66
        mov edx, dword ptr [esi + 0a028h]
        cmp edx, ebp
        ; Exact mapped bytes 75 50: jne 0x1002f87c
        __asm _emit 0x75
        __asm _emit 0x50
        mov edx, dword ptr [esi + 64h]
        inc edx
        mov dword ptr [esi + 64h], edx
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x1002f840
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        ; Exact mapped bytes 74 2E: je 0x1002f870
        __asm _emit 0x74
        __asm _emit 0x2e
        and eax, 0e1fdh
        mov dword ptr [esi + 0a028h], 56h
        or ah, 1
        add ecx, 4
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0a00ch], ecx
        mov dword ptr [esi + 28h], 100h
        mov dword ptr [esi + 58h], ebp
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x1002f9ca
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 19 F8 FF FF: call 0x1002f090
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x1002f9ca
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec edx
        mov dword ptr [esi + 0a028h], edx
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x1002f9ca
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e7ffh
        or eax, 702h
        cmp ecx, 8
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x1002f9bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e1ffh
        or ebp, 0ffffffffh
        or ah, 1
        xor edi, edi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ach]
        test eax, eax
        ; Exact mapped bytes 0F 8E 8A 00 00 00: jle 0x1002f948
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 1
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 6
        idiv ecx
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x1002f8d9
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edx, ebp
        ; Exact mapped bytes 74 04: je 0x1002f8dd
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, edx
        xor ebx, ebx
        ; Exact mapped bytes A1 AC 57 1C 10: mov eax, dword ptr [0x101c57ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x1002f8fd
        __asm _emit 0x7e
        __asm _emit 0x13
        test edx, edx
        ; Exact mapped bytes 7C 0F: jl 0x1002f8fd
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1002f8fd
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x1002f8ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + edi*4 + 0b0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1002f935
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        test ebx, ebx
        ; Exact mapped bytes 75 8A: jne 0x1002f8c3
        __asm _emit 0x75
        __asm _emit 0x8a
        mov eax, dword ptr [esi + 0ach]
        inc edi
        cmp edi, eax
        ; Exact mapped bytes 0F 8C 76 FF FF FF: jl 0x1002f8be
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esi + 0a00ch]
        xor edi, edi
        inc ebp
        push 0d4h
        mov dword ptr [esi + 28h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 0a00ch], ebp
        ; Exact mapped bytes E8 35 CE 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xce
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        cmp eax, edi
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 74 1B: je 0x1002f995
        __asm _emit 0x74
        __asm _emit 0x1b
        push 2af8h
        push 258h
        push 320h
        push edi
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8D FD 08 00: call 0x100bf720
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1002f997
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov dword ptr [esp + 1ch], 0ffffffffh
        mov dword ptr [esi + 0a07ch], eax
        ; Exact mapped bytes E8 54 0B 09 00: call 0x100c0500
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a07ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        xor ebp, ebp
        ; Exact mapped bytes EB 0F: jmp 0x1002f9ca
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp ecx, 14h
        ; Exact mapped bytes 75 0A: jne 0x1002f9ca
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esi + 0a00ch], 15h
        cmp dword ptr [esi + 0a00ch], 5
        ; Exact mapped bytes 0F 86 DE 00 00 00: jbe 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2c4h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x1002fab5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 54h], ebp
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x1002fab5
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x1002fa9b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        and eax, 0e8fch
        or ah, 8
        cmp ecx, ebp
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 74 09: je 0x1002fa14
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 70h], ebp
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40000000h
        ; Exact mapped bytes E8 3C D2 08 00: call 0x100bcc60
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [eax + 50h], ebp
        mov dword ptr [eax + 54h], 226h
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 220000h
        ; Exact mapped bytes E8 C2 C6 08 00: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 20000h
        ; Exact mapped bytes E8 97 7D 08 00: call 0x100b7800
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 6C 82 08 00: call 0x100b7ce0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 0ch], ebp
        ; Exact mapped bytes 75 2C: jne 0x1002fab5
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp dword ptr [eax + 1ch], ebp
        ; Exact mapped bytes 75 27: jne 0x1002fab5
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 30 57 1C 10: mov ecx, dword ptr [0x101c5730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 1A: jmp 0x1002fab5
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 66 81 F9 00 0E: cmp cx, 0xe00
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x0e
        ; Exact mapped bytes 75 13: jne 0x1002fab5
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C3 C6 13 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc6
        __asm _emit 0x13
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cmp dword ptr [esi + 68h], ebp
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x1002fb65
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a00ch]
        cmp eax, 8
        ; Exact mapped bytes 76 4F: jbe 0x1002fb18
        __asm _emit 0x76
        __asm _emit 0x4f
        cmp eax, 16h
        ; Exact mapped bytes 73 4A: jae 0x1002fb18
        __asm _emit 0x73
        __asm _emit 0x4a
        mov eax, dword ptr [esi + 0a4h]
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x1002fb18
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [esi + 0ach]
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 7E 34: jle 0x1002fb18
        __asm _emit 0x7e
        __asm _emit 0x34
        lea edi, [esi + 0b0h]
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [edi + 80h]
        mov ebp, eax
        mov edx, dword ptr [ecx + 28h]
        sub ebp, edx
        cmp ebp, 4
        ; Exact mapped bytes 7F 03: jg 0x1002fb01
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x1002fb05
        __asm _emit 0xeb
        __asm _emit 0x04
        add edx, 4
        push edx
        ; Exact mapped bytes E8 16 F6 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        inc ebx
        add edi, 4
        cmp ebx, eax
        ; Exact mapped bytes 7C D2: jl 0x1002faea
        __asm _emit 0x7c
        __asm _emit 0xd2
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 1f00h
        cmp ecx, 500h
        ; Exact mapped bytes 74 27: je 0x1002fb51
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [esi + 98h]
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x1002fb51
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [esi + 0a00ch], 15h
        ; Exact mapped bytes 72 09: jb 0x1002fb46
        __asm _emit 0x72
        __asm _emit 0x09
        mov edx, dword ptr [esi + 0a0h]
        push edx
        ; Exact mapped bytes EB 02: jmp 0x1002fb48
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        push 3
        mov ecx, esi
        ; Exact mapped bytes E8 AF 02 00 00: call 0x1002fe00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0a00ch], 15h
        ; Exact mapped bytes 72 0B: jb 0x1002fb65
        __asm _emit 0x72
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 FB 57 02 00: call 0x10055360
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        mov eax, 40000000h
        pop ebp
        cmp ecx, eax
        pop ebx
        ; Exact mapped bytes 75 4E: jne 0x1002fbc4
        __asm _emit 0x75
        __asm _emit 0x4e
        cmp dword ptr [esi + 94h], eax
        ; Exact mapped bytes 75 46: jne 0x1002fbc4
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 90h]
        inc ecx
        mov dword ptr [esi + 90h], ecx
        mov edx, ecx
        mov ecx, dword ptr [esi + 7ch]
        test ecx, ecx
        ; Exact mapped bytes 74 30: je 0x1002fbc4
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, edx
        mov edi, dword ptr [ecx]
        neg eax
        shl eax, 2
        sub eax, edx
        lea eax, [eax + eax*4]
        shl eax, 2
        push eax
        ; Exact mapped bytes FF 57 0C: call dword ptr [edi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x0c
        cmp dword ptr [esi + 90h], 50h
        ; Exact mapped bytes 7C 12: jl 0x1002fbc4
        __asm _emit 0x7c
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [esi + 94h], 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 2B: je 0x1002fbf6
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 1C: je 0x1002fbf1
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1002fbcb
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
