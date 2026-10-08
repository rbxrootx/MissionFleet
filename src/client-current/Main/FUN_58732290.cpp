// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 526 bytes in 1 exact ranges.
// Source symbol alias: FUN_58732290.

// Ghidra body range 0x58732290..0x5873249E; 526 mapped bytes.
extern "C" __declspec(naked) void FUN_58732290_segment_00() {
    __asm {
        // 0x58732290: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58732293: push ebx
        __asm _emit 0x53
        // 0x58732294: push ebp
        __asm _emit 0x55
        // 0x58732295: push esi
        __asm _emit 0x56
        // 0x58732296: push edi
        __asm _emit 0x57
        // 0x58732297: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58732299: push edi
        __asm _emit 0x57
        // 0x5873229A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873229C: call 0x58731d30
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587322A1: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587322A6: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587322AC: jle 0x587322c0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587322AE: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587322B4: je 0x587322c0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587322B6: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587322BC: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587322BE: jmp 0x587322c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587322C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587322C2: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587322C8: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587322CB: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587322CD: je 0x587322f7
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587322CF: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587322D2: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587322D5: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587322D8: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587322DB: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587322DE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587322E0: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587322E3: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587322E5: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587322E8: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587322EB: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587322EE: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587322F1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587322F4: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587322F7: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587322FD: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732302: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x0A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732307: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873230C: cmp dword ptr [eax + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58732313: jle 0x58732328
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58732315: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873231B: je 0x58732328
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873231D: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732323: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58732326: jmp 0x5873232a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58732328: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873232A: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732330: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58732333: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58732335: je 0x5873235f
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58732337: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5873233A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5873233D: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58732340: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58732343: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58732346: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58732348: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5873234B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5873234D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58732350: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58732353: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58732356: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58732359: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5873235C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5873235F: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732365: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873236A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5873236E: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732374: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732379: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x09
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x5873237E: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732384: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873238A: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5873238D: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58732393: push 0x5898c640
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xC6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732398: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5873239B: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5873239D: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587323A0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587323A3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587323A5: push edi
        __asm _emit 0x57
        // 0x587323A6: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587323AB: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587323AE: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587323B1: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x587323B3: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587323B7: push edx
        __asm _emit 0x52
        // 0x587323B8: push edi
        __asm _emit 0x57
        // 0x587323B9: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587323BD: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587323C0: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587323C6: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587323CA: push eax
        __asm _emit 0x50
        // 0x587323CB: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587323CD: push edi
        __asm _emit 0x57
        // 0x587323CE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587323D0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587323D4: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587323D7: cdq
        __asm _emit 0x99
        // 0x587323D8: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587323DA: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587323DC: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587323DE: add ecx, 0xf5
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587323E4: push ecx
        __asm _emit 0x51
        // 0x587323E5: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587323E8: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587323ED: push 0x5898c618
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0xC6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587323F2: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587323F4: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587323F7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587323FA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587323FC: push edi
        __asm _emit 0x57
        // 0x587323FD: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732402: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x58732405: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58732408: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5873240A: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873240E: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58732412: push eax
        __asm _emit 0x50
        // 0x58732413: push edi
        __asm _emit 0x57
        // 0x58732414: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58732417: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873241D: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58732421: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58732423: push eax
        __asm _emit 0x50
        // 0x58732424: push edi
        __asm _emit 0x57
        // 0x58732425: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58732427: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873242B: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873242E: cdq
        __asm _emit 0x99
        // 0x5873242F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58732431: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58732433: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58732435: add ecx, 0xf5
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873243B: push ecx
        __asm _emit 0x51
        // 0x5873243C: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5873243F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732444: push 0x5898c5f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732449: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5873244B: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5873244E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58732451: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58732453: push edi
        __asm _emit 0x57
        // 0x58732454: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58732459: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5873245C: mov ebp, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x5873245F: mov ebx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x58732462: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58732466: push eax
        __asm _emit 0x50
        // 0x58732467: push edi
        __asm _emit 0x57
        // 0x58732468: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5873246B: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58732471: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58732473: push eax
        __asm _emit 0x50
        // 0x58732474: push edi
        __asm _emit 0x57
        // 0x58732475: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58732477: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58732479: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873247D: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58732480: cdq
        __asm _emit 0x99
        // 0x58732481: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58732483: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58732485: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58732487: add ecx, 0xf5
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873248D: push ecx
        __asm _emit 0x51
        // 0x5873248E: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58732491: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58732496: pop edi
        __asm _emit 0x5F
        // 0x58732497: pop esi
        __asm _emit 0x5E
        // 0x58732498: pop ebp
        __asm _emit 0x5D
        // 0x58732499: pop ebx
        __asm _emit 0x5B
        // 0x5873249A: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5873249D: ret
        __asm _emit 0xC3
    }
}
