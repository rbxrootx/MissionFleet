// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1793 bytes in 4 exact ranges.
// Source symbol alias: FUN_58834c00.

// Ghidra body range 0x58834C00..0x58834ECD; 717 mapped bytes.
extern "C" __declspec(naked) void FUN_58834c00_segment_00() {
    __asm {
        // 0x58834C00: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58834C02: push 0x589841a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x41
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58834C07: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834C0D: push eax
        __asm _emit 0x50
        // 0x58834C0E: push ecx
        __asm _emit 0x51
        // 0x58834C0F: push ebx
        __asm _emit 0x53
        // 0x58834C10: push ebp
        __asm _emit 0x55
        // 0x58834C11: push esi
        __asm _emit 0x56
        // 0x58834C12: push edi
        __asm _emit 0x57
        // 0x58834C13: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58834C18: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58834C1A: push eax
        __asm _emit 0x50
        // 0x58834C1B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58834C1F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834C25: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58834C27: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58834C2B: mov dword ptr [esi], 0x5899e1d4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD4
        __asm _emit 0xE1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58834C31: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834C36: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58834C3A: lea edi, [esi + 0x94]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834C40: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58834C42: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834C44: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834C46: je 0x58834c52
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58834C48: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834C4A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834C4C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834C4E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834C50: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58834C52: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834C55: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834C58: jne 0x58834c42
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58834C5A: lea edi, [esi + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834C60: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834C65: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834C67: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834C69: je 0x58834c75
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58834C6B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834C6D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834C6F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834C71: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834C73: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58834C75: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834C78: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834C7B: jne 0x58834c65
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58834C7D: lea edi, [esi + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834C83: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834C88: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834C8A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834C8C: je 0x58834c98
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58834C8E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834C90: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834C92: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834C94: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834C96: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58834C98: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834C9B: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834C9E: jne 0x58834c88
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58834CA0: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834CA6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834CA8: je 0x58834cb8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834CAA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834CAC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834CAE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834CB0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834CB2: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834CB8: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834CBE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834CC0: je 0x58834cd0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834CC2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834CC4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834CC6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834CC8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834CCA: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834CD0: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834CD6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834CD8: je 0x58834ce8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834CDA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834CDC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834CDE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834CE0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834CE2: mov dword ptr [esi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834CE8: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834CEE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834CF0: je 0x58834d00
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834CF2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834CF4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834CF6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834CF8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834CFA: mov dword ptr [esi + 0xc4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D00: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D06: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834D08: je 0x58834d18
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834D0A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834D0C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834D0E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834D10: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834D12: mov dword ptr [esi + 0xc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D18: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D1E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834D20: je 0x58834d30
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834D22: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834D24: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834D26: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834D28: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834D2A: mov dword ptr [esi + 0xcc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D30: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D36: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834D38: je 0x58834d48
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834D3A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834D3C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834D3E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834D40: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834D42: mov dword ptr [esi + 0xd0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D48: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D4E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834D50: je 0x58834d60
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834D52: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834D54: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834D56: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834D58: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834D5A: mov dword ptr [esi + 0xd4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D60: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D66: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834D68: je 0x58834d78
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834D6A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834D6C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834D6E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834D70: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834D72: mov dword ptr [esi + 0xe0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D78: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D7E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834D80: je 0x58834d90
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834D82: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834D84: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834D86: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834D88: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834D8A: mov dword ptr [esi + 0xd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D90: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834D96: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834D98: je 0x58834da8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834D9A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834D9C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834D9E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834DA0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834DA2: mov dword ptr [esi + 0xe4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834DA8: lea edi, [esi + 0x110]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834DAE: mov ebp, 0xa
        __asm _emit 0xBD
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834DB3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834DB5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834DB7: je 0x58834dc3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58834DB9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834DBB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834DBD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834DBF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834DC1: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58834DC3: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834DC6: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834DC9: jne 0x58834db3
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58834DCB: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834DD1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834DD3: je 0x58834de3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834DD5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834DD7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834DD9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834DDB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834DDD: mov dword ptr [esi + 0x138], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834DE3: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834DE9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834DEB: je 0x58834dfb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834DED: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834DEF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834DF1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834DF3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834DF5: mov dword ptr [esi + 0x13c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834DFB: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E01: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834E03: je 0x58834e13
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834E05: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834E07: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834E09: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834E0B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834E0D: mov dword ptr [esi + 0x214], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E13: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E19: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834E1B: je 0x58834e2b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834E1D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834E1F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834E21: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834E23: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834E25: mov dword ptr [esi + 0x144], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E2B: lea edi, [esi + 0x148]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E31: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E36: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834E38: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58834E3A: je 0x58834e46
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58834E3C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834E3E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834E40: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834E42: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834E44: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58834E46: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834E49: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834E4C: jne 0x58834e36
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58834E4E: lea edi, [esi + 0x150]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E54: lea ebx, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x05
        // 0x58834E57: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E5C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58834E60: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834E62: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834E64: je 0x58834e74
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834E66: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834E68: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834E6A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834E6C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834E6E: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E74: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834E77: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834E7A: jne 0x58834e60
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58834E7C: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58834E7F: jne 0x58834e57
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x58834E81: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E87: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834E89: je 0x58834e99
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834E8B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834E8D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834E8F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834E91: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834E93: mov dword ptr [esi + 0x178], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E99: lea edi, [esi + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834E9F: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834EA4: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834EA6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834EA8: je 0x58834eb8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834EAA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834EAC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834EAE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834EB0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834EB2: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834EB8: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834EBB: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834EBE: jne 0x58834ea4
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58834EC0: lea edi, [esi + 0x1bc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834EC6: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834ECB: jmp 0x58834ed0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58834ED0..0x58834FDA; 266 mapped bytes.
extern "C" __declspec(naked) void FUN_58834c00_segment_01() {
    __asm {
        // 0x58834ED0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834ED2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834ED4: je 0x58834ee4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834ED6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834ED8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834EDA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834EDC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834EDE: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834EE4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834EE7: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834EEA: jne 0x58834ed0
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58834EEC: lea edi, [esi + 0x1f4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834EF2: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834EF7: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834EF9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834EFB: je 0x58834f0b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834EFD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834EFF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834F01: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834F03: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834F05: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F0B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834F0E: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834F11: jne 0x58834ef7
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58834F13: lea edi, [esi + 0x1fc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F19: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F1E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58834F20: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834F22: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834F24: je 0x58834f34
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834F26: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834F28: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834F2A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834F2C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834F2E: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F34: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834F37: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834F3A: jne 0x58834f20
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58834F3C: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F42: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834F44: je 0x58834f54
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834F46: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834F48: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834F4A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834F4C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834F4E: mov dword ptr [esi + 0x204], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F54: mov ecx, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F5A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834F5C: je 0x58834f70
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58834F5E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834F60: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834F62: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834F64: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834F66: mov dword ptr [esi + 0x208], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F70: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F76: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834F78: je 0x58834f8c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58834F7A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834F7C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834F7E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834F80: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834F82: mov dword ptr [esi + 0x20c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F8C: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834F92: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834F94: je 0x58834fa8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58834F96: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834F98: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834F9A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834F9C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834F9E: mov dword ptr [esi + 0x210], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834FA8: lea edi, [esi + 0x218]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834FAE: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834FB3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834FB5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834FB7: je 0x58834fc7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834FB9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834FBB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834FBD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834FBF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834FC1: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834FC7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834FCA: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834FCD: jne 0x58834fb3
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58834FCF: lea edi, [esi + 0x224]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834FD5: lea ebx, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x05
        // 0x58834FD8: jmp 0x58834fe0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58834FE0..0x588352EA; 778 mapped bytes.
extern "C" __declspec(naked) void FUN_58834c00_segment_02() {
    __asm {
        // 0x58834FE0: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834FE5: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58834FE7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58834FE9: je 0x58834ff9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58834FEB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58834FED: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58834FEF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58834FF1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58834FF3: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834FF9: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58834FFC: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58834FFF: jne 0x58834fe5
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58835001: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58835004: jne 0x58834fe0
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x58835006: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883500C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883500E: je 0x5883501e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58835010: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58835012: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835014: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58835016: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58835018: mov dword ptr [esi + 0x24c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883501E: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835024: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58835026: je 0x5883503a
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835028: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883502A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883502C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883502E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58835030: mov dword ptr [esi + 0x250], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883503A: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835040: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58835042: je 0x58835056
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835044: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58835046: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835048: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883504A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883504C: mov dword ptr [esi + 0x254], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835056: mov ecx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883505C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883505E: je 0x58835072
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835060: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58835062: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835064: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58835066: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58835068: mov dword ptr [esi + 0x27c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835072: mov ecx, dword ptr [esi + 0x280]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835078: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883507A: je 0x5883508e
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883507C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883507E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835080: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58835082: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58835084: mov dword ptr [esi + 0x280], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883508E: mov ecx, dword ptr [esi + 0x284]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835094: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58835096: je 0x588350aa
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835098: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883509A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883509C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883509E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588350A0: mov dword ptr [esi + 0x284], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588350AA: mov ecx, dword ptr [esi + 0x288]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588350B0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588350B2: je 0x588350c6
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588350B4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588350B6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588350B8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588350BA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588350BC: mov dword ptr [esi + 0x288], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588350C6: mov ecx, dword ptr [esi + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588350CC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588350CE: je 0x588350e2
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588350D0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588350D2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588350D4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588350D6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588350D8: mov dword ptr [esi + 0x294], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588350E2: mov ecx, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588350E8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588350EA: je 0x588350fe
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588350EC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588350EE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588350F0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588350F2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588350F4: mov dword ptr [esi + 0x298], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588350FE: mov ecx, dword ptr [esi + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835104: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58835106: je 0x5883511a
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835108: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883510A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883510C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883510E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58835110: mov dword ptr [esi + 0x29c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883511A: mov ecx, dword ptr [esi + 0x2a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835120: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58835122: je 0x58835136
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835124: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58835126: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835128: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883512A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883512C: mov dword ptr [esi + 0x2a8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835136: mov ecx, dword ptr [esi + 0x2ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883513C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883513E: je 0x58835152
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835140: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58835142: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835144: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58835146: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58835148: mov dword ptr [esi + 0x2ac], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835152: mov ecx, dword ptr [esi + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835158: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883515A: je 0x5883516e
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5883515C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883515E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835160: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58835162: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58835164: mov dword ptr [esi + 0x2b0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883516E: mov ecx, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835174: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58835176: je 0x5883518a
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835178: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883517A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883517C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883517E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58835180: mov dword ptr [esi + 0x2b4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883518A: mov ecx, dword ptr [esi + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835190: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58835192: je 0x588351a6
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835194: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58835196: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835198: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883519A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883519C: mov dword ptr [esi + 0x2b8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588351A6: mov ecx, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588351AC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588351AE: je 0x588351c2
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588351B0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588351B2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588351B4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588351B6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588351B8: mov dword ptr [esi + 0x2bc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588351C2: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588351C8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588351CA: je 0x588351de
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588351CC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588351CE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588351D0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588351D2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588351D4: mov dword ptr [esi + 0x2c0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588351DE: mov ecx, dword ptr [esi + 0x2c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588351E4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588351E6: je 0x588351fa
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588351E8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588351EA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588351EC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588351EE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588351F0: mov dword ptr [esi + 0x2c4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588351FA: mov ecx, dword ptr [esi + 0x2c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835200: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58835202: je 0x58835216
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835204: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58835206: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835208: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883520A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883520C: mov dword ptr [esi + 0x2c8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835216: mov ecx, dword ptr [esi + 0x2cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883521C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883521E: je 0x58835232
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58835220: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58835222: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835224: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58835226: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58835228: mov dword ptr [esi + 0x2cc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835232: lea edi, [esi + 0x2d0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835238: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883523D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58835240: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58835242: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58835244: je 0x58835254
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58835246: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58835248: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883524A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883524C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883524E: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835254: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58835257: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5883525A: jne 0x58835240
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5883525C: lea edi, [esi + 0x2e4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835262: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835267: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58835269: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883526B: je 0x5883527b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883526D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883526F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58835271: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58835273: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58835275: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883527B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5883527E: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58835281: jne 0x58835267
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58835283: lea edi, [esi + 0x2f8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835289: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883528E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58835290: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58835292: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58835294: je 0x588352a4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58835296: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58835298: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883529A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883529C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883529E: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588352A4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588352A7: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588352AA: jne 0x58835290
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x588352AC: lea edi, [esi + 0x30c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588352B2: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588352B7: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588352B9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588352BB: je 0x588352cb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588352BD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588352BF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588352C1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588352C3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588352C5: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588352CB: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588352CE: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588352D1: jne 0x588352b7
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x588352D3: mov byte ptr [esi + 0x321], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588352DA: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588352E0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588352E2: je 0x588352ed
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588352E4: push eax
        __asm _emit 0x50
        // 0x588352E5: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x79
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588352ED..0x5883530D; 32 mapped bytes.
extern "C" __declspec(naked) void FUN_58834c00_segment_03() {
    __asm {
        // 0x588352ED: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588352F3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588352F5: push eax
        __asm _emit 0x50
        // 0x588352F6: mov dword ptr [esi + 0x264], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588352FC: mov dword ptr [esi + 0x268], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835302: mov dword ptr [esi + 0x26c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835308: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x79
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
