// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890D950 .. +0x116 bytes.
// Source symbol alias: FUN_5890d950.
extern "C" __declspec(naked) void FUN_5890d950() {
    __asm {
        // 0x5890D950: push esi
        __asm _emit 0x56
        // 0x5890D951: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890D953: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D959: imul eax, dword ptr [esi + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D960: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890D964: cdq
        __asm _emit 0x99
        // 0x5890D965: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5890D967: push edi
        __asm _emit 0x57
        // 0x5890D968: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890D96C: mov dword ptr [esi + 0xf8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D972: mov dword ptr [esi + 0xf4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D978: mov dword ptr [esi + 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D97E: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D984: imul eax, dword ptr [esi + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D98B: cdq
        __asm _emit 0x99
        // 0x5890D98C: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5890D98E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5890D990: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D996: mov eax, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D99C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5890D99E: je 0x5890d9af
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5890D9A0: push eax
        __asm _emit 0x50
        // 0x5890D9A1: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xF2
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890D9A6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890D9A9: mov dword ptr [esi + 0x104], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D9AF: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D9B5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5890D9B7: je 0x5890d9c8
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5890D9B9: push eax
        __asm _emit 0x50
        // 0x5890D9BA: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xF2
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890D9BF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890D9C2: mov dword ptr [esi + 0x108], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D9C8: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D9CE: imul eax, dword ptr [esi + 0xfc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D9D5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5890D9D7: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D9DD: jle 0x5890da55
        __asm _emit 0x7E
        __asm _emit 0x76
        // 0x5890D9DF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5890D9E1: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D9E6: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5890D9E8: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x5890D9EB: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x5890D9ED: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5890D9EF: push ecx
        __asm _emit 0x51
        // 0x5890D9F0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xF2
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890D9F5: mov dword ptr [esi + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D9FB: mov eax, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DA01: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5890DA03: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DA08: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5890DA0A: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x5890DA0D: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x5890DA0F: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5890DA11: push ecx
        __asm _emit 0x51
        // 0x5890DA12: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xF2
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890DA17: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DA1D: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DA23: mov eax, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DA29: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5890DA2B: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5890DA2D: push eax
        __asm _emit 0x50
        // 0x5890DA2E: push edi
        __asm _emit 0x57
        // 0x5890DA2F: push ecx
        __asm _emit 0x51
        // 0x5890DA30: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xF2
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890DA35: mov edx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DA3B: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DA41: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5890DA43: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5890DA45: push edx
        __asm _emit 0x52
        // 0x5890DA46: push edi
        __asm _emit 0x57
        // 0x5890DA47: push eax
        __asm _emit 0x50
        // 0x5890DA48: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xF1
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890DA4D: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x5890DA50: pop edi
        __asm _emit 0x5F
        // 0x5890DA51: pop esi
        __asm _emit 0x5E
        // 0x5890DA52: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5890DA55: mov dword ptr [esi + 0x104], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DA5B: mov dword ptr [esi + 0x108], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890DA61: pop edi
        __asm _emit 0x5F
        // 0x5890DA62: pop esi
        __asm _emit 0x5E
        // 0x5890DA63: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
