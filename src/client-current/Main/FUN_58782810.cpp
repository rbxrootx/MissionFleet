// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1234 bytes in 1 exact ranges.
// Source symbol alias: FUN_58782810.

// Ghidra body range 0x58782810..0x58782CE2; 1234 mapped bytes.
extern "C" __declspec(naked) void FUN_58782810_segment_00() {
    __asm {
        // 0x58782810: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58782812: push 0x5897f830
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xF8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58782817: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878281D: push eax
        __asm _emit 0x50
        // 0x5878281E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58782821: push ebx
        __asm _emit 0x53
        // 0x58782822: push ebp
        __asm _emit 0x55
        // 0x58782823: push esi
        __asm _emit 0x56
        // 0x58782824: push edi
        __asm _emit 0x57
        // 0x58782825: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5878282A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5878282C: push eax
        __asm _emit 0x50
        // 0x5878282D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58782831: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782837: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58782839: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878283D: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58782841: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58782845: push eax
        __asm _emit 0x50
        // 0x58782846: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5878284A: lea ecx, [ebp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x64
        // 0x5878284D: push ecx
        __asm _emit 0x51
        // 0x5878284E: lea edx, [eax + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x58782851: push edx
        __asm _emit 0x52
        // 0x58782852: push ebp
        __asm _emit 0x55
        // 0x58782853: push eax
        __asm _emit 0x50
        // 0x58782854: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58782858: push eax
        __asm _emit 0x50
        // 0x58782859: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5878285B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58782860: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58782864: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58782868: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5878286C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5878286E: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58782870: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58782874: mov dword ptr [edi], 0x58996a68
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x68
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5878287A: mov dword ptr [edi + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x5878287D: mov dword ptr [edi + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x5C
        // 0x58782880: mov dword ptr [edi + 0xe4], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782886: mov byte ptr [edi + 0xf0], bl
        __asm _emit 0x88
        __asm _emit 0x9F
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878288C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xA3
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58782891: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58782893: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58782896: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878289A: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5878289F: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x587828A1: je 0x587828c8
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587828A3: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587828A7: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587828AB: push ecx
        __asm _emit 0x51
        // 0x587828AC: push ebx
        __asm _emit 0x53
        // 0x587828AD: push ebx
        __asm _emit 0x53
        // 0x587828AE: push ebp
        __asm _emit 0x55
        // 0x587828AF: push edx
        __asm _emit 0x52
        // 0x587828B0: push edi
        __asm _emit 0x57
        // 0x587828B1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587828B3: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587828B8: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587828BE: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x587828C1: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x587828C4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587828C6: jmp 0x587828ca
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587828C8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587828CA: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587828CF: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587828D3: mov dword ptr [edi + 0x78], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x587828D6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587828DB: lea eax, [edi + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x70
        // 0x587828DE: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587828E2: mov dword ptr [esp + 0x2c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587828EA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587828F0: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587828F2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xA3
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587828F7: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587828F9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587828FC: mov dword ptr [esp + 0x44], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58782900: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58782905: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58782907: je 0x5878292c
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58782909: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5878290D: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58782911: push eax
        __asm _emit 0x50
        // 0x58782912: push ebx
        __asm _emit 0x53
        // 0x58782913: push ebx
        __asm _emit 0x53
        // 0x58782914: push ebp
        __asm _emit 0x55
        // 0x58782915: push ecx
        __asm _emit 0x51
        // 0x58782916: push edi
        __asm _emit 0x57
        // 0x58782917: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58782919: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5878291E: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58782924: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58782927: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x5878292A: jmp 0x5878292e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878292C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5878292E: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58782932: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58782934: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58782937: sub dword ptr [esp + 0x2c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x5878293C: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58782940: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58782944: jne 0x587828f0
        __asm _emit 0x75
        __asm _emit 0xAA
        // 0x58782946: mov ecx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x70
        // 0x58782949: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878294E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x03
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58782953: mov dword ptr [esp + 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58782957: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5878295B: lea ebp, [edi + 0xbc]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782961: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58782963: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xA2
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58782968: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5878296A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5878296D: mov dword ptr [esp + 0x4c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58782971: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x58782976: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58782978: je 0x58782a0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878297E: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58782984: mov eax, dword ptr [edx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5878298A: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5878298D: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58782991: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782997: jle 0x587829b3
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58782999: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5878299B: jl 0x587829b3
        __asm _emit 0x7C
        __asm _emit 0x16
        // 0x5878299D: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587829A3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587829A5: je 0x587829b3
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587829A7: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587829AB: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587829AD: mov dword ptr [esp + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587829B1: jmp 0x587829b7
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587829B3: mov dword ptr [esp + 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587829B7: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587829BB: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587829BF: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587829C3: push edx
        __asm _emit 0x52
        // 0x587829C4: push ebx
        __asm _emit 0x53
        // 0x587829C5: push ebx
        __asm _emit 0x53
        // 0x587829C6: push eax
        __asm _emit 0x50
        // 0x587829C7: push ecx
        __asm _emit 0x51
        // 0x587829C8: push edi
        __asm _emit 0x57
        // 0x587829C9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587829CB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587829D0: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587829D4: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587829DA: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x587829DD: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587829E0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587829E2: je 0x58782a0a
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587829E4: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587829E7: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587829EA: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x587829ED: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587829F0: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587829F3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587829F5: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587829F8: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587829FB: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587829FE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58782A01: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x58782A04: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58782A07: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58782A0A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58782A0C: jmp 0x58782a10
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58782A0E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58782A10: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782A15: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58782A19: mov dword ptr [ebp], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58782A1C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x02
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58782A21: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58782A24: inc dword ptr [esp + 0x30]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58782A28: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782A2D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58782A31: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58782A34: mov edx, 0xdfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782A39: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58782A3D: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58782A41: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x58782A44: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58782A47: cmp eax, 0xc0
        __asm _emit 0x3D
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782A4C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58782A50: jl 0x58782961
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x0B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58782A56: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782A5B: lea eax, [edi + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782A61: mov dword ptr [esp + 0x44], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58782A65: mov dword ptr [esp + 0x30], 0xc0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782A6D: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58782A71: mov dword ptr [esp + 0x4c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782A79: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782A80: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58782A82: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xA1
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58782A87: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58782A89: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58782A8C: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58782A90: mov byte ptr [esp + 0x24], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58782A95: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58782A97: je 0x58782b21
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782A9D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58782AA3: mov eax, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58782AA9: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58782AAC: cmp dword ptr [eax + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782AB2: jle 0x58782aca
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58782AB4: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58782AB6: jl 0x58782aca
        __asm _emit 0x7C
        __asm _emit 0x12
        // 0x58782AB8: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782ABE: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58782AC0: je 0x58782aca
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58782AC2: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58782AC6: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x58782AC8: jmp 0x58782acc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58782ACA: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58782ACC: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58782AD0: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58782AD4: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58782AD8: push eax
        __asm _emit 0x50
        // 0x58782AD9: push ebx
        __asm _emit 0x53
        // 0x58782ADA: push ebx
        __asm _emit 0x53
        // 0x58782ADB: push ecx
        __asm _emit 0x51
        // 0x58782ADC: push edx
        __asm _emit 0x52
        // 0x58782ADD: push edi
        __asm _emit 0x57
        // 0x58782ADE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58782AE0: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58782AE5: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58782AEB: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58782AEE: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x58782AF1: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58782AF3: je 0x58782b1b
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58782AF5: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58782AF8: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58782AFB: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x58782AFE: lea eax, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x58782B01: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58782B04: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58782B06: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x58782B09: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58782B0C: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58782B0F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58782B12: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x58782B15: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58782B18: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58782B1B: mov ebp, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58782B1F: jmp 0x58782b23
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58782B21: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58782B23: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58782B27: add dword ptr [esp + 0x30], 0x40
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x40
        // 0x58782B2C: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58782B2E: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782B33: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58782B37: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58782B3A: inc ebp
        __asm _emit 0x45
        // 0x58782B3B: sub dword ptr [esp + 0x4c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x01
        // 0x58782B40: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58782B44: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58782B48: mov dword ptr [esp + 0x44], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58782B4C: jne 0x58782a80
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58782B52: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58782B54: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xA0
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58782B59: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58782B5B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58782B5E: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58782B62: mov byte ptr [esp + 0x24], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x58782B67: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58782B69: je 0x58782be0
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x58782B6B: mov eax, dword ptr [0x58a24680]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58782B70: cmp dword ptr [eax + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58782B77: jle 0x58782b8c
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58782B79: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782B7F: je 0x58782b8c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58782B81: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782B87: sub ebp, -0x80
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x80
        // 0x58782B8A: jmp 0x58782b8e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58782B8C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58782B8E: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58782B92: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58782B96: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58782B9A: push edx
        __asm _emit 0x52
        // 0x58782B9B: push ebx
        __asm _emit 0x53
        // 0x58782B9C: push ebx
        __asm _emit 0x53
        // 0x58782B9D: push eax
        __asm _emit 0x50
        // 0x58782B9E: push ecx
        __asm _emit 0x51
        // 0x58782B9F: push edi
        __asm _emit 0x57
        // 0x58782BA0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58782BA2: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58782BA7: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58782BAD: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58782BB0: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x58782BB3: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58782BB5: je 0x58782be2
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58782BB7: mov edx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x58782BBA: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58782BBD: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x58782BC0: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58782BC3: mov ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x58782BC6: lea eax, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x58782BC9: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58782BCC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58782BCF: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x58782BD2: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58782BD5: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x58782BD8: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58782BDB: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x58782BDE: jmp 0x58782be2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58782BE0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58782BE2: mov dword ptr [edi + 0xd0], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782BE8: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782BED: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58782BF1: mov ecx, dword ptr [edi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782BF7: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58782BFC: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58782C00: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58782C05: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58782C07: mov dword ptr [edi + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x58
        // 0x58782C0A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xA0
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58782C0F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58782C12: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58782C16: mov byte ptr [esp + 0x24], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x58782C1B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58782C1D: je 0x58782c29
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58782C1F: push ebx
        __asm _emit 0x53
        // 0x58782C20: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58782C22: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58782C27: jmp 0x58782c2b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58782C29: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58782C2B: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58782C2F: mov dword ptr [edi + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782C35: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58782C37: lea ebp, [edi + 0xfc]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782C3D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58782C40: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58782C42: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xA0
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58782C47: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58782C4A: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58782C4E: mov byte ptr [esp + 0x24], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x58782C53: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58782C55: je 0x58782c61
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58782C57: push ebx
        __asm _emit 0x53
        // 0x58782C58: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58782C5A: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58782C5F: jmp 0x58782c63
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58782C61: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58782C63: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58782C66: mov byte ptr [edi + esi + 0x10c], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x37
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782C6D: inc esi
        __asm _emit 0x46
        // 0x58782C6E: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58782C71: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x58782C74: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58782C78: jl 0x58782c40
        __asm _emit 0x7C
        __asm _emit 0xC6
        // 0x58782C7A: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58782C7C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x9F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58782C81: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58782C84: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58782C88: mov byte ptr [esp + 0x24], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58782C8D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58782C8F: je 0x58782cbb
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58782C91: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58782C97: cmp dword ptr [ecx + 0x170], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58782C9E: jle 0x58782cb1
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58782CA0: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782CA6: je 0x58782cb1
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58782CA8: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782CAE: mov ebx, dword ptr [ecx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x3C
        // 0x58782CB1: push ebx
        __asm _emit 0x53
        // 0x58782CB2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58782CB4: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58782CB9: jmp 0x58782cbd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58782CBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58782CBD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58782CBF: mov dword ptr [edi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782CC5: call 0x58782790
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58782CCA: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58782CCC: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58782CD0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782CD7: pop ecx
        __asm _emit 0x59
        // 0x58782CD8: pop edi
        __asm _emit 0x5F
        // 0x58782CD9: pop esi
        __asm _emit 0x5E
        // 0x58782CDA: pop ebp
        __asm _emit 0x5D
        // 0x58782CDB: pop ebx
        __asm _emit 0x5B
        // 0x58782CDC: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58782CDF: ret 0x24
        __asm _emit 0xC2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
