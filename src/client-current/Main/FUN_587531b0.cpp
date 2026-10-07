// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 355 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587531B0 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_587531b0_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 84 04 00 00: sub esp, 0x484
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
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
        ; Exact mapped bytes 89 84 24 80 04 00 00: mov dword ptr [esp + 0x480], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B4 24 90 04 00 00: mov esi, dword ptr [esp + 0x490]
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 00 08 00 00: mov eax, 0x800
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 7E 30: lea edi, [esi + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x30
        ; Exact mapped bytes 66 39 84 24 90 04 00 00: cmp word ptr [esp + 0x490], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x58753279
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 84 24 98 04 00 00: mov ax, word ptr [esp + 0x498]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FF FF 00 00: mov ecx, 0xffff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x587532fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 74 3D: je 0x5875323e
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 F0 00 00 00: jne 0x587532fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 D6 98 58: push 0x5898d670
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xd6
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 10: lea edx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 0C: lea eax, [esp + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 17 A0 13 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa0
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x587532fa
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 18: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x18
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 48 D6 98 58: push 0x5898d648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xd6
        __asm _emit 0x98
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
        ; Exact mapped bytes 8D 4C 24 10: lea ecx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 FF 64 64 00: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 0C: lea edx, [esp + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 DC 9F 13 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9f
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x587532fa
        __asm _emit 0xe9
        __asm _emit 0x81
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
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 1B A9 0C 00: call 0x5881dba0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 71: jne 0x587532fa
        __asm _emit 0x75
        __asm _emit 0x71
        ; Exact mapped bytes 68 50 B4 A0 58: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 39: je 0x587532d2
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 84 24 8C 00 00 00: lea eax, [esp + 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 D6 98 58: push 0x5898d640
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xd6
        __asm _emit 0x98
        __asm _emit 0x58
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
        ; Exact mapped bytes 68 D4 03 00 00: push 0x3d4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 8C 24 90 00 00 00: lea ecx, [esp + 0x90]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
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
        ; Exact mapped bytes 8D 94 04 90 00 00 00: lea edx, [esp + eax + 0x90]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x90
        __asm _emit 0x00
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
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 9C 7F 0F 00: call 0x5884b280
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7f
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 90 00 00 00 00: cmp dword ptr [ecx + 0x90], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x587532fa
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 C6 FC FF FF: call 0x58752fc0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8C 24 88 04 00 00: mov ecx, dword ptr [esp + 0x488]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 D0 98 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 84 04 00 00: add esp, 0x484
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
