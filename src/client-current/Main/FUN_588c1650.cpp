// Complete Ghidra body ranges for the selected function.
// 15 discontiguous segments; total 10780 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C1650 .. +0xC86 bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_00() {
    __asm {
        ; Exact mapped bytes B8 D0 13 00 00: mov eax, 0x13d0
        __asm _emit 0xb8
        __asm _emit 0xd0
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 B8 0B 00: call 0x5897ce60
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 CC 13 00 00: mov dword ptr [esp + 0x13cc], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B4 24 DC 13 00 00: mov esi, dword ptr [esp + 0x13dc]
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B BC 24 DC 13 00 00: mov edi, dword ptr [esp + 0x13dc]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 04: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes 05 00 F1 FD 7F: add eax, 0x7ffdf100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0x7f
        ; Exact mapped bytes 89 4C 24 08: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 3D A3 00 00 00: cmp eax, 0xa3
        __asm _emit 0x3d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 D1 29 00 00: ja 0x588c4060
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd1
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 80 F0 40 8C 58: movzx eax, byte ptr [eax + 0x588c40f0]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x80
        __asm _emit 0xf0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes FF 24 85 80 40 8C 58: jmp dword ptr [eax*4 + 0x588c4080]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 57 10: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 A8 7C F8 FF: call 0x58849360
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 57 10: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 2F 54 F8 FF: call 0x58846b00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 57 10: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 BB 0A E9 FF: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 74 29 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 3C 7D F8 FF: call 0x58849440
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 B2 54 F8 FF: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 6E 0A E9 FF: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 27 29 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A E0 00 00 00: mov ecx, dword ptr [edx + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 27 60 F8 FF: call 0x58847770
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x60
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 10 29 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 AB AA AA AA: mov eax, 0xaaaaaaab
        __asm _emit 0xb8
        __asm _emit 0xab
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes F7 67 10: mul dword ptr [edi + 0x10]
        __asm _emit 0xf7
        __asm _emit 0x67
        __asm _emit 0x10
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 90 72 F8 FF: call 0x58848a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes B8 AB AA AA AA: mov eax, 0xaaaaaaab
        __asm _emit 0xb8
        __asm _emit 0xab
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes F7 67 10: mul dword ptr [edi + 0x10]
        __asm _emit 0xf7
        __asm _emit 0x67
        __asm _emit 0x10
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 6F 18 F8 FF: call 0x58843000
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x18
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4F 08: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes B8 AB AA AA AA: mov eax, 0xaaaaaaab
        __asm _emit 0xb8
        __asm _emit 0xab
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes F7 67 10: mul dword ptr [edi + 0x10]
        __asm _emit 0xf7
        __asm _emit 0x67
        __asm _emit 0x10
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 0D E9 FF: call 0x587524c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 AC 28 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 10: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 48 68: mov ecx, dword ptr [eax + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x68
        ; Exact mapped bytes E8 FD 37 F5 FF: call 0x58814fd0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x37
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 83 7F 0C 01: cmp dword ptr [edi + 0xc], 1
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 81 28 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 17 08 E9 FF: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x08
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 70 28 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 E2 C3 F5 FF: call 0x5881dbe0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 A0 17 F8 FF: call 0x58842fb0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x17
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0C: jne 0x588c1820
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 30 0D E9 FF: call 0x58752550
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8D 50 01: lea edx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x588c1825
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 EA 01 00 00: push 0x1ea
        __asm _emit 0x68
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 A2 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa2
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 ED 34 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x34
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 16 28 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 C8 12 00 00 00: cmp dword ptr [ecx + 0x12c8], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xc8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x588c188f
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 76 28: jbe 0x588c1885
        __asm _emit 0x76
        __asm _emit 0x28
        ; Exact mapped bytes 8D 46 2D: lea eax, [esi + 0x2d]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x2d
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8D 4E 24: lea ecx, [esi + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 8D 56 0C: lea edx, [esi + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 81 33 E9 FF: call 0x58754c00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x33
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 C4 F5 FF: call 0x5881dd70
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 CF 27 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 8B 81 DC 00 00 00: mov eax, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 76 11: jbe 0x588c18af
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes 39 5F 0C: cmp dword ptr [edi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0x0c
        ; Exact mapped bytes 75 0C: jne 0x588c18af
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 39 5F 10: cmp dword ptr [edi + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0x10
        ; Exact mapped bytes 76 11: jbe 0x588c18b9
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes BB 02 00 00 00: mov ebx, 2
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x588c18b9
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 39 5F 10: cmp dword ptr [edi + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0x10
        ; Exact mapped bytes 76 05: jbe 0x588c18b9
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 E0 00 00 00: mov ecx, dword ptr [ecx + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 B9 A0 00 00 00 00: cmp byte ptr [ecx + 0xa0], 0
        __asm _emit 0x80
        __asm _emit 0xb9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 40: jne 0x588c1908
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 7D 61 F8 FF: call 0x58847a50
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x61
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 83 FB 01: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 74 09: je 0x588c18e1
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 83 FB 02: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 7D 27 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4E 2D: lea ecx, [esi + 0x2d]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x2d
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8D 56 24: lea edx, [esi + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 8D 46 0C: lea eax, [esi + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FD 32 E9 FF: call 0x58754c00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x32
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 56 27 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 54 01 00 00: mov ecx, dword ptr [eax + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 C9 02 00 00: je 0x588c1beb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 54 01 00 00: mov ecx, dword ptr [eax + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 01: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 AF 02 00 00: je 0x588c1beb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 58 01 00 00: mov ecx, dword ptr [eax + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 43 02 00 00: je 0x588c1b99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 58 01 00 00: mov ecx, dword ptr [eax + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 01: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 29 02 00 00: je 0x588c1b99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 C4 01 00 00: je 0x588c1b4e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 01: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 AA 01 00 00: je 0x588c1b4e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 64 01 00 00: mov ecx, dword ptr [eax + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x588c1b00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 64 01 00 00: mov ecx, dword ptr [eax + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 01: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x588c1b00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 5C 01 00 00: mov ecx, dword ptr [eax + 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 E1 FE FF FF: je 0x588c18d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 80 60 01 00 00: mov eax, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 88 21 03 00 00: mov cl, byte ptr [eax + 0x321]
        __asm _emit 0x8a
        __asm _emit 0x88
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 F9 06: cmp cl, 6
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 75 0D: jne 0x588c1a10
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A5 72 F7 FF: call 0x58838cb0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x72
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 D1 FE FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 F9 07: cmp cl, 7
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x07
        ; Exact mapped bytes 0F 85 BA FE FF FF: jne 0x588c18d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D B4 45 A2 58 00: cmp dword ptr [0x58a245b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 7D: je 0x588c1a9f
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 94 24 E1 0F 00 00: lea edx, [esp + 0xfe1]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes C6 84 24 E8 0F 00 00 00: mov byte ptr [esp + 0xfe8], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0D B2 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb2
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 46 0C: lea eax, [esi + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 00 A8 99 58: push 0x5899a800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xa8
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 E4 0F 00 00: lea ecx, [esp + 0xfe4]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 94 24 E0 0F 00 00: lea edx, [esp + 0xfe0]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 67 C8 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc8
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7E 2D: lea edi, [esi + 0x2d]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x2d
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 83 77 F8 FF: call 0x58849210
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B1 69 F8 FF: call 0x58848450
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 A8 45 A2 58: cmp edx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 30 FE FF FF: jne 0x588c18e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 78 0C: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x0c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 20 FE FF FF: je 0x588c18e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 1D A4 C1 98 58: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 6E 2D: lea ebp, [esi + 0x2d]
        __asm _emit 0x8d
        __asm _emit 0x6e
        __asm _emit 0x2d
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8F E8 12 00 00: mov ecx, dword ptr [edi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 6C: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x6c
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0C: je 0x588c1aed
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 7F 78: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x78
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 E8: jne 0x588c1ad0
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes E9 F4 FD FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 45 79 EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x79
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes E9 E1 FD FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 64 01 00 00: mov ecx, dword ptr [eax + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 81 E5 02 00 00: mov al, byte ptr [ecx + 0x2e5]
        __asm _emit 0x8a
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 74 21: je 0x588c1b31
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 3C 03: cmp al, 3
        __asm _emit 0x3c
        __asm _emit 0x03
        ; Exact mapped bytes 74 1D: je 0x588c1b31
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 76 0B: jbe 0x588c1b25
        __asm _emit 0x76
        __asm _emit 0x0b
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 80 7E F7 FF: call 0x588399a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 BC FD FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 7E F7 FF: call 0x588399a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 A2 FD FF FF: jmp 0x588c18d3
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 76 0B: jbe 0x588c1b42
        __asm _emit 0x76
        __asm _emit 0x0b
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 43 80 F7 FF: call 0x58839b80
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x80
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 9F FD FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 37 80 F7 FF: call 0x58839b80
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x80
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 85 FD FF FF: jmp 0x588c18d3
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 81 21 03 00 00: mov al, byte ptr [ecx + 0x321]
        __asm _emit 0x8a
        __asm _emit 0x81
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3C 08: cmp al, 8
        __asm _emit 0x3c
        __asm _emit 0x08
        ; Exact mapped bytes 75 0B: jne 0x588c1b69
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 DC 22 F7 FF: call 0x58833e40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 78 FD FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3C 05: cmp al, 5
        __asm _emit 0x3c
        __asm _emit 0x05
        ; Exact mapped bytes 75 0F: jne 0x588c1b7c
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 39 28 F7 FF: call 0x588343b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 65 FD FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 76 0B: jbe 0x588c1b8d
        __asm _emit 0x76
        __asm _emit 0x0b
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 28 71 F7 FF: call 0x58838cb0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x71
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 54 FD FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 1C 71 F7 FF: call 0x58838cb0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x71
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 3A FD FF FF: jmp 0x588c18d3
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 7F 08 00: cmp dword ptr [edi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 76 29: jbe 0x588c1bc8
        __asm _emit 0x76
        __asm _emit 0x29
        ; Exact mapped bytes 83 7F 0C 00: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 23: jne 0x588c1bc8
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 58 01 00 00: mov ecx, dword ptr [eax + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 0B: jbe 0x588c1bbc
        __asm _emit 0x76
        __asm _emit 0x0b
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 29 1D F7 FF: call 0x588338e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x1d
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 25 FD FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 1D 1D F7 FF: call 0x588338e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x1d
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 0B FD FF FF: jmp 0x588c18d3
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 58 01 00 00: mov ecx, dword ptr [eax + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 0B: jbe 0x588c1bdf
        __asm _emit 0x76
        __asm _emit 0x0b
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 56 1D F7 FF: call 0x58833930
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1d
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 02 FD FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 4A 1D F7 FF: call 0x58833930
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1d
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 E8 FC FF FF: jmp 0x588c18d3
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 7F 08 00: cmp dword ptr [edi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 76 2C: jbe 0x588c1c1d
        __asm _emit 0x76
        __asm _emit 0x2c
        ; Exact mapped bytes 83 7F 0C 00: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 26: jne 0x588c1c1d
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 D2 FC FF FF: jbe 0x588c18d3
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 54 01 00 00: mov ecx, dword ptr [ecx + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 C8 FE F6 FF: call 0x58831ae0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 C4 FC FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 AC FC FF FF: jbe 0x588c18d3
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 54 01 00 00: mov ecx, dword ptr [eax + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 51 FF F6 FF: call 0x58831b90
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D FC FF FF: jmp 0x588c18e1
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 DC 00 00 00: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 54 01 00 00: mov eax, dword ptr [edx + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 40 24: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 75 29: jne 0x588c1c8d
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 8B 47 10: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 6C: jbe 0x588c1cd7
        __asm _emit 0x76
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 54 01 00 00: mov ecx, dword ptr [ecx + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 C5 00 F7 FF: call 0x58831d50
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 4A: jmp 0x588c1cd7
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 5C 01 00 00: mov eax, dword ptr [eax + 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 28: jne 0x588c1cd7
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 47 10: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 21: jbe 0x588c1cd7
        __asm _emit 0x76
        __asm _emit 0x21
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 91 DC 00 00 00: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 5C 01 00 00: mov ecx, dword ptr [edx + 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A9 89 F6 FF: call 0x5882a680
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x89
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 7F 10: mov edi, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 89 4C 24 30: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 81 FF 00 08 00 00: cmp edi, 0x800
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 26: jb 0x588c1d16
        __asm _emit 0x72
        __asm _emit 0x26
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 54 24 3C: lea edx, [esp + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4C 24 2C: lea ecx, [esp + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 30 E9 FF: call 0x58754d60
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x30
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 48 23 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 44 24 3C: lea eax, [esp + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 38 9D E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9d
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 4C 24 2C: lea ecx, [esp + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 30 E9 FF: call 0x58754d60
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x30
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 1E 23 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 6E 01 00 00: jne 0x588c1eb9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 47 0C: cmp dword ptr [edi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 85 65 01 00 00: jne 0x588c1eb9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0D: jne 0x588c1d67
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 8E 04 00 00: push 0x48e
        __asm _emit 0x68
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x588c1e73
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 10: jne 0x588c1d7c
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8B 04 00 00: push 0x48b
        __asm _emit 0x68
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x588c1e73
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 10: jne 0x588c1d91
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8C 04 00 00: push 0x48c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x588c1e73
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 10: jne 0x588c1da6
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8D 04 00 00: push 0x48d
        __asm _emit 0x68
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x588c1e73
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 75 10: jne 0x588c1dbb
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 89 04 00 00: push 0x489
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x588c1e73
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 10: jne 0x588c1dd0
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 99 04 00 00: push 0x499
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x588c1e73
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x588c1e7f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 94 24 E1 11 00 00: lea edx, [esp + 0x11e1]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 5E AE 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 7F 10 04: cmp dword ptr [edi + 0x10], 4
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x04
        ; Exact mapped bytes C6 84 24 DC 11 00 00 00: mov byte ptr [esp + 0x11dc], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 67: jbe 0x588c1e62
        __asm _emit 0x76
        __asm _emit 0x67
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 8C 24 61 13 00 00: lea ecx, [esp + 0x1361]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes A3 C8 B4 A0 58: mov dword ptr [0x58a0b4c8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes C6 84 24 68 13 00 00 00: mov byte ptr [esp + 0x1368], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2C AE 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 68 C8 B4 A0 58: push 0x58a0b4c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 6C 13 00 00: lea edx, [esp + 0x136c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 47 B3 0B 00: call 0x5897d17a
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb3
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 84 24 5C 13 00 00: lea eax, [esp + 0x135c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 B8 0A 9A 58: push 0x589a0ab8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 E4 11 00 00: lea ecx, [esp + 0x11e4]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 01 9C E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9c
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 E4 11 00 00: lea edx, [esp + 0x11e4]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 78 9C EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9c
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B1 2E EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x2e
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 54 01 00 00: mov eax, dword ptr [ecx + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 C8 00 00 00: mov edx, dword ptr [eax + 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 24: lea ecx, [esp + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 54 24 24: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 80 CC 00 00 00: mov eax, dword ptr [eax + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes E8 7C 27 E9 FF: call 0x58754630
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x27
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 A5 21 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 A0 B4 A0 58: cmp eax, dword ptr [0x58a0b4a0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 99 21 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 15 A4 B4 A0 58: cmp edx, dword ptr [0x58a0b4a4]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 8A 21 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 1D A8 B4 A0 58: movsx ebx, word ptr [0x58a0b4a8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 61 0A 00 00: lea eax, [esp + 0xa61]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C6 84 24 68 0A 00 00 00: mov byte ptr [esp + 0xa68], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 AD 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 94 24 B4 08 00 00: lea edx, [esp + 0x8b4]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 FB 06: cmp ebx, 6
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x06
        ; Exact mapped bytes 74 6E: je 0x588c1f7e
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 83 FB 05: cmp ebx, 5
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x05
        ; Exact mapped bytes 74 69: je 0x588c1f7e
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 83 FB 03: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 40 21 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 AC 08 00 00: lea eax, [esp + 0x8ac]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 D4 A7 99 58: push 0x5899a7d4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xa7
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 64 0A 00 00: lea ecx, [esp + 0xa64]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 94 24 60 0A 00 00: lea edx, [esp + 0xa60]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 83 C3 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 47 10: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 91 DC 00 00 00: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 64 01 00 00: mov ecx, dword ptr [edx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 77 BE F7 FF: call 0x5883ddf0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xbe
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 E0 20 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 AC 08 00 00: lea eax, [esp + 0x8ac]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 A8 A7 99 58: push 0x5899a7a8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0xa7
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 64 0A 00 00: lea ecx, [esp + 0xa64]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 94 24 60 0A 00 00: lea edx, [esp + 0xa60]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 23 C3 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 47 10: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 91 DC 00 00 00: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 60 01 00 00: mov ecx, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 D7 71 F7 FF: call 0x588391b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x71
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 80 20 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 08 00: cmp dword ptr [edi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 05 A8 B4 A0 58: movsx eax, word ptr [0x58a0b4a8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F 87 2A 01 00 00: ja 0x588c2119
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 0C 00: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 20 01 00 00: ja 0x588c2119
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7F 10: mov edi, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x10
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 86 A2 19 00 00: jbe 0x588c39a6
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa2
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 83 F8 07: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 0F 87 97 19 00 00: ja 0x588c39a6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x97
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 94 41 8C 58: jmp dword ptr [eax*4 + 0x588c4194]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8E 04 00 00: push 0x48e
        __asm _emit 0x68
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CA 9A EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 03 2D EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x2d
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 2C 20 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8C 04 00 00: push 0x48c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AE 9A EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9a
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 E7 2C EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 10 20 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8F 04 00 00: push 0x48f
        __asm _emit 0x68
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 92 9A EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9a
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 CB 2C EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 F4 1F 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 99 04 00 00: push 0x499
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 76 9A EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x9a
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AF 2C EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 D8 1F 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 E1 10 00 00: lea eax, [esp + 0x10e1]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B1 AB 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xab
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C6 84 24 DC 10 00 00 00: mov byte ptr [esp + 0x10dc], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 04: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x04
        ; Exact mapped bytes 76 66: jbe 0x588c210d
        __asm _emit 0x76
        __asm _emit 0x66
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 94 24 E1 0D 00 00: lea edx, [esp + 0xde1]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes C6 84 24 E8 0D 00 00 00: mov byte ptr [esp + 0xde8], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 81 AB 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xab
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 20: lea eax, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 EC 0D 00 00: lea ecx, [esp + 0xdec]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 9C B0 0B 00: call 0x5897d17a
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 94 24 DC 0D 00 00: lea edx, [esp + 0xddc]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 B8 0A 9A 58: push 0x589a0ab8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 E4 10 00 00: lea eax, [esp + 0x10e4]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 56 99 E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x99
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 8C 24 DC 10 00 00: lea ecx, [esp + 0x10dc]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 72 18 00 00: jmp 0x588c398b
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 36: jne 0x588c2153
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 41 24: mov al, byte ptr [ecx + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 24 0F: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 74 0F: je 0x588c213f
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 3C 04: cmp al, 4
        __asm _emit 0x3c
        __asm _emit 0x04
        ; Exact mapped bytes 74 0B: je 0x588c213f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 3C 05: cmp al, 5
        __asm _emit 0x3c
        __asm _emit 0x05
        ; Exact mapped bytes 74 07: je 0x588c213f
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 F2 72 EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x72
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes E9 0B 1F 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 61 0B 00 00: lea eax, [esp + 0xb61]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C6 84 24 68 0B 00 00 00: mov byte ptr [esp + 0xb68], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DC AA 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xaa
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 94 24 6C 08 00 00: lea edx, [esp + 0x86c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 7F 08 00: cmp dword ptr [edi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 76 27: jbe 0x588c21b0
        __asm _emit 0x76
        __asm _emit 0x27
        ; Exact mapped bytes 83 7F 0C 00: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 21: jne 0x588c21b0
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8D 84 24 64 08 00 00: lea eax, [esp + 0x864]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 84 A7 99 58: push 0x5899a784
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 64 0B 00 00: lea ecx, [esp + 0xb64]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 1F: jmp 0x588c21cf
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 8D 94 24 64 08 00 00: lea edx, [esp + 0x864]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 5C A7 99 58: push 0x5899a75c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0xa7
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 64 0B 00 00: lea eax, [esp + 0xb64]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 A1 A8 B4 A0 58: mov ax, word ptr [0x58a0b4a8]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 27: jne 0x588c220b
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 83 7F 0C 00: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 76 52: jbe 0x588c223c
        __asm _emit 0x76
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 64 08 00 00: lea ecx, [esp + 0x864]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 88 64 01 00 00: mov ecx, dword ptr [eax + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A7 91 F7 FF: call 0x5883b3b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x91
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 31: jmp 0x588c223c
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 2B: jne 0x588c223c
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 83 7F 08 00: cmp dword ptr [edi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x588c223c
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 83 7F 0C 00: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 1F: jne 0x588c223c
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 64 08 00 00: lea ecx, [esp + 0x864]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E4 36 F7 FF: call 0x58835920
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x36
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 DC 00 00 00: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 24 64 08 00 00: lea ecx, [esp + 0x864]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A8 6F F8 FF: call 0x58849210
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 84 24 60 0B 00 00: lea eax, [esp + 0xb60]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 61 C0 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 24 64 08 00 00: lea ecx, [esp + 0x864]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C8 0D F8 FF: call 0x58843060
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 84 24 64 08 00 00: lea eax, [esp + 0x864]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 55 FD E8 FF: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D A8 45 A2 58: cmp ecx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 A1 1D 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 72 0C: mov esi, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x0c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 90 1D 00 00: je 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D A4 C1 98 58: mov edi, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 0A: jmp 0x588c22e0
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C22E0 .. +0xF58 bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 86 E8 12 00 00: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 8C 24 64 08 00 00: lea ecx, [esp + 0x864]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0C: je 0x588c2304
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 76 78: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x78
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 E1: jne 0x588c22e0
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes E9 5A 1D 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 6C 08 00 00: lea edx, [esp + 0x86c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 27 71 EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x71
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes E9 40 1D 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 76 0A: jbe 0x588c2331
        __asm _emit 0x76
        __asm _emit 0x0a
        ; Exact mapped bytes 3B 05 A0 B4 A0 58: cmp eax, dword ptr [0x58a0b4a0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 74 17: je 0x588c2346
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 27 1D 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 05 A4 B4 A0 58: cmp eax, dword ptr [0x58a0b4a4]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 18 1D 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 10: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 19: jne 0x588c2366
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 09 02 00 00: push 0x209
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 97 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x97
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 CF 29 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x29
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 F8 1C 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 8C 24 3C 08 00 00: lea ecx, [esp + 0x83c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D A4 C1 98 58: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 50 B4 A0 58: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 38 08 00 00: lea edx, [esp + 0x838]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x588c248f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 52 EF FF: call 0x587b7670
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x52
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 53 EF FF: call 0x587b76d0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x53
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 52 EF FF: call 0x587b76a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x52
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 68 22 C9 98 58: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 B0 B4 A0 58: push 0x58a0b4b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 1D A0 B4 A0 58: mov dword ptr [0x58a0b4a0], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 1D A4 B4 A0 58: mov dword ptr [0x58a0b4a4], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 66 A3 A8 B4 A0 58: mov word ptr [0x58a0b4a8], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 1D AC B4 A0 58: mov dword ptr [0x58a0b4ac], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xac
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 1D BC B4 A0 58: mov dword ptr [0x58a0b4bc], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xbc
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 1D C0 B4 A0 58: mov dword ptr [0x58a0b4c0], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 DC 00 00 00: mov eax, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 12: jne 0x588c2419
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 D8 00 00 00: mov eax, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 12: jne 0x588c2447
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B8 61 F8 FF: call 0x58848610
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x61
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 0D F8 FF: call 0x58843190
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 CA 6F EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6f
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 0A 02 00 00: push 0x20a
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6D 96 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x96
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A6 28 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x28
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 CF 1B 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 A8 45 A2 58: cmp eax, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 49: jne 0x588c24e5
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 71 0C: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0c
        ; Exact mapped bytes 3B F3: cmp esi, ebx
        __asm _emit 0x3b
        __asm _emit 0xf3
        ; Exact mapped bytes 74 3C: je 0x588c24e5
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 E8 12 00 00: mov edx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 6C: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 8C 24 34 08 00 00: lea ecx, [esp + 0x834]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x588c24d1
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 76 78: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x78
        ; Exact mapped bytes 3B F3: cmp esi, ebx
        __asm _emit 0x3b
        __asm _emit 0xf3
        ; Exact mapped bytes 75 E1: jne 0x588c24b0
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes EB 14: jmp 0x588c24e5
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 94 24 3C 08 00 00: lea edx, [esp + 0x83c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 5B 6F EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x6f
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 E1 0A 00 00: lea eax, [esp + 0xae1]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 88 9C 24 E8 0A 00 00: mov byte ptr [esp + 0xae8], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4C A7 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa7
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 39 5F 08: cmp dword ptr [edi + 8], ebx
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact mapped bytes 76 73: jbe 0x588c2577
        __asm _emit 0x76
        __asm _emit 0x73
        ; Exact mapped bytes 39 5F 0C: cmp dword ptr [edi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0x0c
        ; Exact mapped bytes 75 6E: jne 0x588c2577
        __asm _emit 0x75
        __asm _emit 0x6e
        ; Exact mapped bytes 8D 8C 24 34 08 00 00: lea ecx, [esp + 0x834]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 38 A7 99 58: push 0x5899a738
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xa7
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 94 24 E4 0A 00 00: lea edx, [esp + 0xae4]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 60 01 00 00: mov eax, dword ptr [ecx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x588c25df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 DC 00 00 00: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 60 01 00 00: mov ecx, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 34 08 00 00: lea eax, [esp + 0x834]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1B 1C F7 FF: call 0x58834190
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 68: jmp 0x588c25df
        __asm _emit 0xeb
        __asm _emit 0x68
        ; Exact mapped bytes 8D 84 24 34 08 00 00: lea eax, [esp + 0x834]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 14 A7 99 58: push 0x5899a714
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xa7
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 E4 0A 00 00: lea ecx, [esp + 0xae4]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 64 01 00 00: mov eax, dword ptr [eax + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 1E: jne 0x588c25df
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 64 01 00 00: mov ecx, dword ptr [ecx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 34 08 00 00: lea edx, [esp + 0x834]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 B1 72 F7 FF: call 0x58839890
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x72
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 34 08 00 00: lea eax, [esp + 0x834]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 25 5F F8 FF: call 0x58848530
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x5f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 34 08 00 00: lea edx, [esp + 0x834]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 DD 0B F8 FF: call 0x58843200
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0b
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8C 24 E0 0A 00 00: lea ecx, [esp + 0xae0]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 A7 BC F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 20 1A 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 0A: jbe 0x588c264f
        __asm _emit 0x76
        __asm _emit 0x0a
        ; Exact mapped bytes 3B 05 A0 B4 A0 58: cmp eax, dword ptr [0x58a0b4a0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 74 17: je 0x588c2664
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 DC 02 00 00: jne 0x588c2931
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 15 A4 B4 A0 58: cmp edx, dword ptr [0x58a0b4a4]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 CD 02 00 00: jne 0x588c2931
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 10: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 77 32: ja 0x588c269d
        __asm _emit 0x77
        __asm _emit 0x32
        ; Exact mapped bytes 66 A1 A8 B4 A0 58: mov ax, word ptr [0x58a0b4a8]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 0A: je 0x588c2681
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 DD 19 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 06 02 00 00: push 0x206
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5F 94 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x94
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 98 26 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 C1 19 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 84 24 54 08 00 00: lea eax, [esp + 0x854]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D A4 C1 98 58: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 50 B4 A0 58: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 24 50 08 00 00: lea ecx, [esp + 0x850]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x588c2794
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 40 24: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x588c26f8
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 DC 00 00 00: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 D8 00 00 00: mov eax, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 12: jne 0x588c2726
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 4F EF FF: call 0x587b7670
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 4F EF FF: call 0x587b76d0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 4F EF FF: call 0x587b76a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B8 5E F8 FF: call 0x58848610
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5e
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 0A F8 FF: call 0x58843190
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 C8 6C EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 0B 02 00 00: push 0x20b
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 68 93 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x93
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A1 25 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 CA 18 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 A8 45 A2 58: cmp eax, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 45: jne 0x588c27e6
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 71 0C: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 38: je 0x588c27e6
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 96 E8 12 00 00: mov edx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 6C: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 8C 24 4C 08 00 00: lea ecx, [esp + 0x84c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x588c27d1
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 76 78: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x78
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 E1: jne 0x588c27b0
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes EB 15: jmp 0x588c27e6
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 54 08 00 00: lea edx, [esp + 0x854]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 5A 6C EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 E1 0B 00 00: lea eax, [esp + 0xbe1]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C6 84 24 E8 0B 00 00 00: mov byte ptr [esp + 0xbe8], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 49 A4 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 7F 08 00: cmp dword ptr [edi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 76 74: jbe 0x588c287c
        __asm _emit 0x76
        __asm _emit 0x74
        ; Exact mapped bytes 83 7F 0C 00: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 6E: jne 0x588c287c
        __asm _emit 0x75
        __asm _emit 0x6e
        ; Exact mapped bytes 8D 8C 24 4C 08 00 00: lea ecx, [esp + 0x84c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 F0 A6 99 58: push 0x5899a6f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xa6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 94 24 E4 0B 00 00: lea edx, [esp + 0xbe4]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 60 01 00 00: mov eax, dword ptr [ecx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x588c28e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 DC 00 00 00: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 60 01 00 00: mov ecx, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 4C 08 00 00: lea eax, [esp + 0x84c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 16 19 F7 FF: call 0x58834190
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x19
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 68: jmp 0x588c28e4
        __asm _emit 0xeb
        __asm _emit 0x68
        ; Exact mapped bytes 8D 84 24 4C 08 00 00: lea eax, [esp + 0x84c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 C8 A6 99 58: push 0x5899a6c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xa6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 E4 0B 00 00: lea ecx, [esp + 0xbe4]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 64 01 00 00: mov eax, dword ptr [eax + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 1E: jne 0x588c28e4
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 64 01 00 00: mov ecx, dword ptr [ecx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 4C 08 00 00: lea edx, [esp + 0x84c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 AC 6F F7 FF: call 0x58839890
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6f
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 4C 08 00 00: lea edx, [esp + 0x84c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 34 5C F8 FF: call 0x58848530
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x5c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 24 4C 08 00 00: lea ecx, [esp + 0x84c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EB 08 F8 FF: call 0x58843200
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 84 24 E0 0B 00 00: lea eax, [esp + 0xbe0]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 B9 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 2D 17 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 A1 A8 B4 A0 58: mov ax, word ptr [0x58a0b4a8]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 0A: je 0x588c2947
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 17 17 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 02 00 00: push 0x201
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 99 91 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x91
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D2 23 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x23
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 FB 16 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 86 01 00 00: jne 0x588c2af4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 19: jne 0x588c298e
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 F9 01 00 00: push 0x1f9
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6E 91 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x91
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A7 23 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x23
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 D0 16 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 1C: jne 0x588c29af
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FA 01 00 00: push 0x1fa
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4D 91 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x91
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 86 23 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x23
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 AF 16 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 2A 02 00 00: je 0x588c2be2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 1C: jne 0x588c29d9
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 0F 02 00 00: push 0x20f
        __asm _emit 0x68
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 23 91 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x91
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5C 23 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x23
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 85 16 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 75 4A: jne 0x588c2a28
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 DC 00 00 00: mov eax, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 12: jne 0x588c2a0c
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 01 00 00: push 0x1fc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D4 90 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x90
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0D 23 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x23
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 36 16 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 2D 16 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 DC 00 00 00: mov eax, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 12: jne 0x588c2a5f
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 8C 24 E1 12 00 00: lea ecx, [esp + 0x12e1]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 D8 A1 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa1
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes C6 84 24 DC 12 00 00 00: mov byte ptr [esp + 0x12dc], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 67: jbe 0x588c2ae8
        __asm _emit 0x76
        __asm _emit 0x67
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 E1 0E 00 00: lea eax, [esp + 0xee1]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 15 C8 B4 A0 58: mov dword ptr [0x58a0b4c8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes C6 84 24 E8 0E 00 00 00: mov byte ptr [esp + 0xee8], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A6 A1 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa1
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 68 C8 B4 A0 58: push 0x58a0b4c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 24 EC 0E 00 00: lea ecx, [esp + 0xeec]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 C1 A6 0B 00: call 0x5897d17a
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa6
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 94 24 DC 0E 00 00: lea edx, [esp + 0xedc]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 B8 0A 9A 58: push 0x589a0ab8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 E4 12 00 00: lea eax, [esp + 0x12e4]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7B 8F E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8f
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 8C 24 DC 12 00 00: lea ecx, [esp + 0x12dc]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 97 0E 00 00: jmp 0x588c398b
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 61 15 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 40 24: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x588c2b2a
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 DC 00 00 00: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 D8 00 00 00: mov eax, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 12: jne 0x588c2b58
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes B9 09 00 00 00: mov ecx, 9
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF A0 B4 A0 58: mov edi, 0x58a0b4a0
        __asm _emit 0xbf
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 0D A4 B4 A0 58: mov ecx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 81 C9 00 00 03 00: or ecx, 0x30000
        __asm _emit 0x81
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 52 EF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x52
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 B3 68 EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FE 01 00 00: push 0x1fe
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 8F EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8f
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8C 21 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 B5 14 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 4E: jne 0x588c2bfe
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 7F 0C: mov edi, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x0c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 19: jne 0x588c2bd0
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2C 8F EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8f
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 65 21 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x21
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 8E 14 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 01: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 6E FD FF FF: je 0x588c2947
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 FF 02: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 7C 14 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FB 01 00 00: push 0x1fb
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FE 8E EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 37 21 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x21
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 60 14 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 57 14 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A4 B4 A0 58 00: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3E: je 0x588c2c4e
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 83 C6 10: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 B0 B4 A0 58: push 0x58a0b4b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF 01 00 00: push 0x1ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AE 8E EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 E7 20 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x20
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 10 14 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 B4 A0 58 00: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 03 14 00 00: je 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 31 02 00 00: push 0x231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 73 8E EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AC 20 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x20
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 13 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B A9 DC 00 00 00: mov ebp, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 4E: jne 0x588c2ceb
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 63 20 E9 FF: call 0x58754d10
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B AD 60 01 00 00: mov ebp, dword ptr [ebp + 0x160]
        __asm _emit 0x8b
        __asm _emit 0xad
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 24: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 99 13 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 39 6F 0C: cmp dword ptr [edi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6f
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 84 8E 13 00 00: je 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 5C: add esi, 0x5c
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 93 65 EF FF: call 0x587b9270
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x65
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 83 C6 08: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x08
        ; Exact mapped bytes 3B 6F 0C: cmp ebp, dword ptr [edi + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x6f
        __asm _emit 0x0c
        ; Exact mapped bytes 75 ED: jne 0x588c2cd3
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes E9 73 13 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 6B 13 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 1F E9 FF: call 0x58754cd0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1f
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 60 01 00 00: mov eax, dword ptr [ebp + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 15: jne 0x588c2d2e
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 60 01 00 00: mov ecx, dword ptr [ebp + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 87 16 F7 FF: call 0x588343b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 30 13 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 64 01 00 00: mov eax, dword ptr [ebp + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 16 13 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 64 01 00 00: mov ecx, dword ptr [ebp + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 98 6F F7 FF: call 0x58839cf0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6f
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 01 13 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 08 00: cmp dword ptr [edi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D6 01 00 00: je 0x588c2f3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 B4 A0 58 00: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 80 DC 00 00 00: mov eax, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x588c2e60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x588c2da2
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 80 D8 00 00 00: mov eax, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x588c2dd0
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 30 58 F8 FF: call 0x58848610
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 DC 00 00 00: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 60 01 00 00: mov ecx, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 2E F7 FF: call 0x58835c50
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A 66 EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x66
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 61 0C 00 00: lea eax, [esp + 0xc61]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C6 84 24 68 0C 00 00 00: mov byte ptr [esp + 0xc68], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 29 9E 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x9e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 68 8C 28 99 58: push 0x5899288c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 64 0C 00 00: lea ecx, [esp + 0xc64]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 94 24 60 0C 00 00: lea edx, [esp + 0xc60]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 85 B4 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 FE 11 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x588c2e7f
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 80 D8 00 00 00: mov eax, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x588c2ead
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 57 F8 FF: call 0x58848610
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 DC 00 00 00: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 64 01 00 00: mov ecx, dword ptr [edx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CC 85 F7 FF: call 0x5883b4a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 5D 65 EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x65
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 E1 0C 00 00: lea eax, [esp + 0xce1]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C6 84 24 E8 0C 00 00 00: mov byte ptr [esp + 0xce8], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4C 9D 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 68 AC 28 99 58: push 0x589928ac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x28
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 E4 0C 00 00: lea ecx, [esp + 0xce4]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 94 24 E0 0C 00 00: lea edx, [esp + 0xce0]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 A8 B3 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb3
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 21 11 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7F 0C: mov edi, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x0c
        ; Exact mapped bytes 83 FF 01: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 FE F9 FF FF: je 0x588c2947
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 FF 02: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 0C 11 00 00: je 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 03: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 59 FC FF FF: jne 0x588c2bba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 1F 02 00 00: push 0x21f
        __asm _emit 0x68
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 85 8B EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 BE 1D EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 E7 10 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 72 01 00 00: jne 0x588c30f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 19: jne 0x588c2fa2
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 2B 02 00 00: push 0x22b
        __asm _emit 0x68
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5A 8B EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 93 1D EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 BC 10 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 1C: jne 0x588c2fc3
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 2C 02 00 00: push 0x22c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 39 8B EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 72 1D EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 10 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 1C: jne 0x588c2fe4
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 2D 02 00 00: push 0x22d
        __asm _emit 0x68
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 18 8B EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 51 1D EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 7A 10 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 1C: jne 0x588c3005
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 41 02 00 00: push 0x241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F7 8A EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8a
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 30 1D EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 59 10 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 50 10 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 80 DC 00 00 00: mov eax, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x588c303c
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 61 0D 00 00: lea eax, [esp + 0xd61]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FB 9B 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9b
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes C6 84 24 5C 0D 00 00 00: mov byte ptr [esp + 0xd5c], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 81 00 00 00: jbe 0x588c30e3
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 94 24 E1 08 00 00: lea edx, [esp + 0x8e1]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 0D C8 B4 A0 58: mov dword ptr [0x58a0b4c8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes C6 84 24 E8 08 00 00 00: mov byte ptr [esp + 0x8e8], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C5 9B 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x9b
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 68 C8 B4 A0 58: push 0x58a0b4c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 84 24 EC 08 00 00: lea eax, [esp + 0x8ec]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E0 A0 0B 00: call 0x5897d17a
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 8C 24 DC 08 00 00: lea ecx, [esp + 0x8dc]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 DC 08 00 00: lea edx, [esp + 0x8dc]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes C6 04 10 00: mov byte ptr [eax + edx], 0
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 DC 08 00 00: lea eax, [esp + 0x8dc]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 B8 0A 9A 58: push 0x589a0ab8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 64 0D 00 00: lea ecx, [esp + 0xd64]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 80 89 E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 64 0D 00 00: lea edx, [esp + 0xd64]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E9 9C 08 00 00: jmp 0x588c3990
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 61 0F 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 80 DC 00 00 00: mov eax, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x588c312b
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 80 D8 00 00 00: mov eax, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x588c3159
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes B9 09 00 00 00: mov ecx, 9
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF A0 B4 A0 58: mov edi, 0x58a0b4a0
        __asm _emit 0xbf
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes A1 A0 B4 A0 58: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 0D 00 00 02 00: or eax, 0x20000
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 13 4C EF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D A0 B4 A0 58: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 81 C9 00 00 04 00: or ecx, 0x40000
        __asm _emit 0x81
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 4B EF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x4b
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 44 EF FF: call 0x587b76a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 8F 62 EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x62
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 30 02 00 00: push 0x230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2F 89 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x89
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 68 1B EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1b
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 91 0E 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 08 00: cmp dword ptr [edi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 87 0E 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x588c3271
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x588c3271
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 69 0E 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 10: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 83 EA 24: sub edx, 0x24
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 46 24: lea eax, [esi + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 CC 08 00 00: lea ecx, [esp + 0x8cc]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 A8 45 A2 58: cmp edx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 3E 0E 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 78 0C: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x0c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 2E 0E 00 00: je 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D A4 C1 98 58: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 08: jmp 0x588c3240
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C3240 .. +0x3F6 bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 8F E8 12 00 00: mov ecx, dword ptr [edi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 6C: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 94 24 C4 08 00 00: lea edx, [esp + 0x8c4]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0C: je 0x588c3264
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 7F 78: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x78
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 E1: jne 0x588c3240
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes E9 FA 0D 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A4 99 01 00: call 0x588dcc10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 ED 0D 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 0F B7 1D A8 B4 A0 58: movzx ebx, word ptr [0x58a0b4a8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes A3 A0 B4 A0 58: mov dword ptr [0x58a0b4a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 89 0D A4 B4 A0 58: mov dword ptr [0x58a0b4a4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 56 08: mov dx, word ptr [esi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 15 A8 B4 A0 58: mov word ptr [0x58a0b4a8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 46 0C: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 56 10: lea edx, [esi + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x10
        ; Exact mapped bytes A3 AC B4 A0 58: mov dword ptr [0x58a0b4ac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 68 01: lea ebp, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x01
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F9: jne 0x588c32a3
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 0C: je 0x588c32ba
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 B0 B4 A0 58: push 0x58a0b4b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D A8 45 A2 58: cmp ecx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 0F: jne 0x588c32d7
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 39 99 01 00: call 0x588dcc10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7F 0C: mov edi, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x0c
        ; Exact mapped bytes 83 FF 01: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 53 01 00 00: jne 0x588c3436
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 05: je 0x588c32ed
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B DF: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 75 50: jne 0x588c333d
        __asm _emit 0x75
        __asm _emit 0x50
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x588c33cc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3F: je 0x588c333d
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 0F B7 C8: movzx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc8
        ; Exact mapped bytes 81 C9 00 00 03 00: or ecx, 0x30000
        __asm _emit 0x81
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 4A EF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x4a
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 04 02 00 00: push 0x204
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CB 87 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 04 1A EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A D8 00 00 00: mov ecx, dword ptr [edx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A3 56 F8 FF: call 0x588489e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x56
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 7E 08 03: cmp word ptr [esi + 8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x03
        ; Exact mapped bytes 75 44: jne 0x588c3388
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3E: je 0x588c3388
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 0D 00 00 02 00: or eax, 0x20000
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 30 4A EF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x4a
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 05 02 00 00: push 0x205
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 80 87 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B9 19 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x19
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 58 56 F8 FF: call 0x588489e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x56
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 46 08: movzx eax, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 0A: je 0x588c339c
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x588c3497
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x588c3497
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 16: movzx edx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 81 CA 00 00 02 00: or edx, 0x20000
        __asm _emit 0x81
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 D4 49 EF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x49
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x588c3489
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 04 00: cmp dword ptr [esi + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 75 21: jne 0x588c33fb
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 0D 00 00 02 00: or eax, 0x20000
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A8 49 EF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x49
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 39: jne 0x588c3426
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 0F B7 0E: movzx ecx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0e
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 81 C9 00 00 04 00: or ecx, 0x40000
        __asm _emit 0x81
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 20: jmp 0x588c341b
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 0F B7 D0: movzx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd0
        ; Exact mapped bytes 81 CA 00 00 02 00: or edx, 0x20000
        __asm _emit 0x81
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 86 49 EF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x49
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 17: jne 0x588c3426
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 0F B7 46 04: movzx eax, word ptr [esi + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 0D 00 00 03 00: or eax, 0x30000
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 49 EF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x49
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 05 02 00 00: push 0x205
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EA FE FF FF: jmp 0x588c3320
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 FF 03: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x03
        ; Exact mapped bytes 75 5C: jne 0x588c3497
        __asm _emit 0x75
        __asm _emit 0x5c
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0D: je 0x588c3451
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 83 3E 00: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 75 16: jne 0x588c346c
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 42 EF FF: call 0x587b7670
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 42 EF FF: call 0x587b76d0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x42
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 83 7E 04 00: cmp dword ptr [esi + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x588c347d
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 42 EF FF: call 0x587b76a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x42
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 82 51 F8 FF: call 0x58848610
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 F9 5C EF FF: call 0x587b9190
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x5c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E EE E8 FF: call 0x58752340
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xee
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes E9 B7 0B 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 3B 15 A0 B4 A0 58: cmp edx, dword ptr [0x58a0b4a0]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 A8 0B 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3D A8 B4 A0 58 06: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 9A 0B 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 0C 01: cmp dword ptr [edi + 0xc], 1
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x01
        ; Exact mapped bytes 75 29: jne 0x588c34f3
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 44 02 00 00: push 0x244
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 04 86 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 3D 18 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 83 7F 0C 00: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 61 0B 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 DC 00 00 00: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 45 02 00 00: push 0x245
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D0 85 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 09 18 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x18
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 32 0B 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7F 08: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 12: jne 0x588c3545
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 94 45 A2 58: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 30: mov eax, dword ptr [edx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x30
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 19 0B 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E0 45 A2 58: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 1E 1B E9 FF: call 0x58755070
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1b
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E0 45 A2 58: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 1C E9 FF: call 0x58755170
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x1c
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E0 45 A2 58: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 B6 2A E9 FF: call 0x58756020
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2a
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 EF 0A 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 57 0C: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D E0 45 A2 58: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 99 1F E9 FF: call 0x58755520
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1f
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E0 45 A2 58: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 8C 2A E9 FF: call 0x58756020
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 0A 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 05 01 00 00: jbe 0x588c36a8
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes E8 A4 96 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x96
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes E8 9B 96 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 89 4D 00: mov dword ptr [ebp], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 89 55 04: mov dword ptr [ebp + 4], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 8B 4E 0C: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4B 04: mov dword ptr [ebx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x04
        ; Exact mapped bytes A1 A0 B4 A0 58: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A4 B4 A0 58: mov ecx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 3B 45 00: cmp eax, dword ptr [ebp]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 75 66: jne 0x588c3644
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes 3B 4D 04: cmp ecx, dword ptr [ebp + 4]
        __asm _emit 0x3b
        __asm _emit 0x4d
        __asm _emit 0x04
        ; Exact mapped bytes 75 61: jne 0x588c3644
        __asm _emit 0x75
        __asm _emit 0x61
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0D: je 0x588c35f9
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 0A 02 00 00: push 0x20a
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E7 84 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 20 17 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x0b
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 89 0D A0 B4 A0 58: mov dword ptr [0x58a0b4a0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 53 04: mov edx, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 A4 B4 A0 58: mov dword ptr [0x58a0b4a4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 5E EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x5e
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 0C 96 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x96
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C3636 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_03() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 06 96 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E9 1A 0A 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C3644 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_04() {
    __asm {
        ; Exact mapped bytes 3B 47 08: cmp eax, dword ptr [edi + 8]
        __asm _emit 0x3b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 75 4B: jne 0x588c3694
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 3B 4F 0C: cmp ecx, dword ptr [edi + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 75 46: jne 0x588c3694
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 4B 02 00 00: push 0x24b
        __asm _emit 0x68
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 92 84 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 CB 16 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x16
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 26: je 0x588c3694
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 85 4F F8 FF: call 0x58848610
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 FC 5A EF FF: call 0x587b9190
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5a
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 A8 95 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x95
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C369A .. +0xE bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_05() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 A2 95 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x95
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E9 B6 09 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C36A8 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_06() {
    __asm {
        ; Exact mapped bytes 66 83 3D A8 B4 A0 58 03: cmp word ptr [0x58a0b4a8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 A8 09 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 09 02 00 00: push 0x209
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2A 84 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 63 16 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x16
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 8C 09 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 10 00: cmp dword ptr [edi + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 F9 00 00 00: jbe 0x588c37d5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes E8 6B 95 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x95
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes E8 62 95 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x95
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 89 4D 00: mov dword ptr [ebp], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 89 55 04: mov dword ptr [ebp + 4], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 8B 4E 0C: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4B 04: mov dword ptr [ebx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x04
        ; Exact mapped bytes A1 A0 B4 A0 58: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A4 B4 A0 58: mov ecx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 3B 45 00: cmp eax, dword ptr [ebp]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 75 4F: jne 0x588c3766
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 3B 4D 04: cmp ecx, dword ptr [ebp + 4]
        __asm _emit 0x3b
        __asm _emit 0x4d
        __asm _emit 0x04
        ; Exact mapped bytes 75 4A: jne 0x588c3766
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 13: mov edx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x13
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 A0 B4 A0 58: mov dword ptr [0x58a0b4a0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 43 04: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 4A 02 00 00: push 0x24a
        __asm _emit 0x68
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 A4 B4 A0 58: mov dword ptr [0x58a0b4a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 83 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 ED 15 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x15
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 EE 5C EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 EA 94 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C3758 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_07() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 E4 94 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E9 F8 08 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C3766 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_08() {
    __asm {
        ; Exact mapped bytes 3B 47 08: cmp eax, dword ptr [edi + 8]
        __asm _emit 0x3b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 75 56: jne 0x588c37c1
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 3B 4F 0C: cmp ecx, dword ptr [edi + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 75 51: jne 0x588c37c1
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 66 83 3D A8 B4 A0 58 06: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x06
        ; Exact mapped bytes 75 2A: jne 0x588c37a4
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 DC 00 00 00: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 43 02 00 00: push 0x243
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 83 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8C 15 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x15
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 14: je 0x588c37c1
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 58 4E F8 FF: call 0x58848610
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 CF 59 EF FF: call 0x587b9190
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x59
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 7B 94 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C37C7 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_09() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 75 94 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E9 89 08 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C37D5 .. +0x2BF bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_10() {
    __asm {
        ; Exact mapped bytes 66 83 3D A8 B4 A0 58 06: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 7B 08 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 42 02 00 00: push 0x242
        __asm _emit 0x68
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FD 82 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 36 15 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x15
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 5F 08 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 08 00: cmp dword ptr [edi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 2D A8 B4 A0 58: movsx ebp, word ptr [0x58a0b4a8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F 87 B2 01 00 00: ja 0x588c39c2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 0C 00: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 A8 01 00 00: ja 0x588c39c2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7F 10: mov edi, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x10
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 86 81 01 00 00: jbe 0x588c39a6
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 83 F8 0B: cmp eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 87 76 01 00 00: ja 0x588c39a6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 B4 41 8C 58: jmp dword ptr [eax*4 + 0x588c41b4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8E 04 00 00: push 0x48e
        __asm _emit 0x68
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A9 82 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 E2 14 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 0B 08 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8F 04 00 00: push 0x48f
        __asm _emit 0x68
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8D 82 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 C6 14 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 EF 07 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 9A 04 00 00: push 0x49a
        __asm _emit 0x68
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 82 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AA 14 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 D3 07 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 99 04 00 00: push 0x499
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 55 82 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8E 14 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 B7 07 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 9B 04 00 00: push 0x49b
        __asm _emit 0x68
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 39 82 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 72 14 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 07 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 02 00 00: push 0x201
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1D 82 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 56 14 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 7F 07 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 8C 24 61 0E 00 00: lea ecx, [esp + 0xe61]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 58 93 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x93
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C6 84 24 5C 0E 00 00 00: mov byte ptr [esp + 0xe5c], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 04: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x04
        ; Exact mapped bytes 0F 86 80 00 00 00: jbe 0x588c3984
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 E1 09 00 00: lea eax, [esp + 0x9e1]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 54 24 24: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes C6 84 24 E8 09 00 00 00: mov byte ptr [esp + 0x9e8], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 24 93 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x93
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 24: lea ecx, [esp + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 94 24 EC 09 00 00: lea edx, [esp + 0x9ec]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 3F 98 0B 00: call 0x5897d17a
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 84 24 DC 09 00 00: lea eax, [esp + 0x9dc]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 DC 09 00 00: lea edx, [esp + 0x9dc]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 DC 09 00 00: lea ecx, [esp + 0x9dc]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 68 B8 0A 9A 58: push 0x589a0ab8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes C6 04 08 00: mov byte ptr [eax + ecx], 0
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 64 0E 00 00: lea eax, [esp + 0xe64]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DF 80 E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x80
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 8C 24 5C 0E 00 00: lea ecx, [esp + 0xe5c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 81 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x81
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8F 13 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x13
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 B8 06 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 03 02 00 00: push 0x203
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A 81 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x81
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 73 13 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x13
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 9C 06 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 3B 15 A0 B4 A0 58: cmp edx, dword ptr [0x58a0b4a0]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 32: jne 0x588c39fe
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 3B 05 A4 B4 A0 58: cmp eax, dword ptr [0x58a0b4a4]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 27: jne 0x588c39fe
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 DC 00 00 00: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 47 5A EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x5a
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes E9 60 06 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes E8 49 92 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 89 5C 24 20: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes E8 3C 92 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x92
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 8C 24 69 0F 00 00: lea ecx, [esp + 0xf69]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x69
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 7C 24 28: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes C6 84 24 70 0F 00 00 00: mov byte ptr [esp + 0xf70], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 92 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x92
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 89 13: mov dword ptr [ebx], edx
        __asm _emit 0x89
        __asm _emit 0x13
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 89 43 04: mov dword ptr [ebx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 89 0F: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 56 0C: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x0c
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 89 57 04: mov dword ptr [edi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 83 FD 06: cmp ebp, 6
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x06
        ; Exact mapped bytes 74 54: je 0x588c3aa2
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 83 FD 05: cmp ebp, 5
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x05
        ; Exact mapped bytes 74 4F: je 0x588c3aa2
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 00 00 00: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 DC 00 00 00: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 60 01 00 00: mov eax, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 80 21 03 00 00 07: mov byte ptr [eax + 0x321], 7
        __asm _emit 0xc6
        __asm _emit 0x80
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 8B 4F 04: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 8B 17: mov edx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x17
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 02 58 EF FF: call 0x587b9290
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x58
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 AE 91 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C3A94 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_11() {
    __asm {
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A8 91 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E9 BC 05 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C3AA2 .. +0x1BC bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_12() {
    __asm {
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 3A 01 E9 FF: call 0x58753bf0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes E8 8F 91 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 7D 91 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 0E: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 56 04: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 8D 5E 2D: lea ebx, [esi + 0x2d]
        __asm _emit 0x8d
        __asm _emit 0x5e
        __asm _emit 0x2d
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 2B CB: sub ecx, ebx
        __asm _emit 0x2b
        __asm _emit 0xcb
        ; Exact mapped bytes 89 46 08: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes BA 18 00 00 00: mov edx, 0x18
        __asm _emit 0xba
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 69 2D: lea ebp, [ecx + 0x2d]
        __asm _emit 0x8d
        __asm _emit 0x69
        __asm _emit 0x2d
        ; Exact mapped bytes 8D 8A E6 FF FF 7F: lea ecx, [edx + 0x7fffffe6]
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x588c3b0e
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 28: mov cl, byte ptr [eax + ebp]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x28
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x588c3b0e
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x588c3af3
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588c3b12
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 01: jne 0x588c3b13
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 46 0C: lea eax, [esi + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes BA 18 00 00 00: mov edx, 0x18
        __asm _emit 0xba
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 69 0C: lea ebp, [ecx + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x69
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 8A E6 FF FF 7F: lea ecx, [edx + 0x7fffffe6]
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x588c3b40
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 28: mov cl, byte ptr [eax + ebp]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x28
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x588c3b40
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x588c3b25
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588c3b44
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 01: jne 0x588c3b45
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 46 24: lea eax, [esi + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes BA 09 00 00 00: mov edx, 9
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 24: add edi, 0x24
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x24
        ; Exact mapped bytes 8D 8A F5 FF FF 7F: lea ecx, [edx + 0x7ffffff5]
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x588c3b70
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 38: mov cl, byte ptr [eax + edi]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x38
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x588c3b70
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x588c3b55
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588c3b74
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 01: jne 0x588c3b75
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 80 1E F7 FF: call 0x58835a10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 DC 00 00 00: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 83 3D B4 45 A2 58 00: cmp dword ptr [0x58a245b4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 5E: je 0x588c3c0a
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8D 46 0C: lea eax, [esi + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 00 A8 99 58: push 0x5899a800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xa8
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 64 0F 00 00: lea ecx, [esp + 0xf64]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 94 24 60 0F 00 00: lea edx, [esp + 0xf60]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 F9 A6 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 D8 00 00 00: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 18 56 F8 FF: call 0x58849210
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x56
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 D8 00 00 00: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 46 48 F8 FF: call 0x58848450
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 A8 45 A2 58: cmp edx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 40: jne 0x588c3c58
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 78 0C: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x0c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 34: je 0x588c3c58
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 2D A4 C1 98 58: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8F E8 12 00 00: mov ecx, dword ptr [edi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 6C: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x6c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x588c3c4a
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 7F 78: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x78
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 E8: jne 0x588c3c30
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes EB 0E: jmp 0x588c3c58
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 E8 57 EF FF: call 0x587b9440
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 E4 8F 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C3C5E .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_13() {
    __asm {
        ; Exact mapped bytes 8B 5C 24 1C: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 7C 24 18: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 D3 8F 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 CD 8F 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E9 E1 03 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C3C7D .. +0x401 bytes.
extern "C" __declspec(naked) void FUN_588c1650_segment_14() {
    __asm {
        ; Exact mapped bytes 83 7F 08 00: cmp dword ptr [edi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 98 01 00 00: jne 0x588c3e1f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7F 0C 00: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 8E 01 00 00: jne 0x588c3e1f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 83 F8 09: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 87 31 01 00 00: ja 0x588c3dcd
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 E4 41 8C 58: jmp dword ptr [eax*4 + 0x588c41e4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8E 04 00 00: push 0x48e
        __asm _emit 0x68
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x588c3dd8
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 99 04 00 00: push 0x499
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x588c3dd8
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 89 04 00 00: push 0x489
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x588c3dd8
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8D 04 00 00: push 0x48d
        __asm _emit 0x68
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x588c3dd8
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 02 00 00: push 0x201
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x588c3dd8
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 9A 04 00 00: push 0x49a
        __asm _emit 0x68
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x588c3dd8
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 9B 04 00 00: push 0x49b
        __asm _emit 0x68
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x588c3dd8
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 94 24 61 10 00 00: lea edx, [esp + 0x1061]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 24 8F 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 7F 10 04: cmp dword ptr [edi + 0x10], 4
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x04
        ; Exact mapped bytes C6 84 24 5C 10 00 00 00: mov byte ptr [esp + 0x105c], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 81 00 00 00: jbe 0x588c3dba
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 8C 24 61 09 00 00: lea ecx, [esp + 0x961]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes A3 C8 B4 A0 58: mov dword ptr [0x58a0b4c8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes C6 84 24 68 09 00 00 00: mov byte ptr [esp + 0x968], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EE 8E 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 68 C8 B4 A0 58: push 0x58a0b4c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 6C 09 00 00: lea edx, [esp + 0x96c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 09 94 0B 00: call 0x5897d17a
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 84 24 5C 09 00 00: lea eax, [esp + 0x95c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 5C 09 00 00: lea edx, [esp + 0x95c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 5C 09 00 00: lea ecx, [esp + 0x95c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 68 B8 0A 9A 58: push 0x589a0ab8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes C6 04 08 00: mov byte ptr [eax + ecx], 0
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 64 10 00 00: lea eax, [esp + 0x1064]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A9 7C E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7c
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 64 10 00 00: lea ecx, [esp + 0x1064]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x588c3dd8
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 02 02 00 00: push 0x202
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 13 7D EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 4C 0F EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 DC 00 00 00: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 54 01 00 00: mov eax, dword ptr [eax + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 C8 00 00 00: mov ecx, dword ptr [eax + 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 1C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 90 CC 00 00 00: mov edx, dword ptr [eax + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 54 24 24: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes E8 16 08 E9 FF: call 0x58754630
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 3F 02 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 3B 0D A0 B4 A0 58: cmp ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 31 02 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 05 A8 B4 A0 58: movsx eax, word ptr [0x58a0b4a8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 09: je 0x588c3e42
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 1C 02 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 05 8E 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 F3 8D 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 89 16: mov dword ptr [esi], edx
        __asm _emit 0x89
        __asm _emit 0x16
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 89 46 04: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 DC 00 00 00: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 60 01 00 00: mov ecx, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 E5 55 F7 FF: call 0x58839460
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x55
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 DE 01 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 84 24 61 11 00 00: lea eax, [esp + 0x1161]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C6 84 24 68 11 00 00 00: mov byte ptr [esp + 0x1168], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AF 8D 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 10: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 94 24 84 08 00 00: lea edx, [esp + 0x884]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 77 08: mov esi, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7F 0C: mov edi, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 84 24 7C 08 00 00: lea eax, [esp + 0x87c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 84 A7 99 58: push 0x5899a784
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 64 11 00 00: lea ecx, [esp + 0x1164]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 94 24 60 11 00 00: lea edx, [esp + 0x1160]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 EB A3 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8C 24 7C 08 00 00: lea ecx, [esp + 0x87c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 50 B4 A0 58: mov eax, 0x58a0b450
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 3A 11: cmp dl, byte ptr [ecx]
        __asm _emit 0x3a
        __asm _emit 0x11
        ; Exact mapped bytes 75 1A: jne 0x588c3f21
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 74 12: je 0x588c3f1d
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8A 50 01: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 3A 51 01: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3a
        __asm _emit 0x51
        __asm _emit 0x01
        ; Exact mapped bytes 75 0E: jne 0x588c3f21
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 E4: jne 0x588c3f01
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 05: jmp 0x588c3f26
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 83 D8 FF: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x588c4010
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 35 A0 B4 A0 58: cmp dword ptr [0x58a0b4a0], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 0C: jne 0x588c3f42
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 84 24 7C 08 00 00: lea eax, [esp + 0x87c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x588c4052
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 3D A4 B4 A0 58: cmp dword ptr [0x58a0b4a4], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x588c405e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 7C 08 00 00: lea ecx, [esp + 0x87c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF A7 F5 FF: call 0x5881e760
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa7
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x588c405e
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 94 24 61 12 00 00: lea edx, [esp + 0x1261]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes C6 84 24 68 12 00 00 00: mov byte ptr [esp + 0x1268], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C9 8C 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 10: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 8C 24 9C 08 00 00: lea ecx, [esp + 0x89c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 77 08: mov esi, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7F 0C: mov edi, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 94 24 94 08 00 00: lea edx, [esp + 0x894]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 5C A7 99 58: push 0x5899a75c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0xa7
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 64 12 00 00: lea eax, [esp + 0x1264]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8C 24 60 12 00 00: lea ecx, [esp + 0x1260]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 A3 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8C 24 94 08 00 00: lea ecx, [esp + 0x894]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 50 B4 A0 58: mov eax, 0x58a0b450
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 3A 11: cmp dl, byte ptr [ecx]
        __asm _emit 0x3a
        __asm _emit 0x11
        ; Exact mapped bytes 75 1A: jne 0x588c4007
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 74 12: je 0x588c4003
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8A 50 01: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 3A 51 01: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3a
        __asm _emit 0x51
        __asm _emit 0x01
        ; Exact mapped bytes 75 0E: jne 0x588c4007
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 E4: jne 0x588c3fe7
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 05: jmp 0x588c400c
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 83 D8 FF: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 16: jne 0x588c4026
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 A7 F5 FF: call 0x5881e7a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 6C 51 EF FF: call 0x587b9190
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x51
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 38: jmp 0x588c405e
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 39 35 A0 B4 A0 58: cmp dword ptr [0x58a0b4a0], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 15: jne 0x588c4043
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 94 08 00 00: lea edx, [esp + 0x894]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 1F A7 F5 FF: call 0x5881e760
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa7
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 1B: jmp 0x588c405e
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 39 3D A4 B4 A0 58: cmp dword ptr [0x58a0b4a4], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 13: jne 0x588c405e
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8D 84 24 94 08 00 00: lea eax, [esp + 0x894]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C2 A6 F5 FF: call 0x5881e720
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 8C 24 D4 13 00 00: mov ecx, dword ptr [esp + 0x13d4]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 65 8B 0B 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8b
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 D0 13 00 00: add esp, 0x13d0
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0xd0
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
