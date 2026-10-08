// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 520 bytes in 1 exact ranges.
// Source symbol alias: FUN_587754e0.

// Ghidra body range 0x587754E0..0x587756E8; 520 mapped bytes.
extern "C" __declspec(naked) void FUN_587754e0_segment_00() {
    __asm {
        // 0x587754E0: push ebp
        __asm _emit 0x55
        // 0x587754E1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x587754E3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x587754E6: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587754E9: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x587754EC: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x587754EF: push ebx
        __asm _emit 0x53
        // 0x587754F0: push esi
        __asm _emit 0x56
        // 0x587754F1: push edi
        __asm _emit 0x57
        // 0x587754F2: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587754F6: cmp eax, dword ptr [edx + 0x1334]
        __asm _emit 0x3B
        __asm _emit 0x82
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587754FC: jne 0x5877550c
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587754FE: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775503: pop edi
        __asm _emit 0x5F
        // 0x58775504: pop esi
        __asm _emit 0x5E
        // 0x58775505: pop ebx
        __asm _emit 0x5B
        // 0x58775506: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58775508: pop ebp
        __asm _emit 0x5D
        // 0x58775509: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5877550C: cmp eax, 0xffff
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775511: je 0x587754fe
        __asm _emit 0x74
        __asm _emit 0xEB
        // 0x58775513: mov esi, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x58775516: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58775519: mov dword ptr [esp + 0x10], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775521: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58775524: jbe 0x5877552b
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58775526: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x77
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877552B: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x5877552D: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775531: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775535: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58775539: mov esi, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x54
        // 0x5877553C: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5877553F: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58775542: jbe 0x58775549
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58775544: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x77
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775549: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5877554B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877554D: je 0x58775553
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5877554F: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x58775551: je 0x58775558
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58775553: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x77
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775558: cmp dword ptr [esp + 0x1c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877555C: je 0x587756db
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775562: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775564: jne 0x58775646
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877556A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x77
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877556F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775571: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775575: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775578: jb 0x5877557f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877557A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x76
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877557F: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775583: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58775585: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58775588: cmp dword ptr [eax], ecx
        __asm _emit 0x39
        __asm _emit 0x08
        // 0x5877558A: jne 0x587756b4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775590: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775592: jne 0x5877564d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775598: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x76
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877559D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877559F: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587755A3: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587755A6: jb 0x587755ad
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587755A8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x76
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587755AD: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587755B1: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587755B3: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587755B7: jne 0x587756b4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587755BD: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x587755C0: cmp dword ptr [edi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587755C7: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587755CB: je 0x5877567b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587755D1: movzx esi, word ptr [edi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587755D8: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xFA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587755DD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587755DF: movzx eax, word ptr [edx + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x587755E3: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587755E7: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587755E9: je 0x587756a6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587755EF: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xFA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587755F4: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587755F6: cmp dword ptr [eax + 0x10], 0xffff
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587755FD: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775601: je 0x58775654
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x58775603: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xFA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775608: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5877560A: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5877560D: cmp edx, dword ptr [edi + 0x1334]
        __asm _emit 0x3B
        __asm _emit 0x97
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775613: jne 0x587756b4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775619: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877561D: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xFA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775622: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58775624: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58775627: cmp ecx, dword ptr [edi + 0x1338]
        __asm _emit 0x3B
        __asm _emit 0x8F
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877562D: jne 0x587756b4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775633: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775637: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xFA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5877563C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877563E: cmp dword ptr [edx + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58775642: je 0x587756b4
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x58775644: jmp 0x58775667
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x58775646: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775648: jmp 0x58775571
        __asm _emit 0xE9
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877564D: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5877564F: jmp 0x5877559f
        __asm _emit 0xE9
        __asm _emit 0x4B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775654: movzx esi, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877565B: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xFA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775660: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58775662: cmp dword ptr [edx + 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x72
        __asm _emit 0x14
        // 0x58775665: jne 0x587756b4
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x58775667: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877566B: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xFA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775670: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58775672: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58775675: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58775679: jmp 0x587756b4
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x5877567B: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xFA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775680: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58775682: cmp dword ptr [edx + 0x10], 0xffff
        __asm _emit 0x81
        __asm _emit 0x7A
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775689: jne 0x587756b4
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x5877568B: movzx esi, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775692: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775696: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xF9
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5877569B: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5877569D: cmp dword ptr [eax + 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x14
        // 0x587756A0: jne 0x587756b4
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587756A2: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587756A6: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xF9
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587756AB: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587756AD: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587756B0: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587756B4: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587756B6: jne 0x587756d7
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587756B8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x75
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587756BD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587756BF: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587756C3: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587756C6: jb 0x587756cd
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587756C8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x75
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587756CD: add dword ptr [esp + 0x1c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x04
        // 0x587756D2: jmp 0x58775535
        __asm _emit 0xE9
        __asm _emit 0x5E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587756D7: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587756D9: jmp 0x587756bf
        __asm _emit 0xEB
        __asm _emit 0xE4
        // 0x587756DB: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587756DF: pop edi
        __asm _emit 0x5F
        // 0x587756E0: pop esi
        __asm _emit 0x5E
        // 0x587756E1: pop ebx
        __asm _emit 0x5B
        // 0x587756E2: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587756E4: pop ebp
        __asm _emit 0x5D
        // 0x587756E5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
