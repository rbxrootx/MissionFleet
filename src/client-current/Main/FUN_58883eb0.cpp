// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 207 bytes in 1 exact ranges.
// Source symbol alias: FUN_58883eb0.

// Ghidra body range 0x58883EB0..0x58883F7F; 207 mapped bytes.
extern "C" __declspec(naked) void FUN_58883eb0_segment_00() {
    __asm {
        // 0x58883EB0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58883EB3: push ebx
        __asm _emit 0x53
        // 0x58883EB4: push ebp
        __asm _emit 0x55
        // 0x58883EB5: push esi
        __asm _emit 0x56
        // 0x58883EB6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58883EB8: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58883EBB: push edi
        __asm _emit 0x57
        // 0x58883EBC: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58883EBF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58883EC1: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58883EC3: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58883EC8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58883ECA: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58883ECD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58883ECF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58883ED2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58883ED4: jne 0x58883eda
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58883ED6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58883ED8: jmp 0x58883f0d
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x58883EDA: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58883EDC: jbe 0x58883ee3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58883EDE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x8D
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58883EE3: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58883EE7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58883EE9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58883EEB: je 0x58883ef1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58883EED: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58883EEF: je 0x58883ef6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58883EF1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x8D
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58883EF6: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58883EFA: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58883EFC: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58883F01: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58883F03: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58883F06: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58883F08: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58883F0B: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58883F0D: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58883F11: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58883F15: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58883F19: push ecx
        __asm _emit 0x51
        // 0x58883F1A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58883F1C: push edx
        __asm _emit 0x52
        // 0x58883F1D: push eax
        __asm _emit 0x50
        // 0x58883F1E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58883F20: call 0x588823d0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58883F25: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58883F28: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58883F2B: jbe 0x58883f32
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58883F2D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x8D
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58883F32: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58883F34: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58883F36: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58883F3A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58883F3C: jne 0x58883f5c
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58883F3E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x8D
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58883F43: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58883F45: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58883F47: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58883F4A: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x58883F4C: lea edi, [ebx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x4B
        // 0x58883F4F: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58883F52: ja 0x58883f67
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x58883F54: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58883F56: je 0x58883f60
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58883F58: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58883F5A: jmp 0x58883f62
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58883F5C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58883F5E: jmp 0x58883f45
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x58883F60: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58883F62: cmp edi, dword ptr [esi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58883F65: jae 0x58883f6c
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58883F67: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x8D
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58883F6C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58883F70: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58883F73: pop edi
        __asm _emit 0x5F
        // 0x58883F74: pop esi
        __asm _emit 0x5E
        // 0x58883F75: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x58883F77: pop ebp
        __asm _emit 0x5D
        // 0x58883F78: pop ebx
        __asm _emit 0x5B
        // 0x58883F79: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58883F7C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
