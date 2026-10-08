// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 253 bytes in 1 exact ranges.
// Source symbol alias: FUN_58774db0.

// Ghidra body range 0x58774DB0..0x58774EAD; 253 mapped bytes.
extern "C" __declspec(naked) void FUN_58774db0_segment_00() {
    __asm {
        // 0x58774DB0: sub esp, 0x210
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774DB6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58774DBB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58774DBD: mov dword ptr [esp + 0x20c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774DC4: push esi
        __asm _emit 0x56
        // 0x58774DC5: mov esi, dword ptr [esp + 0x218]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774DCC: push edi
        __asm _emit 0x57
        // 0x58774DCD: push 0x108
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774DD2: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58774DD6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774DD8: push eax
        __asm _emit 0x50
        // 0x58774DD9: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58774DDB: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x7E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774DE0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58774DE3: push esi
        __asm _emit 0x56
        // 0x58774DE4: mov dword ptr [esp + 0x110], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774DEF: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774DF5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58774DF7: je 0x58774e07
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58774DF9: push esi
        __asm _emit 0x56
        // 0x58774DFA: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58774DFE: push ecx
        __asm _emit 0x51
        // 0x58774DFF: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774E05: jmp 0x58774e4a
        __asm _emit 0xEB
        __asm _emit 0x43
        // 0x58774E07: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774E0C: lea edx, [esp + 0x114]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774E13: push edx
        __asm _emit 0x52
        // 0x58774E14: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774E16: call dword ptr [0x5898c150]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774E1C: lea eax, [esp + 0x110]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774E23: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x58774E25: push eax
        __asm _emit 0x50
        // 0x58774E26: call 0x5897ce92
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774E2B: lea ecx, [esp + 0x118]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774E32: push ecx
        __asm _emit 0x51
        // 0x58774E33: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58774E37: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774E3C: push edx
        __asm _emit 0x52
        // 0x58774E3D: mov byte ptr [eax + 1], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58774E41: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774E47: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58774E4A: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58774E4E: push eax
        __asm _emit 0x50
        // 0x58774E4F: lea ecx, [edi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58774E52: call 0x58773950
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774E57: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58774E59: call 0x58772720
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774E5E: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58774E60: jne 0x58774e75
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58774E62: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58774E64: call dword ptr [0x5898c154]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774E6A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774E6C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58774E6E: call 0x58774d50
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774E73: jmp 0x58774e94
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58774E75: mov eax, dword ptr [0x589cfc90]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58774E7A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58774E7C: je 0x58774e8f
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58774E7E: push eax
        __asm _emit 0x50
        // 0x58774E7F: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774E85: mov dword ptr [0x589cfc90], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774E8F: mov eax, 7
        __asm _emit 0xB8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774E94: mov ecx, dword ptr [esp + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774E9B: pop edi
        __asm _emit 0x5F
        // 0x58774E9C: pop esi
        __asm _emit 0x5E
        // 0x58774E9D: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58774E9F: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x7D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774EA4: add esp, 0x210
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774EAA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
