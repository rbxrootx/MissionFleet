// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58777DF0 .. +0x138 bytes.
// Source symbol alias: FUN_58777df0.
extern "C" __declspec(naked) void FUN_58777df0() {
    __asm {
        // 0x58777DF0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58777DF2: push 0x5897f254
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xF2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58777DF7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777DFD: push eax
        __asm _emit 0x50
        // 0x58777DFE: push ecx
        __asm _emit 0x51
        // 0x58777DFF: push ebx
        __asm _emit 0x53
        // 0x58777E00: push esi
        __asm _emit 0x56
        // 0x58777E01: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58777E06: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58777E08: push eax
        __asm _emit 0x50
        // 0x58777E09: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58777E0D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777E13: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58777E15: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58777E19: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58777E1D: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58777E21: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58777E25: push eax
        __asm _emit 0x50
        // 0x58777E26: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58777E2A: push ecx
        __asm _emit 0x51
        // 0x58777E2B: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58777E2F: push edx
        __asm _emit 0x52
        // 0x58777E30: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58777E34: push eax
        __asm _emit 0x50
        // 0x58777E35: push ecx
        __asm _emit 0x51
        // 0x58777E36: push edx
        __asm _emit 0x52
        // 0x58777E37: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58777E39: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xB3
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58777E3E: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58777E44: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58777E49: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58777E4B: lea ecx, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x58777E4E: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777E52: mov dword ptr [esi], 0x589964e0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE0
        __asm _emit 0x64
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58777E58: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x7F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58777E5D: lea ecx, [esi + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58777E60: mov byte ptr [esp + 0x18], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x58777E65: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x7F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58777E6A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777E6C: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58777E6F: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777E75: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x58777E78: mov dword ptr [esi + 0x88], 0x2710
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777E82: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777E88: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777E8E: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777E94: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777E9A: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777EA0: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777EA6: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777EAC: push 0x44
        __asm _emit 0x6A
        __asm _emit 0x44
        // 0x58777EAE: mov byte ptr [esp + 0x1c], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        // 0x58777EB3: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777EB9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x4D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777EBE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58777EC1: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58777EC5: mov byte ptr [esp + 0x18], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x03
        // 0x58777ECA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58777ECC: je 0x58777ed7
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58777ECE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58777ED0: call 0x587a8ea0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x0F
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58777ED5: jmp 0x58777ed9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58777ED7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777ED9: push 0x1c
        __asm _emit 0x6A
        __asm _emit 0x1C
        // 0x58777EDB: mov byte ptr [esp + 0x1c], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        // 0x58777EE0: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777EE6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x4D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777EEB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58777EEE: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58777EF2: mov byte ptr [esp + 0x18], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x58777EF7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58777EF9: je 0x58777f04
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58777EFB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58777EFD: call 0x587ab390
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58777F02: jmp 0x58777f06
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58777F04: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777F06: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777F0C: mov byte ptr [esi + 0xb4], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777F12: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58777F14: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58777F18: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777F1F: pop ecx
        __asm _emit 0x59
        // 0x58777F20: pop esi
        __asm _emit 0x5E
        // 0x58777F21: pop ebx
        __asm _emit 0x5B
        // 0x58777F22: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58777F25: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
