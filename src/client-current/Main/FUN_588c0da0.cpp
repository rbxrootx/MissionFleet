// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C0DA0 .. +0x88C bytes.
// Source symbol alias: FUN_588c0da0.
extern "C" __declspec(naked) void FUN_588c0da0() {
    __asm {
        // 0x588C0DA0: push esi
        __asm _emit 0x56
        // 0x588C0DA1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C0DA3: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588C0DA6: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588C0DAA: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588C0DAC: je 0x588c1628
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0DB2: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588C0DB5: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588C0DB8: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0DBD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C0DBF: je 0x588c127e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0DC5: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0DCB: jne 0x588c127e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0DD1: cmp byte ptr [eax + 0x74], 1
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x588C0DD5: je 0x588c0de9
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588C0DD7: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0DDC: cmp byte ptr [eax + 0x2fc], 1
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588C0DE3: jne 0x588c127e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0DE9: mov dword ptr [esi + 0x5c], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0DF0: mov eax, dword ptr [0x58a24804]
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0DF5: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C0DF9: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C0DFC: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x01
        // 0x588C0E00: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588C0E03: mov eax, dword ptr [0x58a24800]
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0E08: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C0E0C: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C0E0F: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0E14: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x588C0E17: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C0E1A: mov eax, dword ptr [0x58a24808]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0E1F: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C0E23: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C0E26: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x588C0E29: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C0E2C: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588C0E2F: cmp eax, 0x3e8
        __asm _emit 0x3D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0E34: ja 0x588c0f3b
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0E3A: je 0x588c0ee2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0E40: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588C0E43: ja 0x588c0e9b
        __asm _emit 0x77
        __asm _emit 0x56
        // 0x588C0E45: je 0x588c0e55
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C0E47: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x588C0E4A: je 0x588c0e55
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588C0E4C: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588C0E4F: jne 0x588c113d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0E55: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0E5A: cmp dword ptr [eax + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588C0E61: jle 0x588c0e88
        __asm _emit 0x7E
        __asm _emit 0x25
        // 0x588C0E63: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0E6A: je 0x588c0e88
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588C0E6C: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0E72: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0E78: add eax, 0x100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0E7D: push eax
        __asm _emit 0x50
        // 0x588C0E7E: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x3A
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C0E83: jmp 0x588c113d
        __asm _emit 0xE9
        __asm _emit 0xB5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0E88: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0E8E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C0E90: push eax
        __asm _emit 0x50
        // 0x588C0E91: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x3A
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C0E96: jmp 0x588c113d
        __asm _emit 0xE9
        __asm _emit 0xA2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0E9B: cmp eax, 0x12c
        __asm _emit 0x3D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0EA0: jne 0x588c113d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0EA6: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0EAC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C0EAE: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x07
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C0EB3: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0EB8: cmp dword ptr [eax + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588C0EBF: jle 0x588c111f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x5A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0EC5: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0ECC: je 0x588c111f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0ED2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0ED8: add eax, 0x100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0EDD: jmp 0x588c1121
        __asm _emit 0xE9
        __asm _emit 0x3F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0EE2: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0EE7: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0EEE: jle 0x588c0f01
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588C0EF0: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0EF7: je 0x588c0f01
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588C0EF9: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0EFF: jmp 0x588c0f03
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0F01: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C0F03: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0F09: push eax
        __asm _emit 0x50
        // 0x588C0F0A: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x3A
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C0F0F: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0F15: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0F1A: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x1D
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C0F1F: mov eax, dword ptr [0x58a24808]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0F24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C0F28: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C0F2B: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0F30: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x588C0F33: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C0F36: jmp 0x588c113d
        __asm _emit 0xE9
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0F3B: sub eax, 0x3e9
        __asm _emit 0x2D
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0F40: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588C0F43: ja 0x588c113d
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0F49: jmp dword ptr [eax*4 + 0x588c162c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x16
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x588C0F50: mov eax, dword ptr [0x58a2460c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0F55: cmp dword ptr [eax + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588C0F5C: jle 0x588c0f72
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588C0F5E: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0F65: je 0x588c0f72
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C0F67: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0F6D: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x588C0F70: jmp 0x588c0f74
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0F72: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C0F74: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0F7A: push eax
        __asm _emit 0x50
        // 0x588C0F7B: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x39
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C0F80: mov eax, dword ptr [0x58a2460c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0F85: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0F8C: jle 0x588c0f9f
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588C0F8E: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0F95: je 0x588c0f9f
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588C0F97: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0F9D: jmp 0x588c0fa1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0F9F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C0FA1: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0FA7: push eax
        __asm _emit 0x50
        // 0x588C0FA8: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x39
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C0FAD: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0FB3: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C0FB8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x1D
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C0FBD: jmp 0x588c113d
        __asm _emit 0xE9
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0FC2: mov eax, dword ptr [0x58a2460c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0FC7: cmp dword ptr [eax + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588C0FCE: jle 0x588c0f72
        __asm _emit 0x7E
        __asm _emit 0xA2
        // 0x588C0FD0: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0FD7: je 0x588c0f72
        __asm _emit 0x74
        __asm _emit 0x99
        // 0x588C0FD9: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0FDF: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x588C0FE2: jmp 0x588c0f74
        __asm _emit 0xEB
        __asm _emit 0x90
        // 0x588C0FE4: mov eax, dword ptr [0x58a2460c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0FE9: cmp dword ptr [eax + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588C0FF0: jle 0x588c1008
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C0FF2: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0FF9: je 0x588c1008
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588C0FFB: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1001: add eax, 0x100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1006: jmp 0x588c100a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C1008: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C100A: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1010: push eax
        __asm _emit 0x50
        // 0x588C1011: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x39
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C1016: mov eax, dword ptr [0x58a2460c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C101B: cmp dword ptr [eax + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588C1022: jle 0x588c0f9f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x77
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C1028: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C102F: je 0x588c0f9f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C1035: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C103B: add eax, 0xc0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1040: jmp 0x588c0fa1
        __asm _emit 0xE9
        __asm _emit 0x5C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C1045: mov eax, dword ptr [0x58a2460c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C104A: cmp dword ptr [eax + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x588C1051: jle 0x588c1008
        __asm _emit 0x7E
        __asm _emit 0xB5
        // 0x588C1053: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C105A: je 0x588c1008
        __asm _emit 0x74
        __asm _emit 0xAC
        // 0x588C105C: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1062: add eax, 0x140
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1067: jmp 0x588c100a
        __asm _emit 0xEB
        __asm _emit 0xA1
        // 0x588C1069: mov eax, dword ptr [0x58a2460c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C106E: cmp dword ptr [eax + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588C1075: jle 0x588c108d
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C1077: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C107E: je 0x588c108d
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588C1080: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1086: add eax, 0x1c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C108B: jmp 0x588c108f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C108D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C108F: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1095: push eax
        __asm _emit 0x50
        // 0x588C1096: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C109B: mov eax, dword ptr [0x58a2460c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C10A0: cmp dword ptr [eax + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x588C10A7: jle 0x588c0f9f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C10AD: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C10B4: je 0x588c0f9f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C10BA: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C10C0: add eax, 0x180
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C10C5: jmp 0x588c0fa1
        __asm _emit 0xE9
        __asm _emit 0xD7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C10CA: mov eax, dword ptr [0x58a2460c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C10CF: cmp dword ptr [eax + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x588C10D6: jle 0x588c108d
        __asm _emit 0x7E
        __asm _emit 0xB5
        // 0x588C10D8: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C10DF: je 0x588c108d
        __asm _emit 0x74
        __asm _emit 0xAC
        // 0x588C10E1: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C10E7: add eax, 0x200
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C10EC: jmp 0x588c108f
        __asm _emit 0xEB
        __asm _emit 0xA1
        // 0x588C10EE: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C10F4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C10F6: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x04
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C10FB: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1100: cmp dword ptr [eax + 0x160], 0xc
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588C1107: jle 0x588c111f
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C1109: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1110: je 0x588c111f
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588C1112: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1118: add eax, 0x300
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C111D: jmp 0x588c1121
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C111F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C1121: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1127: push eax
        __asm _emit 0x50
        // 0x588C1128: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x37
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C112D: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1133: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1138: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x1B
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C113D: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x588C1140: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588C1143: inc edx
        __asm _emit 0x42
        // 0x588C1144: mov dword ptr [esi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x588C1147: cmp eax, 0x12c
        __asm _emit 0x3D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C114C: je 0x588c116e
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588C114E: cmp eax, 0x3f1
        __asm _emit 0x3D
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1153: je 0x588c116e
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588C1155: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588C1158: je 0x588c116e
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588C115A: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588C115D: je 0x588c116e
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588C115F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C1161: je 0x588c116e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C1163: cmp eax, 0x3e8
        __asm _emit 0x3D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1168: jne 0x588c1628
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C116E: mov eax, dword ptr [0x58a24800]
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1173: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C1177: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C117A: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x01
        // 0x588C117E: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588C1181: cmp dword ptr [esi + 0x54], 0x3e8
        __asm _emit 0x81
        __asm _emit 0x7E
        __asm _emit 0x54
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1188: je 0x588c119d
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588C118A: mov eax, dword ptr [0x58a24808]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C118F: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C1193: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C1196: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x01
        // 0x588C119A: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C119D: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588C11A0: mov ecx, dword ptr [0x58a24608]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C11A6: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C11AC: jle 0x588c11c6
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588C11AE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C11B0: jl 0x588c11c6
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588C11B2: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C11B9: je 0x588c11c6
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C11BB: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588C11BE: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C11C4: jmp 0x588c11c8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C11C6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C11C8: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C11CE: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588C11D1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C11D3: je 0x588c11fd
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C11D5: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588C11D8: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C11DB: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588C11DE: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588C11E1: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C11E4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C11E6: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C11E9: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C11EB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C11EE: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C11F1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C11F4: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C11F7: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C11FA: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C11FD: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588C1200: mov ecx, dword ptr [0x58a24608]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1206: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C120C: jle 0x588c1226
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588C120E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C1210: jl 0x588c1226
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588C1212: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1219: je 0x588c1226
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C121B: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588C121E: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1224: jmp 0x588c1228
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C1226: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C1228: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C122E: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588C1231: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C1233: je 0x588c125d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C1235: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588C1238: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C123B: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588C123E: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588C1241: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C1244: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C1246: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C1249: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C124B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C124E: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C1251: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C1254: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C1257: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C125A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C125D: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1263: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C1265: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x1A
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C126A: pop esi
        __asm _emit 0x5E
        // 0x588C126B: mov dword ptr [esp + 4], 0xff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1273: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1279: jmp 0x58902ce0
        __asm _emit 0xE9
        __asm _emit 0x62
        __asm _emit 0x1A
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C127E: mov dword ptr [esi + 0x5c], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1285: mov eax, dword ptr [0x58a24800]
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C128A: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C128E: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C1291: mov ecx, 4
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1296: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588C1299: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C129C: mov eax, dword ptr [0x58a24804]
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C12A1: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C12A5: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C12A8: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x01
        // 0x588C12AC: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C12AF: mov eax, dword ptr [0x58a24808]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C12B4: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C12B8: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C12BB: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x01
        // 0x588C12BF: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C12C2: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588C12C5: cmp eax, 0x12c
        __asm _emit 0x3D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C12CA: ja 0x588c1389
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C12D0: je 0x588c132a
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x588C12D2: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x588C12D5: je 0x588c12e5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C12D7: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588C12DA: je 0x588c12e5
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588C12DC: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588C12DF: jne 0x588c1428
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C12E5: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C12EA: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C12F0: jle 0x588c1317
        __asm _emit 0x7E
        __asm _emit 0x25
        // 0x588C12F2: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C12F9: je 0x588c1317
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588C12FB: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1301: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1307: add eax, 0x100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C130C: push eax
        __asm _emit 0x50
        // 0x588C130D: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x36
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C1312: jmp 0x588c1428
        __asm _emit 0xE9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1317: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C131D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C131F: push eax
        __asm _emit 0x50
        // 0x588C1320: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x35
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C1325: jmp 0x588c1428
        __asm _emit 0xE9
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C132A: mov eax, dword ptr [0x58a24804]
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C132F: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C1333: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C1336: push ebp
        __asm _emit 0x55
        // 0x588C1337: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C133C: and dx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD5
        // 0x588C133F: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C1342: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1347: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C134D: pop ebp
        __asm _emit 0x5D
        // 0x588C134E: jle 0x588c1366
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C1350: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1357: je 0x588c1366
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588C1359: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C135F: add eax, 0x100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1364: jmp 0x588c1368
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C1366: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C1368: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C136E: push eax
        __asm _emit 0x50
        // 0x588C136F: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x35
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C1374: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C137A: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C137F: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C1384: jmp 0x588c1428
        __asm _emit 0xE9
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1389: sub eax, 0x3e8
        __asm _emit 0x2D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C138E: je 0x588c13d4
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x588C1390: sub eax, 9
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x09
        // 0x588C1393: jne 0x588c1428
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1399: mov eax, dword ptr [0x58a24804]
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C139E: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C13A2: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C13A5: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C13AA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588C13AD: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588C13B0: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C13B5: cmp dword ptr [eax + 0x160], 0xc
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588C13BC: jle 0x588c1366
        __asm _emit 0x7E
        __asm _emit 0xA8
        // 0x588C13BE: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C13C5: je 0x588c1366
        __asm _emit 0x74
        __asm _emit 0x9F
        // 0x588C13C7: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C13CD: add eax, 0x300
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C13D2: jmp 0x588c1368
        __asm _emit 0xEB
        __asm _emit 0x94
        // 0x588C13D4: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C13D9: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C13E0: jle 0x588c13f3
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588C13E2: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C13E9: je 0x588c13f3
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588C13EB: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C13F1: jmp 0x588c13f5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C13F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C13F5: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C13FB: push eax
        __asm _emit 0x50
        // 0x588C13FC: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x35
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C1401: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1407: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C140C: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C1411: mov eax, dword ptr [0x58a24808]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1416: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C141A: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C141D: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1422: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588C1425: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588C1428: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588C142B: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x588C142E: mov dword ptr [esi + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588C1431: mov ecx, dword ptr [0x58a24608]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1437: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C143D: jle 0x588c1457
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588C143F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C1441: jl 0x588c1457
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588C1443: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C144A: je 0x588c1457
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C144C: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588C144F: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1455: jmp 0x588c1459
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C1457: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C1459: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C145F: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588C1462: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C1464: je 0x588c148e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C1466: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588C1469: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C146C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588C146F: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588C1472: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C1475: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C1477: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C147A: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C147C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C147F: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C1482: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C1485: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C1488: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C148B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C148E: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588C1491: mov ecx, dword ptr [0x58a24608]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1497: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C149D: jle 0x588c14b7
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588C149F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C14A1: jl 0x588c14b7
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588C14A3: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C14AA: je 0x588c14b7
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C14AC: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588C14AF: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C14B5: jmp 0x588c14b9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C14B7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C14B9: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C14BF: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588C14C2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C14C4: je 0x588c14ee
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C14C6: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588C14C9: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C14CC: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588C14CF: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588C14D2: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C14D5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C14D7: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C14DA: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C14DC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C14DF: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C14E2: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C14E5: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C14E8: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C14EB: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C14EE: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588C14F1: cmp eax, 0x12c
        __asm _emit 0x3D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C14F6: je 0x588c1518
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588C14F8: cmp eax, 0x3f1
        __asm _emit 0x3D
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C14FD: je 0x588c1518
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588C14FF: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588C1502: je 0x588c1518
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588C1504: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588C1507: je 0x588c1518
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588C1509: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C150B: je 0x588c1518
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C150D: cmp eax, 0x3e8
        __asm _emit 0x3D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1512: jne 0x588c1628
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1518: mov eax, dword ptr [0x58a24800]
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C151D: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C1521: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C1524: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x01
        // 0x588C1528: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588C152B: cmp dword ptr [esi + 0x54], 0x3e8
        __asm _emit 0x81
        __asm _emit 0x7E
        __asm _emit 0x54
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1532: je 0x588c1547
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588C1534: mov eax, dword ptr [0x58a24808]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1539: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C153D: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C1540: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x01
        // 0x588C1544: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C1547: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588C154A: mov ecx, dword ptr [0x58a24608]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1550: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1556: jle 0x588c1570
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588C1558: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C155A: jl 0x588c1570
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588C155C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C1563: je 0x588c1570
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C1565: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588C1568: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C156E: jmp 0x588c1572
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C1570: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C1572: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1578: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588C157B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C157D: je 0x588c15a7
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C157F: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588C1582: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C1585: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588C1588: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588C158B: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C158E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C1590: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C1593: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C1595: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C1598: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C159B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C159E: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C15A1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C15A4: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C15A7: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588C15AA: mov ecx, dword ptr [0x58a24608]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C15B0: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C15B6: jle 0x588c15d0
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588C15B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C15BA: jl 0x588c15d0
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588C15BC: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C15C3: je 0x588c15d0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C15C5: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588C15C8: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C15CE: jmp 0x588c15d2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C15D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C15D2: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C15D8: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588C15DB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C15DD: je 0x588c1607
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C15DF: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588C15E2: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C15E5: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588C15E8: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588C15EB: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C15EE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C15F0: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C15F3: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C15F5: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C15F8: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C15FB: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C15FE: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C1601: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C1604: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C1607: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C160D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C160F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C1614: pop esi
        __asm _emit 0x5E
        // 0x588C1615: mov dword ptr [esp + 4], 0xff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C161D: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C1623: jmp 0x58902ce0
        __asm _emit 0xE9
        __asm _emit 0xB8
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C1628: pop esi
        __asm _emit 0x5E
        // 0x588C1629: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
