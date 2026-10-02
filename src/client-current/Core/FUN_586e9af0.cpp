// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E9AF0 .. +0xB4A bytes.
extern "C" __declspec(naked) void FUN_586e9af0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 81 EC 14 01 00 00: sub esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4D A8: mov dword ptr [ebp - 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 01 0B 00 00: je 0x586ea622
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 83 FA 02: cmp edx, 2
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 51 0A 00 00: jne 0x586ea58d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 4D A0: mov dword ptr [ebp - 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes 81 7D A0 01 02 00 00: cmp dword ptr [ebp - 0x60], 0x201
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 28: ja 0x586e9b76
        __asm _emit 0x77
        __asm _emit 0x28
        ; Exact mapped bytes 81 7D A0 01 02 00 00: cmp dword ptr [ebp - 0x60], 0x201
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 3E: je 0x586e9b95
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 81 7D A0 00 01 00 00: cmp dword ptr [ebp - 0x60], 0x100
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CA 09 00 00: je 0x586ea52e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 7D A0 00 02 00 00: cmp dword ptr [ebp - 0x60], 0x200
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CA 03 00 00: je 0x586e9f3b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 17 0A 00 00: jmp 0x586ea58d
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 7D A0 02 02 00 00: cmp dword ptr [ebp - 0x60], 0x202
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A9 03 00 00: je 0x586e9f2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 7D A0 0A 02 00 00: cmp dword ptr [ebp - 0x60], 0x20a
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xa0
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 4F 09 00 00: je 0x586ea4df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F8 09 00 00: jmp 0x586ea58d
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 8A E8 00 00 00: mov ecx, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1D CE D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xce
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 CE D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xce
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 8F AD 00 00 00: jg 0x586e9c65
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 E8 00 00 00: mov ecx, dword ptr [eax + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 2C FF FF FF: mov dword ptr [ebp - 0xd4], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE CD D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xcd
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 8A E8 00 00 00: mov ecx, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DE CD D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xcd
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 45 DC: lea eax, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 2C FF FF FF: mov ecx, dword ptr [ebp - 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 1D AB DD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xab
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 03 78 08: add edi, dword ptr [eax + 8]
        __asm _emit 0x03
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 3B FE: cmp edi, esi
        __asm _emit 0x3b
        __asm _emit 0xfe
        ; Exact mapped bytes 7C 6B: jl 0x586e9c65
        __asm _emit 0x7c
        __asm _emit 0x6b
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 89 E8 00 00 00: mov ecx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A8 24 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 24 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 7F 4C: jg 0x586e9c65
        __asm _emit 0x7f
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 E8 00 00 00: mov eax, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 28 FF FF FF: mov dword ptr [ebp - 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 24 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 89 E8 00 00 00: mov ecx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6D 24 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 55 CC: lea edx, [ebp - 0x34]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xcc
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 28 FF FF FF: mov ecx, dword ptr [ebp - 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 BC AA DD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xaa
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 03 78 0C: add edi, dword ptr [eax + 0xc]
        __asm _emit 0x03
        __asm _emit 0x78
        __asm _emit 0x0c
        ; Exact mapped bytes 3B FE: cmp edi, esi
        __asm _emit 0x3b
        __asm _emit 0xfe
        ; Exact mapped bytes 7C 0A: jl 0x586e9c65
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes C6 80 F0 00 00 00 01: mov byte ptr [eax + 0xf0], 1
        __asm _emit 0xc6
        __asm _emit 0x80
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 CD D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xcd
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 39 81 F4 00 00 00: cmp dword ptr [ecx + 0xf4], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8F A8 02 00 00: jg 0x586e9f27
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 CD D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xcd
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 39 82 FC 00 00 00: cmp dword ptr [edx + 0xfc], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 8E 02 00 00: jl 0x586e9f27
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 24 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 39 81 F8 00 00 00: cmp dword ptr [ecx + 0xf8], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8F 74 02 00 00: jg 0x586e9f27
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 23 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x23
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 39 82 00 01 00 00: cmp dword ptr [edx + 0x100], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 5A 02 00 00: jl 0x586e9f27
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 28 01 00 00: mov ecx, dword ptr [eax + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 6B 84 8A 1C 01 00 00 0A: imul eax, dword ptr [edx + ecx*4 + 0x11c], 0xa
        __asm _emit 0x6b
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 64 00 00 00: mov ecx, 0x64
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 89 45 9C: mov dword ptr [ebp - 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 18 01 00 00: mov eax, dword ptr [edx + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 9C: mov ecx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes 8D 54 01 0F: lea edx, [ecx + eax + 0xf]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x0f
        ; Exact mapped bytes 89 55 90: mov dword ptr [ebp - 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x90
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 28 01 00 00: mov ecx, dword ptr [eax + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 84 8A 1C 01 00 00: mov eax, dword ptr [edx + ecx*4 + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 0F: sub eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x0f
        ; Exact mapped bytes 89 45 94: mov dword ptr [ebp - 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 23 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 89 E8 00 00 00: mov ecx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7D 23 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x23
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 8D A7 00 00 00: jge 0x586e9de2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 18 01 00 00: mov eax, dword ptr [edx + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 45 9C: sub eax, dword ptr [ebp - 0x64]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 89 81 18 01 00 00: mov dword ptr [ecx + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 83 BA 18 01 00 00 00: cmp dword ptr [edx + 0x118], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 36: jle 0x586e9d92
        __asm _emit 0x7e
        __asm _emit 0x36
        ; Exact mapped bytes F3 0F 2A 45 94: cvtsi2ss xmm0, dword ptr [ebp - 0x6c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes F3 0F 10 0D B4 31 8B 58: movss xmm1, dword ptr [0x588b31b4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E C8: divss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 2A 45 9C: cvtsi2ss xmm0, dword ptr [ebp - 0x64]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes F3 0F 59 C8: mulss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 10 80 EC 00 00 00: movss xmm0, dword ptr [eax + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 5C C1: subss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 11 81 EC 00 00 00: movss dword ptr [ecx + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4B: jmp 0x586e9ddd
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 83 BA 18 01 00 00 00: cmp dword ptr [edx + 0x118], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 3F: jg 0x586e9ddd
        __asm _emit 0x7f
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes C7 80 18 01 00 00 00 00 00 00: mov dword ptr [eax + 0x118], 0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 91 E8 00 00 00: mov edx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 24 FF FF FF: mov dword ptr [ebp - 0xdc], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FE 00 00 00: push 0xfe
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 24 FF FF FF: mov ecx, dword ptr [ebp - 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 66 B9 0C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 10 05 B0 31 8B 58: movss xmm0, dword ptr [0x588b31b0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 80 EC 00 00 00: movss dword ptr [eax + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x586e9eee
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 91 E8 00 00 00: mov edx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 20 FF FF FF: mov dword ptr [ebp - 0xe0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 E8 00 00 00: mov ecx, dword ptr [eax + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B1 22 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x22
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 4D BC: lea ecx, [ebp - 0x44]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 20 FF FF FF: mov ecx, dword ptr [ebp - 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 00 A9 DD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa9
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 03 70 0C: add esi, dword ptr [eax + 0xc]
        __asm _emit 0x03
        __asm _emit 0x70
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 22 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 8E C8 00 00 00: jle 0x586e9eee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 28 01 00 00: mov eax, dword ptr [edx + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 94 81 1C 01 00 00: mov edx, dword ptr [ecx + eax*4 + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 55 90: cmp edx, dword ptr [ebp - 0x70]
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0x90
        ; Exact mapped bytes 7C 47: jl 0x586e9e85
        __asm _emit 0x7c
        __asm _emit 0x47
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 18 01 00 00: mov ecx, dword ptr [eax + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 4D 9C: add ecx, dword ptr [ebp - 0x64]
        __asm _emit 0x03
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 89 8A 18 01 00 00: mov dword ptr [edx + 0x118], ecx
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 2A 45 94: cvtsi2ss xmm0, dword ptr [ebp - 0x6c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes F3 0F 10 0D B4 31 8B 58: movss xmm1, dword ptr [0x588b31b4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E C8: divss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 2A 45 9C: cvtsi2ss xmm0, dword ptr [ebp - 0x64]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes F3 0F 59 C8: mulss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 58 88 EC 00 00 00: addss xmm1, dword ptr [eax + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 11 89 EC 00 00 00: movss dword ptr [ecx + 0xec], xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x89
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 69: jmp 0x586e9eee
        __asm _emit 0xeb
        __asm _emit 0x69
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 28 01 00 00: mov eax, dword ptr [edx + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 94 81 1C 01 00 00: mov edx, dword ptr [ecx + eax*4 + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 55 90: cmp edx, dword ptr [ebp - 0x70]
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0x90
        ; Exact mapped bytes 7D 51: jge 0x586e9eee
        __asm _emit 0x7d
        __asm _emit 0x51
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 28 01 00 00: mov ecx, dword ptr [eax + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 84 8A 1C 01 00 00: mov eax, dword ptr [edx + ecx*4 + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 0F: sub eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 89 81 18 01 00 00: mov dword ptr [ecx + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 E8 00 00 00: mov eax, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 1C FF FF FF: mov dword ptr [ebp - 0xe4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 13 02 00 00: push 0x213
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 1C FF FF FF: mov ecx, dword ptr [ebp - 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 55 B8 0C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 10 05 B8 31 8B 58: movss xmm0, dword ptr [0x588b31b8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 81 EC 00 00 00: movss dword ptr [ecx + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 E8 00 00 00: mov eax, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 68 FF FF FF: mov dword ptr [ebp - 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 2C 91 EC 00 00 00: cvttss2si edx, dword ptr [ecx + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 68 FF FF FF: mov ecx, dword ptr [ebp - 0x98]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 1C B8 0C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 28 01 00 00: mov ecx, dword ptr [eax + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E8 0A 16 00 00: call 0x586eb530
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E9 61 06 00 00: jmp 0x586ea58d
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes C6 82 F0 00 00 00 00: mov byte ptr [edx + 0xf0], 0
        __asm _emit 0xc6
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 52 06 00 00: jmp 0x586ea58d
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 0F B6 88 F0 00 00 00: movzx ecx, byte ptr [eax + 0xf0]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 01: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 6D 05 00 00: jne 0x586ea4bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 8A E8 00 00 00: mov ecx, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 64 CA D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xca
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 CA D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xca
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 8F A8 00 00 00: jg 0x586ea019
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 E8 00 00 00: mov ecx, dword ptr [eax + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 64 FF FF FF: mov dword ptr [ebp - 0x9c], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 CA D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xca
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 8A E8 00 00 00: mov ecx, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 25 CA D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xca
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 45 AC: lea eax, [ebp - 0x54]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 64 FF FF FF: mov ecx, dword ptr [ebp - 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 64 A7 DD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa7
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 03 78 08: add edi, dword ptr [eax + 8]
        __asm _emit 0x03
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 3B FE: cmp edi, esi
        __asm _emit 0x3b
        __asm _emit 0xfe
        ; Exact mapped bytes 7C 66: jl 0x586ea019
        __asm _emit 0x7c
        __asm _emit 0x66
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 89 E8 00 00 00: mov ecx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EF 20 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 20 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 7F 47: jg 0x586ea019
        __asm _emit 0x7f
        __asm _emit 0x47
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 E8 00 00 00: mov eax, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 60 FF FF FF: mov dword ptr [ebp - 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 20 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 89 E8 00 00 00: mov ecx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 20 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 55 EC: lea edx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 60 FF FF FF: mov ecx, dword ptr [ebp - 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 03 A7 DD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa7
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 03 78 0C: add edi, dword ptr [eax + 0xc]
        __asm _emit 0x03
        __asm _emit 0x78
        __asm _emit 0x0c
        ; Exact mapped bytes 3B FE: cmp edi, esi
        __asm _emit 0x3b
        __asm _emit 0xfe
        ; Exact mapped bytes 7C 05: jl 0x586ea019
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 74 05 00 00: jmp 0x586ea58d
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 20 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 39 81 08 01 00 00: cmp dword ptr [ecx + 0x108], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E EF 01 00 00: jle 0x586ea222
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 83 BA 18 01 00 00 00: cmp dword ptr [edx + 0x118], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 DA 01 00 00: je 0x586ea21d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 20 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 91 08 01 00 00: mov edx, dword ptr [ecx + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes F3 0F 2A C2: cvtsi2ss xmm0, edx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        ; Exact mapped bytes F3 0F 11 85 58 FF FF FF: movss dword ptr [ebp - 0xa8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 10 80 EC 00 00 00: movss xmm0, dword ptr [eax + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 11 85 5C FF FF FF: movss dword ptr [ebp - 0xa4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 85 5C FF FF FF: movss xmm0, dword ptr [ebp - 0xa4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 5C 85 58 FF FF FF: subss xmm0, dword ptr [ebp - 0xa8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 11 81 EC 00 00 00: movss dword ptr [ecx + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 28 01 00 00: mov eax, dword ptr [edx + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 94 81 1C 01 00 00: mov edx, dword ptr [ecx + eax*4 + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EA 0F: sub edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x0f
        ; Exact mapped bytes 89 95 54 FF FF FF: mov dword ptr [ebp - 0xac], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 2A 85 54 FF FF FF: cvtsi2ss xmm0, dword ptr [ebp - 0xac]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 0D B4 31 8B 58: movss xmm1, dword ptr [0x588b31b4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E C8: divss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 11 4D 80: movss dword ptr [ebp - 0x80], xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4d
        __asm _emit 0x80
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 1F DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1f
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 91 08 01 00 00: mov edx, dword ptr [ecx + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 89 95 4C FF FF FF: mov dword ptr [ebp - 0xb4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 0C 01 00 00: mov ecx, dword ptr [eax + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 50 FF FF FF: mov dword ptr [ebp - 0xb0], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 50 FF FF FF: mov edx, dword ptr [ebp - 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 95 4C FF FF FF: add edx, dword ptr [ebp - 0xb4]
        __asm _emit 0x03
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 89 90 0C 01 00 00: mov dword ptr [eax + 0x10c], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 91 0C 01 00 00: mov edx, dword ptr [ecx + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 8C: mov dword ptr [ebp - 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8c
        ; Exact mapped bytes F2 0F 2A 45 8C: cvtsi2sd xmm0, dword ptr [ebp - 0x74]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x8c
        ; Exact mapped bytes 8B 45 8C: mov eax, dword ptr [ebp - 0x74]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x8c
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 14 FF FF FF: movsd qword ptr [ebp - 0xec], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 14 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xec]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 91 10 01 00 00: mov edx, dword ptr [ecx + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 88: mov dword ptr [ebp - 0x78], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x88
        ; Exact mapped bytes F2 0F 2A 4D 88: cvtsi2sd xmm1, dword ptr [ebp - 0x78]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0x88
        ; Exact mapped bytes 8B 45 88: mov eax, dword ptr [ebp - 0x78]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes F2 0F 58 0C C5 70 4D 89 58: addsd xmm1, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 8D 0C FF FF FF: movsd qword ptr [ebp - 0xf4], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 8D 0C FF FF FF: cvtsd2ss xmm1, qword ptr [ebp - 0xf4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 58 4D 80: addss xmm1, dword ptr [ebp - 0x80]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x4d
        __asm _emit 0x80
        ; Exact mapped bytes 0F 2F C1: comiss xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 72 6B: jb 0x586ea1dd
        __asm _emit 0x72
        __asm _emit 0x6b
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 91 0C 01 00 00: mov edx, dword ptr [ecx + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 84: mov dword ptr [ebp - 0x7c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x84
        ; Exact mapped bytes F2 0F 2A 45 84: cvtsi2sd xmm0, dword ptr [ebp - 0x7c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes 8B 45 84: mov eax, dword ptr [ebp - 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 04 FF FF FF: movsd qword ptr [ebp - 0xfc], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 04 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xfc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 5E 45 80: divss xmm0, dword ptr [ebp - 0x80]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 2A 89 18 01 00 00: cvtsi2ss xmm1, dword ptr [ecx + 0x118]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 5C C8: subss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 2C D1: cvttss2si edx, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 89 90 18 01 00 00: mov dword ptr [eax + 0x118], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes C7 81 0C 01 00 00 00 00 00 00: mov dword ptr [ecx + 0x10c], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes C7 82 10 01 00 00 00 00 00 00: mov dword ptr [edx + 0x110], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 10 05 B0 31 8B 58: movss xmm0, dword ptr [0x588b31b0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 0F 2F 80 EC 00 00 00: comiss xmm0, dword ptr [eax + 0xec]
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 0C: ja 0x586ea1fd
        __asm _emit 0x77
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 83 B9 18 01 00 00 00: cmp dword ptr [ecx + 0x118], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 20: jg 0x586ea21d
        __asm _emit 0x7f
        __asm _emit 0x20
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes C7 82 18 01 00 00 00 00 00 00: mov dword ptr [edx + 0x118], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 10 05 B0 31 8B 58: movss xmm0, dword ptr [0x588b31b0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 80 EC 00 00 00: movss dword ptr [eax + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 60 02 00 00: jmp 0x586ea482
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 1E DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x1e
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 39 81 08 01 00 00: cmp dword ptr [ecx + 0x108], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D 46 02 00 00: jge 0x586ea482
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 18 01 00 00: mov eax, dword ptr [edx + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 0F: add eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 91 28 01 00 00: mov edx, dword ptr [ecx + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 3B 84 91 1C 01 00 00: cmp eax, dword ptr [ecx + edx*4 + 0x11c]
        __asm _emit 0x3b
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 21 02 00 00: je 0x586ea482
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 1E DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1e
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 2B 82 08 01 00 00: sub eax, dword ptr [edx + 0x108]
        __asm _emit 0x2b
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 85 44 FF FF FF: movss dword ptr [ebp - 0xbc], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 10 80 EC 00 00 00: movss xmm0, dword ptr [eax + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 11 85 48 FF FF FF: movss dword ptr [ebp - 0xb8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 85 48 FF FF FF: movss xmm0, dword ptr [ebp - 0xb8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 58 85 44 FF FF FF: addss xmm0, dword ptr [ebp - 0xbc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 11 81 EC 00 00 00: movss dword ptr [ecx + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 28 01 00 00: mov eax, dword ptr [edx + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 94 81 1C 01 00 00: mov edx, dword ptr [ecx + eax*4 + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EA 0F: sub edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x0f
        ; Exact mapped bytes 89 95 40 FF FF FF: mov dword ptr [ebp - 0xc0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 2A 85 40 FF FF FF: cvtsi2ss xmm0, dword ptr [ebp - 0xc0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 0D B4 31 8B 58: movss xmm1, dword ptr [0x588b31b4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E C8: divss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 11 8D 70 FF FF FF: movss dword ptr [ebp - 0x90], xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 1D DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 2B 81 08 01 00 00: sub eax, dword ptr [ecx + 0x108]
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 38 FF FF FF: mov dword ptr [ebp - 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 10 01 00 00: mov eax, dword ptr [edx + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 3C FF FF FF: mov dword ptr [ebp - 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 3C FF FF FF: mov ecx, dword ptr [ebp - 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 03 8D 38 FF FF FF: add ecx, dword ptr [ebp - 0xc8]
        __asm _emit 0x03
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 89 8A 10 01 00 00: mov dword ptr [edx + 0x110], ecx
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 10 01 00 00: mov ecx, dword ptr [eax + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 7C FF FF FF: mov dword ptr [ebp - 0x84], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 85 7C FF FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x84]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 7C FF FF FF: mov edx, dword ptr [ebp - 0x84]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C1 EA 1F: shr edx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x1f
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 FC FE FF FF: movsd qword ptr [ebp - 0x104], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 FC FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x104]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 0C 01 00 00: mov ecx, dword ptr [eax + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 78 FF FF FF: mov dword ptr [ebp - 0x88], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 8D 78 FF FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x88]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 78 FF FF FF: mov edx, dword ptr [ebp - 0x88]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C1 EA 1F: shr edx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x1f
        ; Exact mapped bytes F2 0F 58 0C D5 70 4D 89 58: addsd xmm1, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 8D F4 FE FF FF: movsd qword ptr [ebp - 0x10c], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 8D F4 FE FF FF: cvtsd2ss xmm1, qword ptr [ebp - 0x10c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 58 8D 70 FF FF FF: addss xmm1, dword ptr [ebp - 0x90]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 2F C1: comiss xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 72 77: jb 0x586ea41b
        __asm _emit 0x72
        __asm _emit 0x77
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 10 01 00 00: mov ecx, dword ptr [eax + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 74 FF FF FF: mov dword ptr [ebp - 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 85 74 FF FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x8c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 74 FF FF FF: mov edx, dword ptr [ebp - 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C1 EA 1F: shr edx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x1f
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 EC FE FF FF: movsd qword ptr [ebp - 0x114], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 EC FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x114]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 5E 85 70 FF FF FF: divss xmm0, dword ptr [ebp - 0x90]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 2A 88 18 01 00 00: cvtsi2ss xmm1, dword ptr [eax + 0x118]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 58 C8: addss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 2C C9: cvttss2si ecx, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 89 8A 18 01 00 00: mov dword ptr [edx + 0x118], ecx
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes C7 80 0C 01 00 00 00 00 00 00: mov dword ptr [eax + 0x10c], 0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes C7 81 10 01 00 00 00 00 00 00: mov dword ptr [ecx + 0x110], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 10 82 EC 00 00 00: movss xmm0, dword ptr [edx + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 2F 05 B8 31 8B 58: comiss xmm0, dword ptr [0x588b31b8]
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 77 21: ja 0x586ea450
        __asm _emit 0x77
        __asm _emit 0x21
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 28 01 00 00: mov ecx, dword ptr [eax + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 84 8A 1C 01 00 00: mov eax, dword ptr [edx + ecx*4 + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 0F: sub eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 39 81 18 01 00 00: cmp dword ptr [ecx + 0x118], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 32: jl 0x586ea482
        __asm _emit 0x7c
        __asm _emit 0x32
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 28 01 00 00: mov eax, dword ptr [edx + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 94 81 1C 01 00 00: mov edx, dword ptr [ecx + eax*4 + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EA 0F: sub edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 89 90 18 01 00 00: mov dword ptr [eax + 0x118], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 10 05 B8 31 8B 58: movss xmm0, dword ptr [0x588b31b8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 81 EC 00 00 00: movss dword ptr [ecx + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 82 E8 00 00 00: mov eax, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 34 FF FF FF: mov dword ptr [ebp - 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 2C 91 EC 00 00 00: cvttss2si edx, dword ptr [ecx + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 34 FF FF FF: mov ecx, dword ptr [ebp - 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 88 B2 0C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 88 28 01 00 00: mov ecx, dword ptr [eax + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E8 76 10 00 00: call 0x586eb530
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A A5 D9 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa5
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 89 91 04 01 00 00: mov dword ptr [ecx + 0x104], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 08 01 00 00: mov dword ptr [ecx + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x586ea58d
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 6C FF FF FF 00 00 00 00: mov dword ptr [ebp - 0x94], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes C1 E8 10: shr eax, 0x10
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x10
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7E 0A: jle 0x586ea508
        __asm _emit 0x7e
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 6C FF FF FF 01 00 00 00: mov dword ptr [ebp - 0x94], 1
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BD 6C FF FF FF 00: cmp dword ptr [ebp - 0x94], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x586ea51c
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E8 17 12 00 00: call 0x586eb730
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 09: jmp 0x586ea525
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E8 1C 11 00 00: call 0x586eb640
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x586ea628
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5F: jmp 0x586ea58d
        __asm _emit 0xeb
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 89 45 98: mov dword ptr [ebp - 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 8B 4D 98: mov ecx, dword ptr [ebp - 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x98
        ; Exact mapped bytes 83 E9 0D: sub ecx, 0xd
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x0d
        ; Exact mapped bytes 89 4D 98: mov dword ptr [ebp - 0x68], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x98
        ; Exact mapped bytes 83 7D 98 1B: cmp dword ptr [ebp - 0x68], 0x1b
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x98
        __asm _emit 0x1b
        ; Exact mapped bytes 77 47: ja 0x586ea58d
        __asm _emit 0x77
        __asm _emit 0x47
        ; Exact mapped bytes 8B 55 98: mov edx, dword ptr [ebp - 0x68]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x98
        ; Exact mapped bytes 0F B6 82 4C A6 6E 58: movzx eax, byte ptr [edx + 0x586ea64c]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0x4c
        __asm _emit 0xa6
        __asm _emit 0x6e
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 85 3C A6 6E 58: jmp dword ptr [eax*4 + 0x586ea63c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xa6
        __asm _emit 0x6e
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x586ea628
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x586ea58d
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E8 BB 11 00 00: call 0x586eb730
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x586ea628
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x586ea58d
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E8 BA 10 00 00: call 0x586eb640
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x586ea628
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 83 79 3C 00: cmp dword ptr [ecx + 0x3c], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x3c
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x586ea622
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 42 3C: mov eax, dword ptr [edx + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x3c
        ; Exact mapped bytes 81 38 00 00 01 00: cmp dword ptr [eax], 0x10000
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 77 0E: ja 0x586ea5b6
        __asm _emit 0x77
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes C7 41 3C 00 00 00 00: mov dword ptr [ecx + 0x3c], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 72: jmp 0x586ea628
        __asm _emit 0xeb
        __asm _emit 0x72
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 4A 3C: mov ecx, dword ptr [edx + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x3c
        ; Exact mapped bytes E8 7F A3 D9 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa3
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 83 7D A4 00: cmp dword ptr [ebp - 0x5c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xa4
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x586ea5d2
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 58: jmp 0x586ea628
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes EB 32: jmp 0x586ea604
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 4D A4: mov ecx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 10: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes 89 85 30 FF FF FF: mov dword ptr [ebp - 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D A4: mov ecx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes FF 95 30 FF FF FF: call dword ptr [ebp - 0xd0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 4A 3C: mov ecx, dword ptr [edx + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x3c
        ; Exact mapped bytes E8 45 A3 D9 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa3
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A4: mov ecx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 3B 08: cmp ecx, dword ptr [eax]
        __asm _emit 0x3b
        __asm _emit 0x08
        ; Exact mapped bytes 75 02: jne 0x586ea604
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1E: jmp 0x586ea622
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes 83 7D A4 00: cmp dword ptr [ebp - 0x5c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xa4
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x586ea620
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 55 A4: mov edx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa4
        ; Exact mapped bytes 81 3A 00 00 01 00: cmp dword ptr [edx], 0x10000
        __asm _emit 0x81
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 77 0B: ja 0x586ea620
        __asm _emit 0x77
        __asm _emit 0x0b
        ; Exact mapped bytes C7 45 A4 00 00 00 00: mov dword ptr [ebp - 0x5c], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 08: jmp 0x586ea628
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB A4: jmp 0x586ea5c6
        __asm _emit 0xeb
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 40 34: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 1C 6A 14 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x6a
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
