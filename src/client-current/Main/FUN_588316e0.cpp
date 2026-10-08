// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 517 bytes in 3 exact ranges.
// Source symbol alias: FUN_588316e0.

// Ghidra body range 0x588316E0..0x5883173D; 93 mapped bytes.
extern "C" __declspec(naked) void FUN_588316e0_segment_00() {
    __asm {
        // 0x588316E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588316E2: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588316E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588316ED: push eax
        __asm _emit 0x50
        // 0x588316EE: push ecx
        __asm _emit 0x51
        // 0x588316EF: push ebx
        __asm _emit 0x53
        // 0x588316F0: push ebp
        __asm _emit 0x55
        // 0x588316F1: push esi
        __asm _emit 0x56
        // 0x588316F2: push edi
        __asm _emit 0x57
        // 0x588316F3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588316F8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588316FA: push eax
        __asm _emit 0x50
        // 0x588316FB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588316FF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831705: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58831707: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883170B: mov dword ptr [esi], 0x5899e164
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0xE1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58831711: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58831713: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58831717: lea edi, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5883171A: lea ebx, [ebp + 2]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x02
        // 0x5883171D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58831720: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58831722: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58831724: je 0x58831730
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58831726: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58831728: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883172A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883172C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883172E: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x58831730: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58831733: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58831736: jne 0x58831720
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58831738: lea edi, [ebx + 2]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x02
        // 0x5883173B: jmp 0x58831740
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58831740..0x5883187D; 317 mapped bytes.
extern "C" __declspec(naked) void FUN_588316e0_segment_01() {
    __asm {
        // 0x58831740: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58831743: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58831745: je 0x58831752
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58831747: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58831749: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883174B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883174D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883174F: mov dword ptr [esi + 0x74], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x74
        // 0x58831752: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58831755: jne 0x58831740
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x58831757: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5883175A: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883175C: je 0x58831769
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5883175E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58831760: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58831762: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58831764: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58831766: mov dword ptr [esi + 0x78], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x78
        // 0x58831769: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5883176C: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883176E: je 0x5883177b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58831770: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58831772: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58831774: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58831776: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58831778: mov dword ptr [esi + 0x7c], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x7C
        // 0x5883177B: lea edi, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831781: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831786: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58831788: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5883178A: je 0x58831796
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5883178C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883178E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58831790: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58831792: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58831794: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x58831796: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58831799: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5883179C: jne 0x58831786
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5883179E: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588317A4: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588317A6: je 0x588317b6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588317A8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588317AA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588317AC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588317AE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588317B0: mov dword ptr [esi + 0x88], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588317B6: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588317BC: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588317BE: je 0x588317ce
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588317C0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588317C2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588317C4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588317C6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588317C8: mov dword ptr [esi + 0x8c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588317CE: lea edi, [esi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588317D4: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588317D9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588317E0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588317E2: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588317E4: je 0x588317f0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588317E6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588317E8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588317EA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588317EC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588317EE: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x588317F0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588317F3: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588317F6: jne 0x588317e0
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x588317F8: lea edi, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588317FE: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831803: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58831805: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58831807: je 0x58831813
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58831809: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883180B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883180D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883180F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58831811: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x58831813: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58831816: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58831819: jne 0x58831803
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5883181B: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831821: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58831823: je 0x58831833
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58831825: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58831827: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58831829: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883182B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883182D: mov dword ptr [esi + 0xa4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831833: lea edi, [esi + 0xa8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831839: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883183E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58831840: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58831842: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58831844: je 0x58831850
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58831846: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58831848: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883184A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883184C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883184E: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x58831850: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58831853: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58831856: jne 0x58831840
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58831858: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883185E: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58831860: je 0x58831870
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58831862: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58831864: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58831866: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58831868: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883186A: mov dword ptr [esi + 0xb4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831870: lea edi, [esi + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831876: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883187B: jmp 0x58831880
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58831880..0x588318EB; 107 mapped bytes.
extern "C" __declspec(naked) void FUN_588316e0_segment_02() {
    __asm {
        // 0x58831880: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58831882: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58831884: je 0x58831890
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58831886: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58831888: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883188A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883188C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883188E: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x58831890: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58831893: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58831896: jne 0x58831880
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58831898: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883189E: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588318A0: je 0x588318b0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588318A2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588318A4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588318A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588318A8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588318AA: mov dword ptr [esi + 0xc0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588318B0: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588318B6: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588318B8: je 0x588318c8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588318BA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588318BC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588318BE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588318C0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588318C2: mov dword ptr [esi + 0xc4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588318C8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588318CA: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588318D2: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x13
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588318D7: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588318DB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588318E2: pop ecx
        __asm _emit 0x59
        // 0x588318E3: pop edi
        __asm _emit 0x5F
        // 0x588318E4: pop esi
        __asm _emit 0x5E
        // 0x588318E5: pop ebp
        __asm _emit 0x5D
        // 0x588318E6: pop ebx
        __asm _emit 0x5B
        // 0x588318E7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588318EA: ret
        __asm _emit 0xC3
    }
}
