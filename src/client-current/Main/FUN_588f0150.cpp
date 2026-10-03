// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F0150 .. +0x2D4 bytes.
extern "C" __declspec(naked) void FUN_588f0150() {
    __asm {
        // 0x588F0150: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588F0153: push ebx
        __asm _emit 0x53
        // 0x588F0154: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588F0156: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F015C: push esi
        __asm _emit 0x56
        // 0x588F015D: mov esi, dword ptr [ebx + 0x3ec]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0163: push edi
        __asm _emit 0x57
        // 0x588F0164: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F016A: mov dword ptr [esp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F016E: sub esi, 8
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x08
        // 0x588F0171: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0176: add edi, -8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xF8
        // 0x588F0179: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F017B: jge 0x588f03c4
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0181: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0187: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F018C: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588F018E: jle 0x588f03c4
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0194: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F019A: push ebp
        __asm _emit 0x55
        // 0x588F019B: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F01A0: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F01A6: mov ebx, dword ptr [ecx + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x5C
        // 0x588F01A9: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588F01AB: call 0x589086f0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F01B0: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F01B4: add esi, 0x11c
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F01BA: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F01BF: nop
        __asm _emit 0x90
        // 0x588F01C0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588F01C2: call 0x589086f0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F01C7: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588F01CA: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588F01CD: jne 0x588f01c0
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588F01CF: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F01D3: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F01D9: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F01DE: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588F01E0: je 0x588f03c3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F01E6: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588F01E8: cmp dword ptr [edi + 0x3ec], ebp
        __asm _emit 0x39
        __asm _emit 0xAF
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F01EE: jle 0x588f038f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F01F4: neg ebx
        __asm _emit 0xF7
        __asm _emit 0xDB
        // 0x588F01F6: mov eax, 0xa0c
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F01FB: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588F01FD: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F0201: lea esi, [edi + 0x134]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0207: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F020B: jmp 0x588f0214
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x588F020D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588F0210: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F0214: mov ecx, dword ptr [esi - 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F021A: push ebx
        __asm _emit 0x53
        // 0x588F021B: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0220: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588F0222: push ebx
        __asm _emit 0x53
        // 0x588F0223: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0228: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F022E: push ebx
        __asm _emit 0x53
        // 0x588F022F: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0234: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F023A: push ebx
        __asm _emit 0x53
        // 0x588F023B: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0240: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0246: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F024B: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588F024E: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588F0250: jge 0x588f03f9
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xA3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0256: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F025C: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F0261: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588F0263: jl 0x588f03f9
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0269: mov eax, dword ptr [esi - 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F026F: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588F0274: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F027A: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0280: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0286: movzx ebx, word ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x588F028A: shr ebx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588F028D: and ebx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x1F
        // 0x588F0290: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588F0292: jge 0x588f02ed
        __asm _emit 0x7D
        __asm _emit 0x59
        // 0x588F0294: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F0298: lea edx, [ecx + esi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x31
        // 0x588F029B: mov ecx, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x588F029E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F02A0: je 0x588f02c5
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588F02A2: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x588F02A5: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x588F02A9: jne 0x588f02c5
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588F02AB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F02AD: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F02B2: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F02B6: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F02BC: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F02C0: jmp 0x588f037f
        __asm _emit 0xE9
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F02C5: mov eax, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x02
        // 0x588F02C8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F02CA: je 0x588f037f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F02D0: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588F02D3: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588F02D7: jne 0x588f037f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F02DD: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F02E3: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F02E8: jmp 0x588f037f
        __asm _emit 0xE9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F02ED: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F02EF: mov edi, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F02F5: movzx edi, word ptr [edi + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x7F
        __asm _emit 0x0C
        // 0x588F02F9: shr edi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x0A
        // 0x588F02FC: and edi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x1F
        // 0x588F02FF: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x588F0301: sub ebx, edi
        __asm _emit 0x2B
        __asm _emit 0xDF
        // 0x588F0303: cmp dword ptr [edx + ebx*4 + 0xbb0], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x9A
        __asm _emit 0xB0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F030B: je 0x588f0351
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x588F030D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F030F: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F0313: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0318: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F031C: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0322: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0328: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F032E: movzx eax, word ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588F0332: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x588F0335: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588F0338: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x588F033A: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588F033C: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0342: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588F0345: je 0x588f03ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F034B: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F034F: jmp 0x588f037f
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x588F0351: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588F0354: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588F0357: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x588F035A: jne 0x588f037b
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588F035C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F035E: mov edx, 0xffffffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F0363: add eax, 0xb40
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0368: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588F036B: je 0x588f036e
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x588F036D: inc edx
        __asm _emit 0x42
        // 0x588F036E: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588F0370: je 0x588f03cb
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x588F0372: inc ecx
        __asm _emit 0x41
        // 0x588F0373: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588F0376: cmp ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x588F0379: jl 0x588f0368
        __asm _emit 0x7C
        __asm _emit 0xED
        // 0x588F037B: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F037F: inc ebp
        __asm _emit 0x45
        // 0x588F0380: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588F0383: cmp ebp, dword ptr [edi + 0x3ec]
        __asm _emit 0x3B
        __asm _emit 0xAF
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0389: jl 0x588f0210
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F038F: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0395: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F039A: mov esi, dword ptr [edi + 0x3ec]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F03A0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F03A2: mov eax, 0x46
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F03A7: cdq
        __asm _emit 0x99
        // 0x588F03A8: sub esi, 8
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x08
        // 0x588F03AB: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x588F03AD: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x588F03B0: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588F03B3: lea eax, [ecx + edx + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x48
        // 0x588F03B7: mov ecx, dword ptr [edi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F03BD: push eax
        __asm _emit 0x50
        // 0x588F03BE: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F03C3: pop ebp
        __asm _emit 0x5D
        // 0x588F03C4: pop edi
        __asm _emit 0x5F
        // 0x588F03C5: pop esi
        __asm _emit 0x5E
        // 0x588F03C6: pop ebx
        __asm _emit 0x5B
        // 0x588F03C7: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F03CA: ret
        __asm _emit 0xC3
        // 0x588F03CB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F03CD: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F03D1: mov edx, 0xf
        __asm _emit 0xBA
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F03D6: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F03DA: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F03E0: add ecx, -0x1c
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE4
        // 0x588F03E3: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588F03E6: je 0x588f03ee
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588F03E8: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F03EC: jmp 0x588f037f
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x588F03EE: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F03F3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F03F7: jmp 0x588f037f
        __asm _emit 0xEB
        __asm _emit 0x86
        // 0x588F03F9: mov eax, dword ptr [esi - 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F03FF: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0404: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F0408: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F040A: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F040C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F0410: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0416: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F041A: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0420: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // Ghidra's 726-byte extent includes these two mapped terminal bytes.
        // Capstone does not decode FF FF as a valid x86 instruction; retain
        // the original bytes for exact extent matching and record uncertainty.
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
