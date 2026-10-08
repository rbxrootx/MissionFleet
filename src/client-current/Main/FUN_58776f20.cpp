// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 690 bytes in 1 exact ranges.
// Source symbol alias: FUN_58776f20.

// Ghidra body range 0x58776F20..0x587771D2; 690 mapped bytes.
extern "C" __declspec(naked) void FUN_58776f20_segment_00() {
    __asm {
        // 0x58776F20: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58776F23: push ebx
        __asm _emit 0x53
        // 0x58776F24: push ebp
        __asm _emit 0x55
        // 0x58776F25: push esi
        __asm _emit 0x56
        // 0x58776F26: push edi
        __asm _emit 0x57
        // 0x58776F27: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58776F29: mov esi, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x58776F2C: cmp esi, dword ptr [edi + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x58776F2F: jbe 0x58776f36
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776F31: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776F36: mov ebx, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x58
        // 0x58776F39: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58776F3B: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776F3F: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58776F43: mov esi, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x58776F46: cmp dword ptr [edi + 0x64], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x58776F49: jbe 0x58776f50
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776F4B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776F50: mov eax, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x58
        // 0x58776F53: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58776F55: je 0x58776f5b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58776F57: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58776F59: je 0x58776f60
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58776F5B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776F60: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x58776F62: je 0x587771c4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776F68: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58776F6A: jne 0x58776faa
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x58776F6C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776F71: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776F73: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58776F76: jb 0x58776f7d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776F78: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776F7D: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58776F81: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776F88: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58776F8B: cmp dword ptr [edx + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58776F8E: je 0x58776fb2
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58776F90: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58776F92: jne 0x58776fae
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58776F94: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776F99: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776F9B: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58776F9E: jb 0x58776fa5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776FA0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776FA5: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58776FA8: jmp 0x58776f43
        __asm _emit 0xEB
        __asm _emit 0x99
        // 0x58776FAA: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58776FAC: jmp 0x58776f73
        __asm _emit 0xEB
        __asm _emit 0xC5
        // 0x58776FAE: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58776FB0: jmp 0x58776f9b
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58776FB2: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58776FB6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58776FB8: jne 0x5877715e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776FBE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776FC3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776FC5: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58776FC8: jb 0x58776fcf
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776FCA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776FCF: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58776FD2: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58776FD5: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58776FD8: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58776FDB: jbe 0x58776fe2
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58776FDD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776FE2: mov ebp, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x2E
        // 0x58776FE4: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58776FE8: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58776FEC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58776FF0: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58776FF2: jne 0x58777165
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776FF8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776FFD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776FFF: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58777003: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58777006: jb 0x5877700d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777008: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877700D: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58777011: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x58777013: mov edi, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58777016: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58777019: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5877701C: jbe 0x58777023
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877701E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777023: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58777025: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58777027: je 0x5877702d
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58777029: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x5877702B: je 0x58777032
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5877702D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777032: cmp dword ptr [esp + 0x14], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58777036: je 0x587771c8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877703C: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5877703E: jne 0x5877716c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777044: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777049: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877704B: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877704F: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58777052: jb 0x58777059
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777054: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777059: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877705D: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x5877705F: mov edi, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58777062: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58777065: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58777068: jbe 0x5877706f
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5877706A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x5C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877706F: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x58777071: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x58777073: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58777077: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58777079: jne 0x58777174
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877707F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777084: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777086: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877708A: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877708D: jb 0x58777094
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877708F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777094: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58777098: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x5877709A: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5877709D: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x587770A0: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587770A3: jbe 0x587770aa
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587770A5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587770AA: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587770AC: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587770AE: je 0x587770b4
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587770B0: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587770B2: je 0x587770b9
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587770B4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587770B9: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x587770BB: je 0x58777191
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587770C1: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587770C3: jne 0x5877717b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587770C9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587770CE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587770D0: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587770D3: jb 0x587770da
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587770D5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587770DA: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587770DD: cmp dword ptr [eax + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587770E1: je 0x58777141
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x587770E3: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587770E7: mov edx, dword ptr [ecx + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587770ED: mov esi, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x6C
        // 0x587770F0: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587770F2: jne 0x58777182
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587770F8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587770FD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587770FF: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58777102: jb 0x58777109
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777104: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777109: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5877710C: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5877710F: mov edx, dword ptr [ecx + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777115: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x58777118: push esi
        __asm _emit 0x56
        // 0x58777119: push eax
        __asm _emit 0x50
        // 0x5877711A: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58777120: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58777122: jne 0x58777141
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58777124: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777126: jne 0x58777189
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x58777128: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877712D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877712F: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58777132: jb 0x58777139
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777134: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777139: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5877713C: call 0x58737080
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xFF
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58777141: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777143: jne 0x5877718d
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x58777145: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877714A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877714C: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5877714F: jb 0x58777156
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777151: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777156: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58777159: jmp 0x58777073
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877715E: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58777160: jmp 0x58776fc5
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777165: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58777167: jmp 0x58776fff
        __asm _emit 0xE9
        __asm _emit 0x93
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877716C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5877716F: jmp 0x5877704b
        __asm _emit 0xE9
        __asm _emit 0xD7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777174: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58777176: jmp 0x58777086
        __asm _emit 0xE9
        __asm _emit 0x0B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877717B: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5877717D: jmp 0x587770d0
        __asm _emit 0xE9
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777182: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58777184: jmp 0x587770ff
        __asm _emit 0xE9
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777189: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5877718B: jmp 0x5877712f
        __asm _emit 0xEB
        __asm _emit 0xA2
        // 0x5877718D: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5877718F: jmp 0x5877714c
        __asm _emit 0xEB
        __asm _emit 0xBB
        // 0x58777191: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58777195: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58777197: jne 0x587771c0
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x58777199: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x5A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877719E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587771A0: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587771A4: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587771A7: jb 0x587771ae
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587771A9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x5A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587771AE: add dword ptr [esp + 0x14], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        // 0x587771B3: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587771B7: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587771BB: jmp 0x58776ff0
        __asm _emit 0xE9
        __asm _emit 0x30
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587771C0: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587771C2: jmp 0x587771a0
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x587771C4: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587771C8: pop edi
        __asm _emit 0x5F
        // 0x587771C9: pop esi
        __asm _emit 0x5E
        // 0x587771CA: pop ebp
        __asm _emit 0x5D
        // 0x587771CB: pop ebx
        __asm _emit 0x5B
        // 0x587771CC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587771CF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
