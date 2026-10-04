// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58842DC0 .. +0x125 bytes.
// Source symbol alias: FUN_58842dc0.
extern "C" __declspec(naked) void FUN_58842dc0() {
    __asm {
        // 0x58842DC0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58842DC2: push 0x5898498b
        __asm _emit 0x68
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58842DC7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842DCD: push eax
        __asm _emit 0x50
        // 0x58842DCE: sub esp, 0x68
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x68
        // 0x58842DD1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58842DD6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58842DD8: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58842DDC: push ebx
        __asm _emit 0x53
        // 0x58842DDD: push ebp
        __asm _emit 0x55
        // 0x58842DDE: push esi
        __asm _emit 0x56
        // 0x58842DDF: push edi
        __asm _emit 0x57
        // 0x58842DE0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58842DE5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58842DE7: push eax
        __asm _emit 0x50
        // 0x58842DE8: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58842DEC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842DF2: mov ebp, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842DF9: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842DFE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58842E00: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x9E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58842E05: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58842E08: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58842E0C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58842E0E: mov dword ptr [esp + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842E15: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58842E17: je 0x58842e38
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58842E19: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58842E1C: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58842E1F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58842E21: push ebx
        __asm _emit 0x53
        // 0x58842E22: push ebx
        __asm _emit 0x53
        // 0x58842E23: push ecx
        __asm _emit 0x51
        // 0x58842E24: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842E2A: push edx
        __asm _emit 0x52
        // 0x58842E2B: push ecx
        __asm _emit 0x51
        // 0x58842E2C: push ebx
        __asm _emit 0x53
        // 0x58842E2D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58842E2F: call 0x5875a7e0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x79
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842E34: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58842E36: jmp 0x58842e3a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58842E38: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58842E3A: push ebp
        __asm _emit 0x55
        // 0x58842E3B: lea edx, [esp + 0x1d]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x58842E3F: push edx
        __asm _emit 0x52
        // 0x58842E40: mov dword ptr [esp + 0x8c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58842E4B: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58842E4F: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58842E55: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58842E57: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58842E5B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58842E5D: mov word ptr [esp + 0x5c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58842E62: push edx
        __asm _emit 0x52
        // 0x58842E63: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58842E65: mov word ptr [esp + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x36
        // 0x58842E6A: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58842E6E: mov dword ptr [esp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58842E72: mov dword ptr [esp + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58842E76: mov dword ptr [esp + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58842E7A: mov dword ptr [esp + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58842E7E: call 0x5875a4b0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x76
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842E83: mov eax, 0x7fff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842E88: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58842E8C: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842E91: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58842E95: cmp dword ptr [esi + 0x138], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842E9B: jne 0x58842ea5
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58842E9D: mov dword ptr [esi + 0x138], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842EA3: jmp 0x58842eb7
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58842EA5: mov edx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842EAB: mov dword ptr [edx + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x54
        // 0x58842EAE: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842EB4: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x58842EB7: inc word ptr [esi + 0xf8]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842EBE: mov dword ptr [esi + 0x13c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842EC4: mov ecx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58842EC8: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842ECF: pop ecx
        __asm _emit 0x59
        // 0x58842ED0: pop edi
        __asm _emit 0x5F
        // 0x58842ED1: pop esi
        __asm _emit 0x5E
        // 0x58842ED2: pop ebp
        __asm _emit 0x5D
        // 0x58842ED3: pop ebx
        __asm _emit 0x5B
        // 0x58842ED4: mov ecx, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58842ED8: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58842EDA: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58842EDF: add esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x74
        // 0x58842EE2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
