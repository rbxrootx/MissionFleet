// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587DAD80 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_587dad80() {
    __asm {
        // 0x587DAD80: sub esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD86: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587DAD8B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587DAD8D: mov dword ptr [esp + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD94: push esi
        __asm _emit 0x56
        // 0x587DAD95: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587DAD97: cmp dword ptr [esi + 0xd78], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAD9E: je 0x587dae8c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DADA4: mov eax, dword ptr [esi + 0xe10]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DADAA: push ebx
        __asm _emit 0x53
        // 0x587DADAB: push edi
        __asm _emit 0x57
        // 0x587DADAC: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DADB2: push eax
        __asm _emit 0x50
        // 0x587DADB3: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DADB7: push 0x5899bac4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0xBA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DADBC: push ecx
        __asm _emit 0x51
        // 0x587DADBD: mov dword ptr [esi + 0xe0c], 0x2000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DADC7: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587DADC9: mov ebx, dword ptr [0x5898c178]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x78
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DADCF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587DADD2: lea edx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587DADD6: push edx
        __asm _emit 0x52
        // 0x587DADD7: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587DADD9: cmp dword ptr [esi + 0xe10], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DADE0: jne 0x587dadf8
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587DADE2: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DADE8: mov dword ptr [esi + 0xe10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DADEE: mov dword ptr [esi + 0xe14], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DADF8: mov ecx, dword ptr [esi + 0xe10]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DADFE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAE00: push ecx
        __asm _emit 0x51
        // 0x587DAE01: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAE03: call 0x587d8ff0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAE08: mov edx, dword ptr [esi + 0xe10]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAE0E: push eax
        __asm _emit 0x50
        // 0x587DAE0F: push edx
        __asm _emit 0x52
        // 0x587DAE10: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DAE14: push 0x5899baac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0xBA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DAE19: push eax
        __asm _emit 0x50
        // 0x587DAE1A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587DAE1C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587DAE1F: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587DAE23: push ecx
        __asm _emit 0x51
        // 0x587DAE24: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587DAE26: mov edx, dword ptr [esi + 0xe10]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAE2C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAE2E: push edx
        __asm _emit 0x52
        // 0x587DAE2F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAE31: call 0x587d8ff0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAE36: pop edi
        __asm _emit 0x5F
        // 0x587DAE37: pop ebx
        __asm _emit 0x5B
        // 0x587DAE38: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DAE3A: je 0x587dae83
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x587DAE3C: mov eax, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAE42: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DAE46: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x587DAE48: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587DAE4B: je 0x587dae67
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587DAE4D: mov ecx, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAE53: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DAE55: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587DAE58: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DAE5A: mov ecx, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAE60: mov dword ptr [ecx + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAE67: mov edx, dword ptr [esi + 0xe10]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAE6D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAE6F: push edx
        __asm _emit 0x52
        // 0x587DAE70: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAE72: call 0x587d8ff0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAE77: inc dword ptr [esi + 0xe14]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAE7D: mov dword ptr [esi + 0xe10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAE83: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAE85: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAE87: call 0x587d6830
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAE8C: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAE93: pop esi
        __asm _emit 0x5E
        // 0x587DAE94: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587DAE96: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x1D
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DAE9B: add esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAEA1: ret
        __asm _emit 0xC3
    }
}
