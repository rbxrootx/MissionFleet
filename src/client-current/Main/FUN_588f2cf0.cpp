// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F2CF0 .. +0x802 bytes.
// Source symbol alias: FUN_588f2cf0.
extern "C" __declspec(naked) void FUN_588f2cf0() {
    __asm {
        // 0x588F2CF0: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F2CF5: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x588F2CF8: cmp dword ptr [eax + 0xd78], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2CFF: push ebx
        __asm _emit 0x53
        // 0x588F2D00: push ebp
        __asm _emit 0x55
        // 0x588F2D01: push esi
        __asm _emit 0x56
        // 0x588F2D02: push edi
        __asm _emit 0x57
        // 0x588F2D03: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F2D05: je 0x588f2d76
        __asm _emit 0x74
        __asm _emit 0x6F
        // 0x588F2D07: mov eax, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D0D: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D13: movzx edi, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x588F2D17: mov eax, dword ptr [eax + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D1D: shr edi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x0A
        // 0x588F2D20: and edi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x1F
        // 0x588F2D23: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D28: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F2D2A: jns 0x588f2d2d
        __asm _emit 0x79
        __asm _emit 0x01
        // 0x588F2D2C: inc edi
        __asm _emit 0x47
        // 0x588F2D2D: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588F2D2F: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588F2D32: jne 0x588f2d28
        __asm _emit 0x75
        __asm _emit 0xF4
        // 0x588F2D34: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D3A: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F2D3F: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588F2D42: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F2D44: jle 0x588f2d76
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x588F2D46: lea ebx, [edi - 8]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0xF8
        // 0x588F2D49: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588F2D4B: jge 0x588f2d4f
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x588F2D4D: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F2D4F: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D55: push ebx
        __asm _emit 0x53
        // 0x588F2D56: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F2D5B: lea edi, [esi + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D61: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D66: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F2D68: push ebx
        __asm _emit 0x53
        // 0x588F2D69: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F2D6E: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588F2D71: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588F2D74: jne 0x588f2d66
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x588F2D76: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D7C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588F2D7E: mov dword ptr [esi + 0x400], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F2D88: mov dword ptr [esi + 0x3e0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D8E: mov dword ptr [esi + 0x3dc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D94: mov dword ptr [esi + 0x3e8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2D9A: mov dword ptr [esi + 0x3e4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2DA0: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F2DA4: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F2DA8: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F2DAC: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F2DB1: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F2DB7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F2DB9: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2DBF: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F2DC3: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588F2DC5: je 0x588f34bf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2DCB: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2DD1: mov dl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F2DD4: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2DDA: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588F2DDD: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588F2DE0: jne 0x588f2ded
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588F2DE2: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2DE7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F2DEB: jmp 0x588f2df2
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588F2DED: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F2DF2: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F2DF7: mov edx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2DFD: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2E03: movzx edx, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588F2E07: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588F2E0A: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588F2E0D: mov dword ptr [esi + 0x3ec], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2E13: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F2E18: mov edx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2E1E: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2E24: mov edx, dword ptr [eax + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2E2A: mov eax, dword ptr [eax + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2E30: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F2E34: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F2E36: imul eax, eax, -0xb
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0xF5
        // 0x588F2E39: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F2E3D: mov eax, 0xa28
        __asm _emit 0xB8
        __asm _emit 0x28
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2E42: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588F2E44: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F2E48: mov eax, 0xaa8
        __asm _emit 0xB8
        __asm _emit 0xA8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2E4D: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588F2E4F: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F2E53: mov eax, 0xffffff68
        __asm _emit 0xB8
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F2E58: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588F2E5A: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F2E5E: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F2E62: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F2E66: lea edi, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2E6C: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F2E70: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588F2E72: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588F2E75: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F2E77: je 0x588f2ea6
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588F2E79: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F2E7E: mov ebx, 0x80
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2E83: lea ecx, [ebx + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588F2E89: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F2E8B: je 0x588f2e9e
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588F2E8D: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588F2E8F: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588F2E91: je 0x588f2e9e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F2E93: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588F2E95: inc eax
        __asm _emit 0x40
        // 0x588F2E96: inc edx
        __asm _emit 0x42
        // 0x588F2E97: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588F2E9A: jne 0x588f2e83
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588F2E9C: jmp 0x588f2ea2
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588F2E9E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588F2EA0: jne 0x588f2ea3
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588F2EA2: dec eax
        __asm _emit 0x48
        // 0x588F2EA3: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2EA6: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588F2EA8: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2EAD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F2EB1: mov eax, dword ptr [edi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2EB7: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F2EB9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F2EBD: mov eax, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2EC3: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F2EC7: mov eax, dword ptr [edi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2ECD: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F2ED1: mov ebx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F2ED7: mov eax, dword ptr [ebx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2EDD: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2EE3: mov cx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x588F2EE7: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x588F2EEB: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588F2EEF: cmp word ptr [esp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F2EF4: jae 0x588f2fe3
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2EFA: test dword ptr [esp + 0x1c], 0x80000000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588F2F02: je 0x588f2f9b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2F08: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F2F0C: lea ecx, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3A
        // 0x588F2F0F: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x588F2F12: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F2F14: je 0x588f2f5b
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588F2F16: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F2F1A: mov ebp, dword ptr [eax + ebp*8 + 0xbc0]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2F21: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588F2F23: je 0x588f2f57
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588F2F25: cmp byte ptr [edx], 6
        __asm _emit 0x80
        __asm _emit 0x3A
        __asm _emit 0x06
        // 0x588F2F28: jne 0x588f2f57
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x588F2F2A: mov ecx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x01
        // 0x588F2F2D: movzx edx, word ptr [ecx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2F34: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F2F38: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x588F2F3A: movzx eax, word ptr [ecx + eax]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x588F2F3E: and edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x588F2F41: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2F46: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F2F48: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F2F4A: jle 0x588f2f57
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x588F2F4C: movzx edx, word ptr [ebp + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x55
        __asm _emit 0x1E
        // 0x588F2F50: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x588F2F53: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F2F57: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F2F5B: push 0x589a0a4c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F2F60: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F2F66: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F2F68: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x588F2F6B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F2F6E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F2F70: je 0x588f2fe3
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x588F2F72: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F2F74: je 0x588f2fe3
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x588F2F76: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F2F78: mov ebx, 0x80
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2F7D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F2F7F: nop
        __asm _emit 0x90
        // 0x588F2F80: lea ecx, [ebx + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588F2F86: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F2F88: je 0x588f2fdb
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x588F2F8A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588F2F8C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588F2F8E: je 0x588f2fdb
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x588F2F90: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588F2F92: inc eax
        __asm _emit 0x40
        // 0x588F2F93: inc edx
        __asm _emit 0x42
        // 0x588F2F94: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588F2F97: jne 0x588f2f80
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588F2F99: jmp 0x588f2fdf
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x588F2F9B: push 0x589a0a64
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x0A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F2FA0: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F2FA6: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F2FA8: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x588F2FAB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F2FAE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F2FB0: je 0x588f2fe3
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x588F2FB2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F2FB4: je 0x588f2fe3
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588F2FB6: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F2FB8: mov ebx, 0x80
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2FBD: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F2FBF: nop
        __asm _emit 0x90
        // 0x588F2FC0: lea ecx, [ebx + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588F2FC6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F2FC8: je 0x588f2fdb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588F2FCA: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588F2FCC: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588F2FCE: je 0x588f2fdb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F2FD0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588F2FD2: inc eax
        __asm _emit 0x40
        // 0x588F2FD3: inc edx
        __asm _emit 0x42
        // 0x588F2FD4: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588F2FD7: jne 0x588f2fc0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588F2FD9: jmp 0x588f2fdf
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588F2FDB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588F2FDD: jne 0x588f2fe0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588F2FDF: dec eax
        __asm _emit 0x48
        // 0x588F2FE0: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2FE3: test dword ptr [esp + 0x20], 0x80000000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588F2FEB: je 0x588f3150
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F2FF1: push 0x589a1944
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x19
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F2FF6: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F2FFC: mov edx, dword ptr [esi + 0x3ec]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3002: mov ecx, dword ptr [esi + edx*4 + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3009: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x588F300C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F300F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F3011: je 0x588f3043
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588F3013: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F3015: je 0x588f3043
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x588F3017: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F3019: mov ebx, 0x80
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F301E: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F3020: lea ecx, [ebx + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588F3026: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F3028: je 0x588f303b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588F302A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588F302C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588F302E: je 0x588f303b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F3030: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588F3032: inc eax
        __asm _emit 0x40
        // 0x588F3033: inc edx
        __asm _emit 0x42
        // 0x588F3034: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588F3037: jne 0x588f3020
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588F3039: jmp 0x588f303f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588F303B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588F303D: jne 0x588f3040
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588F303F: dec eax
        __asm _emit 0x48
        // 0x588F3040: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3043: inc dword ptr [esi + 0x3ec]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3049: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F304E: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F3052: mov ebx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3058: lea ecx, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3A
        // 0x588F305B: cmp dword ptr [ecx + ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x588F305F: je 0x588f3085
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588F3061: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F3065: add ebp, edi
        __asm _emit 0x03
        __asm _emit 0xEF
        // 0x588F3067: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x588F3069: movzx ebp, word ptr [edx + ebp]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x2C
        __asm _emit 0x2A
        // 0x588F306D: mov ecx, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x11
        // 0x588F3070: movzx edx, word ptr [ecx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x1E
        // 0x588F3074: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F307A: imul ebp, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xEA
        // 0x588F307D: add dword ptr [esp + 0x28], ebp
        __asm _emit 0x01
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F3081: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F3085: mov ebx, dword ptr [ebx + ebp*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0xEB
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F308C: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588F308E: je 0x588f3150
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3094: cmp byte ptr [ebx], 0xb
        __asm _emit 0x80
        __asm _emit 0x3B
        __asm _emit 0x0B
        // 0x588F3097: jne 0x588f3124
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F309D: mov cl, byte ptr [ebx + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F30A3: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x588F30A6: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x588F30AA: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x588F30AE: je 0x588f30ed
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588F30B0: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x588F30B4: je 0x588f30ed
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588F30B6: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F30BC: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F30C0: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x588F30C2: movzx eax, word ptr [edx + ecx + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F30CA: mov ecx, dword ptr [ecx + ebp*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xE9
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F30D1: movzx edx, word ptr [ecx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x1E
        // 0x588F30D5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F30D9: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F30DE: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588F30E1: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x588F30E4: lea edx, [ecx + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x41
        // 0x588F30E7: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F30EB: jmp 0x588f3150
        __asm _emit 0xEB
        __asm _emit 0x63
        // 0x588F30ED: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F30F3: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F30F7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588F30F9: movzx eax, word ptr [eax + ecx + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3101: mov ecx, dword ptr [ecx + ebp*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xE9
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3108: movzx edx, word ptr [ecx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x1E
        // 0x588F310C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F3110: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3115: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588F3118: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x588F311B: lea edx, [ecx + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x41
        // 0x588F311E: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F3122: jmp 0x588f3150
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x588F3124: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F3128: mov eax, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F312E: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x588F3130: movzx edx, word ptr [ecx + eax + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3138: mov eax, dword ptr [eax + ebp*8 + 0xbc4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F313F: movzx ecx, word ptr [eax + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x1E
        // 0x588F3143: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3149: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588F314C: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F3150: push ebp
        __asm _emit 0x55
        // 0x588F3151: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F3153: call 0x588f13b0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F3158: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588F315B: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F315F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F3161: lea eax, [edx + ebx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x1A
        __asm _emit 0x44
        // 0x588F3165: push eax
        __asm _emit 0x50
        // 0x588F3166: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F316B: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F316E: lea edx, [ecx + ebx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x44
        // 0x588F3172: mov ecx, dword ptr [edi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3178: push edx
        __asm _emit 0x52
        // 0x588F3179: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F317E: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588F3181: lea ecx, [eax + ebx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x18
        __asm _emit 0x44
        // 0x588F3185: push ecx
        __asm _emit 0x51
        // 0x588F3186: mov ecx, dword ptr [edi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F318C: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F3191: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588F3194: mov ecx, dword ptr [edi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F319A: lea eax, [edx + ebx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x1A
        __asm _emit 0x44
        // 0x588F319E: push eax
        __asm _emit 0x50
        // 0x588F319F: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F31A4: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F31A8: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588F31AA: jl 0x588f31ba
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x588F31AC: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588F31AF: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588F31B1: jge 0x588f31ba
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x588F31B3: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588F31B5: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588F31BA: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F31BE: shl dword ptr [esp + 0x1c], 1
        __asm _emit 0xD1
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F31C2: shl dword ptr [esp + 0x20], 1
        __asm _emit 0xD1
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F31C6: inc eax
        __asm _emit 0x40
        // 0x588F31C7: inc ebp
        __asm _emit 0x45
        // 0x588F31C8: add ebx, 0xb
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x0B
        // 0x588F31CB: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588F31CE: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F31D2: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F31D6: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F31DA: cmp ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x588F31DE: jb 0x588f2e70
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x8C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F31E4: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F31EA: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F31EC: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F31F1: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588F31F6: imul dword ptr [esp + 0x10]
        __asm _emit 0xF7
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F31FA: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588F31FD: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F31FF: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588F3202: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588F3204: mov edx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F320A: mov dword ptr [edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x64
        // 0x588F320D: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F3212: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3218: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F321E: movzx eax, word ptr [edx + 0x11a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3225: mov ecx, dword ptr [esi + 0x2c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F322B: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588F322E: mov ecx, dword ptr [esi + 0x2c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3234: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588F3239: imul dword ptr [esp + 0x28]
        __asm _emit 0xF7
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F323D: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588F3240: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F3242: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F3245: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F3247: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588F324A: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F3250: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3256: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F325C: movzx edx, word ptr [ecx + 0x11c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3263: mov eax, dword ptr [esi + 0x2cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3269: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x588F326C: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588F3271: imul dword ptr [esp + 0x2c]
        __asm _emit 0xF7
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F3275: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588F3278: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F327A: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588F327D: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588F327F: mov edx, dword ptr [esi + 0x2d0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3285: mov dword ptr [edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x64
        // 0x588F3288: mov eax, dword ptr [esi + 0x2d4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F328E: mov dword ptr [eax + 0x64], 0x64
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3295: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F329B: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F32A1: mov ecx, dword ptr [edx + 0xaa0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F32A7: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588F32AC: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F32AE: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x588F32B1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F32B3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F32B6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F32B8: cdq
        __asm _emit 0x99
        // 0x588F32B9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F32BB: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588F32BD: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F32C1: fild dword ptr [esp + 0x3c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F32C5: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F32CA: mov ecx, dword ptr [esi + 0x4b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F32D0: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588F32D3: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F32D9: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F32DF: mov ecx, dword ptr [eax + 0xa8c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F32E5: imul ecx, ecx, 0x19
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x19
        // 0x588F32E8: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588F32ED: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F32EF: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588F32F2: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F32F4: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588F32F7: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588F32F9: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F32FD: fild dword ptr [esp + 0x3c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F3301: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F3306: mov edx, dword ptr [esi + 0x4b4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F330C: mov dword ptr [edx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x588F330F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F3311: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F3315: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F3319: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F331D: mov dword ptr [esp + 0x24], 0xb40
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3325: mov dword ptr [esp + 0x20], 0xbc0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F332D: mov dword ptr [esp + 0x34], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3335: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F333A: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3340: mov edi, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3346: mov edi, dword ptr [edi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F334C: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3351: sub ecx, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F3355: shr edi, cl
        __asm _emit 0xD3
        __asm _emit 0xEF
        // 0x588F3357: and edi, 1
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x01
        // 0x588F335A: jne 0x588f345f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3360: mov eax, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3366: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F336A: mov ebp, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x08
        // 0x588F336D: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F3371: mov edi, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x08
        // 0x588F3374: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588F3376: je 0x588f345f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F337C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588F337E: je 0x588f345f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3384: mov al, byte ptr [edi + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x87
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F338A: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F338C: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588F338E: je 0x588f345f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3394: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F339A: movzx edx, word ptr [ebp + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F33A1: mov dword ptr [ecx + 0x21e98], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588F33A7: add ecx, 0x21e80
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588F33AD: mov dword ptr [ecx + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x1C
        // 0x588F33B0: movzx eax, word ptr [edi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F33B7: mov dword ptr [ecx + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x588F33BA: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x588F33BD: movzx ebx, word ptr [edi + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x9F
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F33C4: cdq
        __asm _emit 0x99
        // 0x588F33C5: mov dword ptr [ecx + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588F33C8: idiv dword ptr [0x58a244c8]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F33CE: add ebx, 5
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x05
        // 0x588F33D1: cdq
        __asm _emit 0x99
        // 0x588F33D2: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x588F33D4: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F33D8: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F33DA: movsx eax, byte ptr [edi + 0x99]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x87
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F33E1: mov edi, 0x64
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F33E6: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x588F33E8: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x588F33EB: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588F33F0: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588F33F2: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588F33F5: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F33F7: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F33FA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F33FC: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3401: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588F3403: mov dword ptr [ecx + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x588F3406: movzx eax, word ptr [ebp + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F340D: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588F3410: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x588F3413: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x588F3416: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588F3418: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588F341A: js 0x588f3451
        __asm _emit 0x78
        __asm _emit 0x35
        // 0x588F341C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588F3420: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F3426: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F3428: push edi
        __asm _emit 0x57
        // 0x588F3429: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F342B: call 0x587e6e80
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x3A
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588F3430: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x588F3432: jae 0x588f3436
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x588F3434: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588F3436: movzx eax, word ptr [ebp + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F343D: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588F3440: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x588F3443: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x588F3446: inc edi
        __asm _emit 0x47
        // 0x588F3447: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588F3449: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588F344B: jle 0x588f3420
        __asm _emit 0x7E
        __asm _emit 0xD3
        // 0x588F344D: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F3451: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F3455: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588F3457: jae 0x588f345f
        __asm _emit 0x73
        __asm _emit 0x06
        // 0x588F3459: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x588F345B: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F345F: add dword ptr [esp + 0x24], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F3464: add dword ptr [esp + 0x20], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588F3469: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F346E: add dword ptr [esp + 0x28], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F3472: sub dword ptr [esp + 0x34], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F3476: jne 0x588f3335
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F347C: mov eax, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3482: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x588F3485: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F348B: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3491: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F3493: cmp dword ptr [edx + 0xccc], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3499: je 0x588f34b4
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588F349B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F349D: mov ecx, dword ptr [eax + 0xccc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F34A3: movzx edx, word ptr [ecx + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F34AA: movzx eax, word ptr [eax + 0x52c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F34B1: lea eax, [edx + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x42
        // 0x588F34B4: mov ecx, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F34BA: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588F34BD: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588F34BF: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F34C5: push ebp
        __asm _emit 0x55
        // 0x588F34C6: call 0x587d90f0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x5C
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588F34CB: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588F34CE: jne 0x588f34e1
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x588F34D0: mov edx, dword ptr [esi + 0x2d8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F34D6: pop edi
        __asm _emit 0x5F
        // 0x588F34D7: pop esi
        __asm _emit 0x5E
        // 0x588F34D8: pop ebp
        __asm _emit 0x5D
        // 0x588F34D9: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588F34DC: pop ebx
        __asm _emit 0x5B
        // 0x588F34DD: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588F34E0: ret
        __asm _emit 0xC3
        // 0x588F34E1: mov eax, dword ptr [esi + 0x2d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F34E7: pop edi
        __asm _emit 0x5F
        // 0x588F34E8: pop esi
        __asm _emit 0x5E
        // 0x588F34E9: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x588F34EC: pop ebp
        __asm _emit 0x5D
        // 0x588F34ED: pop ebx
        __asm _emit 0x5B
        // 0x588F34EE: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588F34F1: ret
        __asm _emit 0xC3
    }
}
