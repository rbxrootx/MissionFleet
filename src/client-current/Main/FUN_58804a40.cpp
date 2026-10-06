// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1434 bytes in 3 discontiguous ranges.
// Source symbol alias: FUN_58804a40.

// Ghidra body range 0x58804A40..0x58804DEB; 939 mapped bytes.
extern "C" __declspec(naked) void FUN_58804a40_segment_00() {
    __asm {
        // 0x58804A40: sub esp, 0x21c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804A46: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58804A4B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58804A4D: mov dword ptr [esp + 0x218], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804A54: mov edx, dword ptr [esp + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804A5B: push ebx
        __asm _emit 0x53
        // 0x58804A5C: push ebp
        __asm _emit 0x55
        // 0x58804A5D: push esi
        __asm _emit 0x56
        // 0x58804A5E: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58804A60: push edi
        __asm _emit 0x57
        // 0x58804A61: lea edi, [ebp + 0x180]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804A67: mov ecx, 0x31
        __asm _emit 0xB9
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804A6C: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58804A6E: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58804A70: movzx eax, word ptr [ebp + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804A77: mov edi, dword ptr [esp + 0x234]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804A7E: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58804A82: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58804A86: je 0x58804a8e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58804A88: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58804A8C: jne 0x58804a9f
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58804A8E: mov ecx, dword ptr [edi*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBD
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804A95: mov cx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58804A98: mov word ptr [ebp + 0x11c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804A9F: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58804AA1: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58804AA5: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804AAA: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804AAF: jne 0x58804abf
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58804AB1: mov dword ptr [eax + 0x218c8], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0xC8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58804AB7: mov byte ptr [eax + 0x218d8], bl
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0xD8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58804ABD: jmp 0x58804acb
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58804ABF: mov dword ptr [eax + 0x218c8], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0xC8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58804AC5: mov byte ptr [eax + 0x218d8], bl
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0xD8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58804ACB: cmp word ptr [ebp + 0x204], 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x58804AD3: jne 0x58804af1
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58804AD5: movzx eax, word ptr [ebp + 0x11c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804ADC: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804AE2: mov dword ptr [ecx + 0x218c4], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58804AE8: mov word ptr [ecx + 0x218cc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xCC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58804AEF: jmp 0x58804b05
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58804AF1: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804AF6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58804AF8: mov dword ptr [eax + 0x218c4], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58804AFE: mov word ptr [eax + 0x218cc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xCC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58804B05: test byte ptr [ebp + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x85
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58804B0C: je 0x58804b50
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58804B0E: movzx edx, byte ptr [ebp + 0x1b2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xB2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804B15: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804B1B: and edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x58804B1E: push edx
        __asm _emit 0x52
        // 0x58804B1F: call 0x587af9a0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xAE
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58804B24: mov al, byte ptr [0x58a0b1fd]
        __asm _emit 0xA0
        __asm _emit 0xFD
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58804B29: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x58804B2B: jae 0x58804b4c
        __asm _emit 0x73
        __asm _emit 0x1F
        // 0x58804B2D: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x58804B30: cmp dword ptr [eax*4 + 0x58a0b1e4], -1
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x58804B38: je 0x58804b4c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58804B3A: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804B40: mov edx, dword ptr [ecx + 0xdd4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804B46: mov dword ptr [edx + 0xe4], esi
        __asm _emit 0x89
        __asm _emit 0xB2
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804B4C: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58804B50: cmp word ptr [edx + 0x36], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x36
        __asm _emit 0x07
        // 0x58804B55: jne 0x58804b7c
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58804B57: movzx eax, byte ptr [edx + 0x87]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x82
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804B5E: movzx ecx, byte ptr [edx + 0x86]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804B65: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804B6B: push eax
        __asm _emit 0x50
        // 0x58804B6C: push ecx
        __asm _emit 0x51
        // 0x58804B6D: mov ecx, dword ptr [edx + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58804B73: call 0x587cc160
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58804B78: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58804B7C: cmp word ptr [edx + 0x36], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x36
        __asm _emit 0x03
        // 0x58804B81: jne 0x58804bb5
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58804B83: mov eax, dword ptr [edx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x40
        // 0x58804B86: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804B8C: push eax
        __asm _emit 0x50
        // 0x58804B8D: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xA2
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58804B92: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58804B94: je 0x58804bac
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58804B96: mov eax, dword ptr [eax + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804B9C: cmp eax, 0x2710
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804BA1: jae 0x58804bbb
        __asm _emit 0x73
        __asm _emit 0x18
        // 0x58804BA3: mov ecx, dword ptr [ebp + 0x200]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804BA9: push ecx
        __asm _emit 0x51
        // 0x58804BAA: jmp 0x58804bbc
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58804BAC: mov edx, dword ptr [ebp + 0x200]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804BB2: push edx
        __asm _emit 0x52
        // 0x58804BB3: jmp 0x58804bbc
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58804BB5: mov eax, dword ptr [ebp + 0x200]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804BBB: push eax
        __asm _emit 0x50
        // 0x58804BBC: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804BC2: call 0x58800360
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xB7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58804BC7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804BCD: mov esi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58804BD3: push esi
        __asm _emit 0x56
        // 0x58804BD4: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58804BD6: mov dword ptr [ebp + 0x118], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804BDC: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58804BE1: push esi
        __asm _emit 0x56
        // 0x58804BE2: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58804BE4: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xE3
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58804BE9: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804BEF: mov eax, dword ptr [esp + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804BF6: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804BFB: mov dword ptr [edx + 0x64c], ecx
        __asm _emit 0x89
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C01: mov dword ptr [ebp + 0x258], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C07: mov dword ptr [ebp + 0x25c], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C0D: mov dword ptr [ebp + 0x254], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C13: mov dword ptr [ebp + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C19: movzx eax, word ptr [ebp + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C20: mov dword ptr [ebp + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x7C
        // 0x58804C23: mov dword ptr [ebp + 0x100], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C29: mov dword ptr [ebp + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C2F: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58804C33: je 0x58804c7b
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x58804C35: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58804C39: je 0x58804c7b
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x58804C3B: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x58804C3F: je 0x58804c7b
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x58804C41: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x58804C45: je 0x58804c7b
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58804C47: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x58804C4B: je 0x58804c7b
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58804C4D: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x58804C51: je 0x58804c7b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58804C53: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x58804C57: jne 0x58804c62
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58804C59: cmp word ptr [ebp + 0x1b8], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C60: je 0x58804c7b
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58804C62: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58804C66: je 0x58804c7b
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58804C68: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58804C6C: movzx edx, byte ptr [edx + 0x32]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x52
        __asm _emit 0x32
        // 0x58804C70: and edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x58804C73: mov dword ptr [ebp + 0x8c], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C79: jmp 0x58804c81
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58804C7B: mov dword ptr [ebp + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C81: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58804C85: jne 0x58804cdc
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x58804C87: movzx eax, byte ptr [ebp + 0x207]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C8E: movzx ecx, byte ptr [ebp + 0x206]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8D
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804C95: push eax
        __asm _emit 0x50
        // 0x58804C96: push ecx
        __asm _emit 0x51
        // 0x58804C97: push 0x5899d3f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0xD3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58804C9C: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58804CA2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58804CA5: push eax
        __asm _emit 0x50
        // 0x58804CA6: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58804CAA: push edx
        __asm _emit 0x52
        // 0x58804CAB: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58804CB1: mov edi, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804CB7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58804CBA: add edi, 0x298
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804CC0: mov ecx, 0x80
        __asm _emit 0xB9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804CC5: lea esi, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58804CC9: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58804CCB: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804CD1: lea eax, [ecx + 0x298]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804CD7: push eax
        __asm _emit 0x50
        // 0x58804CD8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58804CDA: jmp 0x58804ce4
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58804CDC: push ebx
        __asm _emit 0x53
        // 0x58804CDD: push ecx
        __asm _emit 0x51
        // 0x58804CDE: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804CE4: lea eax, [ebp + 0x180]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804CEA: push eax
        __asm _emit 0x50
        // 0x58804CEB: call 0x5888d390
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58804CF0: movzx ecx, word ptr [ebp + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804CF7: movzx edx, word ptr [ebp + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804CFE: push ecx
        __asm _emit 0x51
        // 0x58804CFF: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D05: push edx
        __asm _emit 0x52
        // 0x58804D06: mov dword ptr [ebp + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x68
        // 0x58804D09: call 0x588a5360
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58804D0E: mov eax, dword ptr [ebp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D14: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D1A: push eax
        __asm _emit 0x50
        // 0x58804D1B: call 0x588a90d0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x43
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58804D20: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D26: lea eax, [ebp + 0x180]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D2C: push eax
        __asm _emit 0x50
        // 0x58804D2D: call 0x588a5380
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58804D32: mov eax, dword ptr [ebp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D38: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D3D: mov dword ptr [ebp + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x78
        // 0x58804D40: mov dword ptr [ebp + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x70
        // 0x58804D43: mov dword ptr [ebp + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x64
        // 0x58804D46: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58804D4A: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58804D4D: cmp word ptr [ebp + 0x110], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x58804D55: mov dword ptr [ebp + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D5B: mov dword ptr [ebp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D61: mov dword ptr [ebp + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D67: mov dword ptr [ebp + 0x244], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D6D: jne 0x58804d81
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58804D6F: mov edx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D75: mov al, byte ptr [ebp + 0x240]
        __asm _emit 0x8A
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D7B: mov byte ptr [edx + 0x1dc], al
        __asm _emit 0x88
        __asm _emit 0x82
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804D81: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804D87: call 0x5878a1e0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x54
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58804D8C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58804D8E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58804D90: mov ecx, dword ptr [esi + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58804D96: call 0x58789890
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x4A
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58804D9B: mov ecx, dword ptr [ebp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804DA1: mov eax, dword ptr [esi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x0E
        // 0x58804DA4: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804DA9: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58804DAD: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58804DB0: cmp esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x20
        // 0x58804DB3: jl 0x58804d90
        __asm _emit 0x7C
        __asm _emit 0xDB
        // 0x58804DB5: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58804DB9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58804DBB: test byte ptr [eax + 0x32], 0xf
        __asm _emit 0xF6
        __asm _emit 0x40
        __asm _emit 0x32
        __asm _emit 0x0F
        // 0x58804DBF: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58804DC3: jbe 0x58804f63
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x9A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804DC9: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58804DCD: mov eax, 0x2e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804DD2: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x58804DD4: mov ebx, 0xfffffeb0
        __asm _emit 0xBB
        __asm _emit 0xB0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58804DD9: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x58804DDB: lea edi, [ebp + 0x150]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804DE1: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58804DE5: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58804DE9: jmp 0x58804df4
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x58804DF0..0x58804EDA; 234 mapped bytes.
extern "C" __declspec(naked) void FUN_58804a40_segment_01() {
    __asm {
        // 0x58804DF0: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58804DF4: mov ecx, dword ptr [ebp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804DFA: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xDF
        // 0x58804DFC: mov esi, dword ptr [ebx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x0B
        // 0x58804DFF: mov ecx, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804E05: push esi
        __asm _emit 0x56
        // 0x58804E06: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58804E0A: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xE0
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58804E0F: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58804E13: push esi
        __asm _emit 0x56
        // 0x58804E14: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xE1
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58804E19: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x58804E1B: mov ecx, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804E21: push esi
        __asm _emit 0x56
        // 0x58804E22: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58804E26: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xE0
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58804E2B: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58804E2F: push esi
        __asm _emit 0x56
        // 0x58804E30: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xE1
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58804E35: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804E3A: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58804E3E: mov esi, dword ptr [edx + eax + 0x458]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804E45: mov ecx, dword ptr [ebp + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804E4B: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58804E4F: mov dword ptr [ecx + edx*8], esi
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0xD1
        // 0x58804E52: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58804E56: mov eax, dword ptr [esi + eax + 0x45c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804E5D: mov dword ptr [ecx + edx*8 + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xD1
        __asm _emit 0x04
        // 0x58804E61: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58804E65: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804E6A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58804E6C: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x58804E6E: cmp dword ptr [ecx + eax], esi
        __asm _emit 0x39
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x58804E71: jle 0x58804ed1
        __asm _emit 0x7E
        __asm _emit 0x5E
        // 0x58804E73: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58804E77: add ecx, 0x458
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804E7D: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58804E81: jmp 0x58804e87
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58804E83: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58804E87: mov edx, dword ptr [ecx + eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x04
        // 0x58804E8B: mov eax, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x58804E8E: mov ecx, dword ptr [ebp + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804E94: push edx
        __asm _emit 0x52
        // 0x58804E95: mov edx, dword ptr [ebx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0B
        // 0x58804E98: mov ecx, dword ptr [edx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB2
        // 0x58804E9B: push eax
        __asm _emit 0x50
        // 0x58804E9C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xE3
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58804EA1: mov eax, dword ptr [ebp + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804EA7: mov ecx, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x03
        // 0x58804EAA: mov eax, dword ptr [ecx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB1
        // 0x58804EAD: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58804EB2: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58804EB6: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58804EBB: add dword ptr [esp + 0x10], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x08
        // 0x58804EC0: inc esi
        __asm _emit 0x46
        // 0x58804EC1: lea ecx, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3A
        // 0x58804EC4: cmp esi, dword ptr [ecx + eax]
        __asm _emit 0x3B
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x58804EC7: jl 0x58804e83
        __asm _emit 0x7C
        __asm _emit 0xBA
        // 0x58804EC9: cmp esi, 0x400
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804ECF: jge 0x58804eff
        __asm _emit 0x7D
        __asm _emit 0x2E
        // 0x58804ED1: lea eax, [esi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804ED8: jmp 0x58804ee0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58804EE0..0x58804FE5; 261 mapped bytes.
extern "C" __declspec(naked) void FUN_58804a40_segment_02() {
    __asm {
        // 0x58804EE0: mov ecx, dword ptr [ebp + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804EE6: mov edx, dword ptr [ebx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0B
        // 0x58804EE9: mov ecx, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x10
        // 0x58804EEC: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804EF1: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58804EF5: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58804EF8: cmp eax, 0x1000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804EFD: jl 0x58804ee0
        __asm _emit 0x7C
        __asm _emit 0xE1
        // 0x58804EFF: mov eax, dword ptr [ebp + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804F05: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58804F09: mov ecx, dword ptr [eax + esi*8 + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xF0
        __asm _emit 0x04
        // 0x58804F0D: mov edx, dword ptr [eax + esi*8]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xF0
        // 0x58804F10: lea eax, [eax + esi*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xF0
        // 0x58804F13: add ecx, 0x96
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804F19: push ecx
        __asm _emit 0x51
        // 0x58804F1A: mov ecx, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE0
        // 0x58804F1D: sub edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x64
        // 0x58804F20: push edx
        __asm _emit 0x52
        // 0x58804F21: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xE3
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58804F26: mov eax, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xE0
        // 0x58804F29: add dword ptr [esp + 0x1c], 0x2000
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804F31: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804F36: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58804F3A: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58804F3C: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58804F40: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58804F44: movzx edx, byte ptr [eax + 0x32]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x50
        __asm _emit 0x32
        // 0x58804F48: inc esi
        __asm _emit 0x46
        // 0x58804F49: and edx, ecx
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x58804F4B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58804F4E: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58804F50: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58804F54: jl 0x58804df0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58804F5A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58804F5C: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x58804F5F: jge 0x58804f8e
        __asm _emit 0x7D
        __asm _emit 0x2D
        // 0x58804F61: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58804F63: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804F68: lea eax, [ebp + ecx*4 + 0x130]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804F6F: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58804F71: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58804F73: mov dword ptr [eax - 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x8C
        // 0x58804F76: mov esi, 0xfff0
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804F7B: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x58804F7F: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x58804F82: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x58804F86: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58804F89: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58804F8C: jne 0x58804f71
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x58804F8E: mov eax, dword ptr [ebp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804F94: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58804F96: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58804F9B: mov eax, dword ptr [ebp + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804FA1: mov dword ptr [ebp + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804FA7: mov dword ptr [ebp + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804FAD: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58804FAF: sub ecx, 0x96
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804FB5: mov dword ptr [ebp + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804FBB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58804FBE: mov ecx, dword ptr [esp + 0x228]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804FC5: pop edi
        __asm _emit 0x5F
        // 0x58804FC6: sub edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804FCC: pop esi
        __asm _emit 0x5E
        // 0x58804FCD: mov dword ptr [ebp + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804FD3: pop ebp
        __asm _emit 0x5D
        // 0x58804FD4: pop ebx
        __asm _emit 0x5B
        // 0x58804FD5: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58804FD7: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x7B
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58804FDC: add esp, 0x21c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804FE2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
