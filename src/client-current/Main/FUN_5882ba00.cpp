// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 408 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882ba00.

// Ghidra body range 0x5882BA00..0x5882BB98; 408 mapped bytes.
extern "C" __declspec(naked) void FUN_5882ba00_segment_00() {
    __asm {
        // 0x5882BA00: push ebp
        __asm _emit 0x55
        // 0x5882BA01: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5882BA03: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x5882BA06: sub esp, 0x194
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA0C: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882BA11: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882BA13: mov dword ptr [esp + 0x190], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA1A: push ebx
        __asm _emit 0x53
        // 0x5882BA1B: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5882BA1D: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA23: push esi
        __asm _emit 0x56
        // 0x5882BA24: push edi
        __asm _emit 0x57
        // 0x5882BA25: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882BA27: je 0x5882bb83
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA2D: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xAA
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882BA32: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5882BA34: sub esi, -0x80
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x80
        // 0x5882BA37: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA3C: lea edi, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882BA40: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5882BA42: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA48: call 0x587860f0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xA6
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882BA4D: mov ecx, dword ptr [ebx + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA53: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5882BA55: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882BA59: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xCD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882BA5E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882BA60: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882BA64: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5882BA66: jbe 0x5882bb83
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA6C: lea edi, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882BA70: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA75: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5882BA77: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5882BA79: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882BA7D: cmp byte ptr [edi], 0
        __asm _emit 0x80
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x5882BA80: je 0x5882bb4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA86: cmp word ptr [edi + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5882BA8B: je 0x5882bb4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BA91: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5882BA93: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882BA99: push eax
        __asm _emit 0x50
        // 0x5882BA9A: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xD3
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882BA9F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5882BAA1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5882BAA3: je 0x5882bb46
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BAA9: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BAAE: lea ecx, [esp + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BAB5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882BAB7: push ecx
        __asm _emit 0x51
        // 0x5882BAB8: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x11
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882BABD: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BAC3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5882BAC6: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xA9
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882BACB: mov dl, byte ptr [esi + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BAD1: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882BAD5: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x5882BAD8: mov eax, dword ptr [eax + edi]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x38
        // 0x5882BADB: movzx cx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCA
        // 0x5882BADF: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882BAE2: jne 0x5882bafd
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5882BAE4: movzx ecx, word ptr [esi + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BAEB: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BAF1: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5882BAF4: push eax
        __asm _emit 0x50
        // 0x5882BAF5: push ecx
        __asm _emit 0x51
        // 0x5882BAF6: push 0x5899df2c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0xDF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882BAFB: jmp 0x5882bb1a
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x5882BAFD: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5882BB01: jne 0x5882bb35
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x5882BB03: movzx ecx, word ptr [esi + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BB0A: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BB10: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5882BB13: push eax
        __asm _emit 0x50
        // 0x5882BB14: push ecx
        __asm _emit 0x51
        // 0x5882BB15: push 0x5899df14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xDF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882BB1A: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882BB20: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882BB23: push eax
        __asm _emit 0x50
        // 0x5882BB24: lea edx, [esp + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BB2B: push edx
        __asm _emit 0x52
        // 0x5882BB2C: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882BB32: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5882BB35: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882BB3A: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882BB3C: lea eax, [esp + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BB43: push eax
        __asm _emit 0x50
        // 0x5882BB44: jmp 0x5882bb62
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x5882BB46: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882BB4A: push ecx
        __asm _emit 0x51
        // 0x5882BB4B: mov ecx, dword ptr [ebx + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BB51: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xC6
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882BB56: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882BB5B: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882BB5D: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882BB62: mov ecx, dword ptr [ebx + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BB68: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xCD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882BB6D: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882BB71: inc ecx
        __asm _emit 0x41
        // 0x5882BB72: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5882BB75: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882BB79: cmp ecx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882BB7D: jb 0x5882ba7d
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xFA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882BB83: mov ecx, dword ptr [esp + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BB8A: pop edi
        __asm _emit 0x5F
        // 0x5882BB8B: pop esi
        __asm _emit 0x5E
        // 0x5882BB8C: pop ebx
        __asm _emit 0x5B
        // 0x5882BB8D: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882BB8F: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882BB94: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5882BB96: pop ebp
        __asm _emit 0x5D
        // 0x5882BB97: ret
        __asm _emit 0xC3
    }
}
