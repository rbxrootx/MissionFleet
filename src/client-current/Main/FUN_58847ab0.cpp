// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58847AB0 .. +0x73A bytes.
// Source symbol alias: FUN_58847ab0.
extern "C" __declspec(naked) void FUN_58847ab0() {
    __asm {
        // 0x58847AB0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58847AB2: push 0x58984cc2
        __asm _emit 0x68
        __asm _emit 0xC2
        __asm _emit 0x4C
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58847AB7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847ABD: push eax
        __asm _emit 0x50
        // 0x58847ABE: push ecx
        __asm _emit 0x51
        // 0x58847ABF: push ebx
        __asm _emit 0x53
        // 0x58847AC0: push ebp
        __asm _emit 0x55
        // 0x58847AC1: push esi
        __asm _emit 0x56
        // 0x58847AC2: push edi
        __asm _emit 0x57
        // 0x58847AC3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58847AC8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58847ACA: push eax
        __asm _emit 0x50
        // 0x58847ACB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58847ACF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847AD5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58847AD7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58847ADB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847ADF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58847AE3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58847AE7: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58847AEB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58847AEF: push eax
        __asm _emit 0x50
        // 0x58847AF0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58847AF4: push ecx
        __asm _emit 0x51
        // 0x58847AF5: push edx
        __asm _emit 0x52
        // 0x58847AF6: push ebp
        __asm _emit 0x55
        // 0x58847AF7: push ebx
        __asm _emit 0x53
        // 0x58847AF8: push eax
        __asm _emit 0x50
        // 0x58847AF9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58847AFB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xB6
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58847B00: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58847B06: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58847B0B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847B0D: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58847B10: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x58847B13: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847B1A: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58847B1D: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58847B21: lea eax, [esi + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58847B24: mov dword ptr [esi], 0x5899e518
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0xE5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58847B2A: mov dword ptr [esp + 0x38], 0x17
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847B32: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58847B36: mov dword ptr [esp + 0x3c], 0x5c
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847B3E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58847B40: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58847B42: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x51
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847B47: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58847B49: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847B4C: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58847B50: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58847B55: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58847B57: je 0x58847bdf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847B5D: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847B62: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58847B66: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847B6C: jle 0x58847b8e
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x58847B6E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58847B70: jl 0x58847b8e
        __asm _emit 0x7C
        __asm _emit 0x1C
        // 0x58847B72: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847B79: je 0x58847b8e
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58847B7B: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847B81: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847B85: mov eax, dword ptr [edx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x0A
        // 0x58847B88: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58847B8C: jmp 0x58847b96
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58847B8E: mov dword ptr [esp + 0x34], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847B96: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58847B98: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847B9A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847B9C: push ebp
        __asm _emit 0x55
        // 0x58847B9D: push ebx
        __asm _emit 0x53
        // 0x58847B9E: push esi
        __asm _emit 0x56
        // 0x58847B9F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58847BA1: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xB5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58847BA6: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58847BAA: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58847BB0: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x58847BB3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847BB5: je 0x58847be1
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58847BB7: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58847BBA: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58847BBD: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58847BC0: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58847BC3: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58847BC6: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58847BC8: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58847BCB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58847BCE: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58847BD1: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58847BD4: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58847BD7: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58847BDA: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58847BDD: jmp 0x58847be1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847BDF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58847BE1: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58847BE5: dec dword ptr [esp + 0x38]
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58847BE9: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58847BEB: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58847BEE: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58847BF2: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847BF6: sub eax, 4
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58847BF9: cmp eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x54
        // 0x58847BFC: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58847C01: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847C05: jg 0x58847b40
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x35
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58847C0B: lea eax, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58847C0E: mov dword ptr [esp + 0x38], 0x15
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847C16: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58847C1A: mov dword ptr [esp + 0x3c], 0x54
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847C22: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58847C24: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x50
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847C29: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58847C2B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847C2E: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58847C32: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58847C37: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58847C39: je 0x58847cc1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847C3F: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847C44: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58847C48: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847C4E: jle 0x58847c70
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x58847C50: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58847C52: jl 0x58847c70
        __asm _emit 0x7C
        __asm _emit 0x1C
        // 0x58847C54: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847C5B: je 0x58847c70
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58847C5D: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847C63: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847C67: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58847C6A: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58847C6E: jmp 0x58847c78
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58847C70: mov dword ptr [esp + 0x34], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847C78: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58847C7A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847C7C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847C7E: push ebp
        __asm _emit 0x55
        // 0x58847C7F: push ebx
        __asm _emit 0x53
        // 0x58847C80: push esi
        __asm _emit 0x56
        // 0x58847C81: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58847C83: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xB5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58847C88: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58847C8C: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58847C92: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x58847C95: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847C97: je 0x58847cc3
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58847C99: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58847C9C: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58847C9F: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58847CA2: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58847CA5: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58847CA8: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58847CAA: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58847CAD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58847CB0: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58847CB3: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58847CB6: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58847CB9: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58847CBC: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58847CBF: jmp 0x58847cc3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847CC1: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58847CC3: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58847CC7: dec dword ptr [esp + 0x38]
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58847CCB: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58847CCD: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58847CD0: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58847CD4: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847CD8: sub eax, 4
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58847CDB: cmp eax, 0x4c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4C
        // 0x58847CDE: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58847CE3: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847CE7: jg 0x58847c22
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x35
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58847CED: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58847CF0: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58847CF5: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xB0
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58847CFA: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58847CFD: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58847D02: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xB0
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58847D07: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58847D0A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847D0F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xB0
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58847D14: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58847D16: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x4F
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847D1B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847D1E: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847D22: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58847D27: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847D29: je 0x58847d5a
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x58847D2B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847D2D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847D2F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58847D34: lea ecx, [ebp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x48
        // 0x58847D37: push ecx
        __asm _emit 0x51
        // 0x58847D38: lea edx, [ebx + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847D3E: push edx
        __asm _emit 0x52
        // 0x58847D3F: lea ecx, [ebp + 0x39]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x39
        // 0x58847D42: push ecx
        __asm _emit 0x51
        // 0x58847D43: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847D49: lea edx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x55
        // 0x58847D4C: push edx
        __asm _emit 0x52
        // 0x58847D4D: push ecx
        __asm _emit 0x51
        // 0x58847D4E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847D50: push esi
        __asm _emit 0x56
        // 0x58847D51: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58847D53: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xB5
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847D58: jmp 0x58847d5c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847D5A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847D5C: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58847D5E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58847D63: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58847D66: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x4E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847D6B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847D6E: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847D72: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58847D77: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847D79: je 0x58847daa
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x58847D7B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847D7D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847D7F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58847D84: lea edx, [ebp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x58
        // 0x58847D87: push edx
        __asm _emit 0x52
        // 0x58847D88: lea ecx, [ebx + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847D8E: push ecx
        __asm _emit 0x51
        // 0x58847D8F: lea edx, [ebp + 0x49]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x49
        // 0x58847D92: push edx
        __asm _emit 0x52
        // 0x58847D93: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847D99: lea ecx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x55
        // 0x58847D9C: push ecx
        __asm _emit 0x51
        // 0x58847D9D: push edx
        __asm _emit 0x52
        // 0x58847D9E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847DA0: push esi
        __asm _emit 0x56
        // 0x58847DA1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58847DA3: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847DA8: jmp 0x58847dac
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847DAA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847DAC: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58847DAE: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58847DB3: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58847DB6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x4E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847DBB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847DBE: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847DC2: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58847DC7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847DC9: je 0x58847dfa
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x58847DCB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847DCD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847DCF: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58847DD4: lea ecx, [ebp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x68
        // 0x58847DD7: push ecx
        __asm _emit 0x51
        // 0x58847DD8: lea edx, [ebx + 0x132]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847DDE: push edx
        __asm _emit 0x52
        // 0x58847DDF: lea ecx, [ebp + 0x59]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x59
        // 0x58847DE2: push ecx
        __asm _emit 0x51
        // 0x58847DE3: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847DE9: lea edx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x55
        // 0x58847DEC: push edx
        __asm _emit 0x52
        // 0x58847DED: push ecx
        __asm _emit 0x51
        // 0x58847DEE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847DF0: push esi
        __asm _emit 0x56
        // 0x58847DF1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58847DF3: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847DF8: jmp 0x58847dfc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847DFA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847DFC: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58847DFE: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58847E03: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58847E06: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x4E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847E0B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847E0E: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847E12: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x58847E17: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847E19: je 0x58847e4a
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x58847E1B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847E1D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847E1F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58847E24: lea edx, [ebp + 0x7b]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x7B
        // 0x58847E27: push edx
        __asm _emit 0x52
        // 0x58847E28: lea ecx, [ebx + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847E2E: push ecx
        __asm _emit 0x51
        // 0x58847E2F: lea edx, [ebp + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x6C
        // 0x58847E32: push edx
        __asm _emit 0x52
        // 0x58847E33: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847E39: lea ecx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x55
        // 0x58847E3C: push ecx
        __asm _emit 0x51
        // 0x58847E3D: push edx
        __asm _emit 0x52
        // 0x58847E3E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847E40: push esi
        __asm _emit 0x56
        // 0x58847E41: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58847E43: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xB4
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847E48: jmp 0x58847e4c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847E4A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847E4C: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58847E4E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58847E53: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58847E56: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x4D
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847E5B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847E5E: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847E62: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x58847E67: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847E69: je 0x58847e9d
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x58847E6B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847E6D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847E6F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58847E74: lea ecx, [ebp + 0x8b]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847E7A: push ecx
        __asm _emit 0x51
        // 0x58847E7B: lea edx, [ebx + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847E81: push edx
        __asm _emit 0x52
        // 0x58847E82: lea ecx, [ebp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x7C
        // 0x58847E85: push ecx
        __asm _emit 0x51
        // 0x58847E86: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847E8C: lea edx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x55
        // 0x58847E8F: push edx
        __asm _emit 0x52
        // 0x58847E90: push ecx
        __asm _emit 0x51
        // 0x58847E91: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847E93: push esi
        __asm _emit 0x56
        // 0x58847E94: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58847E96: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xB3
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847E9B: jmp 0x58847e9f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847E9D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847E9F: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58847EA1: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58847EA6: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847EAC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x4D
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847EB1: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58847EB3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847EB6: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58847EBA: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x58847EBF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58847EC1: je 0x58847f4b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847EC7: mov eax, dword ptr [0x58a24770]
        __asm _emit 0xA1
        __asm _emit 0x70
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847ECC: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847ED3: jle 0x58847eea
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x58847ED5: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847EDC: je 0x58847eea
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58847EDE: mov edx, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847EE4: mov dword ptr [esp + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847EE8: jmp 0x58847ef2
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58847EEA: mov dword ptr [esp + 0x3c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847EF2: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58847EF4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847EF6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847EF8: lea eax, [ebp + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847EFE: push eax
        __asm _emit 0x50
        // 0x58847EFF: lea ecx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x55
        // 0x58847F02: push ecx
        __asm _emit 0x51
        // 0x58847F03: push esi
        __asm _emit 0x56
        // 0x58847F04: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58847F06: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xB2
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58847F0B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847F0F: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58847F15: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847F1C: mov dword ptr [edi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x58847F1F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847F21: je 0x58847f4d
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58847F23: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58847F26: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58847F29: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x58847F2C: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58847F2F: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58847F32: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58847F34: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x58847F37: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58847F3A: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58847F3D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58847F40: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x58847F43: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58847F46: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x58847F49: jmp 0x58847f4d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847F4B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58847F4D: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58847F4F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58847F54: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847F5A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x4C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847F5F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847F62: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847F66: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x58847F6B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847F6D: je 0x58847fa4
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58847F6F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847F71: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847F73: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58847F78: lea ecx, [ebp + 0x9b]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847F7E: push ecx
        __asm _emit 0x51
        // 0x58847F7F: lea edx, [ebx + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847F85: push edx
        __asm _emit 0x52
        // 0x58847F86: lea ecx, [ebp + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847F8C: push ecx
        __asm _emit 0x51
        // 0x58847F8D: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847F93: lea edx, [ebx + 0x6f]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6F
        // 0x58847F96: push edx
        __asm _emit 0x52
        // 0x58847F97: push ecx
        __asm _emit 0x51
        // 0x58847F98: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847F9A: push esi
        __asm _emit 0x56
        // 0x58847F9B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58847F9D: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xB2
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847FA2: jmp 0x58847fa6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847FA4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847FA6: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58847FA8: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58847FAD: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847FB3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x4C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847FB8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58847FBA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58847FBD: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58847FC1: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x58847FC6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58847FC8: je 0x58847ff2
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58847FCA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58847FCC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847FCE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58847FD0: lea edx, [ebp + 0x9d]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847FD6: push edx
        __asm _emit 0x52
        // 0x58847FD7: lea eax, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x55
        // 0x58847FDA: push eax
        __asm _emit 0x50
        // 0x58847FDB: push esi
        __asm _emit 0x56
        // 0x58847FDC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58847FDE: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xB1
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58847FE3: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58847FE9: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847FF0: jmp 0x58847ff4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58847FF2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58847FF4: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58847FF6: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58847FFB: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848001: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x4C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58848006: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58848008: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884800B: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884800F: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x58848014: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58848016: je 0x58848040
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58848018: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884801A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884801C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884801E: lea ecx, [ebp + 0x9d]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848024: push ecx
        __asm _emit 0x51
        // 0x58848025: lea edx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x55
        // 0x58848028: push edx
        __asm _emit 0x52
        // 0x58848029: push esi
        __asm _emit 0x56
        // 0x5884802A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884802C: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xB1
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58848031: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58848037: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884803E: jmp 0x58848042
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58848040: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58848042: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58848044: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58848049: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884804F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x4B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58848054: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58848057: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884805B: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x58848060: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848062: je 0x58848099
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58848064: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848066: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848068: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884806D: lea ecx, [ebp + 0xae]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848073: push ecx
        __asm _emit 0x51
        // 0x58848074: lea edx, [ebx + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884807A: push edx
        __asm _emit 0x52
        // 0x5884807B: lea ecx, [ebp + 0x9f]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848081: push ecx
        __asm _emit 0x51
        // 0x58848082: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58848088: lea edx, [ebx + 0x6f]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6F
        // 0x5884808B: push edx
        __asm _emit 0x52
        // 0x5884808C: push ecx
        __asm _emit 0x51
        // 0x5884808D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884808F: push esi
        __asm _emit 0x56
        // 0x58848090: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58848092: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xB1
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58848097: jmp 0x5884809b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58848099: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884809B: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5884809D: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588480A2: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588480A8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x4B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x588480AD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588480B0: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588480B4: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x588480B9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588480BB: je 0x588480f2
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588480BD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588480BF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588480C1: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588480C6: lea edx, [ebp + 0xbd]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588480CC: push edx
        __asm _emit 0x52
        // 0x588480CD: lea ecx, [ebx + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588480D3: push ecx
        __asm _emit 0x51
        // 0x588480D4: lea edx, [ebp + 0xae]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588480DA: push edx
        __asm _emit 0x52
        // 0x588480DB: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588480E1: lea ecx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x55
        // 0x588480E4: push ecx
        __asm _emit 0x51
        // 0x588480E5: push edx
        __asm _emit 0x52
        // 0x588480E6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588480E8: push esi
        __asm _emit 0x56
        // 0x588480E9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588480EB: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xB1
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588480F0: jmp 0x588480f4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588480F2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588480F4: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588480F9: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588480FE: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848104: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x4B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58848109: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884810C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58848110: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0E
        // 0x58848115: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848117: je 0x58848164
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x58848119: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884811F: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848126: jle 0x58848139
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58848128: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884812F: je 0x58848139
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58848131: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848137: jmp 0x5884813b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58848139: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884813B: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58848141: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58848143: add ebp, 0xca
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848149: push ebp
        __asm _emit 0x55
        // 0x5884814A: add ebx, 0xf0
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848150: push ebx
        __asm _emit 0x53
        // 0x58848151: push edx
        __asm _emit 0x52
        // 0x58848152: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58848158: push esi
        __asm _emit 0x56
        // 0x58848159: push ecx
        __asm _emit 0x51
        // 0x5884815A: push edx
        __asm _emit 0x52
        // 0x5884815B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884815D: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x5C
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58848162: jmp 0x58848166
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58848164: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848166: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884816C: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848171: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58848176: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884817C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xAB
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58848181: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848187: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884818C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58848190: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58848193: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58848195: cmp eax, dword ptr [esi + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58848198: je 0x588481a3
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5884819A: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884819F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588481A3: mov eax, dword ptr [eax + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x38
        // 0x588481A6: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588481A8: jne 0x58848195
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588481AA: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588481AF: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588481B3: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588481B7: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588481BC: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588481C1: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588481C4: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588481C7: mov byte ptr [esi + 0xa0], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588481CE: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588481D2: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588481D4: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588481D8: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588481DF: pop ecx
        __asm _emit 0x59
        // 0x588481E0: pop edi
        __asm _emit 0x5F
        // 0x588481E1: pop esi
        __asm _emit 0x5E
        // 0x588481E2: pop ebp
        __asm _emit 0x5D
        // 0x588481E3: pop ebx
        __asm _emit 0x5B
        // 0x588481E4: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588481E7: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
