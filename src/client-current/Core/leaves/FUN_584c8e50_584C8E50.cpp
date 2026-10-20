// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C8E50 .. +0xBFC bytes.
extern "C" __declspec(naked) void FUN_584c8e50_584C8E50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ef90h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 140h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 130h], -1
        ; Exact mapped bytes 75 72: jne 0x584c8efc
        __asm _emit 0x75
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0E DB FB FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdb
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 CA FC FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x584c8ecd
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 CA FC FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 1B: jne 0x584c8ecd
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 C9 FC FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 54 FE FF FF: call 0x584c8d20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x584c8ef0
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 64h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c8ef7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes E9 40 0B 00 00: jmp 0x584c9a3c
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 130h], 1
        ; Exact mapped bytes 0F 85 30 0B 00 00: jne 0x584c9a3c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 02: shr dx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 0F 84 86 0A 00 00: je 0x584c99ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 13ch], 0
        ; Exact mapped bytes 0F 85 57 01 00 00: jne 0x584c908d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 150h]
        cmp ecx, dword ptr [edx + eax + 154h]
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x584c9055
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6ch], edx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x584c8f72
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 7D 25: jge 0x584c8f9d
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 39 0D 90 20 96 58: cmp dword ptr [0x58962090], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x584c8f9b
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 18h]
        add edx, 2
        mov eax, dword ptr [ebp - 18h]
        add eax, 2
        imul edx, eax
        mov dword ptr [ebp - 6ch], edx
        ; Exact mapped bytes EB 02: jmp 0x584c8f9d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CC: jmp 0x584c8f69
        __asm _emit 0xeb
        __asm _emit 0xcc
        push 60h
        ; Exact mapped bytes E8 60 80 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x80
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 79: je 0x584c9030
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 74h], ecx
        push 1
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA BA FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC D9 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 178h]
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 8B 0D 10 07 96 58: mov ecx, dword ptr [0x58960710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], ecx
        push -1
        push 1b58h
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D5 45 0A 00: call 0x5856d600
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x45
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c9037
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 88h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 33: jmp 0x584c9088
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx + 150h]
        cmp edx, dword ptr [eax + ecx + 154h]
        ; Exact mapped bytes 7C 16: jl 0x584c9088
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 13ch], 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 49 FB FF FF: call 0x584c8bd0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0A 09 00 00: jmp 0x584c9997
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 13ch], 1
        ; Exact mapped bytes 0F 85 D4 08 00 00: jne 0x584c9971
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [ebp - 8ch], eax
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 87 C0 FE FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 90h], edx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 6B C0 FE FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 190h]
        ; Exact mapped bytes E8 DC B8 FB FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + ecx + 140h]
        ; Exact mapped bytes 75 5B: jne 0x584c915c
        __asm _emit 0x75
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 94h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 140h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 12 67 FD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 98h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 140h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 E5 66 FD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 0F 85 E7 01 00 00: jne 0x584c9353
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F B6 0D C5 05 96 58: movzx ecx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, -1
        ; Exact mapped bytes 74 1D: je 0x584c919c
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 0F B6 15 C5 05 96 58: movzx edx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx*4 + 589605ach]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 81 2B 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x81
        __asm _emit 0x2b
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 D8 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A2 2F FC FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 148h], eax
        ; Exact mapped bytes 74 6D: je 0x584c9226
        __asm _emit 0x74
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 198h], 0
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x584c931d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x584c931d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 5F 32 FC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 78 B8 FB FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 1
        ; Exact mapped bytes 0F 85 28 01 00 00: jne 0x584c931d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 63 B8 FB FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 33 32 FC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4C B8 FB FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0ach]
        cmp edx, dword ptr [eax + 0ach]
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x584c931d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 188h]
        ; Exact mapped bytes E8 5C C6 FC FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 42: jne 0x584c927d
        __asm _emit 0x75
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 188h]
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 126h]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 30 1F 2F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1f
        __asm _emit 0x2f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 188h]
        mov dword ptr [ebp - 0a0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 64 CC FB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 188h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx ecx, word ptr [ecx + 126h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 150h]
        sub eax, dword ptr [esi + edx + 154h]
        cdq
        mov esi, 19h
        idiv esi
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 C9 1E 2F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1e
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx + 150h]
        sub edx, dword ptr [eax + ecx + 154h]
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 128h]
        cmp edx, ecx
        ; Exact mapped bytes 7E 2A: jle 0x584c931b
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 134h], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 188h]
        mov dword ptr [ebp - 0a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 C6 CB FB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 36: jmp 0x584c9353
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 150h]
        sub eax, dword ptr [ecx + edx + 154h]
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 128h]
        cmp eax, edx
        ; Exact mapped bytes 7E 0D: jle 0x584c9353
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 134h], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 D6 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0ach], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0b0h], ecx
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 FB B0 0B 00: call 0x58584490
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 0C: je 0x584c93aa
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 0F 84 7A 03 00 00: je 0x584c9724
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12ch], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 12ch], 12h
        ; Exact mapped bytes 0F 8E 50 03 00 00: jle 0x584c971f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 13ch], 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 0b8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 98 CB FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 0bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 7C CB FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 134h], 1
        ; Exact mapped bytes 0F 85 DB 01 00 00: jne 0x584c9600
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 D8 7B 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7b
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 6A: je 0x584c94a9
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0c4h], eax
        push 0
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C B6 FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B D5 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        push 1770h
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 BC 1D 2F 00: call 0x587bb260
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1d
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584c94b0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0d0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 0d4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 D4 C0 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc0
        __asm _emit 0x2e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584c94f7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 6
        ; Exact mapped bytes 7D 25: jge 0x584c9522
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 39 05 90 20 96 58: cmp dword ptr [0x58962090], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x584c9520
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 2
        mov edx, dword ptr [ebp - 1ch]
        add edx, 2
        imul ecx, edx
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 02: jmp 0x584c9522
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CC: jmp 0x584c94ee
        __asm _emit 0xeb
        __asm _emit 0xcc
        push 60h
        ; Exact mapped bytes E8 DB 7A 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7a
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x584c95d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0dch], eax
        push 7
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B B5 FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A D4 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 0e8h], edx
        ; Exact mapped bytes A1 10 07 96 58: mov eax, dword ptr [0x58960710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 1b58h
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 2D 40 0A 00: call 0x5856d600
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c95df
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0f0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x584c96df
        __asm _emit 0xe9
        __asm _emit 0xdf
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
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x584c96df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
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
        ; Exact mapped bytes E8 C8 D3 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A1 B3 FB FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 C2 FC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc2
        __asm _emit 0xfc
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
        ; Exact mapped bytes E8 A1 D3 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA C3 FC FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 D3 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B9 C0 FC FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C C2 FC FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0xfc
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
        ; Exact mapped bytes E8 49 D3 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 72 C3 FC FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 13ch], esi
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18ch]
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 E2 44 0A 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 134h], 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 188h]
        ; Exact mapped bytes E8 96 C1 FC FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 1D: jne 0x584c971f
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 188h]
        mov dword ptr [ebp - 0f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 C2 C7 FB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc7
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4B 02 00 00: jmp 0x584c996f
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 134h], 1
        ; Exact mapped bytes 0F 85 3B 02 00 00: jne 0x584c996f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A2 C7 FB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 13ch], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [ebp - 0fch], eax
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 29 C8 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 100h], edx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 0D C8 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 79 78 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 6A: je 0x584c9808
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 104h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 108h], eax
        push 0
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D B3 FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C D2 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        push 1770h
        mov ecx, dword ptr [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 5D 1A 2F 00: call 0x587bb260
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x1a
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c980f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 114h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 118h], eax
        push 101h
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 75 BD 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xbd
        __asm _emit 0x2e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 54h], ecx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x584c9856
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 6
        ; Exact mapped bytes 7D 25: jge 0x584c9881
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 20h]
        imul eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 39 05 90 20 96 58: cmp dword ptr [0x58962090], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x584c987f
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 2
        mov edx, dword ptr [ebp - 20h]
        add edx, 2
        imul ecx, edx
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes EB 02: jmp 0x584c9881
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CC: jmp 0x584c984d
        __asm _emit 0xeb
        __asm _emit 0xcc
        push 60h
        ; Exact mapped bytes E8 7C 77 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x77
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x584c9937
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 11ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 120h], eax
        push 7
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C B2 FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B D1 FB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 12ch], edx
        ; Exact mapped bytes A1 10 07 96 58: mov eax, dword ptr [0x58960710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        push 1b58h
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov edx, dword ptr [ebp - 128h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 CE 3C 0A 00: call 0x5856d600
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584c993e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 134h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EE F3 FF FF: call 0x584c8d50
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 134h], 0
        ; Exact mapped bytes EB 26: jmp 0x584c9997
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 13ch], 2
        ; Exact mapped bytes 75 1A: jne 0x584c9997
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 130h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 13ch], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 150h]
        add eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 150h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584c99cd
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584c99cd
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 60: je 0x584c9a3c
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x584c99f0
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB E6: jmp 0x584c99d6
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 18 BC FC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584c9a14
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x584c9a3c
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x584c9a3a
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F4 BB FC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 138h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 9A: jmp 0x584c99d6
        __asm _emit 0xeb
        __asm _emit 0x9a
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
    }
}
