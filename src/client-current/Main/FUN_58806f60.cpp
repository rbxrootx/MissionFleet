// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58806F60 .. +0x408 bytes.
// Source symbol alias: FUN_58806f60.
extern "C" __declspec(naked) void FUN_58806f60() {
    __asm {
        // 0x58806F60: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x58806F63: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58806F68: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58806F6A: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58806F6E: push ebx
        __asm _emit 0x53
        // 0x58806F6F: push ebp
        __asm _emit 0x55
        // 0x58806F70: push esi
        __asm _emit 0x56
        // 0x58806F71: mov esi, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58806F75: push edi
        __asm _emit 0x57
        // 0x58806F76: mov edi, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58806F7A: cmp byte ptr [edi + 0x68], 1
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x58806F7E: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58806F80: je 0x58806fc9
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x58806F82: lea eax, [edi + 6]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x06
        // 0x58806F85: push eax
        __asm _emit 0x50
        // 0x58806F86: push 0x5899d450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xD4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58806F8B: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58806F8F: push 0x5899d444
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xD4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58806F94: push ecx
        __asm _emit 0x51
        // 0x58806F95: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58806F9B: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58806FA0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58806FA3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58806FA5: push 0x5898ce74
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58806FAA: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58806FAE: push edx
        __asm _emit 0x52
        // 0x58806FAF: push eax
        __asm _emit 0x50
        // 0x58806FB0: call dword ptr [0x5898c3cc]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xCC
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58806FB6: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58806FBC: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x9B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58806FC1: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58806FC3: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58806FC9: mov eax, dword ptr [edi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x44
        // 0x58806FCC: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x58806FCE: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x58806FD1: cmp dword ptr [esp + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x58806FD6: jne 0x588072b5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806FDC: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x58806FDF: lea edx, [esi + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xCE
        // 0x58806FE2: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58806FE8: push edx
        __asm _emit 0x52
        // 0x58806FE9: push esi
        __asm _emit 0x56
        // 0x58806FEA: push edi
        __asm _emit 0x57
        // 0x58806FEB: call 0x58789fe0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x2F
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58806FF0: cmp word ptr [ebp + 0x110], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x58806FF8: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58806FFA: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807000: jne 0x58807034
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58807002: movzx ecx, byte ptr [eax + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807009: mov edx, dword ptr [esi + 0x6500]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880700F: push ecx
        __asm _emit 0x51
        // 0x58807010: mov ecx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x78
        // 0x58807013: push edx
        __asm _emit 0x52
        // 0x58807014: mov dl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58807017: push ecx
        __asm _emit 0x51
        // 0x58807018: movzx ecx, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0F
        // 0x5880701B: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5880701E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807020: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x58807023: movzx edx, byte ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x58807027: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807029: push eax
        __asm _emit 0x50
        // 0x5880702A: push ecx
        __asm _emit 0x51
        // 0x5880702B: mov ecx, dword ptr [edx*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x95
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58807032: jmp 0x5880705d
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x58807034: mov edx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x78
        // 0x58807037: mov ecx, dword ptr [esi + 0x6500]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880703D: mov al, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58807040: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58807042: push ecx
        __asm _emit 0x51
        // 0x58807043: push edx
        __asm _emit 0x52
        // 0x58807044: movzx edx, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x17
        // 0x58807047: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x58807049: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880704B: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x5880704E: movzx eax, byte ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58807052: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807054: push ecx
        __asm _emit 0x51
        // 0x58807055: mov ecx, dword ptr [eax*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880705C: push edx
        __asm _emit 0x52
        // 0x5880705D: call 0x587899d0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x29
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807062: movzx ecx, byte ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58807066: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807068: push ecx
        __asm _emit 0x51
        // 0x58807069: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880706F: call 0x588a6410
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xF3
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58807074: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880707A: movzx eax, word ptr [edx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x02
        // 0x5880707E: cmp eax, 0x1c3
        __asm _emit 0x3D
        __asm _emit 0xC3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807083: jg 0x58807095
        __asm _emit 0x7F
        __asm _emit 0x10
        // 0x58807085: je 0x5880709c
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58807087: cmp eax, 0x6f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x6F
        // 0x5880708A: je 0x5880709c
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5880708C: cmp eax, 0x13e
        __asm _emit 0x3D
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807091: je 0x5880709c
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58807093: jmp 0x588070aa
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58807095: cmp eax, 0x1c5
        __asm _emit 0x3D
        __asm _emit 0xC5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880709A: jne 0x588070aa
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5880709C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5880709E: call 0x588ddce0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588070A3: mov byte ptr [esi + 0x1368], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588070AA: cmp dword ptr [ebp + 0x114], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588070B1: je 0x588070e0
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588070B3: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588070B8: lea ebx, [edi + 6]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x06
        // 0x588070BB: push ebx
        __asm _emit 0x53
        // 0x588070BC: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588070C2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588070C4: je 0x58807132
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x588070C6: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588070CC: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588070CF: movzx eax, byte ptr [esi + 0x876]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588070D6: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588070D9: movzx edx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD1
        // 0x588070DC: push edx
        __asm _emit 0x52
        // 0x588070DD: push eax
        __asm _emit 0x50
        // 0x588070DE: jmp 0x5880710e
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x588070E0: movzx eax, word ptr [ebp + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588070E7: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588070EB: je 0x58807132
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588070ED: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588070F1: je 0x58807132
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x588070F3: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588070F9: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588070FC: movzx ecx, byte ptr [esi + 0x876]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807103: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58807106: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x58807109: push eax
        __asm _emit 0x50
        // 0x5880710A: lea ebx, [edi + 6]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x06
        // 0x5880710D: push ecx
        __asm _emit 0x51
        // 0x5880710E: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807114: push ebx
        __asm _emit 0x53
        // 0x58807115: call 0x5888d040
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x5F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5880711A: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807120: push ebx
        __asm _emit 0x53
        // 0x58807121: call 0x58752000
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xAE
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58807126: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880712C: push ebx
        __asm _emit 0x53
        // 0x5880712D: call 0x58752410
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xB2
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58807132: movzx edx, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807139: movzx eax, word ptr [esi + 0x352]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807140: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807146: shl edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x0A
        // 0x58807149: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5880714B: lea eax, [ecx + edx*8 + 0x458]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xD1
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807152: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58807155: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58807157: push edx
        __asm _emit 0x52
        // 0x58807158: push eax
        __asm _emit 0x50
        // 0x58807159: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5880715B: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xC1
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58807160: mov ecx, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807166: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58807168: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5880716B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880716D: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807173: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x2E
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807178: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880717E: push eax
        __asm _emit 0x50
        // 0x5880717F: call 0x588a5380
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xE1
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58807184: cmp byte ptr [edi + 0x108], 0
        __asm _emit 0x80
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880718B: je 0x58807199
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880718D: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58807192: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58807194: call 0x588da450
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x32
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58807199: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880719B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5880719D: call 0x588d6cc0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xFB
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588071A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588071A4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588071A6: call 0x588d6d10
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xFB
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588071AB: mov al, byte ptr [edi + 0x109]
        __asm _emit 0x8A
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588071B1: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588071B3: jne 0x5880723a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588071B9: cmp word ptr [ebp + 0x110], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588071C1: jne 0x58807203
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x588071C3: cmp dword ptr [edi + 0x10c], 3
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588071CA: jae 0x58807247
        __asm _emit 0x73
        __asm _emit 0x7B
        // 0x588071CC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588071CE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588071D0: call 0x588d6cc0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xFA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588071D5: mov ecx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588071DB: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x588071DE: push edx
        __asm _emit 0x52
        // 0x588071DF: lea eax, [ebp + 0x278]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588071E5: push eax
        __asm _emit 0x50
        // 0x588071E6: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588071EC: movzx ecx, word ptr [esi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588071F3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588071F5: push ecx
        __asm _emit 0x51
        // 0x588071F6: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588071FC: call 0x5888e450
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58807201: jmp 0x58807247
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x58807203: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58807205: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58807207: call 0x588d6cc0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xFA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5880720C: mov edx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807212: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x58807215: push eax
        __asm _emit 0x50
        // 0x58807216: lea ecx, [ebp + 0x278]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880721C: push ecx
        __asm _emit 0x51
        // 0x5880721D: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58807223: movzx edx, word ptr [esi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880722A: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807230: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807232: push edx
        __asm _emit 0x52
        // 0x58807233: call 0x5888e450
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58807238: jmp 0x58807247
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x5880723A: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5880723C: jne 0x58807247
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5880723E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58807240: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58807242: call 0x588d6d10
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xFA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58807247: mov ecx, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880724D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5880724F: mov edx, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58807252: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58807254: cmp word ptr [ebp + 0x1b6], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5880725C: jne 0x58807265
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5880725E: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58807260: call 0x58805ba0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807265: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880726B: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5880726E: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58807271: cmp cl, 8
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x58807274: jne 0x5880727c
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58807276: inc dword ptr [ebp + 0x2f0]
        __asm _emit 0xFF
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880727C: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807282: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58807286: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x5880728A: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x5880728E: je 0x5880729a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58807290: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58807294: jne 0x58807353
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880729A: inc dword ptr [ebp + 0x2f4]
        __asm _emit 0xFF
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588072A0: pop edi
        __asm _emit 0x5F
        // 0x588072A1: pop esi
        __asm _emit 0x5E
        // 0x588072A2: pop ebp
        __asm _emit 0x5D
        // 0x588072A3: pop ebx
        __asm _emit 0x5B
        // 0x588072A4: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588072A8: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588072AA: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x588072AF: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x44
        // 0x588072B2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588072B5: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588072B8: lea ecx, [esi + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC6
        // 0x588072BB: push ecx
        __asm _emit 0x51
        // 0x588072BC: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588072C2: push esi
        __asm _emit 0x56
        // 0x588072C3: push edi
        __asm _emit 0x57
        // 0x588072C4: call 0x587af1f0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x7F
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x588072C9: movzx edx, byte ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588072CD: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588072D3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588072D5: push edx
        __asm _emit 0x52
        // 0x588072D6: call 0x588a6410
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xF1
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588072DB: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588072E0: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x588072E3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588072E5: je 0x58807353
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x588072E7: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588072ED: lea ebx, [edi + 6]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x06
        // 0x588072F0: lea ecx, [esi + 0x356]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588072F6: push ecx
        __asm _emit 0x51
        // 0x588072F7: push ebx
        __asm _emit 0x53
        // 0x588072F8: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588072FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588072FC: je 0x5880731a
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588072FE: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58807301: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58807303: jne 0x588072f0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58807305: pop edi
        __asm _emit 0x5F
        // 0x58807306: pop esi
        __asm _emit 0x5E
        // 0x58807307: pop ebp
        __asm _emit 0x5D
        // 0x58807308: pop ebx
        __asm _emit 0x5B
        // 0x58807309: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5880730D: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5880730F: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58807314: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x44
        // 0x58807317: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5880731A: mov edx, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x68
        // 0x5880731D: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807323: push edx
        __asm _emit 0x52
        // 0x58807324: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x17
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58807329: mov ecx, dword ptr [esi + 0x1304]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880732F: add eax, 0x33c
        __asm _emit 0x05
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807334: push eax
        __asm _emit 0x50
        // 0x58807335: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xA9
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5880733A: mov eax, dword ptr [esi + 0x1300]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807340: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807345: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58807349: mov esi, dword ptr [esi + 0x1304]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x04
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880734F: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58807353: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58807357: pop edi
        __asm _emit 0x5F
        // 0x58807358: pop esi
        __asm _emit 0x5E
        // 0x58807359: pop ebp
        __asm _emit 0x5D
        // 0x5880735A: pop ebx
        __asm _emit 0x5B
        // 0x5880735B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5880735D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58807362: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x44
        // 0x58807365: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
