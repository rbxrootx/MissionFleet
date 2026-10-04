// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D9E10 .. +0x16F bytes.
// Source symbol alias: FUN_588d9e10.
extern "C" __declspec(naked) void FUN_588d9e10() {
    __asm {
        // 0x588D9E10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D9E12: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D9E17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E1D: push eax
        __asm _emit 0x50
        // 0x588D9E1E: push ecx
        __asm _emit 0x51
        // 0x588D9E1F: push esi
        __asm _emit 0x56
        // 0x588D9E20: push edi
        __asm _emit 0x57
        // 0x588D9E21: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D9E26: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D9E28: push eax
        __asm _emit 0x50
        // 0x588D9E29: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D9E2D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E33: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D9E35: mov edx, dword ptr [esi + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E3B: mov eax, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E41: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D9E43: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588D9E48: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588D9E4E: mov dword ptr [esi + 0x1434], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E54: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588D9E56: jbe 0x588d9e5a
        __asm _emit 0x76
        __asm _emit 0x02
        // 0x588D9E58: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588D9E5A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D9E5C: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588D9E62: mov dword ptr [esi + 0x143c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E68: mov dword ptr [esi + 0x1438], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E6E: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588D9E74: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D9E77: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588D9E7D: mov dword ptr [esi + 0xdd4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E83: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D9E85: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588D9E87: mov dword ptr [esi + 0x1434], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E8D: jge 0x588d9eab
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x588D9E8F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D9E91: je 0x588d9ea1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D9E93: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x588D9E96: cdq
        __asm _emit 0x99
        // 0x588D9E97: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D9E99: mov dword ptr [esi + 0x1444], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9E9F: jmp 0x588d9eb0
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x588D9EA1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D9EA3: mov dword ptr [esi + 0x1444], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9EA9: jmp 0x588d9eb0
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588D9EAB: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9EB0: push 0x8c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9EB5: mov dword ptr [esi + 0x1444], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9EBB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x2D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D9EC0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D9EC3: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588D9EC7: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9ECF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D9ED1: je 0x588d9ef1
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588D9ED3: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588D9ED6: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588D9ED9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D9EDB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D9EDD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D9EDF: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x28
        // 0x588D9EE2: push ecx
        __asm _emit 0x51
        // 0x588D9EE3: sub edx, 0x5a
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x5A
        // 0x588D9EE6: push edx
        __asm _emit 0x52
        // 0x588D9EE7: push esi
        __asm _emit 0x56
        // 0x588D9EE8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D9EEA: call 0x5884d8f0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x3A
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588D9EEF: jmp 0x588d9ef3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D9EF1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D9EF3: mov ecx, dword ptr [esi + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9EF9: mov edx, dword ptr [esi + 0x1434]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9EFF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D9F01: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D9F03: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588D9F09: push ecx
        __asm _emit 0x51
        // 0x588D9F0A: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9F10: push edx
        __asm _emit 0x52
        // 0x588D9F11: mov dword ptr [esi + 0x1448], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9F17: movzx edx, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D9F1B: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588D9F1E: push edx
        __asm _emit 0x52
        // 0x588D9F1F: lea ecx, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9F25: push ecx
        __asm _emit 0x51
        // 0x588D9F26: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D9F28: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D9F30: call 0x5884d420
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x34
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588D9F35: mov edi, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9F3B: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588D9F3E: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9F43: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588D9F47: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D9F49: je 0x588d9f51
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D9F4B: push edi
        __asm _emit 0x57
        // 0x588D9F4C: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x8F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D9F51: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588D9F54: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D9F56: je 0x588d9f5e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D9F58: push edi
        __asm _emit 0x57
        // 0x588D9F59: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x8F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D9F5E: mov esi, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9F64: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9F69: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588D9F6D: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D9F71: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9F78: pop ecx
        __asm _emit 0x59
        // 0x588D9F79: pop edi
        __asm _emit 0x5F
        // 0x588D9F7A: pop esi
        __asm _emit 0x5E
        // 0x588D9F7B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588D9F7E: ret
        __asm _emit 0xC3
    }
}
