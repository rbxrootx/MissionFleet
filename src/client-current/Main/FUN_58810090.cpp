// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1055 bytes in 1 exact ranges.
// Source symbol alias: FUN_58810090.

// Ghidra body range 0x58810090..0x588104AF; 1055 mapped bytes.
extern "C" __declspec(naked) void FUN_58810090_segment_00() {
    __asm {
        // 0x58810090: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58810092: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58810097: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881009D: push eax
        __asm _emit 0x50
        // 0x5881009E: push ecx
        __asm _emit 0x51
        // 0x5881009F: push ebx
        __asm _emit 0x53
        // 0x588100A0: push ebp
        __asm _emit 0x55
        // 0x588100A1: push esi
        __asm _emit 0x56
        // 0x588100A2: push edi
        __asm _emit 0x57
        // 0x588100A3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588100A8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588100AA: push eax
        __asm _emit 0x50
        // 0x588100AB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588100AF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588100B5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588100B7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588100BB: mov dword ptr [esi], 0x5899d6d4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD4
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588100C1: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588100C4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588100C6: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588100CA: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588100CC: je 0x588100d9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588100CE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588100D0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588100D2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588100D4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588100D6: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x588100D9: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588100DC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588100DE: je 0x588100eb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588100E0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588100E2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588100E4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588100E6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588100E8: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x588100EB: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588100EE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588100F0: je 0x588100fd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588100F2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588100F4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588100F6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588100F8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588100FA: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x588100FD: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58810100: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810102: je 0x5881010f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58810104: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810106: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810108: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881010A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881010C: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x5881010F: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58810112: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810114: je 0x58810121
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58810116: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810118: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881011A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881011C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881011E: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x58810121: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810127: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810129: je 0x58810139
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881012B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881012D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881012F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810131: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810133: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810139: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881013F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810141: je 0x58810151
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810143: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810145: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810147: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810149: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881014B: mov dword ptr [esi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810151: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58810154: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810156: je 0x58810163
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58810158: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881015A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881015C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881015E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810160: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x58810163: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58810166: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810168: je 0x58810175
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5881016A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881016C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881016E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810170: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810172: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x58810175: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881017B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881017D: je 0x5881018d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881017F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810181: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810183: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810185: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810187: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881018D: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810193: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810195: je 0x588101a5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810197: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810199: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881019B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881019D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881019F: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588101A5: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588101AB: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588101AD: je 0x588101bd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588101AF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588101B1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588101B3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588101B5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588101B7: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588101BD: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588101C3: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588101C5: je 0x588101d5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588101C7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588101C9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588101CB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588101CD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588101CF: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588101D5: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588101D8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588101DA: je 0x588101e7
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588101DC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588101DE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588101E0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588101E2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588101E4: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x588101E7: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588101ED: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588101EF: je 0x588101ff
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588101F1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588101F3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588101F5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588101F7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588101F9: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588101FF: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810205: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810207: je 0x58810217
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810209: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881020B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881020D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881020F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810211: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810217: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881021D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881021F: je 0x5881022f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810221: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810223: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810225: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810227: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810229: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881022F: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810235: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810237: je 0x58810247
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810239: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881023B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881023D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881023F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810241: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810247: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881024D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881024F: je 0x5881025f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810251: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810253: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810255: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810257: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810259: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881025F: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810265: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810267: je 0x58810277
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810269: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881026B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881026D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881026F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810271: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810277: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881027D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881027F: je 0x5881028f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810281: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810283: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810285: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810287: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810289: mov dword ptr [esi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881028F: lea edi, [esi + 0xfc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810295: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881029A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588102A0: mov ecx, dword ptr [edi - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xD8
        // 0x588102A3: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588102A5: je 0x588102b2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588102A7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588102A9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588102AB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588102AD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588102AF: mov dword ptr [edi - 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xD8
        // 0x588102B2: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588102B4: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588102B6: je 0x588102c2
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588102B8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588102BA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588102BC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588102BE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588102C0: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588102C2: mov ecx, dword ptr [edi - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xD0
        // 0x588102C5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588102C7: je 0x588102d4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588102C9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588102CB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588102CD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588102CF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588102D1: mov dword ptr [edi - 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xD0
        // 0x588102D4: mov ecx, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE0
        // 0x588102D7: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588102D9: je 0x588102e6
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588102DB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588102DD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588102DF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588102E1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588102E3: mov dword ptr [edi - 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xE0
        // 0x588102E6: mov ecx, dword ptr [edi - 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xC8
        // 0x588102E9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588102EB: je 0x588102f8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588102ED: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588102EF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588102F1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588102F3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588102F5: mov dword ptr [edi - 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xC8
        // 0x588102F8: mov ecx, dword ptr [edi - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE8
        // 0x588102FB: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588102FD: je 0x5881030a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588102FF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810301: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810303: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810305: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810307: mov dword ptr [edi - 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xE8
        // 0x5881030A: mov ecx, dword ptr [edi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xF0
        // 0x5881030D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881030F: je 0x5881031c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58810311: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810313: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810315: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810317: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810319: mov dword ptr [edi - 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xF0
        // 0x5881031C: mov ecx, dword ptr [edi - 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xF8
        // 0x5881031F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810321: je 0x5881032e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58810323: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810325: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810327: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810329: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881032B: mov dword ptr [edi - 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xF8
        // 0x5881032E: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58810331: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58810334: jne 0x588102a0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881033A: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810340: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810342: je 0x58810352
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810344: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810346: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810348: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881034A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881034C: mov dword ptr [esi + 0x104], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810352: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810358: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881035A: je 0x5881036a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881035C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881035E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810360: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810362: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810364: mov dword ptr [esi + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881036A: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810370: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810372: je 0x58810382
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810374: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810376: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810378: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881037A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881037C: mov dword ptr [esi + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810382: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810388: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881038A: je 0x5881039a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881038C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881038E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810390: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810392: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810394: mov dword ptr [esi + 0x110], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881039A: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588103A0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588103A2: je 0x588103b2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588103A4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588103A6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588103A8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588103AA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588103AC: mov dword ptr [esi + 0x120], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588103B2: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588103B8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588103BA: je 0x588103ca
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588103BC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588103BE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588103C0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588103C2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588103C4: mov dword ptr [esi + 0x124], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588103CA: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588103D0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588103D2: je 0x588103e2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588103D4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588103D6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588103D8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588103DA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588103DC: mov dword ptr [esi + 0x128], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588103E2: mov ecx, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588103E8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588103EA: je 0x588103fa
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588103EC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588103EE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588103F0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588103F2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588103F4: mov dword ptr [esi + 0x12c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588103FA: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810400: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810402: je 0x58810412
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810404: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810406: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810408: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881040A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881040C: mov dword ptr [esi + 0x130], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810412: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810418: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5881041A: je 0x5881042a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881041C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881041E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810420: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58810422: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810424: mov dword ptr [esi + 0x134], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881042A: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810430: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810432: je 0x58810442
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58810434: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810436: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58810438: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881043A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881043C: mov dword ptr [esi + 0x138], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810442: lea edi, [esi + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810448: mov ebp, 8
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881044D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58810450: mov ecx, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE0
        // 0x58810453: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810455: je 0x58810462
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58810457: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58810459: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881045B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881045D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881045F: mov dword ptr [edi - 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xE0
        // 0x58810462: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58810464: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810466: je 0x58810472
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58810468: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881046A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881046C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881046E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810470: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58810472: mov ecx, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x20
        // 0x58810475: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58810477: je 0x58810484
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58810479: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881047B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881047D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881047F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58810481: mov dword ptr [edi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x20
        // 0x58810484: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58810487: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5881048A: jne 0x58810450
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x5881048C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5881048E: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58810496: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x27
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5881049B: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881049F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588104A6: pop ecx
        __asm _emit 0x59
        // 0x588104A7: pop edi
        __asm _emit 0x5F
        // 0x588104A8: pop esi
        __asm _emit 0x5E
        // 0x588104A9: pop ebp
        __asm _emit 0x5D
        // 0x588104AA: pop ebx
        __asm _emit 0x5B
        // 0x588104AB: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588104AE: ret
        __asm _emit 0xC3
    }
}
