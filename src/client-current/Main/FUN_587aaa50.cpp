// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1012 bytes in 2 exact ranges.
// Source symbol alias: FUN_587aaa50.

// Ghidra body range 0x587AAA50..0x587AAD2D; 733 mapped bytes.
extern "C" __declspec(naked) void FUN_587aaa50_segment_00() {
    __asm {
        // 0x587AAA50: push ebp
        __asm _emit 0x55
        // 0x587AAA51: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x587AAA53: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x587AAA56: sub esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x2C
        // 0x587AAA59: push ebx
        __asm _emit 0x53
        // 0x587AAA5A: mov ebx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x587AAA5D: push esi
        __asm _emit 0x56
        // 0x587AAA5E: push edi
        __asm _emit 0x57
        // 0x587AAA5F: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587AAA61: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AAA65: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AAA67: jne 0x587aaa80
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587AAA69: push 0xd1
        __asm _emit 0x68
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAA6E: push 0x589999a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AAA73: push 0x58999d30
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x9D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AAA78: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x24
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAA7D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587AAA80: movzx eax, byte ptr [ebx + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x83
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAA87: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587AAA8A: ja 0x587aae39
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xA9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAA90: jmp dword ptr [eax*4 + 0x587aae48]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xAE
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x587AAA97: push ebx
        __asm _emit 0x53
        // 0x587AAA98: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587AAA9A: call 0x587aa5d0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAA9F: pop edi
        __asm _emit 0x5F
        // 0x587AAAA0: pop esi
        __asm _emit 0x5E
        // 0x587AAAA1: pop ebx
        __asm _emit 0x5B
        // 0x587AAAA2: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587AAAA4: pop ebp
        __asm _emit 0x5D
        // 0x587AAAA5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AAAA8: mov ecx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAAAE: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x587AAAB1: sub eax, dword ptr [ecx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587AAAB4: movzx edx, byte ptr [ebx + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x53
        __asm _emit 0x0A
        // 0x587AAAB8: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587AAABB: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587AAABD: jne 0x587aacca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAAC3: cmp byte ptr [ebx + 9], 1
        __asm _emit 0x80
        __asm _emit 0x7B
        __asm _emit 0x09
        __asm _emit 0x01
        // 0x587AAAC7: mov byte ptr [esp + 0xf], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587AAACC: jne 0x587aabf6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAAD2: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AAAD6: push eax
        __asm _emit 0x50
        // 0x587AAAD7: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587AAAD9: call 0x58834b00
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xA0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587AAADE: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AAAE2: push ecx
        __asm _emit 0x51
        // 0x587AAAE3: mov ecx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAAE9: call 0x587350e0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xA5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587AAAEE: push eax
        __asm _emit 0x50
        // 0x587AAAEF: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AAAF3: call 0x587a84f0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAAF8: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587AAAFA: je 0x587aabea
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAB00: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AAB04: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xA5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAB09: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587AAB0B: cmp byte ptr [edx + 0x9c], 1
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587AAB12: je 0x587aabd7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAB18: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AAB1C: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xA5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAB21: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AAB23: cmp byte ptr [eax + 0x9c], 2
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587AAB2A: je 0x587aabd7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAB30: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AAB34: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xA5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAB39: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587AAB3B: cmp byte ptr [ecx + 0x9c], 3
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587AAB42: jne 0x587aab4f
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587AAB44: inc byte ptr [esp + 0xf]
        __asm _emit 0xFE
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587AAB48: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAB4D: jmp 0x587aab68
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x587AAB4F: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AAB53: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xA5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAB58: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587AAB5A: cmp byte ptr [edx + 0x9c], 0
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAB61: jne 0x587aab68
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587AAB63: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587AAB66: je 0x587aaba6
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x587AAB68: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AAB6A: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AAB6E: push eax
        __asm _emit 0x50
        // 0x587AAB6F: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAB73: call 0x587a8520
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAB78: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AAB7C: push ecx
        __asm _emit 0x51
        // 0x587AAB7D: mov ecx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAB83: call 0x587350e0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xA5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587AAB88: push eax
        __asm _emit 0x50
        // 0x587AAB89: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AAB8D: call 0x587a84f0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAB92: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587AAB94: jne 0x587aab00
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAB9A: mov dl, byte ptr [esp + 0xf]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587AAB9E: cmp dl, byte ptr [ebx + 0xa]
        __asm _emit 0x3A
        __asm _emit 0x53
        __asm _emit 0x0A
        // 0x587AABA1: jmp 0x587aacaf
        __asm _emit 0xE9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AABA6: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AABAA: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AABAF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587AABB1: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AABB5: mov byte ptr [edx + 0x9c], 1
        __asm _emit 0xC6
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587AABBC: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AABC1: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AABC3: push eax
        __asm _emit 0x50
        // 0x587AABC4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587AABC6: call 0x587aaa50
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AABCB: mov dl, byte ptr [esp + 0xf]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587AABCF: cmp dl, byte ptr [ebx + 0xa]
        __asm _emit 0x3A
        __asm _emit 0x53
        __asm _emit 0x0A
        // 0x587AABD2: jmp 0x587aacaf
        __asm _emit 0xE9
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AABD7: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AABDB: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AABE0: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587AABE2: push ecx
        __asm _emit 0x51
        // 0x587AABE3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587AABE5: call 0x587aaa50
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AABEA: mov dl, byte ptr [esp + 0xf]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587AABEE: cmp dl, byte ptr [ebx + 0xa]
        __asm _emit 0x3A
        __asm _emit 0x53
        __asm _emit 0x0A
        // 0x587AABF1: jmp 0x587aacaf
        __asm _emit 0xE9
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AABF6: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AABFA: push eax
        __asm _emit 0x50
        // 0x587AABFB: call 0x58834b00
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x9F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587AAC00: mov esi, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAC06: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AAC09: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587AAC0C: jbe 0x587aac13
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AAC0E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x20
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAC13: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAC17: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587AAC19: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AAC1B: je 0x587aac21
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AAC1D: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587AAC1F: je 0x587aac26
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AAC21: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x20
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAC26: cmp dword ptr [esp + 0x1c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AAC2A: je 0x587aaca8
        __asm _emit 0x74
        __asm _emit 0x7C
        // 0x587AAC2C: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAC30: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAC35: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587AAC37: cmp byte ptr [ecx + 0x9c], 1
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587AAC3E: je 0x587aac7e
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x587AAC40: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAC44: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAC49: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587AAC4B: cmp byte ptr [edx + 0x9c], 2
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587AAC52: je 0x587aac7e
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587AAC54: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAC58: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAC5D: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AAC5F: cmp byte ptr [eax + 0x9c], 3
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587AAC66: jne 0x587aac93
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x587AAC68: inc byte ptr [esp + 0xf]
        __asm _emit 0xFE
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587AAC6C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AAC6E: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587AAC72: push edx
        __asm _emit 0x52
        // 0x587AAC73: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AAC77: call 0x587a8520
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAC7C: jmp 0x587aac00
        __asm _emit 0xEB
        __asm _emit 0x82
        // 0x587AAC7E: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAC82: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xA3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAC87: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587AAC89: push ecx
        __asm _emit 0x51
        // 0x587AAC8A: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AAC8E: call 0x587aaa50
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAC93: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AAC95: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587AAC99: push edx
        __asm _emit 0x52
        // 0x587AAC9A: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AAC9E: call 0x587a8520
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AACA3: jmp 0x587aac00
        __asm _emit 0xE9
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AACA8: mov al, byte ptr [esp + 0xf]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587AACAC: cmp al, byte ptr [ebx + 0xa]
        __asm _emit 0x3A
        __asm _emit 0x43
        __asm _emit 0x0A
        // 0x587AACAF: jne 0x587aae39
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AACB5: mov byte ptr [ebx + 0x9c], 3
        __asm _emit 0xC6
        __asm _emit 0x83
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587AACBC: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AACC1: pop edi
        __asm _emit 0x5F
        // 0x587AACC2: pop esi
        __asm _emit 0x5E
        // 0x587AACC3: pop ebx
        __asm _emit 0x5B
        // 0x587AACC4: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587AACC6: pop ebp
        __asm _emit 0x5D
        // 0x587AACC7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AACCA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AACCC: pop edi
        __asm _emit 0x5F
        // 0x587AACCD: pop esi
        __asm _emit 0x5E
        // 0x587AACCE: pop ebx
        __asm _emit 0x5B
        // 0x587AACCF: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587AACD1: pop ebp
        __asm _emit 0x5D
        // 0x587AACD2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AACD5: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587AACD8: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587AACDA: je 0x587aae39
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AACE0: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AACE2: cmp byte ptr [eax + 0xa], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x02
        // 0x587AACE6: jne 0x587aad96
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AACEC: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x587AACEF: and cl, 2
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x02
        // 0x587AACF2: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x587AACF5: jne 0x587aae39
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AACFB: mov ecx, dword ptr [eax + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAD01: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAD05: push edx
        __asm _emit 0x52
        // 0x587AAD06: call 0x58834b00
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x9D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587AAD0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587AAD0D: mov ecx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAD13: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587AAD17: push eax
        __asm _emit 0x50
        // 0x587AAD18: call 0x587350e0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xA3
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587AAD1D: push eax
        __asm _emit 0x50
        // 0x587AAD1E: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AAD22: call 0x587a84f0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAD27: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587AAD29: je 0x587aad7f
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x587AAD2B: jmp 0x587aad30
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587AAD30..0x587AAE47; 279 mapped bytes.
extern "C" __declspec(naked) void FUN_587aaa50_segment_01() {
    __asm {
        // 0x587AAD30: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAD34: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xA3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAD39: cmp dword ptr [eax], ebx
        __asm _emit 0x39
        __asm _emit 0x18
        // 0x587AAD3B: je 0x587aad4f
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587AAD3D: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAD41: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xA3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAD46: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587AAD48: mov byte ptr [edx + 0x9c], 0
        __asm _emit 0xC6
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAD4F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AAD51: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587AAD55: push eax
        __asm _emit 0x50
        // 0x587AAD56: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AAD5A: call 0x587a8520
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAD5F: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587AAD61: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587AAD65: push ecx
        __asm _emit 0x51
        // 0x587AAD66: mov ecx, dword ptr [edx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAD6C: call 0x587350e0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xA3
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587AAD71: push eax
        __asm _emit 0x50
        // 0x587AAD72: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AAD76: call 0x587a84f0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAD7B: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587AAD7D: jne 0x587aad30
        __asm _emit 0x75
        __asm _emit 0xB1
        // 0x587AAD7F: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AAD81: mov byte ptr [eax + 0x9c], 3
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587AAD88: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAD8D: pop edi
        __asm _emit 0x5F
        // 0x587AAD8E: pop esi
        __asm _emit 0x5E
        // 0x587AAD8F: pop ebx
        __asm _emit 0x5B
        // 0x587AAD90: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587AAD92: pop ebp
        __asm _emit 0x5D
        // 0x587AAD93: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AAD96: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587AAD98: je 0x587aae39
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAD9E: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587AADA0: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AADA4: push ecx
        __asm _emit 0x51
        // 0x587AADA5: mov ecx, dword ptr [edx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AADAB: call 0x58834b00
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x9D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587AADB0: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AADB2: mov esi, dword ptr [eax + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AADB8: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587AADBB: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AADBF: cmp dword ptr [esi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587AADC2: jbe 0x587aadc9
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AADC4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AADC9: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AADCD: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587AADCF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AADD1: je 0x587aadd7
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AADD3: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587AADD5: je 0x587aaddc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AADD7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AADDC: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AADE0: cmp esi, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AADE4: je 0x587aae39
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x587AADE6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AADE8: jne 0x587aae23
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x587AADEA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AADEF: cmp esi, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x10
        // 0x587AADF2: jb 0x587aadf9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AADF4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AADF9: cmp dword ptr [esi], ebx
        __asm _emit 0x39
        __asm _emit 0x1E
        // 0x587AADFB: je 0x587aae11
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587AADFD: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAE01: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xA2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAE06: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587AAE08: cmp byte ptr [ecx + 0x9c], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAE0F: je 0x587aae27
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587AAE11: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AAE13: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587AAE17: push edx
        __asm _emit 0x52
        // 0x587AAE18: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AAE1C: call 0x587a8520
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAE21: jmp 0x587aadb0
        __asm _emit 0xEB
        __asm _emit 0x8D
        // 0x587AAE23: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587AAE25: jmp 0x587aadef
        __asm _emit 0xEB
        __asm _emit 0xC8
        // 0x587AAE27: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AAE2B: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xA2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAE30: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AAE32: mov byte ptr [eax + 0x9c], 1
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587AAE39: pop edi
        __asm _emit 0x5F
        // 0x587AAE3A: pop esi
        __asm _emit 0x5E
        // 0x587AAE3B: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAE40: pop ebx
        __asm _emit 0x5B
        // 0x587AAE41: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587AAE43: pop ebp
        __asm _emit 0x5D
        // 0x587AAE44: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
