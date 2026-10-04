// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587ECCA0 .. +0x1E4 bytes.
// Source symbol alias: FUN_587ecca0.
extern "C" __declspec(naked) void FUN_587ecca0() {
    __asm {
        // 0x587ECCA0: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587ECCA4: mov byte ptr [ecx + 0x218d9], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0xD9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECCAA: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587ECCAD: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x587ECCB0: push esi
        __asm _emit 0x56
        // 0x587ECCB1: je 0x587ecdcb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECCB7: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587ECCBA: je 0x587ecd4f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECCC0: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587ECCC3: jne 0x587ece80
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECCC9: mov eax, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECCCF: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587ECCD2: cmp dword ptr [eax + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587ECCD9: jle 0x587eccea
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587ECCDB: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECCE1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECCE3: je 0x587eccea
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587ECCE5: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x587ECCE8: jmp 0x587eccec
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587ECCEA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ECCEC: mov edx, dword ptr [ecx + 0x10b64]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECCF2: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x587ECCF5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECCF7: je 0x587ecd21
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587ECCF9: mov esi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x587ECCFC: mov dword ptr [edx + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x587ECCFF: mov esi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x1C
        // 0x587ECD02: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587ECD05: mov dword ptr [edx + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x10
        // 0x587ECD08: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x587ECD0A: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x587ECD0D: mov dword ptr [edx], esi
        __asm _emit 0x89
        __asm _emit 0x32
        // 0x587ECD0F: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587ECD12: mov dword ptr [edx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587ECD15: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587ECD18: mov dword ptr [edx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x587ECD1B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587ECD1E: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587ECD21: mov edx, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECD27: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587ECD2A: cmp dword ptr [eax + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587ECD31: jle 0x587ece48
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECD37: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECD3D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECD3F: je 0x587ece48
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECD45: add eax, 0xc0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECD4A: jmp 0x587ece4a
        __asm _emit 0xE9
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECD4F: mov edx, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECD55: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587ECD58: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECD5F: jle 0x587ecd6b
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x587ECD61: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECD67: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECD69: jne 0x587ecd6d
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x587ECD6B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ECD6D: mov edx, dword ptr [ecx + 0x10b64]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECD73: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x587ECD76: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECD78: je 0x587ecda2
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587ECD7A: mov esi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x587ECD7D: mov dword ptr [edx + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x587ECD80: mov esi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x1C
        // 0x587ECD83: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587ECD86: mov dword ptr [edx + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x10
        // 0x587ECD89: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x587ECD8B: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x587ECD8E: mov dword ptr [edx], esi
        __asm _emit 0x89
        __asm _emit 0x32
        // 0x587ECD90: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587ECD93: mov dword ptr [edx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587ECD96: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587ECD99: mov dword ptr [edx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x587ECD9C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587ECD9F: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587ECDA2: mov edx, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECDA8: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587ECDAB: cmp dword ptr [eax + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587ECDB2: jle 0x587ece48
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECDB8: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECDBE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECDC0: je 0x587ece48
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECDC6: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x587ECDC9: jmp 0x587ece4a
        __asm _emit 0xEB
        __asm _emit 0x7F
        // 0x587ECDCB: mov edx, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECDD1: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587ECDD4: cmp dword ptr [eax + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x587ECDDB: jle 0x587ecdee
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x587ECDDD: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECDE3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECDE5: je 0x587ecdee
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587ECDE7: add eax, 0x100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECDEC: jmp 0x587ecdf0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587ECDEE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ECDF0: mov edx, dword ptr [ecx + 0x10b64]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECDF6: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x587ECDF9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECDFB: je 0x587ece25
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587ECDFD: mov esi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x587ECE00: mov dword ptr [edx + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x587ECE03: mov esi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x1C
        // 0x587ECE06: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587ECE09: mov dword ptr [edx + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x10
        // 0x587ECE0C: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x587ECE0E: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x587ECE11: mov dword ptr [edx], esi
        __asm _emit 0x89
        __asm _emit 0x32
        // 0x587ECE13: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587ECE16: mov dword ptr [edx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587ECE19: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587ECE1C: mov dword ptr [edx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x587ECE1F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587ECE22: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587ECE25: mov edx, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECE2B: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587ECE2E: cmp dword ptr [eax + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x587ECE35: jle 0x587ece48
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x587ECE37: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECE3D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECE3F: je 0x587ece48
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587ECE41: add eax, 0x140
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECE46: jmp 0x587ece4a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587ECE48: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ECE4A: mov ecx, dword ptr [ecx + 0x10b68]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECE50: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587ECE53: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECE55: je 0x587ece80
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587ECE57: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587ECE5A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587ECE5D: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587ECE60: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587ECE63: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x587ECE66: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587ECE69: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587ECE6C: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587ECE6E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587ECE71: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587ECE74: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587ECE77: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587ECE7A: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587ECE7D: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587ECE80: pop esi
        __asm _emit 0x5E
        // 0x587ECE81: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
