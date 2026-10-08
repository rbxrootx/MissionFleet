// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 814 bytes in 1 exact ranges.
// Source symbol alias: FUN_58858030.

// Ghidra body range 0x58858030..0x5885835E; 814 mapped bytes.
extern "C" __declspec(naked) void FUN_58858030_segment_00() {
    __asm {
        // 0x58858030: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58858032: push 0x589856c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x56
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58858037: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885803D: push eax
        __asm _emit 0x50
        // 0x5885803E: push ecx
        __asm _emit 0x51
        // 0x5885803F: push ebx
        __asm _emit 0x53
        // 0x58858040: push ebp
        __asm _emit 0x55
        // 0x58858041: push esi
        __asm _emit 0x56
        // 0x58858042: push edi
        __asm _emit 0x57
        // 0x58858043: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58858048: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5885804A: push eax
        __asm _emit 0x50
        // 0x5885804B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5885804F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858055: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58858057: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885805B: mov dword ptr [esi], 0x5899ea14
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x14
        __asm _emit 0xEA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58858061: mov ecx, dword ptr [esi + 0xa68]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858067: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58858069: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5885806D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885806F: je 0x5885807f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858071: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58858073: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858075: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58858077: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858079: mov dword ptr [esi + 0xa68], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885807F: mov ecx, dword ptr [esi + 0xa6c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858085: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58858087: je 0x58858097
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858089: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885808B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885808D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885808F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858091: mov dword ptr [esi + 0xa6c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858097: mov ecx, dword ptr [esi + 0xa70]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885809D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885809F: je 0x588580af
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588580A1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588580A3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588580A5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588580A7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588580A9: mov dword ptr [esi + 0xa70], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588580AF: mov ecx, dword ptr [esi + 0xa78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588580B5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588580B7: je 0x588580c7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588580B9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588580BB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588580BD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588580BF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588580C1: mov dword ptr [esi + 0xa78], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588580C7: mov ecx, dword ptr [esi + 0xa80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588580CD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588580CF: je 0x588580df
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588580D1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588580D3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588580D5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588580D7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588580D9: mov dword ptr [esi + 0xa80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588580DF: mov ecx, dword ptr [esi + 0xa84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588580E5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588580E7: je 0x588580f7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588580E9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588580EB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588580ED: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588580EF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588580F1: mov dword ptr [esi + 0xa84], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588580F7: mov ecx, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588580FD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588580FF: je 0x5885810f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858101: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58858103: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858105: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58858107: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858109: mov dword ptr [esi + 0xa7c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885810F: mov ecx, dword ptr [esi + 0xa48]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858115: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58858117: je 0x58858127
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858119: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885811B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885811D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885811F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858121: mov dword ptr [esi + 0xa48], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x48
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858127: mov ecx, dword ptr [esi + 0xa44]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885812D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885812F: je 0x5885813f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858131: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58858133: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858135: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58858137: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858139: mov dword ptr [esi + 0xa44], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x44
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885813F: mov ecx, dword ptr [esi + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858145: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58858147: je 0x58858157
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858149: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885814B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885814D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885814F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858151: mov dword ptr [esi + 0xa4c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858157: mov ecx, dword ptr [esi + 0xa60]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885815D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885815F: je 0x5885816f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858161: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58858163: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858165: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58858167: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858169: mov dword ptr [esi + 0xa60], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885816F: mov ecx, dword ptr [esi + 0xa64]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858175: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58858177: je 0x58858187
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858179: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885817B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885817D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885817F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858181: mov dword ptr [esi + 0xa64], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858187: lea edi, [esi + 0xa50]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885818D: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858192: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58858194: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58858196: je 0x588581a2
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58858198: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885819A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885819C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885819E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588581A0: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588581A2: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588581A5: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588581A8: jne 0x58858192
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x588581AA: lea edi, [esi + 0xa20]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588581B0: mov ebp, 8
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588581B5: mov ecx, dword ptr [edi - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xC0
        // 0x588581B8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588581BA: je 0x588581c7
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588581BC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588581BE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588581C0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588581C2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588581C4: mov dword ptr [edi - 0x40], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xC0
        // 0x588581C7: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588581C9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588581CB: je 0x588581d7
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588581CD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588581CF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588581D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588581D3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588581D5: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588581D7: mov ecx, dword ptr [edi - 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588581DD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588581DF: je 0x588581ef
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588581E1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588581E3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588581E5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588581E7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588581E9: mov dword ptr [edi - 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588581EF: mov ecx, dword ptr [edi - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xA0
        // 0x588581F2: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588581F4: je 0x58858201
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588581F6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588581F8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588581FA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588581FC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588581FE: mov dword ptr [edi - 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xA0
        // 0x58858201: mov ecx, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE0
        // 0x58858204: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58858206: je 0x58858213
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58858208: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885820A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885820C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885820E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858210: mov dword ptr [edi - 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xE0
        // 0x58858213: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58858216: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58858219: jne 0x588581b5
        __asm _emit 0x75
        __asm _emit 0x9A
        // 0x5885821B: mov ecx, dword ptr [esi + 0x970]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858221: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58858223: je 0x58858233
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858225: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58858227: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858229: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885822B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885822D: mov dword ptr [esi + 0x970], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858233: mov ecx, dword ptr [esi + 0xa88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858239: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885823B: je 0x5885824b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885823D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885823F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858241: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58858243: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858245: mov dword ptr [esi + 0xa88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885824B: mov ecx, dword ptr [esi + 0xa9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858251: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58858253: je 0x58858263
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858255: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58858257: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858259: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885825B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885825D: mov dword ptr [esi + 0xa9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858263: mov ecx, dword ptr [esi + 0xa8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858269: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885826B: je 0x5885827b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885826D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885826F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858271: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58858273: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858275: mov dword ptr [esi + 0xa8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885827B: mov ecx, dword ptr [esi + 0xa98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858281: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58858283: je 0x58858293
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858285: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58858287: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858289: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885828B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885828D: mov dword ptr [esi + 0xa98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858293: mov ecx, dword ptr [esi + 0xaa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858299: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885829B: je 0x588582ab
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885829D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885829F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588582A1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588582A3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588582A5: mov dword ptr [esi + 0xaa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588582AB: mov ecx, dword ptr [esi + 0xaac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588582B1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588582B3: je 0x588582c3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588582B5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588582B7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588582B9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588582BB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588582BD: mov dword ptr [esi + 0xaac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588582C3: mov ecx, dword ptr [esi + 0xab0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588582C9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588582CB: je 0x588582db
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588582CD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588582CF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588582D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588582D3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588582D5: mov dword ptr [esi + 0xab0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588582DB: mov ecx, dword ptr [esi + 0xa90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588582E1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588582E3: je 0x588582f3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588582E5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588582E7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588582E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588582EB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588582ED: mov dword ptr [esi + 0xa90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588582F3: mov ecx, dword ptr [esi + 0xa94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588582F9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588582FB: je 0x5885830b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588582FD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588582FF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858301: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58858303: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858305: mov dword ptr [esi + 0xa94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885830B: mov ecx, dword ptr [esi + 0xaa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858311: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58858313: je 0x58858323
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58858315: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58858317: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858319: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885831B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885831D: mov dword ptr [esi + 0xaa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858323: mov ecx, dword ptr [esi + 0xaa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858329: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5885832B: je 0x5885833b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885832D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885832F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58858331: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58858333: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58858335: mov dword ptr [esi + 0xaa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885833B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885833D: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58858345: call 0x58857e40
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885834A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5885834E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858355: pop ecx
        __asm _emit 0x59
        // 0x58858356: pop edi
        __asm _emit 0x5F
        // 0x58858357: pop esi
        __asm _emit 0x5E
        // 0x58858358: pop ebp
        __asm _emit 0x5D
        // 0x58858359: pop ebx
        __asm _emit 0x5B
        // 0x5885835A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5885835D: ret
        __asm _emit 0xC3
    }
}
