// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 909 bytes in 1 exact ranges.
// Source symbol alias: FUN_5873c790.

// Ghidra body range 0x5873C790..0x5873CB1D; 909 mapped bytes.
extern "C" __declspec(naked) void FUN_5873c790_segment_00() {
    __asm {
        // 0x5873C790: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5873C792: push 0x5897dd0e
        __asm _emit 0x68
        __asm _emit 0x0E
        __asm _emit 0xDD
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5873C797: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C79D: push eax
        __asm _emit 0x50
        // 0x5873C79E: sub esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C7A4: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873C7A9: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873C7AB: mov dword ptr [esp + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C7B2: push ebp
        __asm _emit 0x55
        // 0x5873C7B3: push esi
        __asm _emit 0x56
        // 0x5873C7B4: push edi
        __asm _emit 0x57
        // 0x5873C7B5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873C7BA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873C7BC: push eax
        __asm _emit 0x50
        // 0x5873C7BD: lea eax, [esp + 0x118]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C7C4: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C7CA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873C7CC: cmp dword ptr [esi + 0x460], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C7D3: je 0x5873c7dc
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5873C7D5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873C7D7: jmp 0x5873caf4
        __asm _emit 0xE9
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C7DC: movzx ecx, word ptr [esi + 0x2da]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xDA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C7E3: mov eax, dword ptr [esp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C7EA: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5873C7EC: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C7F1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873C7F3: jle 0x5873c7f8
        __asm _emit 0x7E
        __asm _emit 0x03
        // 0x5873C7F5: lea edi, [eax + eax]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x00
        // 0x5873C7F8: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C7FE: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873C804: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873C80A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873C80C: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C812: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C817: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x5873C81A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873C81C: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x5873C81E: movzx eax, word ptr [esi + 0x2dc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C825: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x5873C828: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x5873C82A: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x5873C82C: jl 0x5873ca18
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xE6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C832: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873C834: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873C836: call 0x5873c2e0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C83B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873C83D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873C83F: cmp dword ptr [esi + 0x348], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C845: mov word ptr [esi + 0x2dc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C84C: mov dword ptr [esi + 0x460], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C856: mov dword ptr [esi + 0x31c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C85C: mov dword ptr [esi + 0x4c8], 0xa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C866: mov dword ptr [esi + 0x324], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C86C: jl 0x5873c878
        __asm _emit 0x7C
        __asm _emit 0x0A
        // 0x5873C86E: mov dword ptr [esi + 0x348], 0xffffff6a
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C878: mov eax, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C87E: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5873C883: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5873C885: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x03
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873C88A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873C88D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873C891: mov dword ptr [esp + 0x120], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C898: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5873C89A: je 0x5873c8e7
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5873C89C: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C8A2: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x5873C8A9: jle 0x5873c8c1
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5873C8AB: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C8B1: je 0x5873c8c1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873C8B3: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C8B9: add edx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C8BF: jmp 0x5873c8c3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873C8C1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873C8C3: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C8C9: mov edi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873C8CF: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5873C8D2: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C8D7: push ecx
        __asm _emit 0x51
        // 0x5873C8D8: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873C8DB: push ecx
        __asm _emit 0x51
        // 0x5873C8DC: push edx
        __asm _emit 0x52
        // 0x5873C8DD: push edi
        __asm _emit 0x57
        // 0x5873C8DE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873C8E0: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xB3
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873C8E5: jmp 0x5873c8e9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873C8E7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873C8E9: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C8EE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873C8F0: mov dword ptr [esp + 0x124], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C8FB: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x64
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873C900: mov ecx, dword ptr [esi + 0x520]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C906: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873C908: je 0x5873c911
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5873C90A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873C90C: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5873C90F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873C911: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5873C914: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873C916: je 0x5873c97e
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x5873C918: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C91E: movzx eax, word ptr [edx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C925: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5873C929: je 0x5873c97e
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x5873C92B: cmp ax, 0x13
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x13
        // 0x5873C92F: je 0x5873c97e
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5873C931: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C937: movzx eax, word ptr [edx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873C93E: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5873C942: je 0x5873c97e
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5873C944: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5873C948: je 0x5873c97e
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5873C94A: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5873C94E: je 0x5873c97e
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5873C950: cmp byte ptr [0x58a2485f], 0
        __asm _emit 0x80
        __asm _emit 0x3D
        __asm _emit 0x5F
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5873C957: jne 0x5873c97e
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x5873C959: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C960: cmp dword ptr [esp + 0x12c], eax
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C967: je 0x5873c97e
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5873C969: cmp word ptr [edx + 0x105a4], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5873C971: je 0x5873c97e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873C973: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x5873C976: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873C978: push edx
        __asm _emit 0x52
        // 0x5873C979: call 0x588dc380
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xFA
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873C97E: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C983: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C98A: jne 0x5873ca21
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C990: cmp dword ptr [esi + 0x78], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x78
        __asm _emit 0x00
        // 0x5873C994: jne 0x5873ca21
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C99A: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5873C99D: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C9A3: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5873C9A6: jne 0x5873ca21
        __asm _emit 0x75
        __asm _emit 0x79
        // 0x5873C9A8: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C9AD: mov edi, 0x23
        __asm _emit 0xBF
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C9B2: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C9B8: jle 0x5873c9d1
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5873C9BA: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C9C1: je 0x5873c9d1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873C9C3: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C9C9: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C9CF: jmp 0x5873c9d3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873C9D1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873C9D3: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C9D9: push edx
        __asm _emit 0x52
        // 0x5873C9DA: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xAF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873C9DF: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C9E4: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C9EA: jle 0x5873ca0c
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5873C9EC: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C9F3: je 0x5873ca0c
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5873C9F5: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C9FB: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA01: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873CA03: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873CA06: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873CA08: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873CA0A: jmp 0x5873ca21
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5873CA0C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873CA0E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873CA10: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873CA13: push ecx
        __asm _emit 0x51
        // 0x5873CA14: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873CA16: jmp 0x5873ca21
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5873CA18: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5873CA1A: mov word ptr [esi + 0x2dc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA21: mov ecx, dword ptr [esi + 0x4d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA27: cmp ecx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA2D: jae 0x5873ca48
        __asm _emit 0x73
        __asm _emit 0x19
        // 0x5873CA2F: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873CA34: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x5873CA36: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873CA39: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873CA3B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873CA3E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873CA40: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5873CA42: mov dword ptr [esi + 0x4d4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA48: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5873CA4F: je 0x5873caee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA55: mov ecx, dword ptr [esi + 0x4d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA5B: movzx eax, word ptr [esi + 0x2dc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA62: mov edx, dword ptr [esp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA69: push ecx
        __asm _emit 0x51
        // 0x5873CA6A: movzx ecx, word ptr [esi + 0x2da]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xDA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA71: push edx
        __asm _emit 0x52
        // 0x5873CA72: mov edx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA78: push eax
        __asm _emit 0x50
        // 0x5873CA79: mov eax, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA7F: push ecx
        __asm _emit 0x51
        // 0x5873CA80: mov ecx, dword ptr [esi + 0x4ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CA86: push edx
        __asm _emit 0x52
        // 0x5873CA87: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5873CA8A: push eax
        __asm _emit 0x50
        // 0x5873CA8B: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873CA8E: push ecx
        __asm _emit 0x51
        // 0x5873CA8F: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5873CA92: push edx
        __asm _emit 0x52
        // 0x5873CA93: mov edx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x5873CA96: push eax
        __asm _emit 0x50
        // 0x5873CA97: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873CA9A: add ecx, 0x3a0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CAA0: push ecx
        __asm _emit 0x51
        // 0x5873CAA1: push edx
        __asm _emit 0x52
        // 0x5873CAA2: push eax
        __asm _emit 0x50
        // 0x5873CAA3: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873CAA8: mov ecx, dword ptr [eax + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873CAAE: mov edx, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873CAB4: push ecx
        __asm _emit 0x51
        // 0x5873CAB5: push edx
        __asm _emit 0x52
        // 0x5873CAB6: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5873CABA: push 0x5898cbb8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873CABF: push eax
        __asm _emit 0x50
        // 0x5873CAC0: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873CAC6: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x5873CAC9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873CACB: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873CACF: push ecx
        __asm _emit 0x51
        // 0x5873CAD0: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873CAD4: push edx
        __asm _emit 0x52
        // 0x5873CAD5: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873CADB: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873CAE1: push eax
        __asm _emit 0x50
        // 0x5873CAE2: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873CAE6: push eax
        __asm _emit 0x50
        // 0x5873CAE7: push ecx
        __asm _emit 0x51
        // 0x5873CAE8: call dword ptr [0x5898c1a0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873CAEE: mov eax, dword ptr [esi + 0x460]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CAF4: mov ecx, dword ptr [esp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CAFB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB02: pop ecx
        __asm _emit 0x59
        // 0x5873CB03: pop edi
        __asm _emit 0x5F
        // 0x5873CB04: pop esi
        __asm _emit 0x5E
        // 0x5873CB05: pop ebp
        __asm _emit 0x5D
        // 0x5873CB06: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB0D: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5873CB0F: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873CB14: add esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873CB1A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
