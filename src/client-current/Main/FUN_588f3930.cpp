// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1073 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f3930.

// Ghidra body range 0x588F3930..0x588F3D61; 1073 mapped bytes.
extern "C" __declspec(naked) void FUN_588f3930_segment_00() {
    __asm {
        // 0x588F3930: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F3932: push 0x58989e20
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F3937: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F393D: push eax
        __asm _emit 0x50
        // 0x588F393E: push ecx
        __asm _emit 0x51
        // 0x588F393F: push ebx
        __asm _emit 0x53
        // 0x588F3940: push ebp
        __asm _emit 0x55
        // 0x588F3941: push esi
        __asm _emit 0x56
        // 0x588F3942: push edi
        __asm _emit 0x57
        // 0x588F3943: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F3948: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F394A: push eax
        __asm _emit 0x50
        // 0x588F394B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F394F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3955: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F3957: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F395B: movsx eax, word ptr [esp + 0x3c]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F3960: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F3964: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588F3968: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F396C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588F396E: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F3970: push ebx
        __asm _emit 0x53
        // 0x588F3971: push eax
        __asm _emit 0x50
        // 0x588F3972: push edi
        __asm _emit 0x57
        // 0x588F3973: push ebp
        __asm _emit 0x55
        // 0x588F3974: push ecx
        __asm _emit 0x51
        // 0x588F3975: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F3977: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F397C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F3980: mov dword ptr [esi], 0x589a1964
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0x19
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F3986: mov dword ptr [esi + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x588F3989: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F398E: mov ecx, dword ptr [eax + 0x218e0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588F3994: mov eax, dword ptr [eax + 0x21c34]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588F399A: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x588F399C: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F39A0: je 0x588f3a89
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F39A6: movzx eax, byte ptr [edx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F39AD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F39AF: jne 0x588f3a0f
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x588F39B1: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F39B3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F39B8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F39BB: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F39BF: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588F39C4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F39C6: je 0x588f3b10
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F39CC: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F39D2: cmp dword ptr [ecx + 0x160], 0xd0
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F39DC: jle 0x588f3afc
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F39E2: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F39E8: je 0x588f3afc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F39EE: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F39F4: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F39F8: push ecx
        __asm _emit 0x51
        // 0x588F39F9: push edi
        __asm _emit 0x57
        // 0x588F39FA: push ebp
        __asm _emit 0x55
        // 0x588F39FB: add edx, 0x3400
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A01: push edx
        __asm _emit 0x52
        // 0x588F3A02: push esi
        __asm _emit 0x56
        // 0x588F3A03: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F3A05: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F3A0A: jmp 0x588f3b12
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A0F: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588F3A12: jne 0x588f3a2c
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588F3A14: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F3A16: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F3A1B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F3A1E: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F3A22: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588F3A27: jmp 0x588f3ac0
        __asm _emit 0xE9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A2C: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588F3A2F: jne 0x588f3b19
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A35: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F3A37: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F3A3C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F3A3F: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F3A43: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588F3A48: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F3A4A: je 0x588f3b10
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A50: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F3A56: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A5C: jle 0x588f3afc
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A62: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A68: je 0x588f3afc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A6E: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A74: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F3A78: push ecx
        __asm _emit 0x51
        // 0x588F3A79: push edi
        __asm _emit 0x57
        // 0x588F3A7A: push ebp
        __asm _emit 0x55
        // 0x588F3A7B: push edx
        __asm _emit 0x52
        // 0x588F3A7C: push esi
        __asm _emit 0x56
        // 0x588F3A7D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F3A7F: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x0F
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F3A84: jmp 0x588f3b12
        __asm _emit 0xE9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A89: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588F3A8B: je 0x588f3aad
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588F3A8D: cmp dword ptr [edx + 0x1258], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3A93: je 0x588f3aad
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588F3A95: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F3A97: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F3A9C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F3A9F: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F3AA3: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588F3AA8: jmp 0x588f39c4
        __asm _emit 0xE9
        __asm _emit 0x17
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F3AAD: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F3AAF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F3AB4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F3AB7: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F3ABB: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588F3AC0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F3AC2: je 0x588f3b10
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x588F3AC4: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F3ACA: cmp dword ptr [ecx + 0x160], 0xd1
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3AD4: jle 0x588f3afc
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x588F3AD6: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3ADC: je 0x588f3afc
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588F3ADE: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3AE4: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F3AE8: push ecx
        __asm _emit 0x51
        // 0x588F3AE9: push edi
        __asm _emit 0x57
        // 0x588F3AEA: push ebp
        __asm _emit 0x55
        // 0x588F3AEB: add edx, 0x3440
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3AF1: push edx
        __asm _emit 0x52
        // 0x588F3AF2: push esi
        __asm _emit 0x56
        // 0x588F3AF3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F3AF5: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x0F
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F3AFA: jmp 0x588f3b12
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588F3AFC: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F3B00: push ecx
        __asm _emit 0x51
        // 0x588F3B01: push edi
        __asm _emit 0x57
        // 0x588F3B02: push ebp
        __asm _emit 0x55
        // 0x588F3B03: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F3B05: push edx
        __asm _emit 0x52
        // 0x588F3B06: push esi
        __asm _emit 0x56
        // 0x588F3B07: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F3B09: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x0F
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F3B0E: jmp 0x588f3b12
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F3B10: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F3B12: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F3B16: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588F3B19: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588F3B1C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F3B1E: je 0x588f3b36
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588F3B20: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3B25: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F3B29: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588F3B2C: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3B31: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3B36: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588F3B38: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F3B3D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F3B40: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F3B44: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588F3B49: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F3B4B: je 0x588f3b8d
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588F3B4D: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F3B53: cmp dword ptr [ecx + 0x160], 0xd4
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3B5D: jle 0x588f3b75
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588F3B5F: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3B65: je 0x588f3b75
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F3B67: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3B6D: add edx, 0x3500
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3B73: jmp 0x588f3b77
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F3B75: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F3B77: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F3B7B: dec ecx
        __asm _emit 0x49
        // 0x588F3B7C: push ecx
        __asm _emit 0x51
        // 0x588F3B7D: lea ecx, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x02
        // 0x588F3B80: push ecx
        __asm _emit 0x51
        // 0x588F3B81: push ebp
        __asm _emit 0x55
        // 0x588F3B82: push edx
        __asm _emit 0x52
        // 0x588F3B83: push esi
        __asm _emit 0x56
        // 0x588F3B84: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F3B86: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x0E
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F3B8B: jmp 0x588f3b8f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F3B8D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F3B8F: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F3B93: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588F3B96: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F3B98: je 0x588f3bb0
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588F3B9A: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3B9F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F3BA3: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588F3BA6: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F3BAB: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3BB0: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F3BB4: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588F3BB7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F3BB9: jne 0x588f3c1a
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x588F3BBB: cmp dword ptr [esi + 0x58], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x588F3BBE: je 0x588f3c8b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3BC4: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588F3BC6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F3BCB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F3BCE: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F3BD2: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588F3BD7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F3BD9: je 0x588f3c0f
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588F3BDB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F3BDD: push ebx
        __asm _emit 0x53
        // 0x588F3BDE: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588F3BE3: lea ecx, [edi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588F3BE6: push ecx
        __asm _emit 0x51
        // 0x588F3BE7: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F3BED: lea edx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3BF3: push edx
        __asm _emit 0x52
        // 0x588F3BF4: add edi, -6
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xFA
        // 0x588F3BF7: push edi
        __asm _emit 0x57
        // 0x588F3BF8: add ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0A
        // 0x588F3BFB: push ebp
        __asm _emit 0x55
        // 0x588F3BFC: push ecx
        __asm _emit 0x51
        // 0x588F3BFD: push ebx
        __asm _emit 0x53
        // 0x588F3BFE: push esi
        __asm _emit 0x56
        // 0x588F3BFF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F3C01: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xF6
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F3C06: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F3C0A: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588F3C0D: jmp 0x588f3c8e
        __asm _emit 0xEB
        __asm _emit 0x7F
        // 0x588F3C0F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F3C11: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F3C15: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588F3C18: jmp 0x588f3c8e
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x588F3C1A: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588F3C1D: jne 0x588f3c8b
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x588F3C1F: cmp dword ptr [esi + 0x58], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x588F3C22: je 0x588f3c8b
        __asm _emit 0x74
        __asm _emit 0x67
        // 0x588F3C24: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3C29: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F3C2E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F3C31: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588F3C35: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588F3C3A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F3C3C: je 0x588f3c79
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x588F3C3E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F3C40: push ebx
        __asm _emit 0x53
        // 0x588F3C41: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588F3C46: lea edx, [edi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x588F3C49: push edx
        __asm _emit 0x52
        // 0x588F3C4A: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F3C50: lea ecx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3C56: push ecx
        __asm _emit 0x51
        // 0x588F3C57: add edi, -6
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xFA
        // 0x588F3C5A: push edi
        __asm _emit 0x57
        // 0x588F3C5B: add ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0A
        // 0x588F3C5E: push ebp
        __asm _emit 0x55
        // 0x588F3C5F: push edx
        __asm _emit 0x52
        // 0x588F3C60: push ebx
        __asm _emit 0x53
        // 0x588F3C61: push esi
        __asm _emit 0x56
        // 0x588F3C62: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F3C64: call 0x588f4810
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3C69: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588F3C6C: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F3C70: mov dword ptr [eax + 0x7c], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3C77: jmp 0x588f3c8e
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588F3C79: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F3C7B: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588F3C7E: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F3C82: mov dword ptr [eax + 0x7c], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3C89: jmp 0x588f3c8e
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588F3C8B: mov dword ptr [esi + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x588F3C8E: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588F3C91: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F3C93: je 0x588f3ccd
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588F3C95: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x588F3C98: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F3C9A: je 0x588f3ccd
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x588F3C9C: add eax, 0x3a0
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3CA1: push eax
        __asm _emit 0x50
        // 0x588F3CA2: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xE0
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F3CA7: mov edi, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x588F3CAA: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588F3CAD: mov ax, word ptr [esp + 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588F3CB2: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x588F3CB6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F3CB8: je 0x588f3cc0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588F3CBA: push edi
        __asm _emit 0x57
        // 0x588F3CBB: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3CC0: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588F3CC3: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F3CC5: je 0x588f3ccd
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588F3CC7: push edi
        __asm _emit 0x57
        // 0x588F3CC8: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3CCD: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3CD2: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x588F3CD5: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588F3CD9: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588F3CDC: cmp eax, 0x3f4
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3CE1: jne 0x588f3d00
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x588F3CE3: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x588F3CE6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F3CE8: je 0x588f3d00
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588F3CEA: push 0x381
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3CEF: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3CF4: mov edx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x588F3CF7: mov dword ptr [edx + 0x54], 2
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3CFE: jmp 0x588f3d19
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x588F3D00: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x588F3D03: jne 0x588f3d19
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588F3D05: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x588F3D08: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F3D0A: je 0x588f3d19
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588F3D0C: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x588F3D0E: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3D13: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588F3D16: mov dword ptr [eax + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x54
        // 0x588F3D19: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588F3D1C: cmp eax, 0x25c
        __asm _emit 0x3D
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3D21: jne 0x588f3d31
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588F3D23: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x588F3D26: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F3D28: je 0x588f3d31
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588F3D2A: push 0x24d
        __asm _emit 0x68
        __asm _emit 0x4D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3D2F: jmp 0x588f3d44
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588F3D31: cmp eax, 0xa4
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3D36: jne 0x588f3d49
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x588F3D38: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x588F3D3B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F3D3D: je 0x588f3d49
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588F3D3F: push 0xb3
        __asm _emit 0x68
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3D44: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3D49: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588F3D4B: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F3D4F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3D56: pop ecx
        __asm _emit 0x59
        // 0x588F3D57: pop edi
        __asm _emit 0x5F
        // 0x588F3D58: pop esi
        __asm _emit 0x5E
        // 0x588F3D59: pop ebp
        __asm _emit 0x5D
        // 0x588F3D5A: pop ebx
        __asm _emit 0x5B
        // 0x588F3D5B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F3D5E: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
