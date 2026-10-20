// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58582EA0 .. +0xB55 bytes.
extern "C" __declspec(naked) void FUN_58582ea0_58582EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0cch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 88h], ecx
        mov eax, dword ptr [ebp - 88h]
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
        ; Exact mapped bytes 0F 84 AD 0A 00 00: je 0x58583984
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 40 1D 00: call 0x58756f80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x40
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 38: je 0x58582f27
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 88h]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 7E 17: jle 0x58582f12
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 7ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 7ch], eax
        ; Exact mapped bytes EB 15: jmp 0x58582f27
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x58582f27
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 95 2A 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x95
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 8C 75 94 58 00: cmp dword ptr [0x5894758c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 77 0D: ja 0x58582f3d
        __asm _emit 0x77
        __asm _emit 0x0d
        ; Exact mapped bytes 83 3D 88 75 94 58 00: cmp dword ptr [0x58947588], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 11 02 00 00: jbe 0x5858314e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 8C 75 94 58 00: cmp dword ptr [0x5894758c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 04 02 00 00: ja 0x5858314e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 10: jb 0x58582f5c
        __asm _emit 0x72
        __asm _emit 0x10
        ; Exact mapped bytes 81 3D 88 75 94 58 C0 27 09 00: cmp dword ptr [0x58947588], 0x927c0
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0xc0
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 F2 01 00 00: ja 0x5858314e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], 0ffffffffh
        push 0
        push 0ea60h
        ; Exact mapped bytes 8B 15 8C 75 94 58: mov edx, dword ptr [0x5894758c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 88 75 94 58: mov eax, dword ptr [0x58947588]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 91 EC 2A 00: call 0x58831c10
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x2a
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        mov dword ptr [ebp - 0c8h], edx
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 77 2B: ja 0x58582fbf
        __asm _emit 0x77
        __asm _emit 0x2b
        ; Exact mapped bytes 72 09: jb 0x58582f9f
        __asm _emit 0x72
        __asm _emit 0x09
        cmp dword ptr [ebp - 0cch], 28h
        ; Exact mapped bytes 73 20: jae 0x58582fbf
        __asm _emit 0x73
        __asm _emit 0x20
        push 0
        push 0ea60h
        ; Exact mapped bytes 8B 0D 8C 75 94 58: mov ecx, dword ptr [0x5894758c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 88 75 94 58: mov edx, dword ptr [0x58947588]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 E7 EB 2A 00: call 0x58831ba0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xeb
        __asm _emit 0x2a
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        cmp dword ptr [ebp - 90h], -1
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x5858314e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 90 75 94 58 00: cmp dword ptr [0x58947590], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x58583096
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 90h]
        push eax
        push 588aa878h
        ; Exact mapped bytes E8 06 F0 F9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1A: je 0x58583026
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0a0bec8h
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D D3 15 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd3
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x58583039
        __asm _emit 0xeb
        __asm _emit 0x13
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 18 06 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        push 588aa8a8h
        ; Exact mapped bytes E8 AD EF F9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1A: je 0x5858307e
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0a0bec8h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 D2 15 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd2
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x58583091
        __asm _emit 0xeb
        __asm _emit 0x13
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 17 06 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x5858314e
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 90h]
        push eax
        push 588aa8d8h
        ; Exact mapped bytes E8 49 EF F9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1A: je 0x585830e3
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0a0bec8h
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 D2 15 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd2
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x585830f6
        __asm _emit 0xeb
        __asm _emit 0x13
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 17 06 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        push 588aa904h
        ; Exact mapped bytes E8 F0 EE F9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1A: je 0x5858313b
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0a0bec8h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 D2 15 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd2
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5858314e
        __asm _emit 0xeb
        __asm _emit 0x13
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 17 06 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 8C 75 94 58 00: cmp dword ptr [0x5894758c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 77 09: ja 0x58583160
        __asm _emit 0x77
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 88 75 94 58 00: cmp dword ptr [0x58947588], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 76 1E: jbe 0x5858317e
        __asm _emit 0x76
        __asm _emit 0x1e
        ; Exact mapped bytes A1 88 75 94 58: mov eax, dword ptr [0x58947588]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        sub eax, 28h
        ; Exact mapped bytes 8B 0D 8C 75 94 58: mov ecx, dword ptr [0x5894758c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        sbb ecx, 0
        ; Exact mapped bytes A3 88 75 94 58: mov dword ptr [0x58947588], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D 8C 75 94 58: mov dword ptr [0x5894758c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes EB 0B: jmp 0x58583189
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 05 88 75 94 58: movlpd qword ptr [0x58947588], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D E8 90 94 58 00: cmp dword ptr [0x589490e8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x585831a1
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 15 E8 90 94 58: mov edx, dword ptr [0x589490e8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        add edx, 1
        ; Exact mapped bytes 89 15 E8 90 94 58: mov dword ptr [0x589490e8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 34 7A 94 58 00: cmp dword ptr [0x58947a34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x7a
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x58583281
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x5858326c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 2C 7C 94 58 00: cmp dword ptr [0x58947c2c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 40: je 0x58583207
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 1E F7 FF: call 0x584f5020
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1e
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x58583207
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes E8 15 40 F5 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        push 0
        push 0
        push 0
        push 131h
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 79 5B F5 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5b
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C C3 F1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc3
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 47: jmp 0x5858324e
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes 83 3D 2C 7C 94 58 00: cmp dword ptr [0x58947c2c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3E: je 0x5858324e
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 25 F7 FF: call 0x584f5760
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x25
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x5858324e
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes E8 CC 3F F5 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        push 0
        push 0
        push 0
        push 131h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 30 5B F5 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5b
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 C3 F1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc3
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E8 19 DA 2C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xda
        __asm _emit 0x2c
        __asm _emit 0x00
        cdq
        mov ecx, 0c8h
        idiv ecx
        add edx, 0fah
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [eax + 74h], edx
        ; Exact mapped bytes EB 15: jmp 0x58583281
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 74h]
        sub edx, 1
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [eax + 74h], edx
        mov ecx, dword ptr [ebp - 88h]
        cmp dword ptr [ecx + 60h], 40000000h
        ; Exact mapped bytes 0F 85 17 01 00 00: jne 0x585833ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x585833ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 C9 F2 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc9
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x585833ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 81 17 F0 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 0ach], edx
        push 1
        push 66h
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 54 FF FF FF: call dword ptr [ebp - 0xac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 5F F3 FF: call 0x584b9280
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 7A: jne 0x58583379
        __asm _emit 0x75
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 C8 F1 FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc8
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 30: je 0x5858333f
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes E8 DC 3E F5 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        push 0
        push 0
        push 0
        push 0c8h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 40 5A F5 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 6ch], 2
        ; Exact mapped bytes EB 2E: jmp 0x5858336d
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes E8 AC 3E F5 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        push 0
        push 0
        push 0
        push 0cah
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 10 5A F5 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x5a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 6ch], 1
        ; Exact mapped bytes E8 7E 3E F5 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes A3 EC 90 94 58: mov dword ptr [0x589490ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes EB 17: jmp 0x58583390
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A F8 F9 FF: call 0x58522bb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes A1 04 06 96 58: mov eax, dword ptr [0x58960604]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 EC 90 94 58: mov dword ptr [0x589490ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 60h], 0
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 36 2A F0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x2a
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 61: je 0x58583415
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 C8 F2 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc8
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 52: jne 0x58583415
        __asm _emit 0x75
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 88h]
        cmp dword ptr [edx + 60h], 40000000h
        ; Exact mapped bytes 75 43: jne 0x58583415
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes A1 B8 56 90 58: mov eax, dword ptr [0x589056b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        xor edx, edx
        mov ecx, 32h
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 0C: jne 0x585833f0
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 B8 FE FF: call 0x5856ebf0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 81 3D B8 56 90 58 A0 86 01 00: cmp dword ptr [0x589056b8], 0x186a0
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xa0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 76 0A: jbe 0x58583406
        __asm _emit 0x76
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 B8 56 90 58 01 00 00 00: mov dword ptr [0x589056b8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B8 56 90 58: mov edx, dword ptr [0x589056b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        add edx, 1
        ; Exact mapped bytes 89 15 B8 56 90 58: mov dword ptr [0x589056b8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 0F 84 E1 02 00 00: je 0x58583706
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 5E F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5e
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 06 02 00 00: jne 0x58583642
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 06 96 58 00: cmp dword ptr [0x58960634], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 39: je 0x5858347e
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 5E F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x5e
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 26: jne 0x5858347e
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes A1 34 06 96 58: mov eax, dword ptr [0x58960634]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 83 3D 78 75 94 58 00: cmp dword ptr [0x58947578], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x585834ae
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 5D F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x5d
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 14: jne 0x585834ae
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 78 75 94 58: mov edx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes 83 3D 3C 06 96 58 00: cmp dword ptr [0x5896063c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x585834de
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 5D F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x5d
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 14: jne 0x585834de
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 83 3D 0C 06 96 58 00: cmp dword ptr [0x5896060c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x5858350e
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 5D F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x5d
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 14: jne 0x5858350e
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 0C 06 96 58: mov edx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes 83 3D 2C 06 96 58 00: cmp dword ptr [0x5896062c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x5858353e
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 5D F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5d
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 14: jne 0x5858353e
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 83 3D 10 06 96 58 00: cmp dword ptr [0x58960610], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x585835dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        cmp dword ptr [ecx + 6ch], 2
        ; Exact mapped bytes 75 54: jne 0x585835ab
        __asm _emit 0x75
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 5C F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 75 13: jne 0x5858357d
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 5C F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 4
        ; Exact mapped bytes 74 2C: je 0x585835a9
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 16 06 00: call 0x585e4bc0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 04 00 00: call 0x58583a20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x585835dd
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 5C F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 1F: jne 0x585835dd
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 15 10 06 96 58: mov edx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 15 06 00: call 0x585e4bc0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 28 06 96 58 00: cmp dword ptr [0x58960628], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x5858360d
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 5C F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 14: jne 0x5858360d
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 83 3D 4C 06 96 58 00: cmp dword ptr [0x5896064c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x5858363d
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 5C F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 14: jne 0x5858363d
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 4C 06 96 58: mov edx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x58583706
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A9 3B F5 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x3b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 5C F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 5
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x58583706
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        cmp dword ptr [ecx + 6ch], 1
        ; Exact mapped bytes 75 1C: jne 0x58583682
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 6ch], 0
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 C0 44 89 58: call dword ptr [0x588944c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 7F: jmp 0x58583701
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 88h]
        cmp dword ptr [ecx + 6ch], 2
        ; Exact mapped bytes 75 73: jne 0x58583701
        __asm _emit 0x75
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x585836f3
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes A1 94 75 94 58: mov eax, dword ptr [0x58947594]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 27: je 0x585836df
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0b8h], eax
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 48 FF FF FF: call dword ptr [ebp - 0xb8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585836e9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
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
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes FF 15 C0 44 89 58: call dword ptr [0x588944c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 E2 02 00 00: jmp 0x585839e8
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 2F 13 F0 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x13
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        push 65h
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 40 FF FF FF: call dword ptr [ebp - 0xc0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 F2 12 F0 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x12
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp esi, dword ptr [eax]
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x58583831
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D EC 90 94 58 00: cmp dword ptr [0x589490ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x58583831
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 5A F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5a
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x5858380b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 06 96 58 00: cmp dword ptr [0x58960634], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 26: je 0x585837a9
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 5A F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5a
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 13: jne 0x585837a9
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes A1 34 06 96 58: mov eax, dword ptr [0x58960634]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 83 3D 78 75 94 58 00: cmp dword ptr [0x58947578], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x585837d9
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 5A F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5a
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 14: jne 0x585837d9
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 78 75 94 58: mov edx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes 83 3D 3C 06 96 58 00: cmp dword ptr [0x5896063c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x58583809
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 5A F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x5a
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 14: jne 0x58583809
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 26: jmp 0x58583831
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 5A F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x5a
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 13: jne 0x58583831
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 C0 44 89 58: call dword ptr [0x588944c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 B7 01 00 00: jmp 0x585839e8
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 79h
        ; Exact mapped bytes FF 15 A4 44 89 58: call dword ptr [0x588944a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 85 6C FF FF FF: mov word ptr [ebp - 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 94h]
        and eax, 1
        ; Exact mapped bytes 74 71: je 0x585838bd
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 04 06 96 58: cmp ecx, dword ptr [0x58960604]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 63: je 0x585838bd
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 59 F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x59
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 75 50: jne 0x585838bd
        __asm _emit 0x75
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D D0 20 96 58: mov ecx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 59 F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 16: jne 0x58583896
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D D0 20 96 58: mov ecx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D D0 20 96 58: mov ecx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 27: jmp 0x585838bd
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D D0 20 96 58: mov ecx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 59 F3 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x59
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 14: jne 0x585838bd
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 D0 20 96 58: mov edx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D D0 20 96 58: mov ecx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 1E: je 0x585838e7
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0D: ja 0x585838e7
        __asm _emit 0x77
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8ch], edx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58583984
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0C: ja 0x5858391d
        __asm _emit 0x77
        __asm _emit 0x0c
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB D9: jmp 0x585838f6
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E8 1C F1 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 18: jne 0x5858394d
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 39: jmp 0x58583984
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes EB 32: jmp 0x5858397f
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 B8 1C F1 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1c
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0c4h], ecx
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x585838f6
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 04 06 96 58: cmp ecx, dword ptr [0x58960604]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 27: je 0x585839b9
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 88h]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 75 1B: jne 0x585839b9
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 80h]
        add ecx, 1
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 80h], ecx
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 80h], 15f90h
        ; Exact mapped bytes 76 1D: jbe 0x585839e8
        __asm _emit 0x76
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 6ch], 2
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 5D D6 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd6
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
    }
}
