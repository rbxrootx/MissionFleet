// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58878AF0 .. +0x944 bytes.
// Source symbol alias: FUN_58878af0.
// Caller evidence: byte-matched FUN_587E3080 reaches this in the engine-change
// path (selector 2) and indexed detail paths associated with the KONGJIAN2/5/7
// message keys. Ghidra shows selector cases 2, 3, 5, 6, and 13 updating child
// text/state; the original types, units, and localized label meanings remain
// unknown. See docs/current-main-ship-detail-update.md for the evidence map.
extern "C" __declspec(naked) void FUN_58878af0() {
    __asm {
        // 0x58878AF0: sub esp, 0x290
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878AF6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58878AFB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58878AFD: mov dword ptr [esp + 0x28c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B04: mov eax, dword ptr [esp + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B0B: push ebx
        __asm _emit 0x53
        // 0x58878B0C: push ebp
        __asm _emit 0x55
        // 0x58878B0D: mov ebp, dword ptr [esp + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B14: push esi
        __asm _emit 0x56
        // 0x58878B15: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58878B19: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878B1E: mov ebx, 0x32
        __asm _emit 0xBB
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B23: cmp dword ptr [eax + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B29: push edi
        __asm _emit 0x57
        // 0x58878B2A: mov edi, dword ptr [esp + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B31: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58878B33: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58878B37: jle 0x58878b50
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58878B39: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B40: je 0x58878b50
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58878B42: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B48: mov ecx, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B4E: jmp 0x58878b52
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58878B50: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58878B52: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878B58: push edx
        __asm _emit 0x52
        // 0x58878B59: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xEE
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878B5E: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878B63: cmp dword ptr [eax + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B69: jle 0x58878b82
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58878B6B: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B72: je 0x58878b82
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58878B74: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B7A: mov ecx, dword ptr [eax + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B80: jmp 0x58878b84
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58878B82: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58878B84: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58878B86: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58878B89: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58878B8B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58878B8D: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58878B90: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B95: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58878B99: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878B9F: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58878BA1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58878BA5: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878BAB: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58878BAF: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878BB5: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58878BB9: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878BBF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58878BC3: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878BC9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58878BCB: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878BD3: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xE7
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878BD8: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878BDE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58878BE0: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xE7
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878BE5: movzx eax, word ptr [esp + 0x2a4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878BED: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x58878BF0: cmp eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x58878BF3: ja 0x588793e0
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xE7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878BF9: movzx edx, byte ptr [eax + 0x5887944c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x4C
        __asm _emit 0x94
        __asm _emit 0x87
        __asm _emit 0x58
        // 0x58878C00: jmp dword ptr [edx*4 + 0x58879434]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0x94
        __asm _emit 0x87
        __asm _emit 0x58
        // 0x58878C07: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58878C0A: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x58878C0D: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878C13: lea eax, [edi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x78
        // 0x58878C16: push eax
        __asm _emit 0x50
        // 0x58878C17: push edx
        __asm _emit 0x52
        // 0x58878C18: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878C1A: mov eax, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878C20: push eax
        __asm _emit 0x50
        // 0x58878C21: lea ecx, [esp + 0x128]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878C28: push 0x5899f0e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58878C2D: push ecx
        __asm _emit 0x51
        // 0x58878C2E: mov dword ptr [esp + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878C36: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878C38: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58878C3B: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58878C3E: lea edx, [esp + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878C45: push edx
        __asm _emit 0x52
        // 0x58878C46: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x67
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58878C4B: mov eax, dword ptr [edi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878C51: push eax
        __asm _emit 0x50
        // 0x58878C52: lea ecx, [esp + 0x120]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878C59: push 0x5899f0d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58878C5E: push ecx
        __asm _emit 0x51
        // 0x58878C5F: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878C61: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878C67: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58878C6A: lea edx, [esp + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878C71: push edx
        __asm _emit 0x52
        // 0x58878C72: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x66
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58878C77: mov dword ptr [esi + 0x78], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878C7E: movzx eax, word ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58878C82: mov ecx, dword ptr [0x58a24658]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878C88: inc eax
        __asm _emit 0x40
        // 0x58878C89: push eax
        __asm _emit 0x50
        // 0x58878C8A: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x8B
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58878C8F: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58878C92: push eax
        __asm _emit 0x50
        // 0x58878C93: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xBC
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58878C98: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58878C9B: add ecx, 0x9b
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878CA1: jmp 0x588793d7
        __asm _emit 0xE9
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878CA6: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58878CA9: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x58878CAC: lea edx, [edi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x78
        // 0x58878CAF: push edx
        __asm _emit 0x52
        // 0x58878CB0: push ecx
        __asm _emit 0x51
        // 0x58878CB1: mov dword ptr [esp + 0x1c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878CB9: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878CBF: movzx ebp, word ptr [edi + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xAF
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878CC6: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58878CC8: imul ecx, dword ptr [esp + 0x2bc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878CD0: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58878CD5: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58878CD7: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58878CDA: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x58878CDC: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58878CDF: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x58878CE1: movzx edx, word ptr [edi + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878CE8: push edx
        __asm _emit 0x52
        // 0x58878CE9: lea eax, [esp + 0x1a8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878CF0: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878CF5: push eax
        __asm _emit 0x50
        // 0x58878CF6: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878CFC: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58878CFF: lea ecx, [esp + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878D06: push ecx
        __asm _emit 0x51
        // 0x58878D07: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58878D0A: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x66
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58878D0F: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58878D14: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x58878D16: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58878D19: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58878D1B: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58878D1E: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58878D20: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58878D25: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x58878D27: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58878D2A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58878D2C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58878D2F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58878D31: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58878D33: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878D39: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58878D3D: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x58878D3F: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58878D44: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x58878D46: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58878D49: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58878D4B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58878D4E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58878D50: push eax
        __asm _emit 0x50
        // 0x58878D51: push ecx
        __asm _emit 0x51
        // 0x58878D52: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58878D56: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58878D58: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878D5E: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x58878D60: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58878D65: imul ebp
        __asm _emit 0xF7
        __asm _emit 0xED
        // 0x58878D67: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58878D6A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58878D6C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58878D6F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58878D71: push eax
        __asm _emit 0x50
        // 0x58878D72: push ecx
        __asm _emit 0x51
        // 0x58878D73: lea ecx, [esp + 0x1ac]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878D7A: push 0x5899f0c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58878D7F: push ecx
        __asm _emit 0x51
        // 0x58878D80: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878D86: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878D8C: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58878D8F: lea edx, [esp + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878D96: push edx
        __asm _emit 0x52
        // 0x58878D97: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x65
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58878D9C: mov dword ptr [esi + 0x78], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878DA3: movzx eax, word ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58878DA7: mov ecx, dword ptr [0x58a24654]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58878DAD: inc eax
        __asm _emit 0x40
        // 0x58878DAE: push eax
        __asm _emit 0x50
        // 0x58878DAF: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x8A
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58878DB4: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58878DB7: push eax
        __asm _emit 0x50
        // 0x58878DB8: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xBB
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58878DBD: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58878DC0: add ecx, 0xb9
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878DC6: jmp 0x588793d7
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878DCB: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58878DCE: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x58878DD1: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878DD7: lea edx, [edi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x78
        // 0x58878DDA: push edx
        __asm _emit 0x52
        // 0x58878DDB: push ecx
        __asm _emit 0x51
        // 0x58878DDC: mov dword ptr [esp + 0x1c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878DE4: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878DE6: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58878DE9: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878DEF: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58878DF2: add edx, 0x81
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878DF8: push edx
        __asm _emit 0x52
        // 0x58878DF9: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xA5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878DFE: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58878E01: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E07: add eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x7F
        // 0x58878E0A: push eax
        __asm _emit 0x50
        // 0x58878E0B: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xA5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878E10: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58878E13: add ecx, 0x90
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E19: push ecx
        __asm _emit 0x51
        // 0x58878E1A: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E20: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xA5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878E25: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58878E28: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E2E: add edx, 0x8e
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E34: push edx
        __asm _emit 0x52
        // 0x58878E35: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xA5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878E3A: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E40: mov ebp, dword ptr [esp + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E47: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E4C: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58878E50: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E56: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58878E5A: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E60: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58878E64: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E6A: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58878E6E: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E74: je 0x58878eb2
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x58878E76: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58878E7A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58878E7C: je 0x58878eb2
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58878E7E: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x58878E81: push eax
        __asm _emit 0x50
        // 0x58878E82: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E88: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x58878E8B: push ecx
        __asm _emit 0x51
        // 0x58878E8C: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878E8E: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58878E92: movzx eax, word ptr [edx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E99: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878E9F: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878EA4: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x58878EA7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58878EAA: push eax
        __asm _emit 0x50
        // 0x58878EAB: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xE4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878EB0: jmp 0x58878ec6
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58878EB2: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878EB8: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x58878EBB: push 0x5899f0b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58878EC0: push edx
        __asm _emit 0x52
        // 0x58878EC1: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878EC3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58878EC6: mov ebp, dword ptr [esp + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878ECD: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878ED3: je 0x58878f22
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x58878ED5: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58878EDA: je 0x58878f22
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x58878EDC: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878EE2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58878EE4: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x87
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58878EE9: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58878EED: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878EF3: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x58878EF6: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x58878EF9: push eax
        __asm _emit 0x50
        // 0x58878EFA: push edx
        __asm _emit 0x52
        // 0x58878EFB: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878EFD: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58878F01: movzx ecx, word ptr [eax + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F08: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F0E: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x58878F11: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58878F14: push ecx
        __asm _emit 0x51
        // 0x58878F15: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F1B: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xE4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58878F20: jmp 0x58878f36
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58878F22: mov edx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F28: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x58878F2B: push 0x5899f0b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58878F30: push eax
        __asm _emit 0x50
        // 0x58878F31: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878F33: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58878F36: movzx ecx, word ptr [edi + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F3D: and ecx, 7
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x07
        // 0x58878F40: push ecx
        __asm _emit 0x51
        // 0x58878F41: call dword ptr [0x5898c02c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878F47: push eax
        __asm _emit 0x50
        // 0x58878F48: lea edx, [esp + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F4F: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878F54: push edx
        __asm _emit 0x52
        // 0x58878F55: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878F57: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58878F5A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58878F5D: lea eax, [esp + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F64: push eax
        __asm _emit 0x50
        // 0x58878F65: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x63
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58878F6A: movzx ecx, word ptr [edi + 0xa6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F71: push ecx
        __asm _emit 0x51
        // 0x58878F72: push 0x5899f098
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58878F77: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878F7D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58878F80: push eax
        __asm _emit 0x50
        // 0x58878F81: lea edx, [esp + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F88: push edx
        __asm _emit 0x52
        // 0x58878F89: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878F8B: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F91: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58878F94: lea eax, [esp + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878F9B: push eax
        __asm _emit 0x50
        // 0x58878F9C: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x63
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58878FA1: movzx ecx, word ptr [edi + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878FA8: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x58878FAB: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x58878FAD: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x58878FAF: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x58878FB1: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58878FB6: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58878FB8: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58878FBB: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x58878FBD: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x58878FC0: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x58878FC2: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58878FC4: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878FCA: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58878FCC: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58878FD1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58878FD3: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58878FD6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58878FD8: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58878FDB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58878FDD: push eax
        __asm _emit 0x50
        // 0x58878FDE: push ebp
        __asm _emit 0x55
        // 0x58878FDF: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58878FE5: push 0x5899f080
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58878FEA: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58878FEC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58878FEF: push eax
        __asm _emit 0x50
        // 0x58878FF0: lea ecx, [esp + 0xa8]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878FF7: push ecx
        __asm _emit 0x51
        // 0x58878FF8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58878FFA: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879000: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58879003: lea edx, [esp + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887900A: push edx
        __asm _emit 0x52
        // 0x5887900B: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x63
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58879010: movzx eax, word ptr [edi + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879017: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5887901A: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x5887901D: push eax
        __asm _emit 0x50
        // 0x5887901E: push 0x5899f068
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58879023: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58879025: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879028: push eax
        __asm _emit 0x50
        // 0x58879029: lea ecx, [esp + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879030: push ecx
        __asm _emit 0x51
        // 0x58879031: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58879033: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879039: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5887903C: lea edx, [esp + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879043: push edx
        __asm _emit 0x52
        // 0x58879044: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x63
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58879049: movzx eax, word ptr [edi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879050: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x58879053: push eax
        __asm _emit 0x50
        // 0x58879054: lea ecx, [esp + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887905B: push 0x58998210
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58879060: push ecx
        __asm _emit 0x51
        // 0x58879061: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58879063: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879069: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5887906C: lea edx, [esp + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879073: push edx
        __asm _emit 0x52
        // 0x58879074: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x62
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58879079: mov dword ptr [esi + 0x78], 5
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879080: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58879086: jmp 0x588793b8
        __asm _emit 0xE9
        __asm _emit 0x2D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887908B: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5887908E: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x58879091: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58879097: lea edx, [edi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x78
        // 0x5887909A: push edx
        __asm _emit 0x52
        // 0x5887909B: push ecx
        __asm _emit 0x51
        // 0x5887909C: mov dword ptr [esp + 0x1c], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588790A4: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588790A6: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588790A9: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588790AF: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588790B2: add edx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x54
        // 0x588790B5: push edx
        __asm _emit 0x52
        // 0x588790B6: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xA2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588790BB: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588790BE: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588790C4: add eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x588790C7: push eax
        __asm _emit 0x50
        // 0x588790C8: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xA2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588790CD: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588790D3: mov ebx, dword ptr [esp + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588790DA: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588790DF: xor ebx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF3
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588790E5: je 0x58879104
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588790E7: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588790EB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588790ED: je 0x58879104
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588790EF: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588790F5: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x588790F8: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x588790FB: push eax
        __asm _emit 0x50
        // 0x588790FC: push edx
        __asm _emit 0x52
        // 0x588790FD: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588790FF: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58879102: jmp 0x58879127
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x58879104: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887910A: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5887910D: push 0x5899f050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58879112: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58879116: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887911C: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58879120: push eax
        __asm _emit 0x50
        // 0x58879121: push edx
        __asm _emit 0x52
        // 0x58879122: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58879124: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58879127: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887912D: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58879132: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879138: push ebx
        __asm _emit 0x53
        // 0x58879139: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xE2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887913E: movzx eax, word ptr [edi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879145: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x58879148: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5887914A: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5887914C: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5887914E: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58879153: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58879155: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58879158: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5887915A: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5887915D: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x5887915F: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58879161: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879167: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58879169: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5887916E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58879170: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58879173: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58879175: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58879178: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5887917A: push ecx
        __asm _emit 0x51
        // 0x5887917B: push ebx
        __asm _emit 0x53
        // 0x5887917C: lea edx, [esp + 0x224]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879183: push 0x5899f044
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58879188: push edx
        __asm _emit 0x52
        // 0x58879189: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5887918B: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5887918E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58879191: lea eax, [esp + 0x21c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879198: push eax
        __asm _emit 0x50
        // 0x58879199: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x61
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5887919E: movzx ecx, byte ptr [edi + 0x9f]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588791A5: movzx edx, byte ptr [edi + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x97
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588791AC: push ecx
        __asm _emit 0x51
        // 0x588791AD: push edx
        __asm _emit 0x52
        // 0x588791AE: lea eax, [esp + 0x224]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588791B5: push 0x58998204
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x82
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588791BA: push eax
        __asm _emit 0x50
        // 0x588791BB: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588791BD: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588791C0: lea ecx, [esp + 0x21c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588791C7: push ecx
        __asm _emit 0x51
        // 0x588791C8: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588791CE: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x61
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588791D3: mov dword ptr [esi + 0x78], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588791DA: movzx edx, word ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588791DE: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588791E4: add edx, 5
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x05
        // 0x588791E7: push edx
        __asm _emit 0x52
        // 0x588791E8: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588791ED: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588791F0: push eax
        __asm _emit 0x50
        // 0x588791F1: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xB7
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588791F6: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588791F9: add eax, 0xf5
        __asm _emit 0x05
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588791FE: push eax
        __asm _emit 0x50
        // 0x588791FF: jmp 0x588793d8
        __asm _emit 0xE9
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879204: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x58879207: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x5887920A: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58879210: lea ecx, [edi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x58879213: push ecx
        __asm _emit 0x51
        // 0x58879214: push eax
        __asm _emit 0x50
        // 0x58879215: mov dword ptr [esp + 0x1c], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887921D: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5887921F: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58879222: add ecx, 0x7e
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x7E
        // 0x58879225: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58879228: push ecx
        __asm _emit 0x51
        // 0x58879229: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887922F: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879234: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58879237: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887923D: add edx, 0x7e
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x7E
        // 0x58879240: push edx
        __asm _emit 0x52
        // 0x58879241: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879246: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887924C: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58879251: mov eax, dword ptr [esp + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879258: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887925E: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879263: push eax
        __asm _emit 0x50
        // 0x58879264: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xE0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879269: movzx ecx, word ptr [edi + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879270: push ecx
        __asm _emit 0x51
        // 0x58879271: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58879275: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887927A: push edx
        __asm _emit 0x52
        // 0x5887927B: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5887927D: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58879280: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58879283: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58879287: push eax
        __asm _emit 0x50
        // 0x58879288: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x60
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5887928D: movzx ecx, word ptr [edi + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879294: push ecx
        __asm _emit 0x51
        // 0x58879295: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58879299: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887929E: push edx
        __asm _emit 0x52
        // 0x5887929F: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588792A1: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588792A7: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588792AA: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588792AE: push eax
        __asm _emit 0x50
        // 0x588792AF: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x60
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588792B4: movzx ecx, word ptr [edi + 0xa6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588792BB: movzx edx, word ptr [edi + 0xa4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588792C2: push ecx
        __asm _emit 0x51
        // 0x588792C3: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588792C5: push edx
        __asm _emit 0x52
        // 0x588792C6: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588792CA: push 0x5899b840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xB8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588792CF: push eax
        __asm _emit 0x50
        // 0x588792D0: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588792D2: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588792D5: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588792D9: push ecx
        __asm _emit 0x51
        // 0x588792DA: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588792E0: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x60
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588792E5: movzx edx, word ptr [edi + 0xaa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588792EC: push edx
        __asm _emit 0x52
        // 0x588792ED: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588792F1: push 0x5899f038
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588792F6: push eax
        __asm _emit 0x50
        // 0x588792F7: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588792F9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588792FC: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58879300: push ecx
        __asm _emit 0x51
        // 0x58879301: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879307: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x60
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5887930C: movzx edx, word ptr [edi + 0xae]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879313: push edx
        __asm _emit 0x52
        // 0x58879314: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58879318: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887931D: push eax
        __asm _emit 0x50
        // 0x5887931E: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58879320: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58879323: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58879327: push ecx
        __asm _emit 0x51
        // 0x58879328: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887932E: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x60
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58879333: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58879335: je 0x58879385
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x58879337: movzx dx, byte ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5887933C: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x5887933F: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x58879343: jne 0x58879362
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58879345: movzx eax, word ptr [ebp + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887934C: push eax
        __asm _emit 0x50
        // 0x5887934D: add ebp, 0x78
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x78
        // 0x58879350: push ebp
        __asm _emit 0x55
        // 0x58879351: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58879355: push 0x589977b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x77
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5887935A: push ecx
        __asm _emit 0x51
        // 0x5887935B: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5887935D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58879360: jmp 0x5887939b
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x58879362: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x58879366: jne 0x5887939b
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58879368: movzx edx, word ptr [ebp + 0xaa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887936F: push edx
        __asm _emit 0x52
        // 0x58879370: add ebp, 0x78
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x78
        // 0x58879373: push ebp
        __asm _emit 0x55
        // 0x58879374: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58879378: push 0x589977b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x77
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5887937D: push eax
        __asm _emit 0x50
        // 0x5887937E: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58879380: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58879383: jmp 0x5887939b
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58879385: push 0x589980b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5887938A: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58879390: push eax
        __asm _emit 0x50
        // 0x58879391: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58879395: push ecx
        __asm _emit 0x51
        // 0x58879396: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58879398: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5887939B: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588793A1: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588793A5: push edx
        __asm _emit 0x52
        // 0x588793A6: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x5F
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588793AB: mov dword ptr [esi + 0x78], 6
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588793B2: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588793B8: movzx eax, word ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588793BC: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x588793BF: push eax
        __asm _emit 0x50
        // 0x588793C0: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x84
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588793C5: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588793C8: push eax
        __asm _emit 0x50
        // 0x588793C9: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xB5
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588793CE: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588793D1: add ecx, 0xf5
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588793D7: push ecx
        __asm _emit 0x51
        // 0x588793D8: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588793DB: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x9F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588793E0: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x588793E3: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588793E7: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588793EA: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588793ED: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588793F0: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x588793F3: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588793F6: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588793F9: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588793FC: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588793FF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58879401: mov dword ptr [esi + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58879404: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58879407: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58879409: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879410: mov dword ptr [esi + 0x50], 0x306
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879417: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58879419: mov ecx, dword ptr [esp + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879420: pop edi
        __asm _emit 0x5F
        // 0x58879421: pop esi
        __asm _emit 0x5E
        // 0x58879422: pop ebp
        __asm _emit 0x5D
        // 0x58879423: pop ebx
        __asm _emit 0x5B
        // 0x58879424: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58879426: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887942B: add esp, 0x290
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879431: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
