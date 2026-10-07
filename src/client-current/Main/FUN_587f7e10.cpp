// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2276 bytes in 4 discontiguous ranges.
// Source symbol alias: FUN_587f7e10.

// Ghidra body range 0x587F7E10..0x587F803D; 557 mapped bytes.
extern "C" __declspec(naked) void FUN_587f7e10_segment_00() {
    __asm {
        // 0x587F7E10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587F7E12: push 0x5898263b
        __asm _emit 0x68
        __asm _emit 0x3B
        __asm _emit 0x26
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F7E17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7E1D: push eax
        __asm _emit 0x50
        // 0x587F7E1E: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587F7E21: push ebx
        __asm _emit 0x53
        // 0x587F7E22: push ebp
        __asm _emit 0x55
        // 0x587F7E23: push esi
        __asm _emit 0x56
        // 0x587F7E24: push edi
        __asm _emit 0x57
        // 0x587F7E25: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F7E2A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F7E2C: push eax
        __asm _emit 0x50
        // 0x587F7E2D: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F7E31: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7E37: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587F7E39: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F7E3D: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587F7E40: sub eax, 0x201
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7E45: je 0x587f861d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7E4B: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587F7E4E: jne 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7E54: mov al, byte ptr [esi + 0x74]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x587F7E57: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587F7E59: jne 0x587f810d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7E5F: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7E65: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587F7E68: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587F7E6A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587F7E6C: je 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7E72: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587F7E77: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F7E79: je 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7E7F: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7E84: cmp byte ptr [eax + 0x2fc], 1
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587F7E8B: jne 0x587f7f0a
        __asm _emit 0x75
        __asm _emit 0x7D
        // 0x587F7E8D: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7E93: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587F7E96: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7E9C: mov dl, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587F7E9F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587F7EA2: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587F7EA5: jne 0x587f7ef2
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x587F7EA7: cmp word ptr [ecx + 0x164], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7EAE: je 0x587f7ef2
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x587F7EB0: mov byte ptr [eax + 0x2fc], bl
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7EB6: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7EBB: mov edi, dword ptr [eax + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7EC1: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587F7EC3: je 0x587f7ef9
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x587F7EC5: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7ECA: push ebx
        __asm _emit 0x53
        // 0x587F7ECB: push 0x5899c8e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xC8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7ED0: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F7ED6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F7ED9: push eax
        __asm _emit 0x50
        // 0x587F7EDA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587F7EDC: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x2C
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587F7EE1: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7EE7: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7EED: jmp 0x587f86e7
        __asm _emit 0xE9
        __asm _emit 0xF5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7EF2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F7EF4: call 0x587ed430
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x55
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F7EF9: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7EFF: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F05: jmp 0x587f86e7
        __asm _emit 0xE9
        __asm _emit 0xDD
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F0A: cmp dword ptr [esi + 0xc0], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F10: jne 0x587f8083
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F16: cmp dword ptr [esi + 0xc4], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F1C: jne 0x587f8083
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F22: cmp dword ptr [esi + 0xbc], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F28: je 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F2E: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7F34: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F7F37: mov ecx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F3D: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F7F40: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587F7F43: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587F7F46: jne 0x587f7f5a
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587F7F48: mov eax, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F4E: mov ecx, dword ptr [eax + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F54: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F7F58: jmp 0x587f7f6a
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587F7F5A: mov edx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F60: mov eax, dword ptr [edx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F66: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F7F6A: mov eax, 0x38
        __asm _emit 0xB8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F6F: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587F7F71: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F77: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F7D: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F7F81: mov dword ptr [esp + 0x18], 0x1390
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F89: lea ebp, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7F8F: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F7F93: jmp 0x587f7f97
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587F7F95: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587F7F97: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F7F9B: mov dword ptr [ebp], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x587F7F9E: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7FA4: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F7FA7: mov edi, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x10
        // 0x587F7FAA: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587F7FAC: je 0x587f8061
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7FB2: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587F7FB5: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587F7FB7: call 0x5873a250
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587F7FBC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F7FBE: je 0x587f7fef
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587F7FC0: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587F7FC3: cmp eax, dword ptr [esi + 0xc8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7FC9: jl 0x587f7fef
        __asm _emit 0x7C
        __asm _emit 0x24
        // 0x587F7FCB: mov ebx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x08
        // 0x587F7FCE: cmp ebx, dword ptr [esi + 0xcc]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7FD4: jl 0x587f7fef
        __asm _emit 0x7C
        __asm _emit 0x19
        // 0x587F7FD6: cmp eax, dword ptr [esi + 0xd0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7FDC: jg 0x587f7fef
        __asm _emit 0x7F
        __asm _emit 0x11
        // 0x587F7FDE: cmp ebx, dword ptr [esi + 0xd4]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7FE4: jg 0x587f7fef
        __asm _emit 0x7F
        __asm _emit 0x09
        // 0x587F7FE6: mov dword ptr [ebp], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7FED: jmp 0x587f7ff5
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587F7FEF: cmp dword ptr [ebp], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7FF3: je 0x587f8025
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x587F7FF5: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7FFB: mov edx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8001: add edx, dword ptr [esp + 0x30]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F8005: mov dword ptr [edx + ebp], 1
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F800C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587F8010: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587F8013: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F8015: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F8017: call 0x5873b3b0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x33
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587F801C: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587F801F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587F8021: jne 0x587f8010
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587F8023: jmp 0x587f8061
        __asm _emit 0xEB
        __asm _emit 0x3C
        // 0x587F8025: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F802A: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8030: add ecx, dword ptr [esp + 0x30]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F8034: mov dword ptr [ecx + ebp], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F803B: jmp 0x587f8040
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587F8040..0x587F851D; 1245 mapped bytes.
extern "C" __declspec(naked) void FUN_587f7e10_segment_01() {
    __asm {
        // 0x587F8040: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F8044: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587F8047: cmp dword ptr [esp + 0x14], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F804B: jne 0x587f8051
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587F804D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F804F: jmp 0x587f8053
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587F8051: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F8053: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F8055: call 0x5873b3b0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x33
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587F805A: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587F805D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587F805F: jne 0x587f8040
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587F8061: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F8065: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F8069: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x587F806C: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587F806F: cmp eax, 0x1410
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8074: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F8078: jl 0x587f7f95
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x17
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F807E: jmp 0x587f86e7
        __asm _emit 0xE9
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8083: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F8085: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F8087: lea ecx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F808D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587F8090: cmp dword ptr [ecx], ebx
        __asm _emit 0x39
        __asm _emit 0x19
        // 0x587F8092: je 0x587f80a8
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587F8094: mov edi, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F809A: mov edi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x587F809D: cmp dword ptr [edi + eax + 0x1398], ebx
        __asm _emit 0x39
        __asm _emit 0x9C
        __asm _emit 0x07
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F80A4: jne 0x587f80b6
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587F80A6: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x587F80A8: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x587F80AB: inc edx
        __asm _emit 0x42
        // 0x587F80AC: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587F80AF: cmp eax, 0x80
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F80B4: jl 0x587f8090
        __asm _emit 0x7C
        __asm _emit 0xDA
        // 0x587F80B6: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587F80B9: je 0x587f80fc
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x587F80BB: cmp dword ptr [esi + 0xc0], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F80C1: je 0x587f80e9
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587F80C3: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F80C8: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587F80CB: add edx, 0x139
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F80D1: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587F80D4: mov edx, dword ptr [edx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0A
        // 0x587F80D7: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587F80DA: cmp word ptr [eax + 0x2cc], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x587F80E2: jne 0x587f80e9
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587F80E4: push ebx
        __asm _emit 0x53
        // 0x587F80E5: push 0x15
        __asm _emit 0x6A
        __asm _emit 0x15
        // 0x587F80E7: jmp 0x587f80f4
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587F80E9: cmp dword ptr [esi + 0xc4], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F80EF: je 0x587f80fc
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587F80F1: push ebx
        __asm _emit 0x53
        // 0x587F80F2: push 0x17
        __asm _emit 0x6A
        __asm _emit 0x17
        // 0x587F80F4: push ebx
        __asm _emit 0x53
        // 0x587F80F5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F80F7: call 0x587e9a10
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F80FC: mov dword ptr [esi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8102: mov dword ptr [esi + 0xc4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8108: jmp 0x587f86e7
        __asm _emit 0xE9
        __asm _emit 0xDA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F810D: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587F810F: jne 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8115: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F811B: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587F811E: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587F8120: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587F8122: je 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8128: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xE5
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587F812D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F812F: je 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8135: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F813B: cmp byte ptr [edx + 0x2fc], 1
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587F8142: jne 0x587f815c
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587F8144: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F8146: call 0x587ed430
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x52
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F814B: mov dword ptr [esi + 0xb8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8151: mov dword ptr [esi + 0xbc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8157: jmp 0x587f86e7
        __asm _emit 0xE9
        __asm _emit 0x8B
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F815C: cmp dword ptr [esi + 0x21c6c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F8162: jne 0x587f8415
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8168: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F816E: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x6C
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F8173: add eax, 0xfffffc17
        __asm _emit 0x05
        __asm _emit 0x17
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F8178: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x587F817B: ja 0x587f8199
        __asm _emit 0x77
        __asm _emit 0x1C
        // 0x587F817D: jmp dword ptr [eax*4 + 0x587f8700]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x87
        __asm _emit 0x7F
        __asm _emit 0x58
        // 0x587F8184: mov edi, 0xa
        __asm _emit 0xBF
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8189: jmp 0x587f819b
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587F818B: mov edi, 0xb
        __asm _emit 0xBF
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8190: jmp 0x587f819b
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x587F8192: mov edi, 0xc
        __asm _emit 0xBF
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8197: jmp 0x587f819b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587F8199: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587F819B: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F81A0: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587F81A4: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F81AA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F81AC: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F81B0: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587F81B3: jne 0x587f8222
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x587F81B5: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587F81B8: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587F81BA: jl 0x587f81db
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x587F81BC: cmp eax, 0x1bd
        __asm _emit 0x3D
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F81C1: jg 0x587f81db
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x587F81C3: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x587F81C6: cmp ecx, 0x291
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F81CC: jl 0x587f81db
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x587F81CE: cmp ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F81D4: jg 0x587f81db
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587F81D6: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F81DB: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F81E1: cmp dword ptr [ecx + 0x78], ebp
        __asm _emit 0x39
        __asm _emit 0x69
        __asm _emit 0x78
        // 0x587F81E4: je 0x587f81fe
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587F81E6: cmp eax, 0x1be
        __asm _emit 0x3D
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F81EB: jl 0x587f8222
        __asm _emit 0x7C
        __asm _emit 0x35
        // 0x587F81ED: cmp eax, 0x31b
        __asm _emit 0x3D
        __asm _emit 0x1B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F81F2: jg 0x587f8222
        __asm _emit 0x7F
        __asm _emit 0x2E
        // 0x587F81F4: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587F81F7: cmp eax, 0x266
        __asm _emit 0x3D
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F81FC: jmp 0x587f8214
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x587F81FE: cmp eax, 0x1be
        __asm _emit 0x3D
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8203: jl 0x587f8222
        __asm _emit 0x7C
        __asm _emit 0x1D
        // 0x587F8205: cmp eax, 0x31b
        __asm _emit 0x3D
        __asm _emit 0x1B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F820A: jg 0x587f8222
        __asm _emit 0x7F
        __asm _emit 0x16
        // 0x587F820C: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587F820F: cmp eax, 0x271
        __asm _emit 0x3D
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8214: jl 0x587f8222
        __asm _emit 0x7C
        __asm _emit 0x0C
        // 0x587F8216: cmp eax, 0x300
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F821B: jg 0x587f8222
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587F821D: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8222: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587F8225: cmp eax, 0x31c
        __asm _emit 0x3D
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F822A: jl 0x587f824b
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x587F822C: cmp eax, 0x400
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8231: jg 0x587f824b
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x587F8233: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x587F8236: cmp ecx, 0x252
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F823C: jl 0x587f824b
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x587F823E: cmp ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8244: jg 0x587f824b
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587F8246: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F824B: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587F824D: je 0x587f8415
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8253: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x587F8255: jne 0x587f8415
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F825B: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F8261: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8267: mov edi, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F826D: cdq
        __asm _emit 0x99
        // 0x587F826E: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F8270: mov ebp, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x587F8273: mov ecx, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x54
        // 0x587F8276: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587F8278: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587F827A: movzx ebp, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xE8
        // 0x587F827D: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587F8280: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8286: cdq
        __asm _emit 0x99
        // 0x587F8287: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F8289: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587F828B: movzx edi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF8
        // 0x587F828E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x49
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F8293: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587F8295: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F8298: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F829C: mov dword ptr [esp + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F82A4: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587F82A6: je 0x587f82d1
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587F82A8: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F82AC: mov ecx, dword ptr [0x58a2460c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F82B2: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587F82B4: push edi
        __asm _emit 0x57
        // 0x587F82B5: push ebp
        __asm _emit 0x55
        // 0x587F82B6: push edx
        __asm _emit 0x52
        // 0x587F82B7: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x587F82BC: push eax
        __asm _emit 0x50
        // 0x587F82BD: mov eax, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F82C3: push eax
        __asm _emit 0x50
        // 0x587F82C4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587F82C6: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xF9
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587F82CB: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F82CF: jmp 0x587f82d9
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587F82D1: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F82D9: mov dword ptr [esi + 0x21c70], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x70
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F82DF: mov dword ptr [esi + 0x21c74], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F82E5: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F82EB: mov ebx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x587F82EE: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587F82F0: sub eax, dword ptr [ebx + 8]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587F82F3: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F82FB: cdq
        __asm _emit 0x99
        // 0x587F82FC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587F82FE: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x587F8300: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587F8302: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587F8304: sub eax, dword ptr [ebx + 4]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587F8307: cdq
        __asm _emit 0x99
        // 0x587F8308: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587F830A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F830C: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587F830E: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587F8311: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587F8313: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587F8316: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587F8318: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F831C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F8320: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x49
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F8325: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x49
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F832A: lea ecx, [esi + 0x21e88]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F8330: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8335: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F8337: cmp dword ptr [ecx], edx
        __asm _emit 0x39
        __asm _emit 0x11
        // 0x587F8339: jle 0x587f8352
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587F833B: mov edi, dword ptr [ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0xFC
        // 0x587F833E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587F8340: cmp dword ptr [edi], eax
        __asm _emit 0x39
        __asm _emit 0x07
        // 0x587F8342: jae 0x587f834e
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x587F8344: inc edx
        __asm _emit 0x42
        // 0x587F8345: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587F8348: cmp edx, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x11
        // 0x587F834A: jl 0x587f8340
        __asm _emit 0x7C
        __asm _emit 0xF4
        // 0x587F834C: jmp 0x587f8352
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587F834E: mov word ptr [ecx + 0x2c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x2C
        // 0x587F8352: add ecx, 0x38
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x38
        // 0x587F8355: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x587F8358: jne 0x587f8335
        __asm _emit 0x75
        __asm _emit 0xDB
        // 0x587F835A: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F8360: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587F8363: mov edx, dword ptr [esi + 0x21c74]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F8369: mov ecx, dword ptr [esi + 0x21c70]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F836F: push edx
        __asm _emit 0x52
        // 0x587F8370: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587F8373: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587F8376: push ecx
        __asm _emit 0x51
        // 0x587F8377: push edx
        __asm _emit 0x52
        // 0x587F8378: push eax
        __asm _emit 0x50
        // 0x587F8379: call 0x5876c010
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x3C
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F837E: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x587F8381: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587F8383: mov dword ptr [esi + 0x21ef0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F8389: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F838F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F8392: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8398: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587F839C: mov ecx, 0x7c00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F83A1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x587F83A4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587F83A6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587F83A9: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587F83AC: jae 0x587f8405
        __asm _emit 0x73
        __asm _emit 0x57
        // 0x587F83AE: mov edi, 0xe0c
        __asm _emit 0xBF
        __asm _emit 0x0C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F83B3: cmp dword ptr [eax + edi + 0x80], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x38
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F83BB: je 0x587f83e4
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587F83BD: cmp word ptr [eax + edi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x587F83C2: jbe 0x587f83e4
        __asm _emit 0x76
        __asm _emit 0x20
        // 0x587F83C4: mov edx, dword ptr [esi + 0x21c74]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F83CA: mov eax, dword ptr [esi + 0x21c70]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F83D0: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F83D6: mov ecx, dword ptr [ecx + edi - 0xe04]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x39
        __asm _emit 0xFC
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F83DD: push edx
        __asm _emit 0x52
        // 0x587F83DE: push eax
        __asm _emit 0x50
        // 0x587F83DF: call 0x587b0c10
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x88
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587F83E4: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F83EA: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F83ED: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F83F3: movzx edx, word ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587F83F7: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x587F83FA: inc ebx
        __asm _emit 0x43
        // 0x587F83FB: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587F83FE: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587F8401: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x587F8403: jl 0x587f83b3
        __asm _emit 0x7C
        __asm _emit 0xAE
        // 0x587F8405: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F8409: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F840E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xA9
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587F8413: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587F8415: mov dword ptr [esi + 0x21c6c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F841B: cmp dword ptr [esi + 0xc0], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8421: jne 0x587f8593
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8427: cmp dword ptr [esi + 0xc4], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F842D: jne 0x587f8593
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8433: cmp dword ptr [esi + 0xbc], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8439: je 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F843F: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F8444: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587F8447: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F844D: mov al, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F8450: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F8456: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587F8458: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x587F845A: jne 0x587f846a
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587F845C: mov edx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8462: mov eax, dword ptr [edx + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8468: jmp 0x587f8476
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587F846A: mov edx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8470: mov eax, dword ptr [edx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8476: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F847A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F847C: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8482: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8488: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F848C: mov eax, 0x38
        __asm _emit 0xB8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8491: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587F8493: mov dword ptr [esp + 0x14], 0x1390
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F849B: lea ebx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F84A1: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F84A5: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F84A9: mov dword ptr [ebx], 0
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F84AF: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F84B5: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F84B8: mov edi, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x10
        // 0x587F84BB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587F84BD: je 0x587f8571
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F84C3: mov ebp, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x0C
        // 0x587F84C6: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587F84C8: call 0x5873a250
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x1D
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587F84CD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F84CF: je 0x587f84ff
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x587F84D1: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587F84D4: cmp eax, dword ptr [esi + 0xc8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F84DA: jl 0x587f84ff
        __asm _emit 0x7C
        __asm _emit 0x23
        // 0x587F84DC: mov ebp, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x08
        // 0x587F84DF: cmp ebp, dword ptr [esi + 0xcc]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F84E5: jl 0x587f84ff
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x587F84E7: cmp eax, dword ptr [esi + 0xd0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F84ED: jg 0x587f84ff
        __asm _emit 0x7F
        __asm _emit 0x10
        // 0x587F84EF: cmp ebp, dword ptr [esi + 0xd4]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F84F5: jg 0x587f84ff
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587F84F7: mov dword ptr [ebx], 1
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F84FD: jmp 0x587f8504
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587F84FF: cmp dword ptr [ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x587F8502: je 0x587f8535
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x587F8504: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F850A: mov edx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8510: add edx, dword ptr [esp + 0x30]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F8514: mov dword ptr [edx + ebx], 1
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F851B: jmp 0x587f8520
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587F8520..0x587F854D; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_587f7e10_segment_02() {
    __asm {
        // 0x587F8520: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587F8523: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F8525: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F8527: call 0x5873b3b0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x2E
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587F852C: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587F852F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587F8531: jne 0x587f8520
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587F8533: jmp 0x587f8571
        __asm _emit 0xEB
        __asm _emit 0x3C
        // 0x587F8535: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F853A: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8540: add ecx, dword ptr [esp + 0x30]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F8544: mov dword ptr [ecx + ebx], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F854B: jmp 0x587f8550
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587F8550..0x587F86FD; 429 mapped bytes.
extern "C" __declspec(naked) void FUN_587f7e10_segment_03() {
    __asm {
        // 0x587F8550: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F8554: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587F8557: cmp dword ptr [esp + 0x18], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F855B: jne 0x587f8561
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587F855D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F855F: jmp 0x587f8563
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587F8561: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F8563: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F8565: call 0x5873b3b0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x2E
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587F856A: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587F856D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587F856F: jne 0x587f8550
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587F8571: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F8575: inc dword ptr [esp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F8579: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x587F857C: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587F857F: cmp eax, 0x1410
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8584: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F8588: jl 0x587f84a5
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x17
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F858E: jmp 0x587f86e7
        __asm _emit 0xE9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8593: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F8595: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F8597: lea ecx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F859D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587F85A0: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587F85A2: je 0x587f85b8
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587F85A4: mov edi, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F85AA: mov edi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x587F85AD: cmp dword ptr [edi + eax + 0x1398], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0x07
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F85B4: jne 0x587f85c6
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587F85B6: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x587F85B8: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x587F85BB: inc edx
        __asm _emit 0x42
        // 0x587F85BC: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587F85BF: cmp eax, 0x80
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F85C4: jl 0x587f85a0
        __asm _emit 0x7C
        __asm _emit 0xDA
        // 0x587F85C6: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587F85C9: je 0x587f860c
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x587F85CB: cmp dword ptr [esi + 0xc0], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F85D1: je 0x587f85f9
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587F85D3: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F85D8: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587F85DB: add edx, 0x139
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F85E1: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587F85E4: mov edx, dword ptr [edx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0A
        // 0x587F85E7: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587F85EA: cmp word ptr [eax + 0x2cc], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x587F85F2: jne 0x587f85f9
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587F85F4: push ebp
        __asm _emit 0x55
        // 0x587F85F5: push 0x15
        __asm _emit 0x6A
        __asm _emit 0x15
        // 0x587F85F7: jmp 0x587f8604
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587F85F9: cmp dword ptr [esi + 0xc4], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F85FF: je 0x587f860c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587F8601: push ebp
        __asm _emit 0x55
        // 0x587F8602: push 0x17
        __asm _emit 0x6A
        __asm _emit 0x17
        // 0x587F8604: push ebp
        __asm _emit 0x55
        // 0x587F8605: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F8607: call 0x587e9a10
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F860C: mov dword ptr [esi + 0xc0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8612: mov dword ptr [esi + 0xc4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8618: jmp 0x587f86e7
        __asm _emit 0xE9
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F861D: mov al, byte ptr [esi + 0x74]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x587F8620: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587F8622: je 0x587f862c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587F8624: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587F8626: jne 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F862C: cmp dword ptr [esi + 0xc0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8633: jne 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8639: cmp dword ptr [esi + 0xc4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8640: jne 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8646: mov ecx, dword ptr [esi + 0x104c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F864C: push ecx
        __asm _emit 0x51
        // 0x587F864D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F864F: call 0x587f2870
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xA2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F8654: cmp dword ptr [esi + 0x10558], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F865B: jne 0x587f86e7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8661: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F8667: mov eax, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F866D: cmp dword ptr [eax + 0x590], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8674: jne 0x587f86e7
        __asm _emit 0x75
        __asm _emit 0x71
        // 0x587F8676: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F867C: mov dword ptr [esi + 0xb8], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8686: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F868C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F868F: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8695: cdq
        __asm _emit 0x99
        // 0x587F8696: idiv dword ptr [ecx + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F869C: add eax, dword ptr [ecx + 0x50]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587F869F: mov dword ptr [esi + 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86A5: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F86AA: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587F86AD: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86B3: cdq
        __asm _emit 0x99
        // 0x587F86B4: idiv dword ptr [ecx + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86BA: add eax, dword ptr [ecx + 0x54]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587F86BD: mov dword ptr [esi + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86C3: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86C9: mov dword ptr [esi + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86CF: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86D5: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86DB: mov dword ptr [esi + 0xd4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86E1: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86E7: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F86EB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F86F2: pop ecx
        __asm _emit 0x59
        // 0x587F86F3: pop edi
        __asm _emit 0x5F
        // 0x587F86F4: pop esi
        __asm _emit 0x5E
        // 0x587F86F5: pop ebp
        __asm _emit 0x5D
        // 0x587F86F6: pop ebx
        __asm _emit 0x5B
        // 0x587F86F7: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587F86FA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
