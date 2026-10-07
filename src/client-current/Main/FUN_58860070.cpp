// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 571 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58860070 .. +0x23B bytes.
extern "C" __declspec(naked) void FUN_58860070_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 86 4C 07 00 00: mov eax, dword ptr [esi + 0x74c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 50 07 00 00: mov eax, dword ptr [esi + 0x750]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 86 48 01 00 00: mov ecx, dword ptr [esi + eax*4 + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes BF 58 02 00 00: mov edi, 0x258
        __asm _emit 0xbf
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 20: cmp ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x20
        ; Exact mapped bytes 0F 87 A4 01 00 00: ja 0x5886024e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 89 C4 02 86 58: movzx ecx, byte ptr [ecx + 0x588602c4]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x89
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x86
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 8D AC 02 86 58: jmp dword ptr [ecx*4 + 0x588602ac]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x86
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 64 07 00 00: mov ecx, dword ptr [esi + 0x764]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 3C: push 0x3c
        __asm _emit 0x6a
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 E6 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe6
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 5C 07 00 00: mov ecx, dword ptr [esi + 0x75c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 8C 72 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 60 07 00 00: mov ecx, dword ptr [esi + 0x760]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 7F 72 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 17: cmp dword ptr [eax + 0x160], 0x17
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        ; Exact mapped bytes 7E 16: jle 0x58860105
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x58860105
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 C0 05 00 00: add eax, 0x5c0
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58860107
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 2C 07 00 00: mov ecx, dword ptr [esi + 0x72c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0D 48 ED FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 2C 07 00 00: mov eax, dword ptr [esi + 0x72c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x5886024e
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 64 07 00 00: mov ecx, dword ptr [esi + 0x764]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 3C: push 0x3c
        __asm _emit 0x6a
        __asm _emit 0x3c
        ; Exact mapped bytes BF 59 02 00 00: mov edi, 0x259
        __asm _emit 0xbf
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3B E6 F1 FF: call 0x5877e770
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe6
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 18: cmp dword ptr [eax + 0x160], 0x18
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        ; Exact mapped bytes 7E 25: jle 0x58860168
        __asm _emit 0x7e
        __asm _emit 0x25
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x58860168
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 2C 07 00 00: mov ecx, dword ptr [esi + 0x72c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 00 06 00 00: add eax, 0x600
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BD 47 ED FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x47
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x5886024e
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 2C 07 00 00: mov ecx, dword ptr [esi + 0x72c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AA 47 ED FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x47
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x5886024e
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 64 07 00 00: mov ecx, dword ptr [esi + 0x764]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 3C: push 0x3c
        __asm _emit 0x6a
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 3C: push 0x3c
        __asm _emit 0x6a
        __asm _emit 0x3c
        ; Exact mapped bytes BF 5A 02 00 00: mov edi, 0x25a
        __asm _emit 0xbf
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 11 E6 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe6
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x5886024e
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 0C: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 83 F9 64: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x64
        ; Exact mapped bytes 0F 87 AD 00 00 00: ja 0x5886024e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 91 04 03 86 58: movzx edx, byte ptr [ecx + 0x58860304]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 95 E8 02 86 58: jmp dword ptr [edx*4 + 0x588602e8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x86
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 05 39 01 00 00: add eax, 0x139
        __asm _emit 0x05
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 04: shl eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 8B 04 10: mov eax, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x10
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 88 A0 04 00 00: mov ecx, dword ptr [eax + 0x4a0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B8 A4 04 00 00: mov edi, dword ptr [eax + 0x4a4]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes B8 83 BE A0 2F: mov eax, 0x2fa0be83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa0
        __asm _emit 0x2f
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 4C 07 00 00: mov ecx, dword ptr [esi + 0x74c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes E8 60 71 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 50 07 00 00: mov ecx, dword ptr [esi + 0x750]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 54 71 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 4C 07 00 00: mov ecx, dword ptr [esi + 0x74c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 D7 13 ED FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 50 07 00 00: mov ecx, dword ptr [esi + 0x750]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 CA 13 ED FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x13
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes BF 5C 02 00 00: mov edi, 0x25c
        __asm _emit 0xbf
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x5886024e
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes BF 5D 02 00 00: mov edi, 0x25d
        __asm _emit 0xbf
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x5886024e
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes BF 5F 02 00 00: mov edi, 0x25f
        __asm _emit 0xbf
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x5886024e
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes BF 5E 02 00 00: mov edi, 0x25e
        __asm _emit 0xbf
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5886024e
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes BF 5B 02 00 00: mov edi, 0x25b
        __asm _emit 0xbf
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x5886024e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BF 60 02 00 00: mov edi, 0x260
        __asm _emit 0xbf
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 3C 07 00 00: mov eax, dword ptr [esi + 0x73c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x5886026f
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 7C 0F: jl 0x5886026f
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x5886026f
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 3C B8: mov edi, dword ptr [eax + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x3c
        __asm _emit 0xb8
        ; Exact mapped bytes EB 02: jmp 0x58860271
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B B6 40 07 00 00: mov esi, dword ptr [esi + 0x740]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7E 50: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x50
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 28: je 0x588602a6
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 89 4E 0C: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 57 14: mov edx, dword ptr [edi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8D 47 18: lea eax, [edi + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 89 56 10: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8D 4E 14: lea ecx, [esi + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
