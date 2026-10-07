// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1408 bytes in 2 exact ranges.
// Source symbol alias: FUN_58739740.

// Ghidra body range 0x58739740..0x58739ABD; 893 mapped bytes.
extern "C" __declspec(naked) void FUN_58739740_segment_00() {
    __asm {
        // 0x58739740: push ebp
        __asm _emit 0x55
        // 0x58739741: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58739743: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58739746: sub esp, 0x68
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x68
        // 0x58739749: push ebx
        __asm _emit 0x53
        // 0x5873974A: push ebp
        __asm _emit 0x55
        // 0x5873974B: push esi
        __asm _emit 0x56
        // 0x5873974C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873974E: cmp word ptr [esi + 0x28], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x28
        __asm _emit 0x06
        // 0x58739753: push edi
        __asm _emit 0x57
        // 0x58739754: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58739758: jne 0x58739769
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5873975A: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739761: pop edi
        __asm _emit 0x5F
        // 0x58739762: pop esi
        __asm _emit 0x5E
        // 0x58739763: pop ebp
        __asm _emit 0x5D
        // 0x58739764: pop ebx
        __asm _emit 0x5B
        // 0x58739765: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58739767: pop ebp
        __asm _emit 0x5D
        // 0x58739768: ret
        __asm _emit 0xC3
        // 0x58739769: mov ecx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5873976C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873976E: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58739770: je 0x5873977f
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58739772: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xCF
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58739777: pop edi
        __asm _emit 0x5F
        // 0x58739778: pop esi
        __asm _emit 0x5E
        // 0x58739779: pop ebp
        __asm _emit 0x5D
        // 0x5873977A: pop ebx
        __asm _emit 0x5B
        // 0x5873977B: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5873977D: pop ebp
        __asm _emit 0x5D
        // 0x5873977E: ret
        __asm _emit 0xC3
        // 0x5873977F: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x58739782: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58739788: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873978E: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58739792: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58739796: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5873979A: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5873979E: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587397A2: mov dword ptr [esp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587397A6: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587397AA: mov dword ptr [esp + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587397AE: mov dword ptr [esp + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x587397B2: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587397B6: mov dword ptr [esp + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587397BA: mov dword ptr [esp + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587397BE: mov dword ptr [esp + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587397C2: mov dword ptr [esp + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x587397C6: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587397C9: mov edx, dword ptr [eax + 0x1334]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587397CF: add eax, 0x1334
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587397D4: push edx
        __asm _emit 0x52
        // 0x587397D5: call 0x587765f0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xCE
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587397DA: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587397DD: mov ecx, dword ptr [edx + 0x1338]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587397E3: add edx, 0x1334
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587397E9: push ecx
        __asm _emit 0x51
        // 0x587397EA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587397EC: call 0x587352b0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587397F1: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587397F3: mov esi, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587397F6: cmp esi, dword ptr [ebp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587397F9: jbe 0x58739800
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587397FB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739800: mov ebx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x58739803: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58739807: mov edi, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x18
        // 0x5873980A: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873980E: cmp dword ptr [ebp + 0x14], edi
        __asm _emit 0x39
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x58739811: jbe 0x58739818
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58739813: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739818: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5873981B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5873981D: je 0x58739823
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5873981F: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58739821: je 0x58739828
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58739823: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739828: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5873982A: je 0x58739a67
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739830: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58739832: jne 0x58739968
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739838: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873983D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873983F: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58739842: jb 0x58739849
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58739844: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739849: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5873984B: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5873984E: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xCE
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58739853: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58739858: jne 0x58739a2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873985E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58739860: jne 0x5873996f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739866: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873986B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873986D: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58739870: jb 0x58739877
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58739872: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x33
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739877: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873987B: cmp dword ptr [esi], edx
        __asm _emit 0x39
        __asm _emit 0x16
        // 0x5873987D: je 0x58739a2d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739883: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58739885: jne 0x58739976
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873988B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x33
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739890: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58739892: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58739895: jb 0x5873989c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58739897: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x33
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873989C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5873989E: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587398A1: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587398A5: jl 0x58739a2d
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587398AB: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587398AF: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xB7
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587398B4: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587398B6: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587398B9: cmp dword ptr [edx + 4], 0x3200
        __asm _emit 0x81
        __asm _emit 0x7A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587398C0: jg 0x58739a2d
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587398C6: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587398CA: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xB7
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587398CF: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587398D1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587398D4: cmp dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587398D8: jl 0x58739a2d
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587398DE: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587398E2: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xB7
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587398E7: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587398E9: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587398EC: cmp dword ptr [ecx + 8], 0x1900
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587398F3: jg 0x58739a2d
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587398F9: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587398FD: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xB7
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58739902: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58739904: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58739907: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873990D: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58739911: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58739915: movzx edi, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF9
        // 0x58739918: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873991C: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xB7
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58739921: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58739923: cmp word ptr [eax + 0xf0], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5873992B: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873992F: je 0x58739a4e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739935: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xB7
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5873993A: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5873993C: cmp word ptr [eax + 0xf0], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58739944: jne 0x5873997d
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x58739946: cmp dword ptr [esp + 0x48], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x00
        // 0x5873994B: jne 0x58739a2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739951: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58739955: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xB7
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5873995A: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5873995C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5873995F: mov dword ptr [esp + 0x48], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58739963: jmp 0x58739a2d
        __asm _emit 0xE9
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739968: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5873996A: jmp 0x5873983f
        __asm _emit 0xE9
        __asm _emit 0xD0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873996F: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58739971: jmp 0x5873986d
        __asm _emit 0xE9
        __asm _emit 0xF7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739976: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58739978: jmp 0x58739892
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873997D: cmp di, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x07
        // 0x58739981: je 0x58739a14
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739987: cmp di, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x06
        // 0x5873998B: je 0x58739a14
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739991: cmp di, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x04
        // 0x58739995: je 0x587399f9
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x58739997: cmp di, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x05
        // 0x5873999B: je 0x587399f9
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x5873999D: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587399A1: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xB6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587399A6: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587399A8: mov ecx, 4
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587399AD: cmp word ptr [eax + 0xf0], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587399B4: jne 0x587399de
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x587399B6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587399BA: cmp word ptr [eax + 0xf0], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587399C1: je 0x587399de
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587399C3: cmp dword ptr [esp + 0x54], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x00
        // 0x587399C8: jne 0x58739a2d
        __asm _emit 0x75
        __asm _emit 0x63
        // 0x587399CA: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587399CE: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xB6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587399D3: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587399D5: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587399D8: mov dword ptr [esp + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587399DC: jmp 0x58739a2d
        __asm _emit 0xEB
        __asm _emit 0x4F
        // 0x587399DE: cmp dword ptr [esp + 0x58], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587399E3: jne 0x58739a2d
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x587399E5: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587399E9: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xB6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587399EE: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587399F0: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587399F3: mov dword ptr [esp + 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587399F7: jmp 0x58739a2d
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x587399F9: cmp dword ptr [esp + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x587399FE: jne 0x58739a2d
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x58739A00: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58739A04: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xB6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58739A09: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58739A0B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58739A0E: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58739A12: jmp 0x58739a2d
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x58739A14: cmp dword ptr [esp + 0x4c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x00
        // 0x58739A19: jne 0x58739a2d
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58739A1B: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58739A1F: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xB6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58739A24: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58739A26: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58739A29: mov dword ptr [esp + 0x4c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58739A2D: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58739A2F: jne 0x58739a4a
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58739A31: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x32
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739A36: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58739A38: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58739A3B: jb 0x58739a42
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58739A3D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x32
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739A42: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58739A45: jmp 0x58739807
        __asm _emit 0xE9
        __asm _emit 0xBD
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739A4A: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58739A4C: jmp 0x58739a38
        __asm _emit 0xEB
        __asm _emit 0xEA
        // 0x58739A4E: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xB6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58739A53: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58739A55: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58739A58: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58739A5C: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x58739A5F: pop edi
        __asm _emit 0x5F
        // 0x58739A60: pop esi
        __asm _emit 0x5E
        // 0x58739A61: pop ebp
        __asm _emit 0x5D
        // 0x58739A62: pop ebx
        __asm _emit 0x5B
        // 0x58739A63: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58739A65: pop ebp
        __asm _emit 0x5D
        // 0x58739A66: ret
        __asm _emit 0xC3
        // 0x58739A67: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739A6C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58739A70: cmp dword ptr [esp + eax*4 + 0x40], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x00
        // 0x58739A75: jne 0x58739b71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739A7B: inc eax
        __asm _emit 0x40
        // 0x58739A7C: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58739A7F: jl 0x58739a70
        __asm _emit 0x7C
        __asm _emit 0xEF
        // 0x58739A81: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58739A85: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58739A88: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739A8F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58739A91: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58739A95: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58739A99: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58739A9D: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58739AA1: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58739AA5: mov dword ptr [esp + 0x34], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58739AA9: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58739AAD: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58739AB1: mov dword ptr [esp + ecx*4 + 0x20], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x8C
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739AB9: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58739ABB: jmp 0x58739ac0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58739AC0..0x58739CC3; 515 mapped bytes.
extern "C" __declspec(naked) void FUN_58739740_segment_01() {
    __asm {
        // 0x58739AC0: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58739AC3: movzx edx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739ACA: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58739ACC: je 0x58739aea
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58739ACE: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58739AD4: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58739ADA: push eax
        __asm _emit 0x50
        // 0x58739ADB: push esi
        __asm _emit 0x56
        // 0x58739ADC: call 0x587752d0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xB7
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58739AE1: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58739AE4: jne 0x58739aea
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58739AE6: mov dword ptr [esp + esi*4 + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xB4
        __asm _emit 0x20
        // 0x58739AEA: inc esi
        __asm _emit 0x46
        // 0x58739AEB: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x58739AEE: jl 0x58739ac0
        __asm _emit 0x7C
        __asm _emit 0xD0
        // 0x58739AF0: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58739AF6: mov esi, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x58739AF9: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58739AFB: je 0x58739be1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739B01: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58739B03: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xCB
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58739B08: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58739B0D: jne 0x58739bd6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739B13: cmp esi, dword ptr [ebx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x58739B16: je 0x58739bd6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739B1C: movzx eax, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739B23: mov ecx, dword ptr [esp + eax*4 + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x84
        __asm _emit 0x20
        // 0x58739B27: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58739B29: jle 0x58739bd6
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739B2F: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739B35: mov dx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x58739B39: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58739B3D: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x58739B40: mov eax, 7
        __asm _emit 0xB8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739B45: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x58739B48: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58739B4B: jne 0x58739b4f
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x58739B4D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58739B4F: cmp dword ptr [esi + 0x6070], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739B55: je 0x58739b84
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x58739B57: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58739B5A: movsx edi, word ptr [ecx + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739B61: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739B64: je 0x58739b84
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58739B66: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x58739B69: jne 0x58739b84
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58739B6B: lea eax, [esp + eax*4 + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x40
        // 0x58739B6F: jmp 0x58739bd0
        __asm _emit 0xEB
        __asm _emit 0x5F
        // 0x58739B71: mov ecx, dword ptr [esp + eax*4 + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x84
        __asm _emit 0x40
        // 0x58739B75: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58739B79: mov dword ptr [edx + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x1C
        // 0x58739B7C: pop edi
        __asm _emit 0x5F
        // 0x58739B7D: pop esi
        __asm _emit 0x5E
        // 0x58739B7E: pop ebp
        __asm _emit 0x5D
        // 0x58739B7F: pop ebx
        __asm _emit 0x5B
        // 0x58739B80: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58739B82: pop ebp
        __asm _emit 0x5D
        // 0x58739B83: ret
        __asm _emit 0xC3
        // 0x58739B84: cmp dword ptr [esi + 0x60bc], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xBC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739B8A: je 0x58739b92
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58739B8C: lea eax, [esp + eax*4 + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x44
        // 0x58739B90: jmp 0x58739bd0
        __asm _emit 0xEB
        __asm _emit 0x3E
        // 0x58739B92: cmp dx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58739B96: jne 0x58739b9e
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58739B98: lea eax, [esp + eax*4 + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x48
        // 0x58739B9C: jmp 0x58739bd0
        __asm _emit 0xEB
        __asm _emit 0x32
        // 0x58739B9E: cmp dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x58739BA2: je 0x58739bcc
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58739BA4: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58739BA8: je 0x58739bcc
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58739BAA: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58739BAE: je 0x58739bc6
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58739BB0: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58739BB4: je 0x58739bc6
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58739BB6: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739BB9: je 0x58739bd6
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58739BBB: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x04
        // 0x58739BBE: jne 0x58739bd6
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58739BC0: lea eax, [esp + eax*4 + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x54
        // 0x58739BC4: jmp 0x58739bd0
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58739BC6: lea eax, [esp + eax*4 + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x50
        // 0x58739BCA: jmp 0x58739bd0
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58739BCC: lea eax, [esp + eax*4 + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x4C
        // 0x58739BD0: cmp dword ptr [eax], ebp
        __asm _emit 0x39
        __asm _emit 0x28
        // 0x58739BD2: jne 0x58739bd6
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x58739BD4: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58739BD6: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58739BD9: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58739BDB: jne 0x58739b01
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739BE1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58739BE3: cmp dword ptr [esp + eax*4 + 0x40], ebp
        __asm _emit 0x39
        __asm _emit 0x6C
        __asm _emit 0x84
        __asm _emit 0x40
        // 0x58739BE7: jne 0x58739c1f
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x58739BE9: inc eax
        __asm _emit 0x40
        // 0x58739BEA: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x58739BED: jl 0x58739be3
        __asm _emit 0x7C
        __asm _emit 0xF4
        // 0x58739BEF: cmp word ptr [ebx + 0xf0], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58739BF7: jne 0x58739cae
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739BFD: mov eax, 6
        __asm _emit 0xB8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739C02: mov word ptr [ebx + 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x28
        // 0x58739C06: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58739C09: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58739C0C: mov edx, 0x3200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739C11: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58739C13: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58739C15: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58739C17: jge 0x58739c2e
        __asm _emit 0x7D
        __asm _emit 0x15
        // 0x58739C19: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x58739C1B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58739C1D: jmp 0x58739c3a
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58739C1F: mov edx, dword ptr [esp + eax*4 + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x84
        __asm _emit 0x40
        // 0x58739C23: mov dword ptr [ebx + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x1C
        // 0x58739C26: pop edi
        __asm _emit 0x5F
        // 0x58739C27: pop esi
        __asm _emit 0x5E
        // 0x58739C28: pop ebp
        __asm _emit 0x5D
        // 0x58739C29: pop ebx
        __asm _emit 0x5B
        // 0x58739C2A: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58739C2C: pop ebp
        __asm _emit 0x5D
        // 0x58739C2D: ret
        __asm _emit 0xC3
        // 0x58739C2E: mov ebx, 0x3200
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739C33: sub ebx, edi
        __asm _emit 0x2B
        __asm _emit 0xDF
        // 0x58739C35: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739C3A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58739C3D: mov esi, 0x1900
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739C42: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x58739C44: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58739C46: jge 0x58739c4e
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58739C48: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58739C4A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58739C4C: jmp 0x58739c5a
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58739C4E: mov esi, 0x3200
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739C53: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x58739C55: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739C5A: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x58739C5C: jle 0x58739c85
        __asm _emit 0x7E
        __asm _emit 0x27
        // 0x58739C5E: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58739C60: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58739C62: push ebp
        __asm _emit 0x55
        // 0x58739C63: and eax, 0x1a90
        __asm _emit 0x25
        __asm _emit 0x90
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739C68: push ebp
        __asm _emit 0x55
        // 0x58739C69: add eax, 0xffffff38
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739C6E: push eax
        __asm _emit 0x50
        // 0x58739C6F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58739C71: push ecx
        __asm _emit 0x51
        // 0x58739C72: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58739C76: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58739C78: call 0x587366f0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739C7D: pop edi
        __asm _emit 0x5F
        // 0x58739C7E: pop esi
        __asm _emit 0x5E
        // 0x58739C7F: pop ebp
        __asm _emit 0x5D
        // 0x58739C80: pop ebx
        __asm _emit 0x5B
        // 0x58739C81: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58739C83: pop ebp
        __asm _emit 0x5D
        // 0x58739C84: ret
        __asm _emit 0xC3
        // 0x58739C85: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58739C87: push ebp
        __asm _emit 0x55
        // 0x58739C88: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x58739C8A: push ebp
        __asm _emit 0x55
        // 0x58739C8B: and ecx, 0x3390
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x90
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739C91: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58739C93: add ecx, 0xffffff38
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739C99: push eax
        __asm _emit 0x50
        // 0x58739C9A: push ecx
        __asm _emit 0x51
        // 0x58739C9B: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58739C9F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58739CA1: call 0x587366f0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58739CA6: pop edi
        __asm _emit 0x5F
        // 0x58739CA7: pop esi
        __asm _emit 0x5E
        // 0x58739CA8: pop ebp
        __asm _emit 0x5D
        // 0x58739CA9: pop ebx
        __asm _emit 0x5B
        // 0x58739CAA: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58739CAC: pop ebp
        __asm _emit 0x5D
        // 0x58739CAD: ret
        __asm _emit 0xC3
        // 0x58739CAE: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58739CB1: pop edi
        __asm _emit 0x5F
        // 0x58739CB2: mov dword ptr [eax + 0x11c], 2
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58739CBC: pop esi
        __asm _emit 0x5E
        // 0x58739CBD: pop ebp
        __asm _emit 0x5D
        // 0x58739CBE: pop ebx
        __asm _emit 0x5B
        // 0x58739CBF: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58739CC1: pop ebp
        __asm _emit 0x5D
        // 0x58739CC2: ret
        __asm _emit 0xC3
    }
}
