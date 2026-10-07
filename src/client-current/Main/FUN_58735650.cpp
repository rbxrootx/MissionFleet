// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 442 bytes in 2 exact ranges.
// Source symbol alias: FUN_58735650.

// Ghidra body range 0x58735650..0x587356B7; 103 mapped bytes.
extern "C" __declspec(naked) void FUN_58735650_segment_00() {
    __asm {
        // 0x58735650: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58735652: push 0x5897dca6
        __asm _emit 0x68
        __asm _emit 0xA6
        __asm _emit 0xDC
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58735657: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873565D: push eax
        __asm _emit 0x50
        // 0x5873565E: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x58735661: push ebx
        __asm _emit 0x53
        // 0x58735662: push ebp
        __asm _emit 0x55
        // 0x58735663: push esi
        __asm _emit 0x56
        // 0x58735664: push edi
        __asm _emit 0x57
        // 0x58735665: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873566A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873566C: push eax
        __asm _emit 0x50
        // 0x5873566D: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58735671: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735677: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58735679: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873567D: lea ebp, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x58735680: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58735682: mov dword ptr [esi], 0x5898cab4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xB4
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58735688: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xA7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873568D: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58735691: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58735694: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873569A: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5873569D: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587356A5: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587356A8: jbe 0x587356af
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587356AA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x75
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587356AF: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x587356B1: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587356B5: jmp 0x587356c0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587356C0..0x58735813; 339 mapped bytes.
extern "C" __declspec(naked) void FUN_58735650_segment_01() {
    __asm {
        // 0x587356C0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587356C4: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587356C7: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587356CD: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587356D0: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587356D3: jbe 0x587356de
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x587356D5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587356DA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587356DE: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587356E0: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587356E2: je 0x587356e8
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587356E4: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587356E6: je 0x587356f1
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587356E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587356ED: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587356F1: cmp dword ptr [esp + 0x1c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587356F5: je 0x587357be
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587356FB: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x587356FD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x75
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58735702: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58735704: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58735707: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873570B: mov byte ptr [esp + 0x30], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        // 0x58735710: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58735712: je 0x58735742
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58735714: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58735716: jne 0x5873573e
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x58735718: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x75
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873571D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873571F: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58735723: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58735726: jb 0x5873572d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58735728: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x75
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873572D: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58735731: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58735733: push edx
        __asm _emit 0x52
        // 0x58735734: push eax
        __asm _emit 0x50
        // 0x58735735: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58735737: call 0x587429b0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873573C: jmp 0x58735744
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5873573E: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58735740: jmp 0x5873571f
        __asm _emit 0xEB
        __asm _emit 0xDD
        // 0x58735742: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735744: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58735747: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5873574C: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58735750: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58735752: jne 0x58735758
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58735754: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58735756: jmp 0x58735760
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58735758: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5873575B: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x5873575D: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58735760: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58735763: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x58735765: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x58735767: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5873576A: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x5873576C: jae 0x58735778
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x5873576E: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58735770: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58735773: mov dword ptr [ebp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58735776: jmp 0x58735797
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58735778: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5873577A: jbe 0x58735781
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873577C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58735781: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58735784: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58735788: push ecx
        __asm _emit 0x51
        // 0x58735789: push esi
        __asm _emit 0x56
        // 0x5873578A: push eax
        __asm _emit 0x50
        // 0x5873578B: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873578F: push edx
        __asm _emit 0x52
        // 0x58735790: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58735792: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x10
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58735797: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58735799: jne 0x587357ba
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5873579B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587357A0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587357A2: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587357A6: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587357A9: jb 0x587357b0
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587357AB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587357B0: add dword ptr [esp + 0x1c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x04
        // 0x587357B5: jmp 0x587356c0
        __asm _emit 0xE9
        __asm _emit 0x06
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587357BA: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587357BC: jmp 0x587357a2
        __asm _emit 0xEB
        __asm _emit 0xE4
        // 0x587357BE: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x587357C1: sub edx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x587357C4: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587357C7: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587357C9: jbe 0x587357f5
        __asm _emit 0x76
        __asm _emit 0x2A
        // 0x587357CB: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x587357CE: sub ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x587357D1: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587357D4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587357D6: ja 0x587357e1
        __asm _emit 0x77
        __asm _emit 0x09
        // 0x587357D8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587357DD: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587357E1: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x587357E4: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x587357E6: mov edx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x20
        // 0x587357E9: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587357EC: mov dword ptr [eax + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587357F3: jmp 0x587357fd
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587357F5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587357F7: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587357FA: mov dword ptr [eax + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587357FD: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58735801: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735808: pop ecx
        __asm _emit 0x59
        // 0x58735809: pop edi
        __asm _emit 0x5F
        // 0x5873580A: pop esi
        __asm _emit 0x5E
        // 0x5873580B: pop ebp
        __asm _emit 0x5D
        // 0x5873580C: pop ebx
        __asm _emit 0x5B
        // 0x5873580D: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58735810: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
