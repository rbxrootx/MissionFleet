// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503019 .. +0x35C bytes.
extern "C" __declspec(naked) void FUN_00503019_00503019() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 4], eax
        push 340h
        push 5c6db0h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 28 81 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 20bh
        ; Exact mapped bytes 7F 6B: jg 0x5030b8
        __asm _emit 0x7f
        __asm _emit 0x6b
        cmp dword ptr [ebp - 54h], 20bh
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x503151
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 12dh
        ; Exact mapped bytes 7F 36: jg 0x503099
        __asm _emit 0x7f
        __asm _emit 0x36
        cmp dword ptr [ebp - 54h], 12dh
        ; Exact mapped bytes 0F 84 2C 02 00 00: je 0x50329c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 1eh
        ; Exact mapped bytes 0F 84 CC 01 00 00: je 0x503246
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 103h
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x503115
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 127h
        ; Exact mapped bytes 0F 84 C2 01 00 00: je 0x503256
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BB 02 00 00: jmp 0x503354
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 201h
        ; Exact mapped bytes 0F 84 C8 01 00 00: je 0x50326e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 209h
        ; Exact mapped bytes 0F 84 D2 01 00 00: je 0x503285
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9C 02 00 00: jmp 0x503354
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 211h
        ; Exact mapped bytes 7F 35: jg 0x5030f6
        __asm _emit 0x7f
        __asm _emit 0x35
        cmp dword ptr [ebp - 54h], 211h
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x503222
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 20ch
        ; Exact mapped bytes 74 56: je 0x50312d
        __asm _emit 0x74
        __asm _emit 0x56
        cmp dword ptr [ebp - 54h], 20dh
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x503196
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 20eh
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x503172
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5E 02 00 00: jmp 0x503354
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 410h
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x5031ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 412h
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x5031ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3F 02 00 00: jmp 0x503354
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 51 06: movsx edx, word ptr [ecx + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x06
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        ; Exact mapped bytes E9 3D 02 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 48 06: movsx ecx, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x06
        push ecx
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 42 08: movsx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes E9 19 02 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 51 06: movsx edx, word ptr [ecx + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x06
        push edx
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 48 08: movsx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 EB FF FF: call 0x501ce5
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F8 01 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 48 06: movsx ecx, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x06
        push ecx
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 42 08: movsx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        ; Exact mapped bytes E9 D4 01 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 51 06: movsx edx, word ptr [ecx + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x06
        push edx
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 48 08: movsx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 40: call dword ptr [edx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x40
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 48 06: movsx ecx, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x06
        push ecx
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 42 08: movsx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 51 0A: movsx edx, word ptr [ecx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x0a
        push edx
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        push ecx
        lea edx, [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 54: call dword ptr [edx + 0x54]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x54
        ; Exact mapped bytes E9 7C 01 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 48 06: movsx ecx, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x06
        push ecx
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 42 08: movsx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 51 0A: movsx edx, word ptr [ecx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x0a
        push edx
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        push ecx
        lea edx, [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 4C: call dword ptr [edx + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x4c
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 48 06: movsx ecx, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x06
        push ecx
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 42 08: movsx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 44: call dword ptr [eax + 0x44]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x44
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 48 06: movsx ecx, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x06
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 6]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 6]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 38: call dword ptr [eax + 0x38]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x38
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x50336a
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx*4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 6C 21 5E 00: call dword ptr [0x5e216c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 76: jne 0x503337
        __asm _emit 0x75
        __asm _emit 0x76
        push 0dh
        ; Exact mapped bytes FF 15 64 21 5E 00: call dword ptr [0x5e2164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 17: jne 0x503313
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 06 39 03 00: call 0x536c0b
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        ; Exact mapped bytes EB 57: jmp 0x50336a
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x503354
        __asm _emit 0xeb
        __asm _emit 0x1d
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 75 17: jne 0x503354
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C5 38 03 00: call 0x536c0b
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        ; Exact mapped bytes EB 16: jmp 0x50336a
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 F4 20 5E 00: call dword ptr [0x5e20f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
