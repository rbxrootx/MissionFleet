// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EA580 .. +0x1DF bytes.
// Source symbol alias: FUN_588ea580.
extern "C" __declspec(naked) void FUN_588ea580() {
    __asm {
        // 0x588EA580: push ecx
        __asm _emit 0x51
        // 0x588EA581: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588EA585: push ebx
        __asm _emit 0x53
        // 0x588EA586: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588EA588: dec dword ptr [ebx + eax*4 + 8]
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0x83
        __asm _emit 0x08
        // 0x588EA58C: push ebp
        __asm _emit 0x55
        // 0x588EA58D: push esi
        __asm _emit 0x56
        // 0x588EA58E: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588EA591: lea esi, [ebx + eax*8 + 0x1820]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0xC3
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA598: push edi
        __asm _emit 0x57
        // 0x588EA599: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x588EA59C: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588EA59F: jbe 0x588ea5a6
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EA5A1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA5A6: mov ebp, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x2E
        // 0x588EA5A8: jmp 0x588ea5b0
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588EA5AA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA5B0: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588EA5B3: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EA5B7: cmp dword ptr [esi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588EA5BA: jbe 0x588ea5c1
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EA5BC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA5C1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EA5C3: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588EA5C5: je 0x588ea5cb
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588EA5C7: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588EA5C9: je 0x588ea5d0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EA5CB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA5D0: cmp edi, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EA5D4: je 0x588ea64b
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x588EA5D6: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588EA5D8: jne 0x588ea60d
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588EA5DA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA5DF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EA5E1: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588EA5E4: jb 0x588ea5eb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EA5E6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA5EB: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EA5EF: cmp dword ptr [edi], ecx
        __asm _emit 0x39
        __asm _emit 0x0F
        // 0x588EA5F1: je 0x588ea617
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588EA5F3: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588EA5F5: jne 0x588ea612
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588EA5F7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA5FC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EA5FE: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588EA601: jb 0x588ea608
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EA603: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA608: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588EA60B: jmp 0x588ea5b0
        __asm _emit 0xEB
        __asm _emit 0xA3
        // 0x588EA60D: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588EA610: jmp 0x588ea5e1
        __asm _emit 0xEB
        __asm _emit 0xCF
        // 0x588EA612: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588EA615: jmp 0x588ea5fe
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x588EA617: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588EA61A: lea ecx, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588EA61D: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588EA61F: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588EA622: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EA624: jle 0x588ea636
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588EA626: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588EA628: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588EA62A: push eax
        __asm _emit 0x50
        // 0x588EA62B: push ecx
        __asm _emit 0x51
        // 0x588EA62C: push eax
        __asm _emit 0x50
        // 0x588EA62D: push edi
        __asm _emit 0x57
        // 0x588EA62E: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA633: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EA636: add dword ptr [esi + 0x10], -4
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0xFC
        // 0x588EA63A: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588EA63D: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x588EA640: ja 0x588ea646
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x588EA642: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588EA644: jbe 0x588ea64b
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EA646: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA64B: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EA64F: cmp dword ptr [ebx + esi*4 + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588EA654: jne 0x588ea75d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA65A: mov ecx, dword ptr [ebx + esi*4 + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA661: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EA663: je 0x588ea678
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588EA665: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588EA667: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588EA669: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EA66B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EA66D: mov dword ptr [ebx + esi*4 + 0x808], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA678: mov ecx, dword ptr [ebx + esi*4 + 0x1008]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA67F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EA681: je 0x588ea696
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588EA683: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588EA685: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588EA687: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EA689: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EA68B: mov dword ptr [ebx + esi*4 + 0x1008], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA696: mov esi, dword ptr [ebx + 0x1814]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA69C: cmp esi, dword ptr [ebx + 0x1818]
        __asm _emit 0x3B
        __asm _emit 0xB3
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA6A2: jbe 0x588ea6a9
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EA6A4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA6A9: mov edi, dword ptr [ebx + 0x1808]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA6AF: nop
        __asm _emit 0x90
        // 0x588EA6B0: mov ebp, dword ptr [ebx + 0x1818]
        __asm _emit 0x8B
        __asm _emit 0xAB
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA6B6: cmp dword ptr [ebx + 0x1814], ebp
        __asm _emit 0x39
        __asm _emit 0xAB
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA6BC: jbe 0x588ea6c3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EA6BE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA6C3: mov eax, dword ptr [ebx + 0x1808]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA6C9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588EA6CB: je 0x588ea6d1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588EA6CD: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588EA6CF: je 0x588ea6d6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EA6D1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA6D6: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588EA6D8: je 0x588ea75d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA6DE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588EA6E0: jne 0x588ea715
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588EA6E2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA6E7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EA6E9: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x588EA6EC: jb 0x588ea6f3
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EA6EE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA6F3: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EA6F7: cmp dword ptr [esi], ecx
        __asm _emit 0x39
        __asm _emit 0x0E
        // 0x588EA6F9: je 0x588ea71d
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588EA6FB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588EA6FD: jne 0x588ea719
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588EA6FF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA704: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EA706: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x588EA709: jb 0x588ea710
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EA70B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA710: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588EA713: jmp 0x588ea6b0
        __asm _emit 0xEB
        __asm _emit 0x9B
        // 0x588EA715: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588EA717: jmp 0x588ea6e9
        __asm _emit 0xEB
        __asm _emit 0xD0
        // 0x588EA719: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588EA71B: jmp 0x588ea706
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x588EA71D: mov eax, dword ptr [ebx + 0x1818]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA723: lea ecx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588EA726: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588EA728: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588EA72B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EA72D: jle 0x588ea73f
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588EA72F: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588EA731: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588EA733: push eax
        __asm _emit 0x50
        // 0x588EA734: push ecx
        __asm _emit 0x51
        // 0x588EA735: push eax
        __asm _emit 0x50
        // 0x588EA736: push esi
        __asm _emit 0x56
        // 0x588EA737: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA73C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EA73F: add dword ptr [ebx + 0x1818], -4
        __asm _emit 0x83
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFC
        // 0x588EA746: mov eax, dword ptr [ebx + 0x1818]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA74C: cmp dword ptr [ebx + 0x1814], esi
        __asm _emit 0x39
        __asm _emit 0xB3
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA752: ja 0x588ea758
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x588EA754: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588EA756: jbe 0x588ea75d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EA758: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA75D: pop edi
        __asm _emit 0x5F
        // 0x588EA75E: pop esi
        __asm _emit 0x5E
    }
}
