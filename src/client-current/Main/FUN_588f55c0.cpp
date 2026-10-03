// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F55C0 .. +0xB2F bytes.
extern "C" __declspec(naked) void FUN_588f55c0() {
    __asm {
        // 0x588F55C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F55C2: push 0x58989f43
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x9F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F55C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F55CD: push eax
        __asm _emit 0x50
        // 0x588F55CE: sub esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x2C
        // 0x588F55D1: push ebx
        __asm _emit 0x53
        // 0x588F55D2: push ebp
        __asm _emit 0x55
        // 0x588F55D3: push esi
        __asm _emit 0x56
        // 0x588F55D4: push edi
        __asm _emit 0x57
        // 0x588F55D5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F55DA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F55DC: push eax
        __asm _emit 0x50
        // 0x588F55DD: lea eax, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588F55E1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F55E7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F55E9: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F55EF: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x588F55F2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F55F4: jne 0x588f5647
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x588F55F6: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F55FB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F55FD: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5602: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5607: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F560E: jne 0x588f5629
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x588F5610: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588F5618: jne 0x588f5629
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588F561A: mov ecx, dword ptr [eax + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588F5620: push esi
        __asm _emit 0x56
        // 0x588F5621: add ecx, 0x74
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x74
        // 0x588F5624: call 0x588f5120
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5629: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F562B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F562D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F562F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F5631: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F5633: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588F5637: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F563E: pop ecx
        __asm _emit 0x59
        // 0x588F563F: pop edi
        __asm _emit 0x5F
        // 0x588F5640: pop esi
        __asm _emit 0x5E
        // 0x588F5641: pop ebp
        __asm _emit 0x5D
        // 0x588F5642: pop ebx
        __asm _emit 0x5B
        // 0x588F5643: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x588F5646: ret
        __asm _emit 0xC3
        // 0x588F5647: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F564C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F564E: jne 0x588f60db
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5654: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588F5658: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588F565A: je 0x588f60a5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5660: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5666: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F5668: jne 0x588f570e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F566E: mov eax, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5674: cmp eax, dword ptr [esi + 0x154]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F567A: jne 0x588f5700
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5680: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x588F5682: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5687: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F568A: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F568E: mov dword ptr [esp + 0x48], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5696: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F5698: je 0x588f56f7
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x588F569A: mov edx, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F56A0: cmp dword ptr [edx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F56A6: jle 0x588f56bc
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588F56A8: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F56AF: je 0x588f56bc
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F56B1: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F56B7: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x40
        // 0x588F56BA: jmp 0x588f56be
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F56BC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F56BE: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F56C4: mov edi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F56CA: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F56D0: push ebx
        __asm _emit 0x53
        // 0x588F56D1: push 0x1b58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F56D6: push ecx
        __asm _emit 0x51
        // 0x588F56D7: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F56DD: push ecx
        __asm _emit 0x51
        // 0x588F56DE: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F56E4: push edx
        __asm _emit 0x52
        // 0x588F56E5: mov edx, dword ptr [esi + 0x408]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F56EB: push edi
        __asm _emit 0x57
        // 0x588F56EC: push edx
        __asm _emit 0x52
        // 0x588F56ED: push ecx
        __asm _emit 0x51
        // 0x588F56EE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F56F0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F56F2: call 0x587b7260
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x1B
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F56F7: mov dword ptr [esp + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588F56FB: jmp 0x588f609f
        __asm _emit 0xE9
        __asm _emit 0x9F
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5700: cmp eax, dword ptr [esi + 0x158]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5706: jl 0x588f609f
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F570C: jmp 0x588f5713
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588F570E: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588F5711: jne 0x588f5735
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x588F5713: mov ecx, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5719: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F571E: mov dword ptr [esi + 0x13c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5724: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5729: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F572B: call 0x588f4ac0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5730: jmp 0x588f609f
        __asm _emit 0xE9
        __asm _emit 0x6A
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5735: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F5737: jne 0x588f607c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3F
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F573D: mov eax, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5743: add dword ptr [eax + 0x50], edi
        __asm _emit 0x01
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x588F5746: mov eax, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F574C: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588F574F: cmp ecx, dword ptr [esi + 0x160]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5755: jne 0x588f5760
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588F5757: mov ecx, dword ptr [esi + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F575D: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588F5760: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5766: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588F576B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F576D: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5773: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x588F5776: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F5778: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F577B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F577D: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F577F: push ecx
        __asm _emit 0x51
        // 0x588F5780: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5786: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588F578B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F578D: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588F5790: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F5792: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F5795: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F5797: add eax, dword ptr [esi + 0x16c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F579D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F579F: push eax
        __asm _emit 0x50
        // 0x588F57A0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F57A5: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F57AB: mov edx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F57B1: mov eax, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F57B7: add dword ptr [esi + 0x174], ecx
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F57BD: add dword ptr [esi + 0x178], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F57C3: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588F57C8: jns 0x588f57cf
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x588F57CA: dec eax
        __asm _emit 0x48
        // 0x588F57CB: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x588F57CE: inc eax
        __asm _emit 0x40
        // 0x588F57CF: je 0x588f57dd
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588F57D1: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588F57D6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F57D8: call 0x588f49c0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F57DD: mov ebp, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x588F57E0: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F57E6: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588F57E9: mov ebx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F57EF: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x588F57F1: imul ecx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC9
        // 0x588F57F4: imul ecx, ecx, 0x89
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F57FA: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x588F57FC: lea edi, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588F57FF: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588F5804: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F5806: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588F5808: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x588F580B: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588F580E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F5810: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F5813: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F5815: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588F5817: cmp dword ptr [esi + 0x144], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F581E: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F5822: jne 0x588f5836
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588F5824: cmp eax, dword ptr [esi + 0x180]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F582A: jbe 0x588f5836
        __asm _emit 0x76
        __asm _emit 0x0A
        // 0x588F582C: mov dword ptr [esi + 0x144], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588F5836: cmp eax, dword ptr [esi + 0x17c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F583C: jb 0x588f5958
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5842: mov ecx, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5848: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F584D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F584F: mov dword ptr [esi + 0x13c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5855: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xBD
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F585A: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F585C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x73
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5861: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F5864: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F5868: mov dword ptr [esp + 0x48], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5870: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F5872: je 0x588f58b9
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588F5874: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F587A: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5881: jle 0x588f5894
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588F5883: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F588A: je 0x588f5894
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588F588C: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5892: jmp 0x588f5896
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5894: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F5896: mov ebp, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x588F5899: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F589F: mov edx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F58A5: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F58AA: push ebp
        __asm _emit 0x55
        // 0x588F58AB: mov ebp, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x2F
        // 0x588F58AD: push ebp
        __asm _emit 0x55
        // 0x588F58AE: push ecx
        __asm _emit 0x51
        // 0x588F58AF: push edx
        __asm _emit 0x52
        // 0x588F58B0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F58B2: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F58B7: jmp 0x588f58bb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F58B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F58BB: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x588F58BE: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F58C3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F58C5: mov dword ptr [esp + 0x4c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588F58C9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F58CE: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x588F58D0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x73
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F58D5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F58D8: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F58DC: mov dword ptr [esp + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588F58E0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F58E2: je 0x588f593e
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x588F58E4: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F58EA: cmp dword ptr [ecx + 0x160], 0x1c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        // 0x588F58F1: jle 0x588f590a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F58F3: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F58FA: je 0x588f590a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F58FC: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5902: add edx, 0x700
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5908: jmp 0x588f590c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F590A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F590C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5912: mov ebx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5918: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F591B: push ebp
        __asm _emit 0x55
        // 0x588F591C: push 0x1b58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5921: push ecx
        __asm _emit 0x51
        // 0x588F5922: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F5924: push ecx
        __asm _emit 0x51
        // 0x588F5925: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F592B: push edx
        __asm _emit 0x52
        // 0x588F592C: mov edx, dword ptr [esi + 0x404]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5932: push ebx
        __asm _emit 0x53
        // 0x588F5933: push edx
        __asm _emit 0x52
        // 0x588F5934: push ecx
        __asm _emit 0x51
        // 0x588F5935: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F5937: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F5939: call 0x587b7260
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x19
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F593E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F5940: mov dword ptr [esp + 0x48], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588F5944: mov dword ptr [esi + 0x3f8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F594E: call 0x588f4db0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5953: jmp 0x588f609f
        __asm _emit 0xE9
        __asm _emit 0x47
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5958: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F595E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588F5960: mov ecx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5966: push ebp
        __asm _emit 0x55
        // 0x588F5967: push eax
        __asm _emit 0x50
        // 0x588F5968: call 0x587c3d60
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xE3
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F596D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F596F: je 0x588f5e8a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5975: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588F5978: jne 0x588f5e8a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F597E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F5980: call 0x588f4b10
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5985: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588F5987: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588F5989: je 0x588f609f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F598F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F5991: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F5993: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xBC
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F5998: mov ecx, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F599E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F59A0: mov dword ptr [esi + 0x13c], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F59AA: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xBC
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F59AF: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x588F59B2: je 0x588f5ac2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F59B8: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x588F59BB: je 0x588f5ac2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F59C1: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x588F59C4: jne 0x588f609f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F59CA: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F59CC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F59D1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F59D4: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F59D8: mov dword ptr [esp + 0x48], 7
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F59E0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F59E2: je 0x588f5a29
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588F59E4: mov edx, dword ptr [0x58a246f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F59EA: cmp dword ptr [edx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F59F1: jle 0x588f5a04
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588F59F3: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F59FA: je 0x588f5a04
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588F59FC: mov ebx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x9A
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5A02: jmp 0x588f5a06
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5A04: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F5A06: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5A0C: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5A12: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F5A15: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5A1A: push ecx
        __asm _emit 0x51
        // 0x588F5A1B: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F5A1D: push ecx
        __asm _emit 0x51
        // 0x588F5A1E: push ebx
        __asm _emit 0x53
        // 0x588F5A1F: push edx
        __asm _emit 0x52
        // 0x588F5A20: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F5A22: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5A27: jmp 0x588f5a2b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5A29: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F5A2B: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x588F5A2E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5A33: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F5A35: mov dword ptr [esp + 0x4c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588F5A39: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5A3E: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x588F5A40: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5A45: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F5A48: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F5A4C: mov dword ptr [esp + 0x48], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5A54: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F5A56: je 0x588f5ab2
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x588F5A58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5A5E: cmp dword ptr [ecx + 0x160], 0x1c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        // 0x588F5A65: jle 0x588f5a7e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F5A67: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5A6E: je 0x588f5a7e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F5A70: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5A76: add edx, 0x700
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5A7C: jmp 0x588f5a80
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5A7E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F5A80: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5A86: mov ebx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5A8C: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F5A8F: push ebp
        __asm _emit 0x55
        // 0x588F5A90: push 0x1b58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5A95: push ecx
        __asm _emit 0x51
        // 0x588F5A96: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F5A98: push ecx
        __asm _emit 0x51
        // 0x588F5A99: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5A9F: push edx
        __asm _emit 0x52
        // 0x588F5AA0: mov edx, dword ptr [esi + 0x404]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5AA6: push ebx
        __asm _emit 0x53
        // 0x588F5AA7: push edx
        __asm _emit 0x52
        // 0x588F5AA8: push ecx
        __asm _emit 0x51
        // 0x588F5AA9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F5AAB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F5AAD: call 0x587b7260
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x17
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F5AB2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F5AB4: mov dword ptr [esp + 0x48], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588F5AB8: call 0x588f4db0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5ABD: jmp 0x588f609f
        __asm _emit 0xE9
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5AC2: cmp dword ptr [esi + 0x144], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5AC9: je 0x588f5c31
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5ACF: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x588F5AD2: je 0x588f5b3c
        __asm _emit 0x74
        __asm _emit 0x68
        // 0x588F5AD4: cmp dword ptr [0x589c9040], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588F5ADB: je 0x588f5b3c
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x588F5ADD: mov ax, word ptr [esi + 0x11a]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5AE4: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5AE9: xor ax, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588F5AEC: mov ecx, 0xfa0
        __asm _emit 0xB9
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5AF1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588F5AF4: jbe 0x588f5b19
        __asm _emit 0x76
        __asm _emit 0x23
        // 0x588F5AF6: mov edx, 0x1f40
        __asm _emit 0xBA
        __asm _emit 0x40
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5AFB: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588F5AFE: jbe 0x588f5b12
        __asm _emit 0x76
        __asm _emit 0x12
        // 0x588F5B00: mov ecx, 0x2ee0
        __asm _emit 0xB9
        __asm _emit 0xE0
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5B05: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588F5B08: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x588F5B0A: and eax, 8
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x588F5B0D: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588F5B10: jmp 0x588f5b1e
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588F5B12: mov eax, 0x18
        __asm _emit 0xB8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5B17: jmp 0x588f5b1e
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588F5B19: mov eax, 0x10
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5B1E: push 0x1388
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5B23: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x588F5B25: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588F5B27: push eax
        __asm _emit 0x50
        // 0x588F5B28: cdq
        __asm _emit 0x99
        // 0x588F5B29: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F5B2B: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588F5B2E: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588F5B30: push eax
        __asm _emit 0x50
        // 0x588F5B31: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588F5B33: push edx
        __asm _emit 0x52
        // 0x588F5B34: push eax
        __asm _emit 0x50
        // 0x588F5B35: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F5B37: call 0x588f5040
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5B3C: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F5B3E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x71
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5B43: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F5B46: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F5B4A: mov dword ptr [esp + 0x48], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5B52: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F5B54: je 0x588f5b9b
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588F5B56: mov edx, dword ptr [0x58a246f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5B5C: cmp dword ptr [edx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5B63: jle 0x588f5b76
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588F5B65: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5B6C: je 0x588f5b76
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588F5B6E: mov ebx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x9A
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5B74: jmp 0x588f5b78
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5B76: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F5B78: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5B7E: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5B84: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F5B87: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5B8C: push ecx
        __asm _emit 0x51
        // 0x588F5B8D: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F5B8F: push ecx
        __asm _emit 0x51
        // 0x588F5B90: push ebx
        __asm _emit 0x53
        // 0x588F5B91: push edx
        __asm _emit 0x52
        // 0x588F5B92: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F5B94: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5B99: jmp 0x588f5b9d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5B9B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F5B9D: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x588F5BA0: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5BA5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F5BA7: mov dword ptr [esp + 0x4c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588F5BAB: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5BB0: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x588F5BB2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5BB7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F5BBA: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F5BBE: mov dword ptr [esp + 0x48], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5BC6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F5BC8: je 0x588f5c24
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x588F5BCA: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5BD0: cmp dword ptr [ecx + 0x160], 0x1c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        // 0x588F5BD7: jle 0x588f5bf0
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F5BD9: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5BE0: je 0x588f5bf0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F5BE2: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5BE8: add edx, 0x700
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5BEE: jmp 0x588f5bf2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5BF0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F5BF2: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5BF8: mov ebx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5BFE: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F5C01: push ebp
        __asm _emit 0x55
        // 0x588F5C02: push 0x1b58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5C07: push ecx
        __asm _emit 0x51
        // 0x588F5C08: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F5C0A: push ecx
        __asm _emit 0x51
        // 0x588F5C0B: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5C11: push edx
        __asm _emit 0x52
        // 0x588F5C12: mov edx, dword ptr [esi + 0x404]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5C18: push ebx
        __asm _emit 0x53
        // 0x588F5C19: push edx
        __asm _emit 0x52
        // 0x588F5C1A: push ecx
        __asm _emit 0x51
        // 0x588F5C1B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F5C1D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F5C1F: call 0x587b7260
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x16
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F5C24: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F5C26: mov dword ptr [esp + 0x48], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588F5C2A: call 0x588f4db0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5C2F: jmp 0x588f5ca6
        __asm _emit 0xEB
        __asm _emit 0x75
        // 0x588F5C31: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5C36: mov word ptr [esi + 0x11a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5C3D: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588F5C44: je 0x588f5ca6
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x588F5C46: mov ebp, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5C4C: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5C51: mov ebx, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5C57: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x588F5C5A: sub eax, dword ptr [ebp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x588F5C5D: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5C63: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588F5C65: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5C6B: cdq
        __asm _emit 0x99
        // 0x588F5C6C: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588F5C6E: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F5C72: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F5C74: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F5C76: mov eax, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x588F5C79: sub eax, dword ptr [ebp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588F5C7C: sub ecx, dword ptr [ebx + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x50
        // 0x588F5C7F: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588F5C81: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5C87: cdq
        __asm _emit 0x99
        // 0x588F5C88: idiv dword ptr [esp + 0x14]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F5C8C: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5C92: push edx
        __asm _emit 0x52
        // 0x588F5C93: add eax, dword ptr [ebx + 0x54]
        __asm _emit 0x03
        __asm _emit 0x43
        __asm _emit 0x54
        // 0x588F5C96: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588F5C99: push eax
        __asm _emit 0x50
        // 0x588F5C9A: push ecx
        __asm _emit 0x51
        // 0x588F5C9B: mov ecx, dword ptr [esi + 0x420]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5CA1: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x17
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F5CA6: mov eax, dword ptr [esi + 0x3f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5CAC: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F5CAF: sub ecx, dword ptr [eax + 8]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588F5CB2: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x588F5CB4: sub ebx, dword ptr [eax + 4]
        __asm _emit 0x2B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588F5CB7: imul ecx, ecx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x75
        // 0x588F5CBA: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588F5CBF: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F5CC1: movzx ecx, word ptr [esi + 0x11a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5CC8: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588F5CCB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F5CCD: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588F5CD0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588F5CD2: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F5CD4: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5CDA: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x588F5CDD: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588F5CE0: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588F5CE2: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x588F5CE5: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F5CE9: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588F5CEB: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F5CEF: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F5CF3: fstp qword ptr [esp + 0x18]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F5CF7: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F5CFB: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5D00: fadd qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F5D06: mov ecx, dword ptr [esi + 0x418]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5D0C: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F5D10: fdivr qword ptr [esp + 0x18]
        __asm _emit 0xDC
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F5D14: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F5D19: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5D1E: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F5D22: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5D27: mov ebx, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5D2D: add ebx, dword ptr [eax + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x98
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5D33: push ecx
        __asm _emit 0x51
        // 0x588F5D34: mov ecx, dword ptr [esi + 0x3fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5D3A: push edi
        __asm _emit 0x57
        // 0x588F5D3B: fldcw word ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F5D3F: fistp qword ptr [esp + 0x20]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F5D43: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F5D47: fldcw word ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F5D4B: call 0x588d6670
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588F5D50: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F5D54: push eax
        __asm _emit 0x50
        // 0x588F5D55: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F5D59: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F5D5B: jge 0x588f5d63
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588F5D5D: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F5D63: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5D68: fimul dword ptr [esi + 0x418]
        __asm _emit 0xDA
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5D6E: fdiv qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F5D74: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5D79: push eax
        __asm _emit 0x50
        // 0x588F5D7A: movzx eax, word ptr [esi + 0x11c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5D81: mov ecx, dword ptr [esi + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5D87: mov edx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5D8D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F5D8F: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5D94: push eax
        __asm _emit 0x50
        // 0x588F5D95: mov eax, dword ptr [esi + 0x3f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5D9B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F5D9D: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588F5D9F: push ebp
        __asm _emit 0x55
        // 0x588F5DA0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F5DA2: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x588F5DA4: push ecx
        __asm _emit 0x51
        // 0x588F5DA5: mov ecx, dword ptr [esi + 0x3fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5DAB: push edx
        __asm _emit 0x52
        // 0x588F5DAC: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588F5DAF: push eax
        __asm _emit 0x50
        // 0x588F5DB0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588F5DB2: push ecx
        __asm _emit 0x51
        // 0x588F5DB3: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5DB9: push edx
        __asm _emit 0x52
        // 0x588F5DBA: push eax
        __asm _emit 0x50
        // 0x588F5DBB: push ebx
        __asm _emit 0x53
        // 0x588F5DBC: call 0x587efd60
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x9F
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588F5DC1: mov eax, dword ptr [esi + 0x3fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5DC7: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5DCD: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588F5DD0: jne 0x588f609f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5DD6: cmp dword ptr [esi + 0x400], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5DDD: je 0x588f609f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5DE3: mov edx, dword ptr [esi + 0x3f8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5DE9: mov al, byte ptr [eax + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5DEF: cmp al, byte ptr [edx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5DF5: je 0x588f609f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5DFB: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5E01: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x588F5E03: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x588F5E05: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x588F5E07: call 0x588ebeb0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5E0C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F5E0E: jne 0x588f609f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E14: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5E19: mov edi, 0x21
        __asm _emit 0xBF
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E1E: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E24: jle 0x588f5e3d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588F5E26: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E2D: je 0x588f5e3d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F5E2F: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E35: mov ecx, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E3B: jmp 0x588f5e3f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5E3D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F5E3F: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5E45: push edx
        __asm _emit 0x52
        // 0x588F5E46: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5E4B: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5E50: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E56: jle 0x588f5e7b
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588F5E58: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E5F: je 0x588f5e7b
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588F5E61: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E67: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E6D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588F5E6F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588F5E72: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F5E74: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F5E76: jmp 0x588f609f
        __asm _emit 0xE9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E7B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F5E7D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588F5E7F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588F5E82: push ecx
        __asm _emit 0x51
        // 0x588F5E83: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F5E85: jmp 0x588f609f
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E8A: inc dword ptr [esi + 0x134]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E90: cmp dword ptr [esi + 0x134], 0x12
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        // 0x588F5E97: jle 0x588f609f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5E9D: mov ecx, dword ptr [esi + 0x3f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5EA3: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588F5EA5: push ebp
        __asm _emit 0x55
        // 0x588F5EA6: mov dword ptr [esi + 0x13c], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5EB0: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xB7
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F5EB5: cmp dword ptr [esi + 0x144], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5EBB: je 0x588f5fb1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5EC1: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F5EC3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x6D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5EC8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F5ECB: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F5ECF: mov dword ptr [esp + 0x48], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5ED7: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588F5ED9: je 0x588f5f1e
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x588F5EDB: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5EE1: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5EE7: jle 0x588f5ef9
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588F5EE9: cmp dword ptr [ecx + 0x190], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5EEF: je 0x588f5ef9
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588F5EF1: mov ebx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5EF7: jmp 0x588f5efb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5EF9: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F5EFB: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5F01: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5F07: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F5F0A: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5F0F: push ecx
        __asm _emit 0x51
        // 0x588F5F10: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F5F12: push ecx
        __asm _emit 0x51
        // 0x588F5F13: push ebx
        __asm _emit 0x53
        // 0x588F5F14: push edx
        __asm _emit 0x52
        // 0x588F5F15: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F5F17: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5F1C: jmp 0x588f5f20
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5F1E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F5F20: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5F25: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F5F27: mov dword ptr [esp + 0x4c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5F2F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5F34: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x588F5F36: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x6D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F5F3B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F5F3E: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F5F42: mov dword ptr [esp + 0x48], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5F4A: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588F5F4C: je 0x588f5fa7
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x588F5F4E: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5F54: cmp dword ptr [ecx + 0x160], 0x1c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        // 0x588F5F5B: jle 0x588f5f73
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588F5F5D: cmp dword ptr [ecx + 0x190], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5F63: je 0x588f5f73
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F5F65: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5F6B: add edx, 0x700
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5F71: jmp 0x588f5f75
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F5F73: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F5F75: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5F7B: mov ebx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5F81: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F5F84: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F5F86: push 0x1b58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5F8B: push ecx
        __asm _emit 0x51
        // 0x588F5F8C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F5F8E: push ecx
        __asm _emit 0x51
        // 0x588F5F8F: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5F95: push edx
        __asm _emit 0x52
        // 0x588F5F96: mov edx, dword ptr [esi + 0x404]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5F9C: push ebx
        __asm _emit 0x53
        // 0x588F5F9D: push edx
        __asm _emit 0x52
        // 0x588F5F9E: push ecx
        __asm _emit 0x51
        // 0x588F5F9F: push ebp
        __asm _emit 0x55
        // 0x588F5FA0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F5FA2: call 0x587b7260
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x12
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F5FA7: mov dword ptr [esp + 0x48], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F5FAF: jmp 0x588f601c
        __asm _emit 0xEB
        __asm _emit 0x6B
        // 0x588F5FB1: cmp dword ptr [0x589c8edc], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F5FB7: je 0x588f601c
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x588F5FB9: mov ebp, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5FBF: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x588F5FC2: sub eax, dword ptr [ebp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x588F5FC5: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F5FCB: mov ebx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x9A
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F5FD1: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5FD7: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588F5FD9: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5FDF: cdq
        __asm _emit 0x99
        // 0x588F5FE0: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588F5FE2: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F5FE6: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F5FE8: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F5FEA: mov eax, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x588F5FED: sub eax, dword ptr [ebp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588F5FF0: sub ecx, dword ptr [ebx + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x50
        // 0x588F5FF3: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588F5FF5: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F5FFB: cdq
        __asm _emit 0x99
        // 0x588F5FFC: idiv dword ptr [esp + 0x20]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F6000: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F6006: push edx
        __asm _emit 0x52
        // 0x588F6007: add eax, dword ptr [ebx + 0x54]
        __asm _emit 0x03
        __asm _emit 0x43
        __asm _emit 0x54
        // 0x588F600A: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588F600D: push eax
        __asm _emit 0x50
        // 0x588F600E: push ecx
        __asm _emit 0x51
        // 0x588F600F: mov ecx, dword ptr [esi + 0x420]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6015: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x13
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F601A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588F601C: movzx eax, word ptr [esi + 0x11a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6023: mov edx, dword ptr [esi + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6029: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F602E: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F6032: push ecx
        __asm _emit 0x51
        // 0x588F6033: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588F6035: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F6039: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588F603C: push edx
        __asm _emit 0x52
        // 0x588F603D: mov edx, dword ptr [esi + 0x3fc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6043: push eax
        __asm _emit 0x50
        // 0x588F6044: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F6049: push ecx
        __asm _emit 0x51
        // 0x588F604A: mov dword ptr [esp + 0x34], 0xc
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6052: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F6056: mov dword ptr [esp + 0x40], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F605E: mov dword ptr [esp + 0x44], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588F6062: mov dword ptr [esp + 0x48], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588F6066: mov dword ptr [esp + 0x4c], 0x320
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F606E: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F6074: push edx
        __asm _emit 0x52
        // 0x588F6075: call 0x587c4450
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xE3
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588F607A: jmp 0x588f609f
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x588F607C: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588F607F: jne 0x588f609f
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x588F6081: cmp dword ptr [esi + 0x19c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6088: jge 0x588f6098
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x588F608A: mov dword ptr [esi + 0x140], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6090: mov dword ptr [esi + 0x13c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6096: jmp 0x588f609f
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x588F6098: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F609A: call 0x588f49c0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F609F: inc dword ptr [esi + 0x150]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F60A5: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588F60A8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F60AA: je 0x588f60db
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588F60AC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588F60B0: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588F60B3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588F60B5: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588F60B8: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588F60BB: je 0x588f60d9
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588F60BD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F60BF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F60C1: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588F60C3: jne 0x588f60b0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588F60C5: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588F60C9: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F60D0: pop ecx
        __asm _emit 0x59
        // 0x588F60D1: pop edi
        __asm _emit 0x5F
        // 0x588F60D2: pop esi
        __asm _emit 0x5E
        // 0x588F60D3: pop ebp
        __asm _emit 0x5D
        // 0x588F60D4: pop ebx
        __asm _emit 0x5B
        // 0x588F60D5: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x588F60D8: ret
        __asm _emit 0xC3
        // 0x588F60D9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F60DB: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588F60DF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F60E6: pop ecx
        __asm _emit 0x59
        // 0x588F60E7: pop edi
        __asm _emit 0x5F
        // 0x588F60E8: pop esi
        __asm _emit 0x5E
        // 0x588F60E9: pop ebp
        __asm _emit 0x5D
        // 0x588F60EA: pop ebx
        __asm _emit 0x5B
        // 0x588F60EB: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x588F60EE: ret
        __asm _emit 0xC3
    }
}
