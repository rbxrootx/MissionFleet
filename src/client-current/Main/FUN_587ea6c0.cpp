// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 857 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ea6c0.

// Ghidra body range 0x587EA6C0..0x587EAA19; 857 mapped bytes.
extern "C" __declspec(naked) void FUN_587ea6c0_segment_00() {
    __asm {
        // 0x587EA6C0: sub esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA6C6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EA6CB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587EA6CD: mov dword ptr [esp + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA6D4: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA6D9: push esi
        __asm _emit 0x56
        // 0x587EA6DA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587EA6DC: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587EA6DF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587EA6E1: je 0x587ea9fe
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA6E7: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xBF
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587EA6EC: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587EA6F1: jne 0x587ea9fe
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA6F7: test dword ptr [esi + 0x10474], 0xf00
        __asm _emit 0xF7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA701: jne 0x587ea9fe
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA707: cmp word ptr [esi + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x587EA70F: push ebx
        __asm _emit 0x53
        // 0x587EA710: mov ecx, 0x40
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA715: push edi
        __asm _emit 0x57
        // 0x587EA716: lea edi, [ecx + 6]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587EA719: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587EA71B: mov dword ptr [esp + 0xc], 0x96
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA723: jne 0x587ea736
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587EA725: lea ecx, [ebx + 0x2e]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x2E
        // 0x587EA728: lea edi, [ebx - 0x1d]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0xE3
        // 0x587EA72B: lea ebx, [ecx - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0xEC
        // 0x587EA72E: mov dword ptr [esp + 0xc], 0x2d
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA736: mov eax, dword ptr [esi + 0x104f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA73C: push ebp
        __asm _emit 0x55
        // 0x587EA73D: cdq
        __asm _emit 0x99
        // 0x587EA73E: mov ebp, 0x19
        __asm _emit 0xBD
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA743: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587EA745: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587EA747: jne 0x587ea9f4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA74D: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA753: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587EA756: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x587EA759: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587EA75B: jl 0x587ea7d6
        __asm _emit 0x7C
        __asm _emit 0x79
        // 0x587EA75D: mov eax, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA763: mov ecx, dword ptr [eax + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA769: imul ecx, dword ptr [eax + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x88
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA770: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x587EA772: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587EA774: jg 0x587ea7d6
        __asm _emit 0x7F
        __asm _emit 0x60
        // 0x587EA776: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587EA779: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EA77B: jl 0x587ea7d6
        __asm _emit 0x7C
        __asm _emit 0x59
        // 0x587EA77D: mov edx, dword ptr [eax + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA783: imul edx, dword ptr [eax + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x90
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA78A: sub edx, dword ptr [esp + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EA78E: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587EA790: jg 0x587ea7d6
        __asm _emit 0x7F
        __asm _emit 0x44
        // 0x587EA792: mov eax, dword ptr [esi + 0x104ec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA798: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EA79A: jle 0x587ea7a3
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x587EA79C: dec eax
        __asm _emit 0x48
        // 0x587EA79D: mov dword ptr [esi + 0x104ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA7A3: mov ecx, dword ptr [esi + 0x10bc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA7A9: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA7AE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EA7B0: mov dword ptr [esi + 0x104f0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA7B6: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x6E
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EA7BB: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587EA7BD: pop ebp
        __asm _emit 0x5D
        // 0x587EA7BE: pop edi
        __asm _emit 0x5F
        // 0x587EA7BF: pop ebx
        __asm _emit 0x5B
        // 0x587EA7C0: pop esi
        __asm _emit 0x5E
        // 0x587EA7C1: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA7C8: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587EA7CA: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x24
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587EA7CF: add esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA7D5: ret
        __asm _emit 0xC3
        // 0x587EA7D6: mov eax, dword ptr [esi + 0x104ec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA7DC: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x587EA7DF: jle 0x587ea979
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA7E5: cmp dword ptr [ebp + 0x100c], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA7EC: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA7F1: je 0x587ea901
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA7F7: mov eax, dword ptr [ebp + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA7FD: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x587EA800: push eax
        __asm _emit 0x50
        // 0x587EA801: lea ecx, [ebp + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA807: push ecx
        __asm _emit 0x51
        // 0x587EA808: push 0x5899be40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EA80D: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EA813: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EA816: push eax
        __asm _emit 0x50
        // 0x587EA817: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587EA81B: push edx
        __asm _emit 0x52
        // 0x587EA81C: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EA822: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587EA825: cmp dword ptr [ebp + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA82C: je 0x587ea840
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587EA82E: mov ecx, dword ptr [esi + 0x20d38]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EA834: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587EA839: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EA83D: push eax
        __asm _emit 0x50
        // 0x587EA83E: jmp 0x587ea850
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587EA840: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA844: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA849: push ecx
        __asm _emit 0x51
        // 0x587EA84A: mov ecx, dword ptr [esi + 0x20d3c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EA850: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x15
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587EA855: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA85A: mov edi, 0x1d
        __asm _emit 0xBF
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA85F: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA865: jle 0x587ea87b
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587EA867: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA86E: je 0x587ea87b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587EA870: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA876: mov ecx, dword ptr [edx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x74
        // 0x587EA879: jmp 0x587ea87d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EA87B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EA87D: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA882: push eax
        __asm _emit 0x50
        // 0x587EA883: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xD1
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587EA888: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA88D: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA893: jle 0x587ea8a9
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587EA895: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA89C: je 0x587ea8a9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587EA89E: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA8A4: mov ecx, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x74
        // 0x587EA8A7: jmp 0x587ea8ab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EA8A9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EA8AB: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587EA8AD: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EA8B0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EA8B2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587EA8B4: cmp word ptr [esi + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587EA8BC: jne 0x587ea901
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x587EA8BE: cmp dword ptr [ebp + 0x6648], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA8C5: je 0x587ea8d4
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587EA8C7: mov ecx, dword ptr [esi + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EA8CD: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587EA8CF: call 0x587cc700
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x1E
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587EA8D4: mov dword ptr [ebp + 0x664c], 0x2710
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA8DE: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA8E4: cmp ebp, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x587EA8E7: jne 0x587ea901
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587EA8E9: mov edx, dword ptr [0x58a245a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA8EF: mov dword ptr [edx + 0x8d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0xD8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA8F5: mov eax, dword ptr [esi + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EA8FB: mov dword ptr [eax + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA901: mov ecx, dword ptr [esi + 0x10474]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA907: and ecx, 0xfffffff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x0F
        // 0x587EA90D: or ecx, 0x20000000
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587EA913: mov dword ptr [esi + 0x10474], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA919: mov dword ptr [esi + 0x10478], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA91F: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA925: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587EA928: mov eax, dword ptr [ecx + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA92E: mov edx, dword ptr [ecx + 0x1274]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA934: mov ecx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA93A: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EA93F: push ebx
        __asm _emit 0x53
        // 0x587EA940: push eax
        __asm _emit 0x50
        // 0x587EA941: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EA947: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587EA94C: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587EA94E: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x587EA951: push edx
        __asm _emit 0x52
        // 0x587EA952: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587EA958: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587EA95D: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587EA95F: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA965: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x587EA968: push edx
        __asm _emit 0x52
        // 0x587EA969: mov edx, dword ptr [esi + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA96F: push edx
        __asm _emit 0x52
        // 0x587EA970: call 0x587b9760
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xED
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587EA975: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EA977: jmp 0x587ea9d4
        __asm _emit 0xEB
        __asm _emit 0x5B
        // 0x587EA979: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA97E: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587EA980: push ecx
        __asm _emit 0x51
        // 0x587EA981: push 0x5899bfd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EA986: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EA98C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EA98F: push eax
        __asm _emit 0x50
        // 0x587EA990: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EA994: push edx
        __asm _emit 0x52
        // 0x587EA995: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EA99B: mov ecx, dword ptr [esi + 0x20d38]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EA9A1: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587EA9A4: push 0xa0bec8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        // 0x587EA9A9: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EA9AD: push eax
        __asm _emit 0x50
        // 0x587EA9AE: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x13
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587EA9B3: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA9B9: push ecx
        __asm _emit 0x51
        // 0x587EA9BA: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587EA9BD: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xCF
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587EA9C2: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587EA9C5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587EA9C7: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EA9CA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EA9CC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587EA9CE: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA9D3: push ebx
        __asm _emit 0x53
        // 0x587EA9D4: mov ecx, dword ptr [esi + 0x10bc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA9DA: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x6C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EA9DF: add dword ptr [esi + 0x104ec], ebx
        __asm _emit 0x01
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA9E5: mov dword ptr [esi + 0x104f0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA9EF: jmp 0x587ea7bb
        __asm _emit 0xE9
        __asm _emit 0xC7
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EA9F4: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA9F9: jmp 0x587ea7bd
        __asm _emit 0xE9
        __asm _emit 0xBF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EA9FE: mov ecx, dword ptr [esp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA05: pop esi
        __asm _emit 0x5E
        // 0x587EAA06: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587EAA08: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA0D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x21
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587EAA12: add esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAA18: ret
        __asm _emit 0xC3
    }
}
