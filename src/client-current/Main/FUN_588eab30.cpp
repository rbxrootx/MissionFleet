// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EAB30 .. +0x2A5 bytes.
// Source symbol alias: FUN_588eab30.
extern "C" __declspec(naked) void FUN_588eab30() {
    __asm {
        // 0x588EAB30: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588EAB33: push ebx
        __asm _emit 0x53
        // 0x588EAB34: push ebp
        __asm _emit 0x55
        // 0x588EAB35: push esi
        __asm _emit 0x56
        // 0x588EAB36: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EAB38: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588EAB3A: push edi
        __asm _emit 0x57
        // 0x588EAB3B: cmp dword ptr [esi + 0x4828], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB41: je 0x588eacf0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB47: mov eax, dword ptr [esi + 0x482c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB4D: cmp dword ptr [esi + eax*4 + 8], ebp
        __asm _emit 0x39
        __asm _emit 0x6C
        __asm _emit 0x86
        __asm _emit 0x08
        // 0x588EAB51: je 0x588eac71
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB57: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588EAB5A: mov ebp, dword ptr [esi + eax*8 + 0x182c]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0xC6
        __asm _emit 0x2C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB61: cmp ebp, dword ptr [esi + eax*8 + 0x1830]
        __asm _emit 0x3B
        __asm _emit 0xAC
        __asm _emit 0xC6
        __asm _emit 0x30
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB68: lea edi, [esi + eax*8 + 0x1820]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0xC6
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB6F: jbe 0x588eab76
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EAB71: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAB76: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x588EAB78: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EAB7C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588EAB80: mov eax, dword ptr [esi + 0x482c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB86: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x588EAB89: mov ebp, dword ptr [esi + ecx*8 + 0x1830]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0xCE
        __asm _emit 0x30
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB90: cmp dword ptr [esi + ecx*8 + 0x182c], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0xCE
        __asm _emit 0x2C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB97: lea edi, [esi + ecx*8 + 0x1820]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0xCE
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAB9E: jbe 0x588eaba5
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EABA0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EABA5: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x588EABA7: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588EABA9: je 0x588eabaf
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588EABAB: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x588EABAD: je 0x588eabb4
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EABAF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EABB4: cmp dword ptr [esp + 0x14], ebp
        __asm _emit 0x39
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EABB8: je 0x588eac1f
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x588EABBA: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588EABBC: jne 0x588eac17
        __asm _emit 0x75
        __asm _emit 0x59
        // 0x588EABBE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EABC3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EABC5: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EABC9: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588EABCC: jb 0x588eabd3
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EABCE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EABD3: mov eax, dword ptr [esi + 0x482c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EABD9: mov ecx, dword ptr [esi + eax*4 + 0x1008]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EABE0: mov edx, dword ptr [esi + eax*4 + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EABE7: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EABEB: push ecx
        __asm _emit 0x51
        // 0x588EABEC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588EABEE: push edx
        __asm _emit 0x52
        // 0x588EABEF: call 0x588db440
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x08
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EABF4: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588EABF6: jne 0x588eac1b
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588EABF8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EABFD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EABFF: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EAC03: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x588EAC06: jb 0x588eac0d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EAC08: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAC0D: add dword ptr [esp + 0x14], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        // 0x588EAC12: jmp 0x588eab80
        __asm _emit 0xE9
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EAC17: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588EAC19: jmp 0x588eabc5
        __asm _emit 0xEB
        __asm _emit 0xAA
        // 0x588EAC1B: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588EAC1D: jmp 0x588eabff
        __asm _emit 0xEB
        __asm _emit 0xE0
        // 0x588EAC1F: mov eax, dword ptr [esi + 0x482c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAC25: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x588EAC28: mov ebx, dword ptr [esi + edx*8 + 0x1830]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0xD6
        __asm _emit 0x30
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAC2F: cmp dword ptr [esi + edx*8 + 0x182c], ebx
        __asm _emit 0x39
        __asm _emit 0x9C
        __asm _emit 0xD6
        __asm _emit 0x2C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAC36: lea edi, [esi + edx*8 + 0x1820]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0xD6
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAC3D: jbe 0x588eac44
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EAC3F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAC44: mov ebp, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x0C
        // 0x588EAC47: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588EAC49: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EAC4D: cmp ebp, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6F
        __asm _emit 0x10
        // 0x588EAC50: jbe 0x588eac57
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EAC52: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAC57: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EAC5B: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588EAC5D: push ebx
        __asm _emit 0x53
        // 0x588EAC5E: push ecx
        __asm _emit 0x51
        // 0x588EAC5F: push ebp
        __asm _emit 0x55
        // 0x588EAC60: push eax
        __asm _emit 0x50
        // 0x588EAC61: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EAC65: push edx
        __asm _emit 0x52
        // 0x588EAC66: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588EAC68: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x41
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588EAC6D: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588EAC6F: jmp 0x588eaccd
        __asm _emit 0xEB
        __asm _emit 0x5C
        // 0x588EAC71: cmp dword ptr [esi + eax*4 + 0x808], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAC78: je 0x588eac9c
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588EAC7A: mov eax, dword ptr [esi + eax*4 + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAC81: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588EAC83: je 0x588eac8f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588EAC85: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EAC87: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EAC89: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588EAC8B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EAC8D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EAC8F: mov ecx, dword ptr [esi + 0x482c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAC95: mov dword ptr [esi + ecx*4 + 0x808], ebp
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAC9C: mov edx, dword ptr [esi + 0x482c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EACA2: cmp dword ptr [esi + edx*4 + 0x1008], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EACA9: lea eax, [esi + edx*4 + 0x1008]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EACB0: je 0x588eaccd
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588EACB2: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588EACB4: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588EACB6: je 0x588eacc0
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588EACB8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EACBA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EACBC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EACBE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EACC0: mov eax, dword ptr [esi + 0x482c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EACC6: mov dword ptr [esi + eax*4 + 0x1008], ebp
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EACCD: mov ecx, dword ptr [esi + 0x4820]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EACD3: push ecx
        __asm _emit 0x51
        // 0x588EACD4: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EACDA: mov dword ptr [esi + 0x4820], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EACE0: mov dword ptr [esi + 0x4828], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EACE6: mov dword ptr [esi + 0x482c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EACF0: cmp dword ptr [esi + 0x482c], -1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588EACF7: jne 0x588eadcd
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EACFD: mov edx, dword ptr [esi + 0x1818]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAD03: sub edx, dword ptr [esi + 0x1814]
        __asm _emit 0x2B
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAD09: lea edi, [esi + 0x1808]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAD0F: test edx, 0xfffffffc
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EAD15: je 0x588eadcd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAD1B: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x588EAD1E: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x588EAD21: jbe 0x588ead28
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EAD23: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x1F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAD28: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588EAD2A: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588EAD2C: jne 0x588eadac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAD32: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x1F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAD37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EAD39: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x588EAD3C: jb 0x588ead43
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EAD3E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x1F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAD43: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588EAD45: cmp dword ptr [esi + eax*4 + 0x808], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAD4C: je 0x588ead57
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588EAD4E: cmp dword ptr [esi + eax*4 + 0x1008], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAD55: jne 0x588eadb0
        __asm _emit 0x75
        __asm _emit 0x59
        // 0x588EAD57: cmp dword ptr [esi + eax*4 + 8], ebp
        __asm _emit 0x39
        __asm _emit 0x6C
        __asm _emit 0x86
        __asm _emit 0x08
        // 0x588EAD5B: je 0x588eadb0
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x588EAD5D: mov dword ptr [esi + 0x482c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAD63: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x588EAD66: cmp ebx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x588EAD69: jbe 0x588ead70
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EAD6B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x1F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAD70: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588EAD72: push ebx
        __asm _emit 0x53
        // 0x588EAD73: push eax
        __asm _emit 0x50
        // 0x588EAD74: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EAD78: push eax
        __asm _emit 0x50
        // 0x588EAD79: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588EAD7B: call 0x58849980
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xEC
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588EAD80: lea ecx, [esi + 0x4824]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAD86: push ecx
        __asm _emit 0x51
        // 0x588EAD87: push ebp
        __asm _emit 0x55
        // 0x588EAD88: push esi
        __asm _emit 0x56
        // 0x588EAD89: push 0x588ea8e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xA8
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588EAD8E: push ebp
        __asm _emit 0x55
        // 0x588EAD8F: push ebp
        __asm _emit 0x55
        // 0x588EAD90: call dword ptr [0x5898c130]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EAD96: push ebp
        __asm _emit 0x55
        // 0x588EAD97: push eax
        __asm _emit 0x50
        // 0x588EAD98: mov dword ptr [esi + 0x4820], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAD9E: call dword ptr [0x5898c1b4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EADA4: pop edi
        __asm _emit 0x5F
        // 0x588EADA5: pop esi
        __asm _emit 0x5E
        // 0x588EADA6: pop ebp
        __asm _emit 0x5D
        // 0x588EADA7: pop ebx
        __asm _emit 0x5B
        // 0x588EADA8: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588EADAB: ret
        __asm _emit 0xC3
        // 0x588EADAC: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588EADAE: jmp 0x588ead39
        __asm _emit 0xEB
        __asm _emit 0x89
        // 0x588EADB0: mov esi, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x588EADB3: cmp esi, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x10
        // 0x588EADB6: jbe 0x588eadbd
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EADB8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x1E
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EADBD: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588EADBF: push esi
        __asm _emit 0x56
        // 0x588EADC0: push eax
        __asm _emit 0x50
        // 0x588EADC1: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EADC5: push edx
        __asm _emit 0x52
        // 0x588EADC6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588EADC8: call 0x58849980
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xEB
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588EADCD: pop edi
        __asm _emit 0x5F
        // 0x588EADCE: pop esi
        __asm _emit 0x5E
        // 0x588EADCF: pop ebp
        __asm _emit 0x5D
        // 0x588EADD0: pop ebx
        __asm _emit 0x5B
        // 0x588EADD1: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588EADD4: ret
        __asm _emit 0xC3
    }
}
