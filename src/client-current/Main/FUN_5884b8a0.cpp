// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1081 bytes in 1 exact ranges.
// Source symbol alias: FUN_5884b8a0.

// Ghidra body range 0x5884B8A0..0x5884BCD9; 1081 mapped bytes.
extern "C" __declspec(naked) void FUN_5884b8a0_segment_00() {
    __asm {
        // 0x5884B8A0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884B8A2: push 0x58984ed0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x4E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884B8A7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B8AD: push eax
        __asm _emit 0x50
        // 0x5884B8AE: push ecx
        __asm _emit 0x51
        // 0x5884B8AF: push ebx
        __asm _emit 0x53
        // 0x5884B8B0: push ebp
        __asm _emit 0x55
        // 0x5884B8B1: push esi
        __asm _emit 0x56
        // 0x5884B8B2: push edi
        __asm _emit 0x57
        // 0x5884B8B3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884B8B8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884B8BA: push eax
        __asm _emit 0x50
        // 0x5884B8BB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884B8BF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B8C5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5884B8C7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884B8CB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884B8CF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884B8D3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884B8D7: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884B8DB: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884B8DF: push eax
        __asm _emit 0x50
        // 0x5884B8E0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884B8E4: push ecx
        __asm _emit 0x51
        // 0x5884B8E5: push edx
        __asm _emit 0x52
        // 0x5884B8E6: push edi
        __asm _emit 0x57
        // 0x5884B8E7: push ebp
        __asm _emit 0x55
        // 0x5884B8E8: push eax
        __asm _emit 0x50
        // 0x5884B8E9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884B8EB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x78
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884B8F0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884B8F6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884B8FB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884B8FD: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x5884B900: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5884B903: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B90A: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x5884B90D: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884B90F: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884B913: mov dword ptr [esi], 0x5899e7a0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA0
        __asm _emit 0xE7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884B919: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884B91E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884B921: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884B925: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5884B92A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884B92C: je 0x5884b974
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5884B92E: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884B934: cmp dword ptr [ecx + 0x164], 0x191
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B93E: jle 0x5884b963
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5884B940: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B946: je 0x5884b963
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5884B948: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B94E: mov ecx, dword ptr [ecx + 0x644]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B954: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884B956: push edi
        __asm _emit 0x57
        // 0x5884B957: push ebp
        __asm _emit 0x55
        // 0x5884B958: push ecx
        __asm _emit 0x51
        // 0x5884B959: push esi
        __asm _emit 0x56
        // 0x5884B95A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884B95C: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x62
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884B961: jmp 0x5884b976
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5884B963: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884B965: push edi
        __asm _emit 0x57
        // 0x5884B966: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884B968: push ebp
        __asm _emit 0x55
        // 0x5884B969: push ecx
        __asm _emit 0x51
        // 0x5884B96A: push esi
        __asm _emit 0x56
        // 0x5884B96B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884B96D: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x62
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884B972: jmp 0x5884b976
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884B974: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B976: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884B978: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884B97C: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5884B97F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x12
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884B984: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884B987: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884B98B: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5884B990: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884B992: je 0x5884b9da
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5884B994: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884B99A: cmp dword ptr [ecx + 0x164], 0x18f
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B9A4: jle 0x5884b9c9
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5884B9A6: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B9AC: je 0x5884b9c9
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5884B9AE: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B9B4: mov ecx, dword ptr [edx + 0x63c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884B9BA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884B9BC: push edi
        __asm _emit 0x57
        // 0x5884B9BD: push ebp
        __asm _emit 0x55
        // 0x5884B9BE: push ecx
        __asm _emit 0x51
        // 0x5884B9BF: push esi
        __asm _emit 0x56
        // 0x5884B9C0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884B9C2: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x62
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884B9C7: jmp 0x5884b9dc
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5884B9C9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884B9CB: push edi
        __asm _emit 0x57
        // 0x5884B9CC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884B9CE: push ebp
        __asm _emit 0x55
        // 0x5884B9CF: push ecx
        __asm _emit 0x51
        // 0x5884B9D0: push esi
        __asm _emit 0x56
        // 0x5884B9D1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884B9D3: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x62
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884B9D8: jmp 0x5884b9dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884B9DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884B9DC: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884B9DE: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884B9E2: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5884B9E5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884B9EA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884B9ED: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884B9F1: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5884B9F6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884B9F8: je 0x5884ba40
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5884B9FA: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BA00: cmp dword ptr [ecx + 0x164], 0x190
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BA0A: jle 0x5884ba2f
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5884BA0C: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BA12: je 0x5884ba2f
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5884BA14: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BA1A: mov ecx, dword ptr [ecx + 0x640]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BA20: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884BA22: push edi
        __asm _emit 0x57
        // 0x5884BA23: push ebp
        __asm _emit 0x55
        // 0x5884BA24: push ecx
        __asm _emit 0x51
        // 0x5884BA25: push esi
        __asm _emit 0x56
        // 0x5884BA26: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884BA28: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x62
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884BA2D: jmp 0x5884ba42
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5884BA2F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884BA31: push edi
        __asm _emit 0x57
        // 0x5884BA32: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884BA34: push ebp
        __asm _emit 0x55
        // 0x5884BA35: push ecx
        __asm _emit 0x51
        // 0x5884BA36: push esi
        __asm _emit 0x56
        // 0x5884BA37: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884BA39: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x62
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884BA3E: jmp 0x5884ba42
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884BA40: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884BA42: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5884BA45: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884BA4A: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884BA4E: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5884BA51: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x72
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884BA56: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5884BA59: push 0xdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BA5E: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x72
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884BA63: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5884BA66: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BA6B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x72
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884BA70: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BA75: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x11
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884BA7A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884BA7D: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884BA81: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5884BA86: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884BA88: je 0x5884bad7
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5884BA8A: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BA90: cmp dword ptr [ecx + 0x160], 0x10
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x5884BA97: jle 0x5884baaf
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5884BA99: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BA9F: je 0x5884baaf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884BAA1: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BAA7: add edx, 0x400
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BAAD: jmp 0x5884bab1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884BAAF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884BAB1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884BAB3: lea ecx, [edi + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x0A
        // 0x5884BAB6: push ecx
        __asm _emit 0x51
        // 0x5884BAB7: lea ecx, [ebp + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BABD: push ecx
        __asm _emit 0x51
        // 0x5884BABE: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BAC4: push edx
        __asm _emit 0x52
        // 0x5884BAC5: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BACB: push esi
        __asm _emit 0x56
        // 0x5884BACC: push edx
        __asm _emit 0x52
        // 0x5884BACD: push ecx
        __asm _emit 0x51
        // 0x5884BACE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884BAD0: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x22
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884BAD5: jmp 0x5884bad9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884BAD7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884BAD9: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BADE: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884BAE2: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5884BAE5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x11
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884BAEA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884BAED: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884BAF1: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5884BAF6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884BAF8: je 0x5884bb47
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5884BAFA: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BB00: cmp dword ptr [ecx + 0x160], 0xd
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x5884BB07: jle 0x5884bb1f
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5884BB09: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BB0F: je 0x5884bb1f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5884BB11: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BB17: add edx, 0x340
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BB1D: jmp 0x5884bb21
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884BB1F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884BB21: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5884BB23: lea ecx, [edi + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x0A
        // 0x5884BB26: push ecx
        __asm _emit 0x51
        // 0x5884BB27: lea ecx, [ebp + 0x104]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BB2D: push ecx
        __asm _emit 0x51
        // 0x5884BB2E: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BB34: push edx
        __asm _emit 0x52
        // 0x5884BB35: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BB3B: push esi
        __asm _emit 0x56
        // 0x5884BB3C: push edx
        __asm _emit 0x52
        // 0x5884BB3D: push ecx
        __asm _emit 0x51
        // 0x5884BB3E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884BB40: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x22
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884BB45: jmp 0x5884bb49
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884BB47: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884BB49: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BB4E: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884BB52: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5884BB55: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884BB5A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884BB5D: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884BB61: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5884BB66: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884BB68: je 0x5884bb9a
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x5884BB6A: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5884BB6F: push ebx
        __asm _emit 0x53
        // 0x5884BB70: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884BB75: lea edx, [edi + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x4C
        // 0x5884BB78: push edx
        __asm _emit 0x52
        // 0x5884BB79: lea ecx, [ebp + 0x154]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BB7F: push ecx
        __asm _emit 0x51
        // 0x5884BB80: lea edx, [edi + 0x3f]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x3F
        // 0x5884BB83: push edx
        __asm _emit 0x52
        // 0x5884BB84: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BB8A: lea ecx, [ebp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x2D
        // 0x5884BB8D: push ecx
        __asm _emit 0x51
        // 0x5884BB8E: push edx
        __asm _emit 0x52
        // 0x5884BB8F: push ebx
        __asm _emit 0x53
        // 0x5884BB90: push esi
        __asm _emit 0x56
        // 0x5884BB91: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884BB93: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x54
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884BB98: jmp 0x5884bb9c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884BB9A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884BB9C: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BBA1: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884BBA5: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5884BBA8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884BBAD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884BBB0: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884BBB4: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5884BBB9: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884BBBB: je 0x5884bbf0
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5884BBBD: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5884BBC2: push ebx
        __asm _emit 0x53
        // 0x5884BBC3: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884BBC8: lea ecx, [edi + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BBCE: push ecx
        __asm _emit 0x51
        // 0x5884BBCF: lea edx, [ebp + 0x154]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BBD5: push edx
        __asm _emit 0x52
        // 0x5884BBD6: lea ecx, [edi + 0x56]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x56
        // 0x5884BBD9: push ecx
        __asm _emit 0x51
        // 0x5884BBDA: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BBE0: lea edx, [ebp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x2D
        // 0x5884BBE3: push edx
        __asm _emit 0x52
        // 0x5884BBE4: push ecx
        __asm _emit 0x51
        // 0x5884BBE5: push ebx
        __asm _emit 0x53
        // 0x5884BBE6: push esi
        __asm _emit 0x56
        // 0x5884BBE7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884BBE9: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x54
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884BBEE: jmp 0x5884bbf2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884BBF0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884BBF2: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BBF7: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884BBFB: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5884BBFE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884BC03: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884BC06: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884BC0A: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x5884BC0F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5884BC11: je 0x5884bc43
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x5884BC13: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5884BC18: push ebx
        __asm _emit 0x53
        // 0x5884BC19: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884BC1E: lea edx, [edi + 0x32]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x32
        // 0x5884BC21: push edx
        __asm _emit 0x52
        // 0x5884BC22: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BC28: lea ecx, [ebp + 0x154]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BC2E: push ecx
        __asm _emit 0x51
        // 0x5884BC2F: add edi, 0x25
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x25
        // 0x5884BC32: push edi
        __asm _emit 0x57
        // 0x5884BC33: add ebp, 0x2d
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x2D
        // 0x5884BC36: push ebp
        __asm _emit 0x55
        // 0x5884BC37: push edx
        __asm _emit 0x52
        // 0x5884BC38: push ebx
        __asm _emit 0x53
        // 0x5884BC39: push esi
        __asm _emit 0x56
        // 0x5884BC3A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884BC3C: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x54
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884BC41: jmp 0x5884bc45
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884BC43: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884BC45: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5884BC48: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5884BC4B: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BC50: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884BC54: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5884BC57: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5884BC59: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5884BC5D: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5884BC60: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884BC64: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5884BC67: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x5884BC69: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884BC6D: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xD1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5884BC72: mov edx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x5884BC75: mov eax, 0x28
        __asm _emit 0xB8
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BC7A: mov word ptr [edx + 0x9c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BC81: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5884BC84: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BC89: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xD1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5884BC8E: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5884BC91: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x5884BC93: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xD1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5884BC98: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884BC9D: cmp dword ptr [eax + 0x170], 0xb
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x5884BCA4: jle 0x5884bcb9
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5884BCA6: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BCAC: je 0x5884bcb9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884BCAE: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BCB4: mov eax, dword ptr [ecx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x2C
        // 0x5884BCB7: jmp 0x5884bcbb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884BCB9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884BCBB: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BCC1: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5884BCC3: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884BCC7: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884BCCE: pop ecx
        __asm _emit 0x59
        // 0x5884BCCF: pop edi
        __asm _emit 0x5F
        // 0x5884BCD0: pop esi
        __asm _emit 0x5E
        // 0x5884BCD1: pop ebp
        __asm _emit 0x5D
        // 0x5884BCD2: pop ebx
        __asm _emit 0x5B
        // 0x5884BCD3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5884BCD6: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
