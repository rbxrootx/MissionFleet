// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1681 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bedc0.

// Ghidra body range 0x588BEDC0..0x588BF451; 1681 mapped bytes.
extern "C" __declspec(naked) void FUN_588bedc0_segment_00() {
    __asm {
        // 0x588BEDC0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588BEDC3: push ebx
        __asm _emit 0x53
        // 0x588BEDC4: push ebp
        __asm _emit 0x55
        // 0x588BEDC5: push esi
        __asm _emit 0x56
        // 0x588BEDC6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588BEDC8: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588BEDCC: push edi
        __asm _emit 0x57
        // 0x588BEDCD: mov dword ptr [esi + 0x140], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEDD3: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588BEDD8: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588BEDDC: mov dword ptr [esi + 0x144], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEDE2: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEDE8: mov ecx, dword ptr [eax + 0xcc8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEDEE: mov edx, dword ptr [eax + 0xcd4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEDF4: mov edi, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEDFA: mov ebx, dword ptr [eax + 0xccc]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE00: mov ebp, dword ptr [eax + 0xcd0]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE06: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588BEE0A: mov ecx, dword ptr [eax + 0xcdc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE10: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588BEE14: mov edx, dword ptr [eax + 0xcd8]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE1A: movzx eax, word ptr [edi + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x588BEE1E: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588BEE22: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588BEE25: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE2B: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588BEE2F: jle 0x588bee46
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x588BEE31: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BEE33: jl 0x588bee46
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x588BEE35: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE3B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BEE3D: je 0x588bee46
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BEE3F: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588BEE42: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588BEE44: jmp 0x588bee48
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BEE46: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BEE48: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE4E: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588BEE57: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BEE59: je 0x588bee83
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588BEE5B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588BEE5E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588BEE61: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588BEE64: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588BEE67: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588BEE6A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588BEE6C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588BEE6F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588BEE71: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588BEE74: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588BEE77: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588BEE7A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588BEE7D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588BEE80: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588BEE83: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE89: add ecx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x54
        // 0x588BEE8C: push ecx
        __asm _emit 0x51
        // 0x588BEE8D: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE93: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x2E
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BEE98: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEE9E: lea edx, [edi + 0x33c]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEEA4: push edx
        __asm _emit 0x52
        // 0x588BEEA5: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x2E
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BEEAA: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEEB0: mov ecx, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x4C
        // 0x588BEEB3: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588BEEB9: push ecx
        __asm _emit 0x51
        // 0x588BEEBA: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEEC0: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEEC5: mov edx, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x68
        // 0x588BEEC8: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEECE: push edx
        __asm _emit 0x52
        // 0x588BEECF: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEED4: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEEDA: mov ecx, dword ptr [eax + 0xa70]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEEE0: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588BEEE6: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588BEEEB: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588BEEED: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588BEEF0: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588BEEF2: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588BEEF5: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588BEEF7: push ecx
        __asm _emit 0x51
        // 0x588BEEF8: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEEFE: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEF03: mov edx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x78
        // 0x588BEF06: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEF0C: push edx
        __asm _emit 0x52
        // 0x588BEF0D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEF12: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588BEF14: je 0x588bef53
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588BEF16: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEF1C: lea eax, [ebx + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x78
        // 0x588BEF1F: push eax
        __asm _emit 0x50
        // 0x588BEF20: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x2D
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BEF25: movzx ecx, word ptr [ebx + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEF2C: push ecx
        __asm _emit 0x51
        // 0x588BEF2D: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEF33: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEF38: movzx edx, word ptr [ebx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEF3F: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEF45: push edx
        __asm _emit 0x52
        // 0x588BEF46: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEF4B: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BEF51: jmp 0x588bef89
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x588BEF53: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BEF59: push 0x5899fbf4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588BEF5E: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588BEF60: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEF66: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BEF69: push eax
        __asm _emit 0x50
        // 0x588BEF6A: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x2D
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BEF6F: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEF75: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BEF77: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEF7C: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEF82: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BEF84: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEF89: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588BEF8D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BEF8F: je 0x588befca
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588BEF91: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEF97: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x588BEF9A: push eax
        __asm _emit 0x50
        // 0x588BEF9B: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x2D
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BEFA0: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588BEFA4: mov ecx, dword ptr [eax + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEFAA: push ecx
        __asm _emit 0x51
        // 0x588BEFAB: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEFB1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEFB6: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEFBC: mov eax, dword ptr [edx + 0xa98]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEFC2: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588BEFC7: push eax
        __asm _emit 0x50
        // 0x588BEFC8: jmp 0x588befef
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x588BEFCA: push 0x5899fbf4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588BEFCF: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588BEFD1: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEFD7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BEFDA: push eax
        __asm _emit 0x50
        // 0x588BEFDB: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x2D
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BEFE0: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEFE6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BEFE8: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEFED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BEFEF: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BEFF5: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BEFFA: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588BEFFC: je 0x588bf0c7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF002: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF008: movzx ebx, word ptr [ecx + 0x88]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x99
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF00F: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF015: lea edx, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x78
        // 0x588BF018: push edx
        __asm _emit 0x52
        // 0x588BF019: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BF01E: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF024: movzx ecx, word ptr [eax + 0x88]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF02B: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588BF030: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588BF032: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588BF035: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588BF037: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588BF03A: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588BF03C: push ecx
        __asm _emit 0x51
        // 0x588BF03D: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF043: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF048: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF04E: movzx eax, word ptr [edx + 0x88]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF055: cdq
        __asm _emit 0x99
        // 0x588BF056: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF05B: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588BF05D: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF063: push edx
        __asm _emit 0x52
        // 0x588BF064: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF069: movzx edx, word ptr [edi + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF070: imul edx, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x588BF074: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF07A: movzx ebx, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDB
        // 0x588BF07D: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x588BF080: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588BF085: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588BF087: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x588BF08A: push edx
        __asm _emit 0x52
        // 0x588BF08B: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF090: movzx edx, word ptr [edi + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF097: lea eax, [ebx + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x13
        // 0x588BF09A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BF09C: imul ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x588BF0A0: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x588BF0A3: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x588BF0A6: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x588BF0A9: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588BF0AE: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588BF0B0: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF0B6: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588BF0B9: push edx
        __asm _emit 0x52
        // 0x588BF0BA: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF0BF: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BF0C5: jmp 0x588bf111
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x588BF0C7: push 0x5899fbf4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588BF0CC: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588BF0CE: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF0D4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BF0D7: push eax
        __asm _emit 0x50
        // 0x588BF0D8: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x2C
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BF0DD: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF0E3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF0E5: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF0EA: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF0F0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF0F2: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF0F7: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF0FD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF0FF: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF104: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF10A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF10C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF111: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588BF115: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BF117: je 0x588bf1d3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF11D: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF123: movzx ebp, word ptr [ecx + 0x8a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xA9
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF12A: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF130: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x588BF133: push eax
        __asm _emit 0x50
        // 0x588BF134: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x2B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BF139: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF13F: movzx ecx, word ptr [edx + 0x8a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8A
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF146: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588BF14B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588BF14D: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF153: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588BF156: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588BF158: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588BF15B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588BF15D: push eax
        __asm _emit 0x50
        // 0x588BF15E: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF163: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF169: movzx eax, word ptr [ecx + 0x8a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF170: cdq
        __asm _emit 0x99
        // 0x588BF171: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF176: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588BF178: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF17E: push edx
        __asm _emit 0x52
        // 0x588BF17F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF184: movzx edx, word ptr [edi + 0x11e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF18B: movzx ebx, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDD
        // 0x588BF18E: mov ebp, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588BF192: imul edx, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x588BF196: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF19C: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x588BF19F: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588BF1A4: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588BF1A6: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x588BF1A9: push edx
        __asm _emit 0x52
        // 0x588BF1AA: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF1AF: movzx edx, word ptr [edi + 0x11e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF1B6: lea ecx, [ebx + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x13
        // 0x588BF1B9: imul ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x588BF1BD: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x588BF1C0: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x588BF1C3: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x588BF1C6: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588BF1CB: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588BF1CD: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588BF1D0: push edx
        __asm _emit 0x52
        // 0x588BF1D1: jmp 0x588bf212
        __asm _emit 0xEB
        __asm _emit 0x3F
        // 0x588BF1D3: push 0x5899fbf4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588BF1D8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588BF1DA: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF1E0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BF1E3: push eax
        __asm _emit 0x50
        // 0x588BF1E4: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x2A
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BF1E9: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF1EF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF1F1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF1F6: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF1FC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF1FE: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF203: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF209: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF20B: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF210: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF212: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF218: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF21D: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588BF221: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588BF223: je 0x588bf292
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x588BF225: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF22B: movzx ebp, word ptr [eax + 0x8e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xA8
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF232: lea ecx, [ebx + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x78
        // 0x588BF235: push ecx
        __asm _emit 0x51
        // 0x588BF236: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF23C: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x2A
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BF241: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF247: movzx eax, word ptr [edx + 0x8e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF24E: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF254: push eax
        __asm _emit 0x50
        // 0x588BF255: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF25A: movzx ecx, word ptr [edi + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF261: imul ecx, dword ptr [ebx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4B
        __asm _emit 0x24
        // 0x588BF265: movzx ebp, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xED
        // 0x588BF268: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x588BF26B: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588BF270: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588BF272: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF278: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x588BF27B: push edx
        __asm _emit 0x52
        // 0x588BF27C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF281: movzx edx, word ptr [edi + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF288: imul edx, dword ptr [ebx + 0x70]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x53
        __asm _emit 0x70
        // 0x588BF28C: imul edx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD5
        // 0x588BF28F: push edx
        __asm _emit 0x52
        // 0x588BF290: jmp 0x588bf2c8
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x588BF292: push 0x5899fbf4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588BF297: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BF29D: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF2A3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BF2A6: push eax
        __asm _emit 0x50
        // 0x588BF2A7: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x2A
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BF2AC: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF2B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF2B4: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF2B9: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF2BF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF2C1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF2C6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF2C8: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF2CE: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF2D3: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588BF2D7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BF2D9: je 0x588bf363
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF2DF: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF2E5: movzx ebx, word ptr [ecx + 0x8c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF2EC: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF2F2: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x588BF2F5: push eax
        __asm _emit 0x50
        // 0x588BF2F6: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x29
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BF2FB: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF301: movzx eax, word ptr [edx + 0x8c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF308: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF30E: push eax
        __asm _emit 0x50
        // 0x588BF30F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF314: movzx ecx, word ptr [edi + 0x122]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF31B: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588BF31F: imul ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x588BF323: movzx ebx, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDB
        // 0x588BF326: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x588BF329: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588BF32E: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588BF330: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF336: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x588BF339: push edx
        __asm _emit 0x52
        // 0x588BF33A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF33F: movzx eax, word ptr [edi + 0x122]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF346: lea edx, [ebx + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x13
        // 0x588BF349: imul edx, dword ptr [ebp + 0x70]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x55
        __asm _emit 0x70
        // 0x588BF34D: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x588BF350: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x588BF353: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x588BF356: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588BF35B: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588BF35D: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588BF360: push edx
        __asm _emit 0x52
        // 0x588BF361: jmp 0x588bf399
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x588BF363: push 0x5899fbf4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588BF368: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BF36E: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF374: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BF377: push eax
        __asm _emit 0x50
        // 0x588BF378: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x29
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BF37D: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF383: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF385: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF38A: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF390: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF392: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF397: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BF399: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF39F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BF3A4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588BF3A6: call 0x588be810
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BF3AB: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588BF3B0: jne 0x588bf3f3
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x588BF3B2: cmp dword ptr [esi + 0x148], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF3B9: jne 0x588bf3c9
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588BF3BB: mov dword ptr [esi + 0x50], 0x1cc
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF3C2: mov dword ptr [esi + 0x54], 0x32
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF3C9: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588BF3CC: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF3D1: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BF3D5: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588BF3D8: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BF3DC: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588BF3DF: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF3E4: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BF3E8: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588BF3EB: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588BF3ED: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588BF3F1: jmp 0x588bf432
        __asm _emit 0xEB
        __asm _emit 0x3F
        // 0x588BF3F3: cmp dword ptr [esi + 0x148], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF3FA: jne 0x588bf40a
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588BF3FC: mov dword ptr [esi + 0x50], 0xa
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF403: mov dword ptr [esi + 0x54], 0x32
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF40A: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588BF40D: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF412: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BF416: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588BF419: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588BF41B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588BF41F: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588BF422: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF427: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BF42B: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588BF42E: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BF432: cmp dword ptr [esi + 0x148], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BF439: je 0x588bf447
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588BF43B: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588BF43E: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588BF441: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588BF444: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588BF447: pop edi
        __asm _emit 0x5F
        // 0x588BF448: pop esi
        __asm _emit 0x5E
        // 0x588BF449: pop ebp
        __asm _emit 0x5D
        // 0x588BF44A: pop ebx
        __asm _emit 0x5B
        // 0x588BF44B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588BF44E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
