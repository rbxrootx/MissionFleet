// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58566990 .. +0x4CD bytes.
extern "C" __declspec(naked) void FUN_58566990_58566990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 A2 04 00 00: je 0x58566e58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 CB FF FF: call 0x58563500
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A C8 FF FF: call 0x58563210
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 C9 FF FF: call 0x58563340
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D D4 35 90 58 00: cmp dword ptr [0x589035d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x585669e1
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 D4 FF FF: call 0x58563e30
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 130h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 CC FF FF: call 0x58563650
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 8E F3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x8e
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3d8h], 0
        ; Exact mapped bytes 74 2B: je 0x58566a46
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d8h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        lea eax, [edx + eax*8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FB 8D F3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D D8 35 90 58 00: cmp dword ptr [0x589035d8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 7B 03 00 00: je 0x58566dce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 0F 8C 1D 02 00 00: jl 0x58566c7d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 14: je 0x58566a7d
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], ecx
        ; Exact mapped bytes E9 FB 01 00 00: jmp 0x58566c78
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 25ch], 1
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x58566ba1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 260h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 264h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 268h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 64h], 0
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x58566b9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A FF F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E3 DE F1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xde
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 ED F2 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xed
        __asm _emit 0xf2
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 FE F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C EF F2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xef
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 FE F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE EB F2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xeb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 ED F2 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xf2
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E FE F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B7 EE F2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xee
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 20h], esi
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 70 00 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 260h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 260h], edx
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x58566c78
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x58566c78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x58566c78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A FE F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F3 DD F1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xdd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 EC F2 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xec
        __asm _emit 0xf2
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 FD F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1C EE F2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xee
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 FD F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0E EB F2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 EC F2 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xf2
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E FD F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C7 ED F2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xed
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 28h], esi
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 49 6F 00 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x58566dce
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x58566dce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x58566dce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 25ch], 1
        ; Exact mapped bytes 0F 85 27 01 00 00: jne 0x58566dce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 260h], 0
        ; Exact mapped bytes 0F 86 17 01 00 00: jbe 0x58566dce
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 268h]
        mov dword ptr [ecx + 264h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 264h], 0
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x58566db9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC FC F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D5 DC F1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xdc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 EB F2 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xeb
        __asm _emit 0xf2
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 FC F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE EC F2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xec
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 FC F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 E9 F2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 EB F2 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xeb
        __asm _emit 0xf2
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 FC F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 EC F2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 30h], esi
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2B 6E 00 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 260h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 260h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 268h], 0
        ; Exact mapped bytes EB 15: jmp 0x58566dce
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 268h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 268h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58566def
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58566def
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x58566e58
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58566e12
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58566df8
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F6 E7 F2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58566e36
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x58566e58
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x58566e56
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D2 E7 F2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe7
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x58566df8
        __asm _emit 0xeb
        __asm _emit 0xa0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
    }
}
