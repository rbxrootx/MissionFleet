// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C0BD0 .. +0x1CB bytes.
// Source symbol alias: FUN_588c0bd0.
extern "C" __declspec(naked) void FUN_588c0bd0() {
    __asm {
        // 0x588C0BD0: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0BD5: push edi
        __asm _emit 0x57
        // 0x588C0BD6: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0BDB: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0BE1: jle 0x588c0bf7
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588C0BE3: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0BEA: je 0x588c0bf7
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C0BEC: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0BF2: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x588C0BF5: jmp 0x588c0bf9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0BF7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C0BF9: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0BFF: push ebx
        __asm _emit 0x53
        // 0x588C0C00: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x588C0C03: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C0C05: je 0x588c0c2f
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C0C07: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x588C0C0A: mov dword ptr [edx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x0C
        // 0x588C0C0D: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x1C
        // 0x588C0C10: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588C0C13: mov dword ptr [edx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x10
        // 0x588C0C16: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588C0C18: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x588C0C1B: mov dword ptr [edx], ebx
        __asm _emit 0x89
        __asm _emit 0x1A
        // 0x588C0C1D: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588C0C20: mov dword ptr [edx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x588C0C23: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588C0C26: mov dword ptr [edx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x588C0C29: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C0C2C: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588C0C2F: mov eax, dword ptr [0x58a24804]
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0C34: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C0C38: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C0C3B: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0C40: and dx, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD3
        // 0x588C0C43: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C0C46: mov eax, dword ptr [0x58a24800]
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0C4B: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C0C4F: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C0C52: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x01
        // 0x588C0C56: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C0C59: mov eax, dword ptr [0x58a24808]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0C5E: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C0C62: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588C0C65: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x01
        // 0x588C0C69: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C0C6C: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0C71: cmp dword ptr [eax + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588C0C78: jle 0x588c0c90
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C0C7A: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0C81: je 0x588c0c90
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588C0C83: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0C89: add eax, 0x100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0C8E: jmp 0x588c0c92
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0C90: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C0C92: mov edx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0C98: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x588C0C9B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C0C9D: je 0x588c0cc7
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C0C9F: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x588C0CA2: mov dword ptr [edx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x0C
        // 0x588C0CA5: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x1C
        // 0x588C0CA8: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588C0CAB: mov dword ptr [edx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x10
        // 0x588C0CAE: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588C0CB0: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x588C0CB3: mov dword ptr [edx], ebx
        __asm _emit 0x89
        __asm _emit 0x1A
        // 0x588C0CB5: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588C0CB8: mov dword ptr [edx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x588C0CBB: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588C0CBE: mov dword ptr [edx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x588C0CC1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C0CC4: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588C0CC7: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0CCC: cmp dword ptr [eax + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x588C0CD3: jle 0x588c0ceb
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C0CD5: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0CDC: je 0x588c0ceb
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588C0CDE: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0CE4: add eax, 0x140
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0CE9: jmp 0x588c0ced
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0CEB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C0CED: mov edx, dword ptr [0x58a24808]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0CF3: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x588C0CF6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C0CF8: je 0x588c0d22
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C0CFA: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x588C0CFD: mov dword ptr [edx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x0C
        // 0x588C0D00: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x1C
        // 0x588C0D03: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588C0D06: mov dword ptr [edx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x10
        // 0x588C0D09: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588C0D0B: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x588C0D0E: mov dword ptr [edx], ebx
        __asm _emit 0x89
        __asm _emit 0x1A
        // 0x588C0D10: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588C0D13: mov dword ptr [edx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x588C0D16: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x588C0D19: mov dword ptr [edx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x588C0D1C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C0D1F: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588C0D22: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588C0D26: pop ebx
        __asm _emit 0x5B
        // 0x588C0D27: cmp eax, 0x40000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C0D2C: ja 0x588c0d62
        __asm _emit 0x77
        __asm _emit 0x34
        // 0x588C0D2E: je 0x588c0d56
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588C0D30: cmp eax, 0x20000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588C0D35: je 0x588c0d3e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588C0D37: cmp eax, 0x30000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C0D3C: jmp 0x588c0d67
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x588C0D3E: mov dword ptr [ecx + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x64
        // 0x588C0D41: mov dword ptr [ecx + 0x68], 3
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0D48: mov eax, dword ptr [0x58a24804]
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0D4D: mov dword ptr [eax + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0D54: jmp 0x588c0d80
        __asm _emit 0xEB
        __asm _emit 0x2A
        // 0x588C0D56: mov dword ptr [ecx + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x64
        // 0x588C0D59: mov dword ptr [ecx + 0x68], 3
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0D60: jmp 0x588c0d80
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x588C0D62: cmp eax, 0x50000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588C0D67: jne 0x588c0d80
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588C0D69: mov dword ptr [ecx + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x64
        // 0x588C0D6C: mov dword ptr [ecx + 0x68], 3
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0D73: mov edx, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0D79: mov dword ptr [edx + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0D80: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x68
        // 0x588C0D83: mov eax, 0x12c
        __asm _emit 0xB8
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0D88: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588C0D8B: mov dword ptr [ecx + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x58
        // 0x588C0D8E: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588C0D91: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x588C0D94: mov dword ptr [ecx + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x588C0D97: pop edi
        __asm _emit 0x5F
        // 0x588C0D98: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
