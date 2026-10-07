// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2094 bytes in 4 exact ranges.
// Source symbol alias: FUN_58762d30.

// Ghidra body range 0x58762D30..0x5876313A; 1034 mapped bytes.
extern "C" __declspec(naked) void FUN_58762d30_segment_00() {
    __asm {
        // 0x58762D30: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58762D33: push ebx
        __asm _emit 0x53
        // 0x58762D34: push esi
        __asm _emit 0x56
        // 0x58762D35: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58762D37: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58762D3A: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762D3F: push edi
        __asm _emit 0x57
        // 0x58762D40: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58762D42: jne 0x58763475
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2D
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762D48: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58762D4B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58762D4D: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762D53: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58762D55: jne 0x58762d75
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58762D57: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762D5D: call 0x587c2c90
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xFF
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58762D62: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762D68: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58762D6A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58762D6D: pop edi
        __asm _emit 0x5F
        // 0x58762D6E: pop esi
        __asm _emit 0x5E
        // 0x58762D6F: pop ebx
        __asm _emit 0x5B
        // 0x58762D70: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762D73: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x58762D75: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58762D78: jne 0x58762d9f
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58762D7A: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762D80: cmp dword ptr [ecx + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762D87: je 0x58762d94
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58762D89: pop edi
        __asm _emit 0x5F
        // 0x58762D8A: pop esi
        __asm _emit 0x5E
        // 0x58762D8B: pop ebx
        __asm _emit 0x5B
        // 0x58762D8C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762D8F: jmp 0x587e5fb0
        __asm _emit 0xE9
        __asm _emit 0x1C
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58762D94: pop edi
        __asm _emit 0x5F
        // 0x58762D95: pop esi
        __asm _emit 0x5E
        // 0x58762D96: pop ebx
        __asm _emit 0x5B
        // 0x58762D97: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762D9A: jmp 0x587e5bc0
        __asm _emit 0xE9
        __asm _emit 0x21
        __asm _emit 0x2E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58762D9F: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58762DA2: jne 0x58762dd8
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x58762DA4: mov eax, dword ptr [0x58a245bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762DA9: mov ecx, dword ptr [eax + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762DAF: mov edx, dword ptr [eax + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762DB5: push 0x40000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58762DBA: push ecx
        __asm _emit 0x51
        // 0x58762DBB: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762DC1: push edx
        __asm _emit 0x52
        // 0x58762DC2: call 0x587b9640
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58762DC7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762DCD: pop edi
        __asm _emit 0x5F
        // 0x58762DCE: pop esi
        __asm _emit 0x5E
        // 0x58762DCF: pop ebx
        __asm _emit 0x5B
        // 0x58762DD0: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762DD3: jmp 0x587e98a0
        __asm _emit 0xE9
        __asm _emit 0xC8
        __asm _emit 0x6A
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58762DD8: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58762DDB: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762DE1: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x58762DE4: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762DEA: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58762DED: je 0x587633ff
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762DF3: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x58762DF6: je 0x58763404
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762DFC: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58762DFF: jne 0x58762e73
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x58762E01: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762E06: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58762E09: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762E0F: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58762E12: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58762E17: jle 0x58762e24
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x58762E19: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58762E1E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58762E20: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58762E22: jmp 0x58762e31
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58762E24: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58762E26: jge 0x58762e3c
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x58762E28: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58762E2D: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58762E2F: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58762E31: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762E37: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58762E3C: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762E41: cmp word ptr [eax + 0x204], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58762E49: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762E4F: jne 0x58762e62
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58762E51: push 0x1f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762E56: call 0x587e92c0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58762E5B: pop edi
        __asm _emit 0x5F
        // 0x58762E5C: pop esi
        __asm _emit 0x5E
        // 0x58762E5D: pop ebx
        __asm _emit 0x5B
        // 0x58762E5E: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762E61: ret
        __asm _emit 0xC3
        // 0x58762E62: push 0x5f5
        __asm _emit 0x68
        __asm _emit 0xF5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762E67: call 0x587e92c0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58762E6C: pop edi
        __asm _emit 0x5F
        // 0x58762E6D: pop esi
        __asm _emit 0x5E
        // 0x58762E6E: pop ebx
        __asm _emit 0x5B
        // 0x58762E6F: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762E72: ret
        __asm _emit 0xC3
        // 0x58762E73: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58762E76: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762E7C: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58762E7F: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762E85: cmp eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x58762E88: jne 0x58762ea6
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58762E8A: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762E90: call 0x587c2c90
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xFD
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58762E95: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762E9B: pop edi
        __asm _emit 0x5F
        // 0x58762E9C: pop esi
        __asm _emit 0x5E
        // 0x58762E9D: pop ebx
        __asm _emit 0x5B
        // 0x58762E9E: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762EA1: jmp 0x5878f920
        __asm _emit 0xE9
        __asm _emit 0x7A
        __asm _emit 0xCA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58762EA6: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x58762EA9: jne 0x58762ed0
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58762EAB: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762EB1: push ebx
        __asm _emit 0x53
        // 0x58762EB2: call 0x587ba8a0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58762EB7: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762EBD: mov ecx, dword ptr [ecx + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762EC3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58762EC5: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58762EC8: pop edi
        __asm _emit 0x5F
        // 0x58762EC9: pop esi
        __asm _emit 0x5E
        // 0x58762ECA: pop ebx
        __asm _emit 0x5B
        // 0x58762ECB: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762ECE: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x58762ED0: cmp eax, 0x79
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x79
        // 0x58762ED3: jne 0x58762f13
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x58762ED5: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762EDB: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762EE1: mov eax, dword ptr [edx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x48
        // 0x58762EE4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58762EE6: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x58762EE9: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x58762EEC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58762EEE: shl ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x10
        // 0x58762EF1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58762EF3: or ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762EF9: push ecx
        __asm _emit 0x51
        // 0x58762EFA: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762F00: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58762F02: push 0x80011035
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x58762F07: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xDD
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58762F0C: pop edi
        __asm _emit 0x5F
        // 0x58762F0D: pop esi
        __asm _emit 0x5E
        // 0x58762F0E: pop ebx
        __asm _emit 0x5B
        // 0x58762F0F: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762F12: ret
        __asm _emit 0xC3
        // 0x58762F13: cmp eax, 0x12c
        __asm _emit 0x3D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762F18: jne 0x58762f39
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58762F1A: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762F20: mov eax, dword ptr [edx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x70
        // 0x58762F23: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x58762F26: push ecx
        __asm _emit 0x51
        // 0x58762F27: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762F2D: call 0x587b9240
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58762F32: pop edi
        __asm _emit 0x5F
        // 0x58762F33: pop esi
        __asm _emit 0x5E
        // 0x58762F34: pop ebx
        __asm _emit 0x5B
        // 0x58762F35: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762F38: ret
        __asm _emit 0xC3
        // 0x58762F39: cmp eax, 0x12d
        __asm _emit 0x3D
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762F3E: jne 0x58762f5d
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58762F40: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762F46: mov eax, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762F4C: mov ecx, dword ptr [eax + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762F52: pop edi
        __asm _emit 0x5F
        // 0x58762F53: pop esi
        __asm _emit 0x5E
        // 0x58762F54: pop ebx
        __asm _emit 0x5B
        // 0x58762F55: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762F58: jmp 0x58863e20
        __asm _emit 0xE9
        __asm _emit 0xC3
        __asm _emit 0x0E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58762F5D: cmp eax, 0x12e
        __asm _emit 0x3D
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762F62: jne 0x58762f75
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58762F64: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762F6A: pop edi
        __asm _emit 0x5F
        // 0x58762F6B: pop esi
        __asm _emit 0x5E
        // 0x58762F6C: pop ebx
        __asm _emit 0x5B
        // 0x58762F6D: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762F70: jmp 0x5881da70
        __asm _emit 0xE9
        __asm _emit 0xFB
        __asm _emit 0xAA
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58762F75: cmp eax, 0x12f
        __asm _emit 0x3D
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762F7A: jne 0x58762f99
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58762F7C: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762F82: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762F88: mov ecx, dword ptr [edx + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762F8E: pop edi
        __asm _emit 0x5F
        // 0x58762F8F: pop esi
        __asm _emit 0x5E
        // 0x58762F90: pop ebx
        __asm _emit 0x5B
        // 0x58762F91: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762F94: jmp 0x58833e20
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0x0E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58762F99: cmp eax, 0x130
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762F9E: jne 0x58762fbc
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58762FA0: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762FA5: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762FAB: mov ecx, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762FB1: pop edi
        __asm _emit 0x5F
        // 0x58762FB2: pop esi
        __asm _emit 0x5E
        // 0x58762FB3: pop ebx
        __asm _emit 0x5B
        // 0x58762FB4: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762FB7: jmp 0x588396f0
        __asm _emit 0xE9
        __asm _emit 0x34
        __asm _emit 0x67
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58762FBC: cmp eax, 0x131
        __asm _emit 0x3D
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762FC1: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762FC7: cmp eax, 0x132
        __asm _emit 0x3D
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762FCC: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762FD2: cmp eax, 0x133
        __asm _emit 0x3D
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762FD7: jne 0x58762ff6
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58762FD9: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762FDF: mov eax, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762FE5: mov ecx, dword ptr [eax + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762FEB: pop edi
        __asm _emit 0x5F
        // 0x58762FEC: pop esi
        __asm _emit 0x5E
        // 0x58762FED: pop ebx
        __asm _emit 0x5B
        // 0x58762FEE: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58762FF1: jmp 0x588adc60
        __asm _emit 0xE9
        __asm _emit 0x6A
        __asm _emit 0xAC
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58762FF6: cmp eax, 0x136
        __asm _emit 0x3D
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762FFB: jl 0x5876302c
        __asm _emit 0x7C
        __asm _emit 0x2F
        // 0x58762FFD: cmp eax, 0x13f
        __asm _emit 0x3D
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763002: jg 0x5876302c
        __asm _emit 0x7F
        __asm _emit 0x28
        // 0x58763004: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876300A: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763010: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58763012: mov eax, dword ptr [ecx + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763018: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x5876301B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876301D: push 0xf231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763022: push eax
        __asm _emit 0x50
        // 0x58763023: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58763025: pop edi
        __asm _emit 0x5F
        // 0x58763026: pop esi
        __asm _emit 0x5E
        // 0x58763027: pop ebx
        __asm _emit 0x5B
        // 0x58763028: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5876302B: ret
        __asm _emit 0xC3
        // 0x5876302C: cmp eax, 0x142
        __asm _emit 0x3D
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763031: jne 0x58763075
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x58763033: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5876303A: jbe 0x58763058
        __asm _emit 0x76
        __asm _emit 0x1C
        // 0x5876303C: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763041: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763047: mov ecx, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876304D: pop edi
        __asm _emit 0x5F
        // 0x5876304E: pop esi
        __asm _emit 0x5E
        // 0x5876304F: pop ebx
        __asm _emit 0x5B
        // 0x58763050: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763053: jmp 0x58839950
        __asm _emit 0xE9
        __asm _emit 0xF8
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58763058: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876305E: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763064: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876306A: pop edi
        __asm _emit 0x5F
        // 0x5876306B: pop esi
        __asm _emit 0x5E
        // 0x5876306C: pop ebx
        __asm _emit 0x5B
        // 0x5876306D: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763070: jmp 0x58834250
        __asm _emit 0xE9
        __asm _emit 0xDB
        __asm _emit 0x11
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58763075: cmp eax, 0x143
        __asm _emit 0x3D
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876307A: jne 0x58763099
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5876307C: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763082: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763088: mov ecx, dword ptr [edx + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876308E: pop edi
        __asm _emit 0x5F
        // 0x5876308F: pop esi
        __asm _emit 0x5E
        // 0x58763090: pop ebx
        __asm _emit 0x5B
        // 0x58763091: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763094: jmp 0x58833fc0
        __asm _emit 0xE9
        __asm _emit 0x27
        __asm _emit 0x0F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58763099: cmp eax, 0x144
        __asm _emit 0x3D
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876309E: jne 0x587630b1
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587630A0: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587630A6: pop edi
        __asm _emit 0x5F
        // 0x587630A7: pop esi
        __asm _emit 0x5E
        // 0x587630A8: pop ebx
        __asm _emit 0x5B
        // 0x587630A9: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587630AC: jmp 0x587d9440
        __asm _emit 0xE9
        __asm _emit 0x8F
        __asm _emit 0x63
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587630B1: cmp eax, 0x15e
        __asm _emit 0x3D
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587630B6: jne 0x5876314e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587630BC: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587630C2: cmp edx, dword ptr [0x58a245a8]
        __asm _emit 0x3B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587630C8: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587630CE: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587630D4: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587630DA: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587630DD: mov ebx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x587630E0: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587630E2: jne 0x587630e9
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587630E4: call 0x587daa30
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587630E9: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587630EE: mov eax, dword ptr [eax + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587630F4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587630F6: je 0x58763119
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587630F8: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587630FC: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58763100: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58763103: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58763106: jne 0x58763119
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58763108: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876310E: mov ecx, dword ptr [edx + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763114: call 0x588c8750
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x56
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58763119: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876311F: push ebx
        __asm _emit 0x53
        // 0x58763120: push edi
        __asm _emit 0x57
        // 0x58763121: call 0x587d2630
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xF5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58763126: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876312C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876312E: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763134: push eax
        __asm _emit 0x50
        // 0x58763135: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x9B
        __asm _emit 0x21
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5876314E..0x587631D8; 138 mapped bytes.
extern "C" __declspec(naked) void FUN_58762d30_segment_01() {
    __asm {
        // 0x5876314E: cmp eax, 0x190
        __asm _emit 0x3D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763153: jne 0x587631ec
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763159: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876315F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58763161: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58763164: mov edi, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876316A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876316C: push 0xeeac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763171: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58763173: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58763175: cmp dword ptr [edi], 0x15e
        __asm _emit 0x81
        __asm _emit 0x3F
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876317B: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5876317E: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58763181: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58763183: push eax
        __asm _emit 0x50
        // 0x58763184: push ecx
        __asm _emit 0x51
        // 0x58763185: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876318B: jne 0x587631b3
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5876318D: call 0x587b9060
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x5E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58763192: mov edx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763198: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876319A: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5876319F: mov dword ptr [edx + 0x134], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587631A5: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587631AB: push ebx
        __asm _emit 0x53
        // 0x587631AC: call 0x587ba290
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587631B1: jmp 0x587631c4
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587631B3: call 0x587b9060
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x5E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587631B8: mov edx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587631BE: mov dword ptr [edx + 0x134], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587631C4: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587631CA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587631CC: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587631D2: push eax
        __asm _emit 0x50
        // 0x587631D3: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x9A
        __asm _emit 0x21
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587631EC..0x58763268; 124 mapped bytes.
extern "C" __declspec(naked) void FUN_58762d30_segment_02() {
    __asm {
        // 0x587631EC: cmp eax, 0x19b
        __asm _emit 0x3D
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587631F1: jne 0x5876320f
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587631F3: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587631F8: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587631FE: mov ecx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763204: pop edi
        __asm _emit 0x5F
        // 0x58763205: pop esi
        __asm _emit 0x5E
        // 0x58763206: pop ebx
        __asm _emit 0x5B
        // 0x58763207: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5876320A: jmp 0x58869f50
        __asm _emit 0xE9
        __asm _emit 0x41
        __asm _emit 0x6D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5876320F: cmp eax, 0x1f4
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763214: jne 0x5876327c
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x58763216: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876321C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5876321E: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58763221: mov edi, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763227: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58763229: push 0xeeac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876322E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58763230: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58763232: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x58763235: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876323B: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5876323E: mov ecx, dword ptr [ecx + 0x778]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763244: push edx
        __asm _emit 0x52
        // 0x58763245: push eax
        __asm _emit 0x50
        // 0x58763246: call 0x58789710
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5876324B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876324D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5876324F: mov eax, dword ptr [edx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x28
        // 0x58763252: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58763254: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876325A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876325C: je 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763262: push eax
        __asm _emit 0x50
        // 0x58763263: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x99
        __asm _emit 0x21
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5876327C..0x5876359A; 798 mapped bytes.
extern "C" __declspec(naked) void FUN_58762d30_segment_03() {
    __asm {
        // 0x5876327C: cmp eax, 0x258
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763281: jne 0x587632b5
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58763283: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763289: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876328F: mov eax, dword ptr [edx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x48
        // 0x58763292: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763298: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876329A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876329C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876329E: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587632A1: push eax
        __asm _emit 0x50
        // 0x587632A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587632A4: push 0x8001d002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587632A9: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xD9
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587632AE: pop edi
        __asm _emit 0x5F
        // 0x587632AF: pop esi
        __asm _emit 0x5E
        // 0x587632B0: pop ebx
        __asm _emit 0x5B
        // 0x587632B1: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587632B4: ret
        __asm _emit 0xC3
        // 0x587632B5: cmp eax, 0x259
        __asm _emit 0x3D
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587632BA: jne 0x587632cd
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587632BC: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587632C2: pop edi
        __asm _emit 0x5F
        // 0x587632C3: pop esi
        __asm _emit 0x5E
        // 0x587632C4: pop ebx
        __asm _emit 0x5B
        // 0x587632C5: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587632C8: jmp 0x5876ee10
        __asm _emit 0xE9
        __asm _emit 0x43
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587632CD: cmp eax, 0x2bc
        __asm _emit 0x3D
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587632D2: jne 0x5876331c
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x587632D4: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587632DA: mov edx, dword ptr [ecx + 0xdd4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587632E0: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587632E6: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587632EC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587632EE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587632F0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587632F2: push eax
        __asm _emit 0x50
        // 0x587632F3: mov eax, dword ptr [eax*4 + 0x58a0b1e4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587632FA: push eax
        __asm _emit 0x50
        // 0x587632FB: push 0x8001f002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x58763300: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xD9
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58763305: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876330B: mov ecx, dword ptr [ecx + 0xdd4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763311: pop edi
        __asm _emit 0x5F
        // 0x58763312: pop esi
        __asm _emit 0x5E
        // 0x58763313: pop ebx
        __asm _emit 0x5B
        // 0x58763314: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763317: jmp 0x5884e4e0
        __asm _emit 0xE9
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5876331C: cmp eax, 0x4a3
        __asm _emit 0x3D
        __asm _emit 0xA3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763321: jne 0x58763368
        __asm _emit 0x75
        __asm _emit 0x45
        // 0x58763323: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763329: movzx eax, word ptr [ecx + 0x128]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763330: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58763334: je 0x58763440
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876333A: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876333D: jne 0x5876334c
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5876333F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58763341: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58763344: pop edi
        __asm _emit 0x5F
        // 0x58763345: pop esi
        __asm _emit 0x5E
        // 0x58763346: pop ebx
        __asm _emit 0x5B
        // 0x58763347: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5876334A: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x5876334C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5876334E: mov word ptr [ecx + 0x12a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763355: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876335B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876335D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58763360: pop edi
        __asm _emit 0x5F
        // 0x58763361: pop esi
        __asm _emit 0x5E
        // 0x58763362: pop ebx
        __asm _emit 0x5B
        // 0x58763363: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763366: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x58763368: cmp eax, 0x4a4
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876336D: jne 0x58763386
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5876336F: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763375: mov ecx, dword ptr [ecx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876337B: pop edi
        __asm _emit 0x5F
        // 0x5876337C: pop esi
        __asm _emit 0x5E
        // 0x5876337D: pop ebx
        __asm _emit 0x5B
        // 0x5876337E: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763381: jmp 0x587987b0
        __asm _emit 0xE9
        __asm _emit 0x2A
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58763386: cmp eax, 0x4b0
        __asm _emit 0x3D
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876338B: jne 0x587633db
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x5876338D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876338F: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58763393: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58763397: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876339B: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876339F: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587633A3: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587633A7: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587633AB: mov eax, dword ptr [0x58a24594]
        __asm _emit 0xA1
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587633B0: mov edx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x587633B3: add eax, 0x60
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x60
        // 0x587633B6: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x587633B9: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x587633BB: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587633C0: lea esi, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587633C4: mov dword ptr [esp + 0x2c], 0x10
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587633CC: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587633CE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587633D0: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587633D2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587633D4: pop edi
        __asm _emit 0x5F
        // 0x587633D5: pop esi
        __asm _emit 0x5E
        // 0x587633D6: pop ebx
        __asm _emit 0x5B
        // 0x587633D7: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587633DA: ret
        __asm _emit 0xC3
        // 0x587633DB: cmp eax, 0x57b
        __asm _emit 0x3D
        __asm _emit 0x7B
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587633E0: jne 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587633E6: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587633EC: mov ecx, dword ptr [ecx + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587633F2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587633F4: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587633F7: pop edi
        __asm _emit 0x5F
        // 0x587633F8: pop esi
        __asm _emit 0x5E
        // 0x587633F9: pop ebx
        __asm _emit 0x5B
        // 0x587633FA: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587633FD: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x587633FF: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x58763402: jne 0x58763440
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x58763404: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876340A: cmp word ptr [ecx + 0x128], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763412: jne 0x58763421
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58763414: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58763416: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58763419: pop edi
        __asm _emit 0x5F
        // 0x5876341A: pop esi
        __asm _emit 0x5E
        // 0x5876341B: pop ebx
        __asm _emit 0x5B
        // 0x5876341C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5876341F: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x58763421: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763426: mov word ptr [ecx + 0x12a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876342D: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763433: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58763435: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58763438: pop edi
        __asm _emit 0x5F
        // 0x58763439: pop esi
        __asm _emit 0x5E
        // 0x5876343A: pop ebx
        __asm _emit 0x5B
        // 0x5876343B: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5876343E: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x58763440: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763445: mov eax, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876344B: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763451: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58763453: mov eax, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x48
        // 0x58763456: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876345C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876345E: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58763460: push edx
        __asm _emit 0x52
        // 0x58763461: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58763463: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58763465: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x58763468: push eax
        __asm _emit 0x50
        // 0x58763469: call 0x587b98b0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5876346E: pop edi
        __asm _emit 0x5F
        // 0x5876346F: pop esi
        __asm _emit 0x5E
        // 0x58763470: pop ebx
        __asm _emit 0x5B
        // 0x58763471: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763474: ret
        __asm _emit 0xC3
        // 0x58763475: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58763478: jne 0x587634a1
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x5876347A: cmp dword ptr [esi + 0x7c], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x5876347D: jne 0x58763593
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763483: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763489: call 0x587c2c90
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xF8
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5876348E: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763494: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58763496: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58763499: pop edi
        __asm _emit 0x5F
        // 0x5876349A: pop esi
        __asm _emit 0x5E
        // 0x5876349B: pop ebx
        __asm _emit 0x5B
        // 0x5876349C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5876349F: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x587634A1: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587634A4: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587634A7: jne 0x587634c7
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587634A9: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587634AF: call 0x587c2c90
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xF7
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587634B4: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587634BA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587634BC: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587634BF: pop edi
        __asm _emit 0x5F
        // 0x587634C0: pop esi
        __asm _emit 0x5E
        // 0x587634C1: pop ebx
        __asm _emit 0x5B
        // 0x587634C2: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587634C5: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x587634C7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587634C9: jne 0x587634e9
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587634CB: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587634D1: call 0x587c2c90
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xF7
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587634D6: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587634DC: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587634DE: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587634E1: pop edi
        __asm _emit 0x5F
        // 0x587634E2: pop esi
        __asm _emit 0x5E
        // 0x587634E3: pop ebx
        __asm _emit 0x5B
        // 0x587634E4: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587634E7: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x587634E9: cmp eax, 0x12
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x12
        // 0x587634EC: jne 0x58763501
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587634EE: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587634F4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587634F6: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587634F9: pop edi
        __asm _emit 0x5F
        // 0x587634FA: pop esi
        __asm _emit 0x5E
        // 0x587634FB: pop ebx
        __asm _emit 0x5B
        // 0x587634FC: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587634FF: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x58763501: cmp eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x14
        // 0x58763504: je 0x5876354e
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x58763506: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x28
        // 0x58763509: je 0x5876354e
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5876350B: cmp eax, 0x190
        __asm _emit 0x3D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763510: jne 0x5876352e
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58763512: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763518: mov edx, dword ptr [ecx + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876351E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58763520: mov word ptr [edx + 0x19c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763527: pop edi
        __asm _emit 0x5F
        // 0x58763528: pop esi
        __asm _emit 0x5E
        // 0x58763529: pop ebx
        __asm _emit 0x5B
        // 0x5876352A: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5876352D: ret
        __asm _emit 0xC3
        // 0x5876352E: cmp eax, 0x192
        __asm _emit 0x3D
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763533: jne 0x58763593
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x58763535: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876353B: mov ecx, dword ptr [ecx + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763541: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58763543: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58763546: pop edi
        __asm _emit 0x5F
        // 0x58763547: pop esi
        __asm _emit 0x5E
        // 0x58763548: pop ebx
        __asm _emit 0x5B
        // 0x58763549: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5876354C: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x5876354E: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763554: mov eax, dword ptr [ecx + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876355A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876355C: je 0x58763593
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5876355E: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58763562: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58763566: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58763569: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5876356C: jne 0x58763593
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x5876356E: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58763573: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58763576: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876357B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5876357D: mov eax, dword ptr [eax + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763583: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x58763586: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58763588: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5876358A: push eax
        __asm _emit 0x50
        // 0x5876358B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876358D: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58763593: pop edi
        __asm _emit 0x5F
        // 0x58763594: pop esi
        __asm _emit 0x5E
        // 0x58763595: pop ebx
        __asm _emit 0x5B
        // 0x58763596: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58763599: ret
        __asm _emit 0xC3
    }
}
