// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58807910 .. +0x42E bytes.
// Source symbol alias: FUN_58807910.
extern "C" __declspec(naked) void FUN_58807910() {
    __asm {
        // 0x58807910: push ebp
        __asm _emit 0x55
        // 0x58807911: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58807913: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58807916: sub esp, 0x124
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880791C: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58807921: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58807923: mov dword ptr [esp + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880792A: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5880792D: push ebx
        __asm _emit 0x53
        // 0x5880792E: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58807930: test byte ptr [ebx + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58807937: push esi
        __asm _emit 0x56
        // 0x58807938: push edi
        __asm _emit 0x57
        // 0x58807939: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880793D: mov byte ptr [esp + 0xf], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58807942: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58807946: je 0x58807966
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58807948: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5880794B: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5880794D: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58807951: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58807954: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58807958: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5880795B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880795E: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58807962: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58807966: cmp dword ptr [ebp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5880796A: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807972: jle 0x58807aa8
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807978: jmp 0x58807984
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x5880797A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807980: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58807984: movzx ecx, word ptr [edx + 0x10a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8A
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880798B: lea eax, [edx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x44
        // 0x5880798E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58807990: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58807994: mov ecx, 0x2e
        __asm _emit 0xB9
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807999: lea edi, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5880799D: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5880799F: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588079A1: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x588079A3: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588079A6: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588079A9: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588079AB: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588079AD: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588079AF: cmp dword ptr [esp + 0x18], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588079B3: je 0x58807a21
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x588079B5: mov ecx, dword ptr [0x58a284c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588079BB: mov esi, dword ptr [0x5898c3cc]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xCC
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588079C1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588079C3: push 0x5898ce74
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588079C8: push 0x5899d498
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xD4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588079CD: push ecx
        __asm _emit 0x51
        // 0x588079CE: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588079D0: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588079D4: lea edx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588079D8: push edx
        __asm _emit 0x52
        // 0x588079D9: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x588079DC: push eax
        __asm _emit 0x50
        // 0x588079DD: lea ecx, [esp + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588079E4: push 0x5899d478
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xD4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588079E9: push ecx
        __asm _emit 0x51
        // 0x588079EA: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588079F0: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588079F5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588079F8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588079FA: push 0x5898ce74
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588079FF: lea edx, [esp + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807A06: push edx
        __asm _emit 0x52
        // 0x58807A07: push eax
        __asm _emit 0x50
        // 0x58807A08: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58807A0A: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807A10: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58807A15: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58807A17: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58807A1D: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58807A21: test byte ptr [ebx + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58807A28: je 0x58807a59
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x58807A2A: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58807A2E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58807A30: and esi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE6
        __asm _emit 0x1F
        // 0x58807A33: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807A38: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58807A3A: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807A3F: shl esi, cl
        __asm _emit 0xD3
        __asm _emit 0xE6
        // 0x58807A41: shr eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x58807A44: test dword ptr [esp + eax*4 + 0x20], esi
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x84
        __asm _emit 0x20
        // 0x58807A48: je 0x58807a4e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58807A4A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58807A4C: jmp 0x58807a5b
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58807A4E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807A50: lea eax, [edx + 0x114]
        __asm _emit 0x8D
        __asm _emit 0x82
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807A56: push eax
        __asm _emit 0x50
        // 0x58807A57: jmp 0x58807a62
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58807A59: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807A5B: lea ecx, [edx + 0x114]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807A61: push ecx
        __asm _emit 0x51
        // 0x58807A62: push edx
        __asm _emit 0x52
        // 0x58807A63: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807A65: call 0x58806f60
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807A6A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58807A6E: mov dl, byte ptr [eax + 0x109]
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807A74: movzx ecx, byte ptr [eax + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807A7B: mov byte ptr [esp + 0xf], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58807A7F: movzx edx, word ptr [eax + 0x10a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807A86: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58807A88: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x58807A8B: lea eax, [edx + ecx + 0x114]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807A92: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58807A96: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58807A9A: inc eax
        __asm _emit 0x40
        // 0x58807A9B: cmp eax, dword ptr [ebp + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58807A9E: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58807AA2: jl 0x58807980
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xD8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807AA8: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807AAD: mov esi, 8
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807AB2: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807AB8: jle 0x58807ace
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58807ABA: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807AC1: je 0x58807ace
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58807AC3: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807AC9: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x20
        // 0x58807ACC: jmp 0x58807ad0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58807ACE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58807AD0: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807AD6: push edx
        __asm _emit 0x52
        // 0x58807AD7: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xFE
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58807ADC: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807AE1: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807AE7: jle 0x58807afd
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58807AE9: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807AF0: je 0x58807afd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58807AF2: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807AF8: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x58807AFB: jmp 0x58807aff
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58807AFD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58807AFF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58807B01: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58807B04: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807B06: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58807B08: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807B0D: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58807B10: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58807B13: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807B19: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58807B1C: mov ecx, dword ptr [eax + 0x1018]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807B22: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807B27: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807B2C: cmp dword ptr [ecx + 0x28], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x28
        // 0x58807B2F: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x58807B32: mov byte ptr [eax + 0x74], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x74
        // 0x58807B35: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807B3B: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58807B3E: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807B43: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58807B49: push edx
        __asm _emit 0x52
        // 0x58807B4A: call 0x587a6220
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xE6
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58807B4F: cmp dword ptr [ebx + 0x114], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807B56: jne 0x58807b6d
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58807B58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807B5E: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58807B61: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58807B66: call 0x588da150
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x25
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58807B6B: jmp 0x58807b8d
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x58807B6D: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807B73: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58807B76: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807B7B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58807B7F: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807B85: push esi
        __asm _emit 0x56
        // 0x58807B86: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807B88: call 0x588a6410
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58807B8D: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807B92: cmp word ptr [ebx + 0x1b6], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xBB
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807B99: jne 0x58807ba2
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58807B9B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807B9D: call 0x58805ba0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807BA2: mov eax, dword ptr [ebx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807BA8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58807BAA: sub edx, 0x96
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807BB0: mov dword ptr [ebx + 0xe8], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807BB6: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58807BB9: sub eax, 0x12c
        __asm _emit 0x2D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807BBE: mov dword ptr [ebx + 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807BC4: mov dword ptr [ebx + 0x68], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58807BCB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58807BCD: mov dword ptr [ebx + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807BD3: mov dword ptr [ebx + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807BD9: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807BDF: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58807BE2: movzx eax, byte ptr [edx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807BE9: mov dword ptr [ebx + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807BEF: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807BF5: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58807BF8: movzx eax, word ptr [edx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807BFF: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807C05: push eax
        __asm _emit 0x50
        // 0x58807C06: call 0x58857020
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58807C0B: mov ecx, dword ptr [0x58a245c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807C11: call 0x58813f10
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807C16: cmp dword ptr [ebx + 0x114], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807C1D: jne 0x58807d1f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807C23: mov al, byte ptr [esp + 0xf]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58807C27: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58807C29: jne 0x58807cb5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807C2F: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58807C33: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58807C35: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58807C37: je 0x58807c3f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58807C39: mov eax, dword ptr [ecx + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807C3F: cmp word ptr [ebx + 0x110], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807C47: jne 0x58807c94
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x58807C49: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807C4F: movzx ecx, word ptr [ecx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807C56: cmp cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x07
        // 0x58807C5A: je 0x58807c62
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58807C5C: cmp cx, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0C
        // 0x58807C60: jne 0x58807c94
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58807C62: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58807C64: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58807C67: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x58807C6A: or dword ptr [ebx + 0x78], 1
        __asm _emit 0x83
        __asm _emit 0x4B
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x58807C6E: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807C74: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58807C77: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58807C79: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58807C7B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58807C7D: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x58807C80: push eax
        __asm _emit 0x50
        // 0x58807C81: call 0x588d6cc0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xF0
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58807C86: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807C8C: push esi
        __asm _emit 0x56
        // 0x58807C8D: call 0x588a6720
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xEA
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58807C92: jmp 0x58807cd7
        __asm _emit 0xEB
        __asm _emit 0x43
        // 0x58807C94: or dword ptr [ebx + 0x78], esi
        __asm _emit 0x09
        __asm _emit 0x73
        __asm _emit 0x78
        // 0x58807C97: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807C9D: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58807CA0: push esi
        __asm _emit 0x56
        // 0x58807CA1: call 0x588d6cc0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xF0
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58807CA6: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807CAC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807CAE: call 0x588a6720
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xEA
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58807CB3: jmp 0x58807cd7
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x58807CB5: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58807CB7: jne 0x58807ceb
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58807CB9: or dword ptr [ebx + 0x78], edi
        __asm _emit 0x09
        __asm _emit 0x7B
        __asm _emit 0x78
        // 0x58807CBC: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807CC1: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58807CC4: push esi
        __asm _emit 0x56
        // 0x58807CC5: call 0x588d6d10
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xF0
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58807CCA: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807CD0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807CD2: call 0x588a69f0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xED
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58807CD7: mov eax, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807CDD: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58807CE1: mov dword ptr [ebx + 0x300], 0x190
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807CEB: test byte ptr [esp + 0xf], 4
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0F
        __asm _emit 0x04
        // 0x58807CF0: je 0x58807d1f
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x58807CF2: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807CF8: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58807CFB: movzx edx, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807D02: movzx eax, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807D09: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58807D0B: push edx
        __asm _emit 0x52
        // 0x58807D0C: push eax
        __asm _emit 0x50
        // 0x58807D0D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807D0F: call 0x588059b0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807D14: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807D1A: call 0x588a9240
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x15
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58807D1F: mov ecx, dword ptr [ebx + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807D25: push ecx
        __asm _emit 0x51
        // 0x58807D26: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807D28: call 0x58805dc0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807D2D: mov ecx, dword ptr [esp + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807D34: pop edi
        __asm _emit 0x5F
        // 0x58807D35: pop esi
        __asm _emit 0x5E
        // 0x58807D36: pop ebx
        __asm _emit 0x5B
        // 0x58807D37: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58807D39: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x4E
        __asm _emit 0x17
        __asm _emit 0x00
    }
}
