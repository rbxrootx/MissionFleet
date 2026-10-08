// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 705 bytes in 1 exact ranges.
// Source symbol alias: FUN_587344a0.

// Ghidra body range 0x587344A0..0x58734761; 705 mapped bytes.
extern "C" __declspec(naked) void FUN_587344a0_segment_00() {
    __asm {
        // 0x587344A0: push esi
        __asm _emit 0x56
        // 0x587344A1: push edi
        __asm _emit 0x57
        // 0x587344A2: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587344A4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587344A6: call 0x58731d30
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587344AB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587344AD: call 0x587312d0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xCE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587344B2: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587344B7: cmp dword ptr [eax + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587344BE: jle 0x587344d4
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587344C0: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587344C7: je 0x587344d4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587344C9: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587344CF: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587344D2: jmp 0x587344d6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587344D4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587344D6: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587344DC: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587344DF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587344E1: je 0x5873450b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587344E3: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587344E6: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587344E9: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587344EC: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587344EF: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587344F2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587344F4: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587344F7: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587344F9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587344FC: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587344FF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58734502: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58734505: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58734508: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5873450B: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734511: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734516: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873451B: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58734520: cmp dword ptr [eax + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58734527: jle 0x5873453d
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58734529: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734530: je 0x5873453d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58734532: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734538: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5873453B: jmp 0x5873453f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873453D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873453F: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734545: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58734548: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873454A: je 0x58734574
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5873454C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5873454F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58734552: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58734555: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58734558: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5873455B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873455D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58734560: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58734562: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58734565: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58734568: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873456B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5873456E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58734571: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58734574: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873457A: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873457F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58734583: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734589: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873458E: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xE7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58734593: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58734598: cmp dword ptr [eax + 0x164], 4
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5873459F: jle 0x587345b5
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587345A1: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587345A8: je 0x587345b5
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587345AA: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587345B0: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x587345B3: jmp 0x587345b7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587345B5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587345B7: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587345BD: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587345C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587345C2: je 0x587345ec
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587345C4: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587345C7: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587345CA: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587345CD: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587345D0: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587345D3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587345D5: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587345D8: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587345DA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587345DD: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587345E0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587345E3: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587345E6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587345E9: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587345EC: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587345F2: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587345F7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xE7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587345FC: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58734601: cmp dword ptr [eax + 0x164], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x58734608: jle 0x5873461e
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5873460A: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734611: je 0x5873461e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58734613: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734619: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x5873461C: jmp 0x58734620
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873461E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58734620: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734626: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58734629: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873462B: je 0x58734655
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5873462D: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58734630: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58734633: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58734636: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58734639: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5873463C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873463E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58734641: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58734643: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58734646: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58734649: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873464C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5873464F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58734652: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58734655: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873465B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734660: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xE6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58734665: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873466B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873466D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xE6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58734672: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58734678: push 0x5898ca30
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873467D: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5873467F: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58734682: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58734685: push eax
        __asm _emit 0x50
        // 0x58734686: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873468B: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873468E: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x58734691: push ecx
        __asm _emit 0x51
        // 0x58734692: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58734695: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xEC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873469A: push 0x5898ca0c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873469F: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587346A1: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587346A4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587346A7: push eax
        __asm _emit 0x50
        // 0x587346A8: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587346AD: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587346B0: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587346B3: add edx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x46
        // 0x587346B6: push edx
        __asm _emit 0x52
        // 0x587346B7: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xEC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587346BC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587346BE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587346C0: call 0x587331a0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587346C5: push 0x5898c9e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587346CA: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587346CC: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x587346CF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587346D2: push eax
        __asm _emit 0x50
        // 0x587346D3: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587346D8: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587346DB: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x587346DE: add eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x46
        // 0x587346E1: push eax
        __asm _emit 0x50
        // 0x587346E2: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xEB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587346E7: push 0x5898c9c4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587346EC: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587346EE: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x587346F1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587346F4: push eax
        __asm _emit 0x50
        // 0x587346F5: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587346FA: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587346FD: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x58734700: push ecx
        __asm _emit 0x51
        // 0x58734701: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58734704: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xEB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58734709: push 0x5898c9a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873470E: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58734710: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734716: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58734719: push eax
        __asm _emit 0x50
        // 0x5873471A: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873471F: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58734722: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734728: add edx, 0xe6
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873472E: push edx
        __asm _emit 0x52
        // 0x5873472F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xEB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58734734: push 0x5898c97c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58734739: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5873473B: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734741: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58734744: push eax
        __asm _emit 0x50
        // 0x58734745: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873474A: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873474D: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734753: add eax, 0xe6
        __asm _emit 0x05
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734758: push eax
        __asm _emit 0x50
        // 0x58734759: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xEB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873475E: pop edi
        __asm _emit 0x5F
        // 0x5873475F: pop esi
        __asm _emit 0x5E
        // 0x58734760: ret
        __asm _emit 0xC3
    }
}
