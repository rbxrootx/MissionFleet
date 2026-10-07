// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874EB40 .. +0xF8 bytes.
// Source symbol alias: FUN_5874eb40.
extern "C" __declspec(naked) void FUN_5874eb40() {
    __asm {
        // 0x5874EB40: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5874EB42: push 0x5897e563
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0xE5
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5874EB47: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874EB4D: push eax
        __asm _emit 0x50
        // 0x5874EB4E: push ecx
        __asm _emit 0x51
        // 0x5874EB4F: push ebx
        __asm _emit 0x53
        // 0x5874EB50: push ebp
        __asm _emit 0x55
        // 0x5874EB51: push esi
        __asm _emit 0x56
        // 0x5874EB52: push edi
        __asm _emit 0x57
        // 0x5874EB53: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874EB58: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874EB5A: push eax
        __asm _emit 0x50
        // 0x5874EB5B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EB5F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874EB65: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5874EB67: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874EB6B: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874EB6F: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5874EB73: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874EB77: push eax
        __asm _emit 0x50
        // 0x5874EB78: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874EB7C: push ecx
        __asm _emit 0x51
        // 0x5874EB7D: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874EB81: push edx
        __asm _emit 0x52
        // 0x5874EB82: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874EB86: push eax
        __asm _emit 0x50
        // 0x5874EB87: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874EB8B: push ecx
        __asm _emit 0x51
        // 0x5874EB8C: push edx
        __asm _emit 0x52
        // 0x5874EB8D: push eax
        __asm _emit 0x50
        // 0x5874EB8E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874EB90: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xD1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874EB95: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5874EB97: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874EB9B: mov dword ptr [edi], 0x5898d41c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x1C
        __asm _emit 0xD4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874EBA1: lea ebp, [edi + 0x1e8]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874EBA7: mov dword ptr [esp + 0x3c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874EBAF: nop
        __asm _emit 0x90
        // 0x5874EBB0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5874EBB2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xE0
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874EBB7: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5874EBB9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874EBBC: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874EBC0: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5874EBC5: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5874EBC7: je 0x5874ebf4
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5874EBC9: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874EBCD: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5874EBD0: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5874EBD3: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x40
        // 0x5874EBD6: push edx
        __asm _emit 0x52
        // 0x5874EBD7: push ebx
        __asm _emit 0x53
        // 0x5874EBD8: push ebx
        __asm _emit 0x53
        // 0x5874EBD9: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5874EBDC: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x5874EBDF: push eax
        __asm _emit 0x50
        // 0x5874EBE0: push ecx
        __asm _emit 0x51
        // 0x5874EBE1: push edi
        __asm _emit 0x57
        // 0x5874EBE2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874EBE4: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874EBE9: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874EBEF: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5874EBF2: jmp 0x5874ebf6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874EBF4: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5874EBF6: mov dword ptr [ebp], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x5874EBF9: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874EBFE: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5874EC02: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5874EC05: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5874EC0A: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874EC0E: jne 0x5874ebb0
        __asm _emit 0x75
        __asm _emit 0xA0
        // 0x5874EC10: mov ecx, dword ptr [edi + 0x1e8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874EC16: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874EC1B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874EC20: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5874EC22: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EC26: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874EC2D: pop ecx
        __asm _emit 0x59
        // 0x5874EC2E: pop edi
        __asm _emit 0x5F
        // 0x5874EC2F: pop esi
        __asm _emit 0x5E
        // 0x5874EC30: pop ebp
        __asm _emit 0x5D
        // 0x5874EC31: pop ebx
        __asm _emit 0x5B
        // 0x5874EC32: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5874EC35: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
