// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 655 bytes in 2 exact ranges.
// Source symbol alias: FUN_58743e80.

// Ghidra body range 0x58743E80..0x5874401A; 410 mapped bytes.
extern "C" __declspec(naked) void FUN_58743e80_segment_00() {
    __asm {
        // 0x58743E80: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58743E82: push 0x5897e0a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xE0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58743E87: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743E8D: push eax
        __asm _emit 0x50
        // 0x58743E8E: sub esp, 0x48
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x48
        // 0x58743E91: push ebx
        __asm _emit 0x53
        // 0x58743E92: push ebp
        __asm _emit 0x55
        // 0x58743E93: push esi
        __asm _emit 0x56
        // 0x58743E94: push edi
        __asm _emit 0x57
        // 0x58743E95: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58743E9A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58743E9C: push eax
        __asm _emit 0x50
        // 0x58743E9D: lea eax, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58743EA1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743EA7: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58743EA9: mov eax, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x58743EAD: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743EB1: je 0x58743eff
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x58743EB3: push 0x1b
        __asm _emit 0x6A
        __asm _emit 0x1B
        // 0x58743EB5: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58743EB7: push 0x5898cee0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58743EBC: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58743EC0: mov dword ptr [esp + 0x38], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743EC8: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58743ECC: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58743ED1: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x11
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743ED6: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58743EDA: push eax
        __asm _emit 0x50
        // 0x58743EDB: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58743EDF: mov dword ptr [esp + 0x68], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58743EE3: call 0x58735360
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743EE8: push 0x589ac270
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xC2
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58743EED: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58743EF1: push ecx
        __asm _emit 0x51
        // 0x58743EF2: mov dword ptr [esp + 0x3c], 0x5898cec4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xC4
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58743EFA: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x8D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58743EFF: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58743F01: lea ecx, [esp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x58743F05: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58743F09: call 0x587436b0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743F0E: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58743F10: cmp byte ptr [ecx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743F14: je 0x58743f1b
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58743F16: mov edi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x58743F19: jmp 0x58743f36
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58743F1B: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x58743F1E: cmp byte ptr [edx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743F22: je 0x58743f28
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58743F24: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58743F26: jmp 0x58743f36
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58743F28: mov eax, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x58743F2C: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58743F2F: lea edx, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58743F32: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58743F34: jne 0x58743fa1
        __asm _emit 0x75
        __asm _emit 0x6B
        // 0x58743F36: cmp byte ptr [edi + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743F3A: mov esi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x58743F3D: jne 0x58743f42
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58743F3F: mov dword ptr [edi + 4], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x58743F42: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58743F45: cmp dword ptr [eax + 4], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58743F48: jne 0x58743f4f
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58743F4A: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58743F4D: jmp 0x58743f5a
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58743F4F: cmp dword ptr [esi], ebx
        __asm _emit 0x39
        __asm _emit 0x1E
        // 0x58743F51: jne 0x58743f57
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58743F53: mov dword ptr [esi], edi
        __asm _emit 0x89
        __asm _emit 0x3E
        // 0x58743F55: jmp 0x58743f5a
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58743F57: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58743F5A: mov ebx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x58743F5D: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58743F5F: cmp eax, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58743F63: jne 0x58743f7a
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58743F65: cmp byte ptr [edi + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743F69: je 0x58743f6f
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58743F6B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58743F6D: jmp 0x58743f78
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58743F6F: push edi
        __asm _emit 0x57
        // 0x58743F70: call 0x587430c0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743F75: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58743F78: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x58743F7A: mov ebx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x58743F7D: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58743F81: cmp dword ptr [ebx + 8], ecx
        __asm _emit 0x39
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x58743F84: jne 0x58743ffd
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x58743F86: cmp byte ptr [edi + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743F8A: je 0x58743f93
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58743F8C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58743F8E: mov dword ptr [ebx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58743F91: jmp 0x58743ffd
        __asm _emit 0xEB
        __asm _emit 0x6A
        // 0x58743F93: push edi
        __asm _emit 0x57
        // 0x58743F94: call 0x58743140
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743F99: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58743F9C: mov dword ptr [ebx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58743F9F: jmp 0x58743ffd
        __asm _emit 0xEB
        __asm _emit 0x5C
        // 0x58743FA1: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58743FA4: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58743FA6: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58743FA8: cmp eax, dword ptr [ebx + 8]
        __asm _emit 0x3B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58743FAB: jne 0x58743fb1
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58743FAD: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58743FAF: jmp 0x58743fca
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x58743FB1: cmp byte ptr [edi + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743FB5: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x58743FB8: jne 0x58743fbd
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58743FBA: mov dword ptr [edi + 4], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x58743FBD: mov dword ptr [esi], edi
        __asm _emit 0x89
        __asm _emit 0x3E
        // 0x58743FBF: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x58743FC2: mov dword ptr [edx], ecx
        __asm _emit 0x89
        __asm _emit 0x0A
        // 0x58743FC4: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x58743FC7: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58743FCA: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58743FCD: cmp dword ptr [ecx + 4], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x58743FD0: jne 0x58743fd7
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58743FD2: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58743FD5: jmp 0x58743fe5
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58743FD7: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x58743FDA: cmp dword ptr [ecx], ebx
        __asm _emit 0x39
        __asm _emit 0x19
        // 0x58743FDC: jne 0x58743fe2
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58743FDE: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58743FE0: jmp 0x58743fe5
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58743FE2: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58743FE5: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x58743FE8: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58743FEB: lea ecx, [ebx + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x28
        // 0x58743FEE: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x28
        // 0x58743FF1: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58743FF3: je 0x58743ffd
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58743FF5: mov bl, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x19
        // 0x58743FF7: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58743FF9: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x58743FFB: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x58743FFD: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58744001: mov bl, 1
        __asm _emit 0xB3
        __asm _emit 0x01
        // 0x58744003: cmp byte ptr [edx + 0x28], bl
        __asm _emit 0x38
        __asm _emit 0x5A
        __asm _emit 0x28
        // 0x58744006: jne 0x5874410b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874400C: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5874400F: cmp edi, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58744012: je 0x58744108
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744018: jmp 0x58744020
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58744020..0x58744115; 245 mapped bytes.
extern "C" __declspec(naked) void FUN_58743e80_segment_01() {
    __asm {
        // 0x58744020: cmp byte ptr [edi + 0x28], bl
        __asm _emit 0x38
        __asm _emit 0x5F
        __asm _emit 0x28
        // 0x58744023: jne 0x58744108
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744029: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5874402B: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5874402D: jne 0x58744094
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x5874402F: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58744032: cmp byte ptr [eax + 0x28], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58744036: jne 0x5874404a
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58744038: mov byte ptr [eax + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x28
        // 0x5874403B: push esi
        __asm _emit 0x56
        // 0x5874403C: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5874403E: mov byte ptr [esi + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58744042: call 0x58743780
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744047: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5874404A: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x5874404E: jne 0x587440c4
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x58744050: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58744052: cmp byte ptr [ecx + 0x28], bl
        __asm _emit 0x38
        __asm _emit 0x59
        __asm _emit 0x28
        // 0x58744055: jne 0x5874405f
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58744057: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874405A: cmp byte ptr [edx + 0x28], bl
        __asm _emit 0x38
        __asm _emit 0x5A
        __asm _emit 0x28
        // 0x5874405D: je 0x587440c0
        __asm _emit 0x74
        __asm _emit 0x61
        // 0x5874405F: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58744062: cmp byte ptr [ecx + 0x28], bl
        __asm _emit 0x38
        __asm _emit 0x59
        __asm _emit 0x28
        // 0x58744065: jne 0x5874407b
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58744067: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58744069: mov byte ptr [edx + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x28
        // 0x5874406C: push eax
        __asm _emit 0x50
        // 0x5874406D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5874406F: mov byte ptr [eax + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58744073: call 0x587430e0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744078: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5874407B: mov cl, byte ptr [esi + 0x28]
        __asm _emit 0x8A
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x5874407E: mov byte ptr [eax + 0x28], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x58744081: mov byte ptr [esi + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x28
        // 0x58744084: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58744087: push esi
        __asm _emit 0x56
        // 0x58744088: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5874408A: mov byte ptr [edx + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x28
        // 0x5874408D: call 0x58743780
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744092: jmp 0x58744108
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x58744094: cmp byte ptr [eax + 0x28], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58744098: jne 0x587440ab
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5874409A: mov byte ptr [eax + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x28
        // 0x5874409D: push esi
        __asm _emit 0x56
        // 0x5874409E: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587440A0: mov byte ptr [esi + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x587440A4: call 0x587430e0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587440A9: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587440AB: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x587440AF: jne 0x587440c4
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587440B1: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587440B4: cmp byte ptr [ecx + 0x28], bl
        __asm _emit 0x38
        __asm _emit 0x59
        __asm _emit 0x28
        // 0x587440B7: jne 0x587440d7
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587440B9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587440BB: cmp byte ptr [edx + 0x28], bl
        __asm _emit 0x38
        __asm _emit 0x5A
        __asm _emit 0x28
        // 0x587440BE: jne 0x587440d7
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587440C0: mov byte ptr [eax + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x587440C4: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587440C7: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x587440C9: mov esi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x587440CC: cmp edi, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587440CF: jne 0x58744020
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587440D5: jmp 0x58744108
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x587440D7: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587440D9: cmp byte ptr [ecx + 0x28], bl
        __asm _emit 0x38
        __asm _emit 0x59
        __asm _emit 0x28
        // 0x587440DC: jne 0x587440f2
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587440DE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587440E1: mov byte ptr [edx + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x28
        // 0x587440E4: push eax
        __asm _emit 0x50
        // 0x587440E5: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587440E7: mov byte ptr [eax + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x587440EB: call 0x58743780
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587440F0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587440F2: mov cl, byte ptr [esi + 0x28]
        __asm _emit 0x8A
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x587440F5: mov byte ptr [eax + 0x28], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x587440F8: mov byte ptr [esi + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x28
        // 0x587440FB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587440FD: push esi
        __asm _emit 0x56
        // 0x587440FE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58744100: mov byte ptr [edx + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x28
        // 0x58744103: call 0x587430e0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744108: mov byte ptr [edi + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5F
        __asm _emit 0x28
        // 0x5874410B: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874410F: push eax
        __asm _emit 0x50
        // 0x58744110: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x8B
        __asm _emit 0x23
        __asm _emit 0x00
    }
}
