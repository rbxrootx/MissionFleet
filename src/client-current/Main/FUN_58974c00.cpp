// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 238 bytes in 1 exact ranges.
// Source symbol alias: FUN_58974c00.

// Ghidra body range 0x58974C00..0x58974CEE; 238 mapped bytes.
extern "C" __declspec(naked) void FUN_58974c00_segment_00() {
    __asm {
        // 0x58974C00: push ebp
        __asm _emit 0x55
        // 0x58974C01: push esi
        __asm _emit 0x56
        // 0x58974C02: push edi
        __asm _emit 0x57
        // 0x58974C03: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58974C05: push 0xda
        __asm _emit 0x68
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974C0A: call 0x58974e00
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974C0F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58974C11: jne 0x58974c3e
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x58974C13: mov edi, 0x589ce910
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0xE9
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58974C18: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58974C1B: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58974C1D: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58974C1F: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58974C21: lea edx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58974C24: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58974C26: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58974C28: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58974C2A: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58974C2D: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58974C2F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58974C31: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58974C34: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58974C36: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58974C38: pop edi
        __asm _emit 0x5F
        // 0x58974C39: pop esi
        __asm _emit 0x5E
        // 0x58974C3A: pop ebp
        __asm _emit 0x5D
        // 0x58974C3B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58974C3E: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974C42: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974C47: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974C49: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58974C4B: call dword ptr [edx + 0x28]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x28
        // 0x58974C4E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58974C50: push 0xd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974C55: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974C57: call dword ptr [eax + 0x28]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x28
        // 0x58974C5A: mov eax, dword ptr [ebp + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974C60: cmp eax, 0xe1
        __asm _emit 0x3D
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974C65: je 0x58974c7e
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58974C67: cmp eax, 0xe0
        __asm _emit 0x3D
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974C6C: je 0x58974c7e
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58974C6E: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58974C70: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58974C72: push 0x12
        __asm _emit 0x6A
        __asm _emit 0x12
        // 0x58974C74: push 0x589ce6c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xE6
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58974C79: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974C7B: call dword ptr [edx + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x58974C7E: mov eax, dword ptr [ebp + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974C84: push ebx
        __asm _emit 0x53
        // 0x58974C85: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58974C87: dec eax
        __asm _emit 0x48
        // 0x58974C88: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58974C8A: jle 0x58974cc8
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x58974C8C: lea edi, [ebp + 0x114]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974C92: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58974C94: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974C99: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974C9B: call dword ptr [edx + 0x28]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x28
        // 0x58974C9E: mov cl, byte ptr [edi - 4]
        __asm _emit 0x8A
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x58974CA1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58974CA3: push ecx
        __asm _emit 0x51
        // 0x58974CA4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974CA6: call dword ptr [eax + 0x28]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x28
        // 0x58974CA9: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58974CAB: mov ecx, dword ptr [edi - 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xF8
        // 0x58974CAE: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58974CB0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58974CB2: push eax
        __asm _emit 0x50
        // 0x58974CB3: push ecx
        __asm _emit 0x51
        // 0x58974CB4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974CB6: call dword ptr [edx + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x58974CB9: mov edx, dword ptr [ebp + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974CBF: inc ebx
        __asm _emit 0x43
        // 0x58974CC0: add edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x0C
        // 0x58974CC3: dec edx
        __asm _emit 0x4A
        // 0x58974CC4: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x58974CC6: jl 0x58974c92
        __asm _emit 0x7C
        __asm _emit 0xCA
        // 0x58974CC8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58974CCA: lea ecx, [ebx + ebx*2 + 0x45]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x5B
        __asm _emit 0x45
        // 0x58974CCE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58974CD0: mov edx, dword ptr [ebp + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x8D
        __asm _emit 0x00
        // 0x58974CD4: lea ecx, [ebx + ebx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x5B
        // 0x58974CD7: push edx
        __asm _emit 0x52
        // 0x58974CD8: mov edx, dword ptr [ebp + ecx*4 + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974CDF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974CE1: push edx
        __asm _emit 0x52
        // 0x58974CE2: call dword ptr [eax + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58974CE5: pop ebx
        __asm _emit 0x5B
        // 0x58974CE6: pop edi
        __asm _emit 0x5F
        // 0x58974CE7: pop esi
        __asm _emit 0x5E
        // 0x58974CE8: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58974CEA: pop ebp
        __asm _emit 0x5D
        // 0x58974CEB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
