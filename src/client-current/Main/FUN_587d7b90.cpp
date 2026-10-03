// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D7B90 .. +0x1E6 bytes.
extern "C" __declspec(naked) void FUN_587d7b90() {
    __asm {
        // 0x587D7B90: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587D7B92: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D7B97: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7B9D: push eax
        __asm _emit 0x50
        // 0x587D7B9E: push ecx
        __asm _emit 0x51
        // 0x587D7B9F: push esi
        __asm _emit 0x56
        // 0x587D7BA0: push edi
        __asm _emit 0x57
        // 0x587D7BA1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D7BA6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587D7BA8: push eax
        __asm _emit 0x50
        // 0x587D7BA9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D7BAD: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7BB3: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587D7BB5: push 0xd4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7BBA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x50
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D7BBF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D7BC2: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587D7BC6: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7BCE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D7BD0: je 0x587d7bff
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587D7BD2: mov edx, dword ptr [edi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7BD8: mov cx, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x26
        // 0x587D7BDC: add edx, 0x26
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x26
        // 0x587D7BDF: add cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x05
        // 0x587D7BE3: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x587D7BE6: push edx
        __asm _emit 0x52
        // 0x587D7BE7: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7BEC: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D7BF1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7BF3: push edi
        __asm _emit 0x57
        // 0x587D7BF4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D7BF6: call 0x58794600
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xCA
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D7BFB: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587D7BFD: jmp 0x587d7c01
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7BFF: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587D7C01: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D7C06: cmp dword ptr [eax + 0x170], 0x16
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x587D7C0D: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D7C15: jle 0x587d7c2b
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587D7C17: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7C1E: je 0x587d7c2b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D7C20: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7C26: mov ecx, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x58
        // 0x587D7C29: jmp 0x587d7c2d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7C2B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D7C2D: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D7C32: cmp dword ptr [eax + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587D7C39: jle 0x587d7c4f
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587D7C3B: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7C42: je 0x587d7c4f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D7C44: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7C4A: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587D7C4D: jmp 0x587d7c51
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7C4F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D7C51: push ecx
        __asm _emit 0x51
        // 0x587D7C52: push eax
        __asm _emit 0x50
        // 0x587D7C53: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D7C55: call 0x587941a0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xC5
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D7C5A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D7C5C: call 0x587945c0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xC9
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D7C61: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D7C66: cmp dword ptr [eax + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587D7C6D: jle 0x587d7c85
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587D7C6F: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7C76: je 0x587d7c85
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587D7C78: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7C7E: add eax, 0x1c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7C83: jmp 0x587d7c87
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7C85: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D7C87: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7C89: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7C8B: push eax
        __asm _emit 0x50
        // 0x587D7C8C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D7C8E: call 0x587941e0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xC5
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D7C93: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D7C98: cmp dword ptr [eax + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x587D7C9F: jle 0x587d7cb7
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587D7CA1: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7CA8: je 0x587d7cb7
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587D7CAA: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7CB0: add eax, 0x200
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7CB5: jmp 0x587d7cb9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7CB7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D7CB9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7CBB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7CBD: push eax
        __asm _emit 0x50
        // 0x587D7CBE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D7CC0: call 0x587940d0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xC4
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D7CC5: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xA1
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D7CCA: cmp dword ptr [eax + 0x160], 9
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x587D7CD1: jle 0x587d7ce9
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587D7CD3: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7CDA: je 0x587d7ce9
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587D7CDC: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7CE2: add eax, 0x240
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7CE7: jmp 0x587d7ceb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7CE9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D7CEB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7CED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7CEF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7CF1: push eax
        __asm _emit 0x50
        // 0x587D7CF2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D7CF4: call 0x58794110
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xC4
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D7CF9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7CFB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7CFD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7CFF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D7D01: call 0x58794150
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xC4
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D7D06: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7D08: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D7D0A: call 0x588a5380
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xD6
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587D7D0F: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7D14: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D7D16: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xB0
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7D1B: mov eax, 0x7fff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7D20: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587D7D24: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7D29: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587D7D2D: mov edx, 0xdfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7D32: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587D7D36: mov eax, dword ptr [edi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7D3C: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x26
        // 0x587D7D40: add cx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x09
        // 0x587D7D44: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x587D7D48: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587D7D4B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D7D4D: je 0x587d7d55
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D7D4F: push esi
        __asm _emit 0x56
        // 0x587D7D50: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xB1
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7D55: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587D7D58: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D7D5A: je 0x587d7d62
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D7D5C: push esi
        __asm _emit 0x56
        // 0x587D7D5D: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xB1
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D7D62: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587D7D64: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D7D68: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7D6F: pop ecx
        __asm _emit 0x59
        // 0x587D7D70: pop edi
        __asm _emit 0x5F
        // 0x587D7D71: pop esi
        __asm _emit 0x5E
        // 0x587D7D72: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D7D75: ret
        __asm _emit 0xC3
    }
}
