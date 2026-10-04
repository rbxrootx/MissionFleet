// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E5E10 .. +0xAE bytes.
// Source symbol alias: FUN_587e5e10.
extern "C" __declspec(naked) void FUN_587e5e10() {
    __asm {
        // 0x587E5E10: push ebx
        __asm _emit 0x53
        // 0x587E5E11: push ebp
        __asm _emit 0x55
        // 0x587E5E12: mov ebp, dword ptr [ecx + 0x10548]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5E18: mov eax, 0xaaaaaaaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E5E1D: xor dword ptr [ecx + 0x1054c], eax
        __asm _emit 0x31
        __asm _emit 0x81
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5E23: xor dword ptr [ecx + 0x10550], eax
        __asm _emit 0x31
        __asm _emit 0x81
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5E29: push esi
        __asm _emit 0x56
        // 0x587E5E2A: mov esi, dword ptr [ecx + 0x1054c]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5E30: push edi
        __asm _emit 0x57
        // 0x587E5E31: mov edi, dword ptr [ecx + 0x10550]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5E37: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587E5E39: je 0x587e5e9d
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x587E5E3B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E5E3F: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E5E44: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E5E46: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E5E49: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587E5E4B: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587E5E4E: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x587E5E50: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587E5E52: jge 0x587e5e9d
        __asm _emit 0x7D
        __asm _emit 0x49
        // 0x587E5E54: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587E5E56: jle 0x587e5e9d
        __asm _emit 0x7E
        __asm _emit 0x45
        // 0x587E5E58: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E5E5C: mov eax, 0x2fa0be83
        __asm _emit 0xB8
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x2F
        // 0x587E5E61: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E5E63: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587E5E66: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E5E68: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E5E6B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E5E6D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E5E6F: jge 0x587e5e9d
        __asm _emit 0x7D
        __asm _emit 0x2C
        // 0x587E5E71: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E5E73: jle 0x587e5e9d
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x587E5E75: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x587E5E78: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x587E5E7A: xor esi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF6
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E5E80: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E5E86: mov dword ptr [ecx + 0x10550], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5E8C: pop edi
        __asm _emit 0x5F
        // 0x587E5E8D: mov dword ptr [ecx + 0x1054c], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5E93: movzx eax, byte ptr [eax + ebp]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x04
        __asm _emit 0x28
        // 0x587E5E97: pop esi
        __asm _emit 0x5E
        // 0x587E5E98: pop ebp
        __asm _emit 0x5D
        // 0x587E5E99: pop ebx
        __asm _emit 0x5B
        // 0x587E5E9A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587E5E9D: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E5EA3: xor esi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF6
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E5EA9: mov dword ptr [ecx + 0x10550], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5EAF: pop edi
        __asm _emit 0x5F
        // 0x587E5EB0: mov dword ptr [ecx + 0x1054c], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5EB6: pop esi
        __asm _emit 0x5E
        // 0x587E5EB7: pop ebp
        __asm _emit 0x5D
        // 0x587E5EB8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E5EBA: pop ebx
        __asm _emit 0x5B
        // 0x587E5EBB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
