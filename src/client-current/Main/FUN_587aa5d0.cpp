// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1069 bytes in 2 exact ranges.
// Source symbol alias: FUN_587aa5d0.

// Ghidra body range 0x587AA5D0..0x587AA92D; 861 mapped bytes.
extern "C" __declspec(naked) void FUN_587aa5d0_segment_00() {
    __asm {
        // 0x587AA5D0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587AA5D3: push ebx
        __asm _emit 0x53
        // 0x587AA5D4: push ebp
        __asm _emit 0x55
        // 0x587AA5D5: push esi
        __asm _emit 0x56
        // 0x587AA5D6: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AA5DA: push edi
        __asm _emit 0x57
        // 0x587AA5DB: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587AA5DD: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AA5DF: jne 0x587aa5f8
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587AA5E1: push 0x139
        __asm _emit 0x68
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA5E6: push 0x589999a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AA5EB: push 0x58999cf8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x9C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AA5F0: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x28
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AA5F5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587AA5F8: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x587AA5FB: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x587AA5FE: ja 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA604: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA609: jmp dword ptr [eax*4 + 0x587aaa00]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x587AA610: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AA612: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AA614: push esi
        __asm _emit 0x56
        // 0x587AA615: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AA617: call 0x587a90d0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA61C: pop edi
        __asm _emit 0x5F
        // 0x587AA61D: pop esi
        __asm _emit 0x5E
        // 0x587AA61E: pop ebp
        __asm _emit 0x5D
        // 0x587AA61F: pop ebx
        __asm _emit 0x5B
        // 0x587AA620: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AA623: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AA626: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA62C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AA62E: jne 0x587aa64d
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587AA630: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AA635: mov ecx, dword ptr [eax + 0x104f4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587AA63B: mov dword ptr [esi + 0xac], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA641: pop edi
        __asm _emit 0x5F
        // 0x587AA642: pop esi
        __asm _emit 0x5E
        // 0x587AA643: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587AA645: pop ebp
        __asm _emit 0x5D
        // 0x587AA646: pop ebx
        __asm _emit 0x5B
        // 0x587AA647: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AA64A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AA64D: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AA653: mov ecx, dword ptr [edx + 0x104f4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587AA659: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x587AA65C: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587AA65E: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x587AA661: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587AA663: jb 0x587aa641
        __asm _emit 0x72
        __asm _emit 0xDC
        // 0x587AA665: jmp 0x587aa610
        __asm _emit 0xEB
        __asm _emit 0xA9
        // 0x587AA667: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587AA66A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587AA66C: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587AA66F: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587AA672: jne 0x587aa6ac
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x587AA674: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587AA677: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587AA67A: je 0x587aa6ac
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x587AA67C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AA682: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587AA688: push eax
        __asm _emit 0x50
        // 0x587AA689: call 0x587771e0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xCB
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587AA68E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587AA691: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AA693: je 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA699: push eax
        __asm _emit 0x50
        // 0x587AA69A: push esi
        __asm _emit 0x56
        // 0x587AA69B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AA69D: call 0x587aa540
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA6A2: pop edi
        __asm _emit 0x5F
        // 0x587AA6A3: pop esi
        __asm _emit 0x5E
        // 0x587AA6A4: pop ebp
        __asm _emit 0x5D
        // 0x587AA6A5: pop ebx
        __asm _emit 0x5B
        // 0x587AA6A6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AA6A9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AA6AC: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x587AA6AF: jne 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA6B5: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AA6BB: mov edi, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x587AA6BE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AA6C0: je 0x587aa873
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA6C6: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587AA6C9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587AA6CB: shr ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x587AA6CE: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587AA6D1: cmp ecx, 5
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x587AA6D4: ja 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x1A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA6DA: jmp dword ptr [ecx*4 + 0x587aaa34]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xAA
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x587AA6E1: movzx ecx, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA6E8: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587AA6EB: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587AA6ED: jmp 0x587aa73b
        __asm _emit 0xEB
        __asm _emit 0x4C
        // 0x587AA6EF: movzx edx, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x97
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA6F6: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587AA6F9: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587AA6FB: jne 0x587aa74e
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x587AA6FD: cmp dword ptr [edi + 0x60bc], ebp
        __asm _emit 0x39
        __asm _emit 0xAF
        __asm _emit 0xBC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA703: jmp 0x587aa73b
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x587AA705: mov ecx, dword ptr [edi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA70B: movzx edx, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587AA70F: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587AA712: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587AA715: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587AA717: jmp 0x587aa73b
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x587AA719: mov ecx, dword ptr [edi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA71F: movzx edx, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587AA723: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587AA725: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587AA728: shr ecx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0D
        // 0x587AA72B: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587AA72D: jne 0x587aa74e
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587AA72F: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587AA732: and eax, 7
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x07
        // 0x587AA735: cmp byte ptr [edi + 0x354], al
        __asm _emit 0x38
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA73B: jne 0x587aa74e
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587AA73D: push edi
        __asm _emit 0x57
        // 0x587AA73E: push esi
        __asm _emit 0x56
        // 0x587AA73F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AA741: call 0x587aa540
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA746: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AA748: jne 0x587aa641
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA74E: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x587AA751: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AA753: jne 0x587aa6c6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA759: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x587AA75C: pop edi
        __asm _emit 0x5F
        // 0x587AA75D: pop esi
        __asm _emit 0x5E
        // 0x587AA75E: pop ebp
        __asm _emit 0x5D
        // 0x587AA75F: pop ebx
        __asm _emit 0x5B
        // 0x587AA760: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AA763: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AA766: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AA76A: lea ecx, [ebx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x587AA76D: push edx
        __asm _emit 0x52
        // 0x587AA76E: mov dword ptr [ebx + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6B
        __asm _emit 0x40
        // 0x587AA771: call 0x58834b00
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xA3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587AA776: mov eax, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x587AA779: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587AA77D: cmp dword ptr [ebx + 0x1c], eax
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x587AA780: jbe 0x587aa787
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AA782: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x24
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AA787: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AA78B: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587AA78E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AA790: je 0x587aa796
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AA792: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587AA794: je 0x587aa79b
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AA796: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x24
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AA79B: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AA79F: cmp ebp, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587AA7A3: je 0x587aa873
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA7A9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AA7AB: jne 0x587aa807
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x587AA7AD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x24
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AA7B2: cmp ebp, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6F
        __asm _emit 0x10
        // 0x587AA7B5: jb 0x587aa7bc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AA7B7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x24
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AA7BC: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AA7BF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587AA7C1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587AA7C3: lea edi, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x587AA7C6: push edi
        __asm _emit 0x57
        // 0x587AA7C7: push eax
        __asm _emit 0x50
        // 0x587AA7C8: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AA7CA: call 0x587a7f10
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA7CF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AA7D1: je 0x587aa7f2
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587AA7D3: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AA7D7: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xA8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA7DC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587AA7DE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587AA7E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AA7E2: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x587AA7E5: push edi
        __asm _emit 0x57
        // 0x587AA7E6: push ecx
        __asm _emit 0x51
        // 0x587AA7E7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AA7E9: call 0x587a7f10
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA7EE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AA7F0: jne 0x587aa80b
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x587AA7F2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AA7F4: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AA7F8: push edx
        __asm _emit 0x52
        // 0x587AA7F9: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AA7FD: call 0x587a8520
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA802: jmp 0x587aa776
        __asm _emit 0xE9
        __asm _emit 0x6F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA807: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587AA809: jmp 0x587aa7b2
        __asm _emit 0xEB
        __asm _emit 0xA7
        // 0x587AA80B: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AA80F: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xA8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA814: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AA818: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587AA81A: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0xA8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA81F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587AA821: movzx edx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x11
        // 0x587AA824: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587AA826: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587AA829: push edx
        __asm _emit 0x52
        // 0x587AA82A: push ecx
        __asm _emit 0x51
        // 0x587AA82B: push esi
        __asm _emit 0x56
        // 0x587AA82C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AA82E: call 0x587a90d0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA833: pop edi
        __asm _emit 0x5F
        // 0x587AA834: pop esi
        __asm _emit 0x5E
        // 0x587AA835: pop ebp
        __asm _emit 0x5D
        // 0x587AA836: pop ebx
        __asm _emit 0x5B
        // 0x587AA837: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AA83A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AA83D: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x587AA840: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AA845: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x587AA848: mov ecx, dword ptr [eax + edx*4 + 0x109f4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x90
        __asm _emit 0xF4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587AA84F: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587AA855: cmp ecx, dword ptr [esi + 0x60]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587AA858: jb 0x587aa641
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xE3
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA85E: jmp 0x587aa610
        __asm _emit 0xE9
        __asm _emit 0xAD
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA863: push esi
        __asm _emit 0x56
        // 0x587AA864: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AA866: call 0x587a8170
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA86B: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587AA86D: je 0x587aa610
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA873: pop edi
        __asm _emit 0x5F
        // 0x587AA874: pop esi
        __asm _emit 0x5E
        // 0x587AA875: pop ebp
        __asm _emit 0x5D
        // 0x587AA876: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA87B: pop ebx
        __asm _emit 0x5B
        // 0x587AA87C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AA87F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AA882: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587AA885: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587AA888: jne 0x587aa88e
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587AA88A: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x587AA88C: jmp 0x587aa899
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587AA88E: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587AA891: jne 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA897: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587AA899: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587AA89C: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587AA89E: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587AA8A1: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587AA8A4: jne 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA8AA: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AA8B0: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587AA8B6: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587AA8B9: push eax
        __asm _emit 0x50
        // 0x587AA8BA: call 0x587771e0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xC9
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587AA8BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AA8C1: je 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA8C7: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587AA8CA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AA8CC: je 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA8D2: mov edx, dword ptr [eax + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA8D8: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587AA8DE: cmp edx, dword ptr [esi + 0x60]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x587AA8E1: ja 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA8E7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AA8E9: jne 0x587aa610
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA8EF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587AA8F1: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xBD
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587AA8F6: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587AA8FB: jne 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA901: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AA903: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AA905: push esi
        __asm _emit 0x56
        // 0x587AA906: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AA908: call 0x587a90d0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA90D: pop edi
        __asm _emit 0x5F
        // 0x587AA90E: pop esi
        __asm _emit 0x5E
        // 0x587AA90F: pop ebp
        __asm _emit 0x5D
        // 0x587AA910: pop ebx
        __asm _emit 0x5B
        // 0x587AA911: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AA914: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AA917: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AA91C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587AA91F: mov ebp, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x60
        // 0x587AA922: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587AA924: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AA926: je 0x587aa951
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587AA928: mov edi, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x587AA92B: jmp 0x587aa930
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587AA930..0x587AAA00; 208 mapped bytes.
extern "C" __declspec(naked) void FUN_587aa5d0_segment_01() {
    __asm {
        // 0x587AA930: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587AA933: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587AA935: ja 0x587aa94a
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x587AA937: cmp ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587AA93A: ja 0x587aa94a
        __asm _emit 0x77
        __asm _emit 0x0E
        // 0x587AA93C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587AA93F: cmp dword ptr [esi + 0x68], ecx
        __asm _emit 0x39
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587AA942: ja 0x587aa94a
        __asm _emit 0x77
        __asm _emit 0x06
        // 0x587AA944: cmp ecx, dword ptr [esi + 0x70]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587AA947: ja 0x587aa94a
        __asm _emit 0x77
        __asm _emit 0x01
        // 0x587AA949: inc edx
        __asm _emit 0x42
        // 0x587AA94A: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x78
        // 0x587AA94D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AA94F: jne 0x587aa930
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587AA951: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x587AA953: jb 0x587aa9f4
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA959: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AA95B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AA95D: push esi
        __asm _emit 0x56
        // 0x587AA95E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AA960: call 0x587a90d0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA965: pop edi
        __asm _emit 0x5F
        // 0x587AA966: pop esi
        __asm _emit 0x5E
        // 0x587AA967: pop ebp
        __asm _emit 0x5D
        // 0x587AA968: pop ebx
        __asm _emit 0x5B
        // 0x587AA969: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AA96C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AA96F: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587AA972: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587AA974: je 0x587aa9f4
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x587AA976: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AA97C: mov eax, dword ptr [edx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587AA982: add eax, dword ptr [edx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587AA988: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587AA98A: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AA990: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AA995: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x587AA998: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587AA99A: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x587AA99C: cmp edx, dword ptr [esi + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x587AA99F: jmp 0x587aa8fb
        __asm _emit 0xE9
        __asm _emit 0x57
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA9A4: cmp dword ptr [esi + 0xac], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA9AB: jne 0x587aa9c8
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587AA9AD: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587AA9B0: pop edi
        __asm _emit 0x5F
        // 0x587AA9B1: mov dword ptr [esi + 0xac], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA9B7: mov dword ptr [esi + 0xb0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA9BD: pop esi
        __asm _emit 0x5E
        // 0x587AA9BE: pop ebp
        __asm _emit 0x5D
        // 0x587AA9BF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AA9C1: pop ebx
        __asm _emit 0x5B
        // 0x587AA9C2: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AA9C5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AA9C8: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x587AA9CB: cmp edx, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA9D1: jmp 0x587aa8fb
        __asm _emit 0xE9
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA9D6: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587AA9D9: mov edi, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x587AA9DC: push eax
        __asm _emit 0x50
        // 0x587AA9DD: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587AA9E0: push eax
        __asm _emit 0x50
        // 0x587AA9E1: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587AA9E3: call 0x587a8b70
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA9E8: cmp dword ptr [eax + 0xb0], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA9EE: je 0x587aa610
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA9F4: pop edi
        __asm _emit 0x5F
        // 0x587AA9F5: pop esi
        __asm _emit 0x5E
        // 0x587AA9F6: pop ebp
        __asm _emit 0x5D
        // 0x587AA9F7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AA9F9: pop ebx
        __asm _emit 0x5B
        // 0x587AA9FA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AA9FD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
