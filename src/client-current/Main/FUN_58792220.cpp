// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 779 bytes in 4 exact ranges.
// Source symbol alias: FUN_58792220.

// Ghidra body range 0x58792220..0x587923D9; 441 mapped bytes.
extern "C" __declspec(naked) void FUN_58792220_segment_00() {
    __asm {
        // 0x58792220: push ebp
        __asm _emit 0x55
        // 0x58792221: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58792223: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58792225: push 0x589803f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879222A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792230: push eax
        __asm _emit 0x50
        // 0x58792231: sub esp, 0x58
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x58
        // 0x58792234: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58792239: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5879223B: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5879223E: push ebx
        __asm _emit 0x53
        // 0x5879223F: push esi
        __asm _emit 0x56
        // 0x58792240: push edi
        __asm _emit 0x57
        // 0x58792241: push eax
        __asm _emit 0x50
        // 0x58792242: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58792245: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879224B: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x5879224E: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58792251: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58792253: mov dword ptr [ebp - 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xA8
        // 0x58792256: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58792259: mov dword ptr [ebp - 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xA0
        // 0x5879225C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879225E: jne 0x58792265
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58792260: mov dword ptr [ebp - 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xB0
        // 0x58792263: jmp 0x58792280
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58792265: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58792268: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5879226A: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x5879226F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58792271: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58792273: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58792276: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58792278: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5879227B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5879227D: mov dword ptr [ebp - 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xB0
        // 0x58792280: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x58792283: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58792285: je 0x5879259f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879228B: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5879228E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58792290: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58792293: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58792298: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5879229A: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5879229C: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5879229F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587922A1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587922A4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587922A6: mov ecx, 0x9249249
        __asm _emit 0xB9
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x587922AB: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587922AD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587922AF: jae 0x587922b6
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x587922B1: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x43
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587922B6: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x587922B9: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587922BB: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587922BD: jae 0x5879246a
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xA7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587922C3: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587922C5: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x587922C7: mov ebx, 0x9249249
        __asm _emit 0xBB
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x587922CC: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x587922CE: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587922D0: jae 0x587922de
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x587922D2: mov dword ptr [ebp - 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587922D9: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x587922DC: jmp 0x587922e3
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587922DE: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587922E0: mov dword ptr [ebp - 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x587922E3: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587922E5: jae 0x587922ec
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x587922E7: mov dword ptr [ebp - 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xB0
        // 0x587922EA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587922EC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587922EE: push ecx
        __asm _emit 0x51
        // 0x587922EF: call 0x5878d5f0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587922F4: mov ebx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x587922F7: sub ebx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587922FA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587922FC: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58792301: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x58792303: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x58792305: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58792308: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5879230A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879230C: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5879230F: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x58792311: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xA8
        // 0x58792314: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58792317: mov dword ptr [ebp - 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9C
        // 0x5879231A: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5879231D: push edx
        __asm _emit 0x52
        // 0x5879231E: lea eax, [ebx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792325: mov dword ptr [ebp - 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xA4
        // 0x58792328: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x5879232A: lea ecx, [ecx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x81
        // 0x5879232D: push edi
        __asm _emit 0x57
        // 0x5879232E: push ecx
        __asm _emit 0x51
        // 0x5879232F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58792331: mov dword ptr [ebp - 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xAC
        // 0x58792334: call 0x58792120
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792339: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5879233C: mov byte ptr [ebp - 0x58], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xA8
        __asm _emit 0x00
        // 0x58792340: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xA8
        // 0x58792343: push edx
        __asm _emit 0x52
        // 0x58792344: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xAC
        // 0x58792347: push edx
        __asm _emit 0x52
        // 0x58792348: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5879234B: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5879234E: push ecx
        __asm _emit 0x51
        // 0x5879234F: mov ecx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xA4
        // 0x58792352: push ecx
        __asm _emit 0x51
        // 0x58792353: push edx
        __asm _emit 0x52
        // 0x58792354: push eax
        __asm _emit 0x50
        // 0x58792355: mov dword ptr [ebp - 0x64], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879235C: call 0x58791fe0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792361: mov edx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xA4
        // 0x58792364: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58792367: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xDF
        // 0x58792369: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5879236C: lea ecx, [ebx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792373: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58792375: lea ecx, [edx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x8A
        // 0x58792378: mov byte ptr [ebp - 0x58], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xA8
        __asm _emit 0x00
        // 0x5879237C: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xA8
        // 0x5879237F: push edx
        __asm _emit 0x52
        // 0x58792380: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xAC
        // 0x58792383: push edx
        __asm _emit 0x52
        // 0x58792384: lea edx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58792387: push edx
        __asm _emit 0x52
        // 0x58792388: push ecx
        __asm _emit 0x51
        // 0x58792389: push eax
        __asm _emit 0x50
        // 0x5879238A: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5879238D: push eax
        __asm _emit 0x50
        // 0x5879238E: mov dword ptr [ebp - 0x64], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792395: call 0x58791fe0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879239A: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5879239D: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587923A0: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x587923A2: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x587923A7: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587923A9: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587923AB: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587923AE: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587923B0: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587923B3: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587923B5: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587923B8: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x587923BA: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587923BC: je 0x587923dc
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587923BE: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xAC
        // 0x587923C1: push edx
        __asm _emit 0x52
        // 0x587923C2: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587923C5: push eax
        __asm _emit 0x50
        // 0x587923C6: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587923C9: push eax
        __asm _emit 0x50
        // 0x587923CA: push ebx
        __asm _emit 0x53
        // 0x587923CB: call 0x58902180
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xFD
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587923D0: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587923D3: push ecx
        __asm _emit 0x51
        // 0x587923D4: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xA8
        __asm _emit 0x1E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587923DC..0x58792408; 44 mapped bytes.
extern "C" __declspec(naked) void FUN_58792220_segment_01() {
    __asm {
        // 0x587923DC: mov eax, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xB0
        // 0x587923DF: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587923E6: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587923E8: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xA4
        // 0x587923EB: lea ecx, [eax + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x587923EE: lea edx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587923F5: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587923F7: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587923FA: lea ecx, [eax + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x587923FD: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58792400: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58792403: jmp 0x5879259f
        __asm _emit 0xE9
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5879246A..0x58792512; 168 mapped bytes.
extern "C" __declspec(naked) void FUN_58792220_segment_02() {
    __asm {
        // 0x5879246A: sub ebx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x5879246D: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58792472: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x58792474: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x58792476: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58792479: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5879247B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5879247E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58792480: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58792482: jae 0x5879253f
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792488: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xA8
        // 0x5879248B: push ecx
        __asm _emit 0x51
        // 0x5879248C: lea ecx, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x5879248F: call 0x58735110
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x2C
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58792494: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58792497: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5879249A: lea ebx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587924A1: sub ebx, edi
        __asm _emit 0x2B
        __asm _emit 0xDF
        // 0x587924A3: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x587924A5: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x587924A7: lea edx, [ebx + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x03
        // 0x587924AA: push edx
        __asm _emit 0x52
        // 0x587924AB: push ecx
        __asm _emit 0x51
        // 0x587924AC: push eax
        __asm _emit 0x50
        // 0x587924AD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587924AF: mov dword ptr [ebp - 4], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587924B6: call 0x587921c0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587924BB: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587924BE: sub ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x587924C1: lea edx, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xD0
        // 0x587924C4: push edx
        __asm _emit 0x52
        // 0x587924C5: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x587924CA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587924CC: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587924CE: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587924D1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587924D3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587924D6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587924D8: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587924DA: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587924DD: push edi
        __asm _emit 0x57
        // 0x587924DE: push eax
        __asm _emit 0x50
        // 0x587924DF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587924E1: mov byte ptr [ebp - 4], 3
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x03
        // 0x587924E5: call 0x58792120
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587924EA: add dword ptr [esi + 0x10], ebx
        __asm _emit 0x01
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587924ED: mov esi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x587924F0: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x587924F3: lea ecx, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x587924F6: push ecx
        __asm _emit 0x51
        // 0x587924F7: sub esi, ebx
        __asm _emit 0x2B
        __asm _emit 0xF3
        // 0x587924F9: push esi
        __asm _emit 0x56
        // 0x587924FA: push edx
        __asm _emit 0x52
        // 0x587924FB: mov dword ptr [ebp - 4], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792502: call 0x58902230
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xFD
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58792507: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5879250A: lea ecx, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x5879250D: jmp 0x5879259a
        __asm _emit 0xE9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5879253F..0x587925BD; 126 mapped bytes.
extern "C" __declspec(naked) void FUN_58792220_segment_03() {
    __asm {
        // 0x5879253F: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xA8
        // 0x58792542: push eax
        __asm _emit 0x50
        // 0x58792543: lea ecx, [ebp - 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xB4
        // 0x58792546: call 0x58735110
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x2B
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5879254B: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5879254E: lea ebx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792555: sub ebx, edi
        __asm _emit 0x2B
        __asm _emit 0xDF
        // 0x58792557: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x58792559: push eax
        __asm _emit 0x50
        // 0x5879255A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5879255C: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x5879255E: push eax
        __asm _emit 0x50
        // 0x5879255F: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x58792561: push edi
        __asm _emit 0x57
        // 0x58792562: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58792564: mov dword ptr [ebp - 4], 5
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879256B: mov dword ptr [ebp - 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xAC
        // 0x5879256E: call 0x587921c0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792573: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xAC
        // 0x58792576: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58792579: push ecx
        __asm _emit 0x51
        // 0x5879257A: push edi
        __asm _emit 0x57
        // 0x5879257B: push edx
        __asm _emit 0x52
        // 0x5879257C: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5879257F: call 0x587921f0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792584: lea eax, [ebp - 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xB4
        // 0x58792587: push eax
        __asm _emit 0x50
        // 0x58792588: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5879258B: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x5879258D: push ebx
        __asm _emit 0x53
        // 0x5879258E: push eax
        __asm _emit 0x50
        // 0x5879258F: call 0x58902230
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xFC
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58792594: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58792597: lea ecx, [ebp - 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xB4
        // 0x5879259A: call 0x58748180
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x5B
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5879259F: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x587925A2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587925A9: pop ecx
        __asm _emit 0x59
        // 0x587925AA: pop edi
        __asm _emit 0x5F
        // 0x587925AB: pop esi
        __asm _emit 0x5E
        // 0x587925AC: pop ebx
        __asm _emit 0x5B
        // 0x587925AD: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x587925B0: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x587925B2: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xA6
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x587925B7: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587925B9: pop ebp
        __asm _emit 0x5D
        // 0x587925BA: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
