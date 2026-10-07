// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 436 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d7ec0.

// Ghidra body range 0x588D7EC0..0x588D8074; 436 mapped bytes.
extern "C" __declspec(naked) void FUN_588d7ec0_segment_00() {
    __asm {
        // 0x588D7EC0: sub esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7EC6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D7ECB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D7ECD: mov dword ptr [esp + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7ED4: push esi
        __asm _emit 0x56
        // 0x588D7ED5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D7ED7: mov ecx, dword ptr [esp + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7EDE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588D7EE0: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588D7EE2: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588D7EE5: push edi
        __asm _emit 0x57
        // 0x588D7EE6: jne 0x588d7f86
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7EEC: shr eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x588D7EEF: and eax, 0x7fff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7EF4: lea edi, [esi + 0x6044]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7EFA: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x588D7EFC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588D7EFE: mov ecx, dword ptr [esi + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F04: shr eax, 0x11
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x11
        // 0x588D7F07: push edi
        __asm _emit 0x57
        // 0x588D7F08: mov dword ptr [esi + 0x6048], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F0E: call 0x58749900
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x19
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588D7F13: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588D7F1A: je 0x588d803c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F20: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F25: lea ecx, [esp + 0x11]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x588D7F29: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D7F2B: push ecx
        __asm _emit 0x51
        // 0x588D7F2C: mov byte ptr [esp + 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588D7F31: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x4D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D7F36: mov eax, dword ptr [esi + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F3C: mov edx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F42: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F48: mov ecx, dword ptr [esi + 0x6048]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F4E: push edx
        __asm _emit 0x52
        // 0x588D7F4F: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588D7F51: push eax
        __asm _emit 0x50
        // 0x588D7F52: push ecx
        __asm _emit 0x51
        // 0x588D7F53: push edx
        __asm _emit 0x52
        // 0x588D7F54: lea eax, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F5A: push eax
        __asm _emit 0x50
        // 0x588D7F5B: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D7F60: mov ecx, dword ptr [eax + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D7F66: mov edx, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D7F6C: push ecx
        __asm _emit 0x51
        // 0x588D7F6D: push edx
        __asm _emit 0x52
        // 0x588D7F6E: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D7F72: push 0x589a1014
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D7F77: push eax
        __asm _emit 0x50
        // 0x588D7F78: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D7F7E: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588D7F81: jmp 0x588d8017
        __asm _emit 0xE9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F86: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588D7F89: jne 0x588d803c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7F8F: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D7F95: shr eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x588D7F98: push eax
        __asm _emit 0x50
        // 0x588D7F99: call 0x5878a160
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x21
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588D7F9E: mov ecx, dword ptr [esi + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7FA4: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588D7FA6: push edi
        __asm _emit 0x57
        // 0x588D7FA7: call 0x58749930
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588D7FAC: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588D7FB3: je 0x588d803c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7FB9: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7FBE: lea edx, [esp + 0x11]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x588D7FC2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D7FC4: push edx
        __asm _emit 0x52
        // 0x588D7FC5: mov byte ptr [esp + 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588D7FCA: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D7FCF: mov eax, dword ptr [esi + 0x6028]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7FD5: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7FDB: mov edx, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7FE1: push ecx
        __asm _emit 0x51
        // 0x588D7FE2: push edx
        __asm _emit 0x52
        // 0x588D7FE3: add edi, 0x3a0
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7FE9: push edi
        __asm _emit 0x57
        // 0x588D7FEA: lea eax, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7FF0: push eax
        __asm _emit 0x50
        // 0x588D7FF1: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D7FF6: mov ecx, dword ptr [eax + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D7FFC: mov edx, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D8002: push ecx
        __asm _emit 0x51
        // 0x588D8003: push edx
        __asm _emit 0x52
        // 0x588D8004: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D8008: push 0x589a0fd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x0F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D800D: push eax
        __asm _emit 0x50
        // 0x588D800E: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D8014: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x588D8017: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D8019: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588D801D: push ecx
        __asm _emit 0x51
        // 0x588D801E: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D8022: push edx
        __asm _emit 0x52
        // 0x588D8023: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D8029: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588D802F: push eax
        __asm _emit 0x50
        // 0x588D8030: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D8034: push eax
        __asm _emit 0x50
        // 0x588D8035: push ecx
        __asm _emit 0x51
        // 0x588D8036: call dword ptr [0x5898c1a0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D803C: cmp dword ptr [esi + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8043: je 0x588d805b
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588D8045: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D804B: lea edx, [esi + 0x6044]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8051: push edx
        __asm _emit 0x52
        // 0x588D8052: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588D8055: push eax
        __asm _emit 0x50
        // 0x588D8056: call 0x587561f0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xE1
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588D805B: mov ecx, dword ptr [esp + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8062: pop edi
        __asm _emit 0x5F
        // 0x588D8063: pop esi
        __asm _emit 0x5E
        // 0x588D8064: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588D8066: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x4B
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D806B: add esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8071: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
