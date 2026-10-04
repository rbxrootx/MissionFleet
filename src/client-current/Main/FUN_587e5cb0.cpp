// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E5CB0 .. +0x152 bytes.
// Source symbol alias: FUN_587e5cb0.
extern "C" __declspec(naked) void FUN_587e5cb0() {
    __asm {
        // 0x587E5CB0: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E5CB4: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587E5CB9: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E5CBB: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587E5CBE: push ebx
        __asm _emit 0x53
        // 0x587E5CBF: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E5CC2: push ebp
        __asm _emit 0x55
        // 0x587E5CC3: mov ebp, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E5CC7: push esi
        __asm _emit 0x56
        // 0x587E5CC8: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587E5CCA: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x587E5CCD: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587E5CCF: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587E5CD3: mov eax, 0x2fa0be83
        __asm _emit 0xB8
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x2F
        // 0x587E5CD8: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E5CDA: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587E5CDD: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587E5CDF: push edi
        __asm _emit 0x57
        // 0x587E5CE0: mov edi, 0xaaaaaaaa
        __asm _emit 0xBF
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E5CE5: xor dword ptr [ecx + 0x1054c], edi
        __asm _emit 0x31
        __asm _emit 0xB9
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5CEB: mov eax, dword ptr [ecx + 0x1054c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5CF1: xor dword ptr [ecx + 0x10550], edi
        __asm _emit 0x31
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5CF7: mov edi, dword ptr [ecx + 0x10550]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5CFD: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587E5D00: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x587E5D02: lea edx, [esi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x2E
        // 0x587E5D05: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587E5D07: jl 0x587e5d1b
        __asm _emit 0x7C
        __asm _emit 0x12
        // 0x587E5D09: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587E5D0B: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x587E5D0D: add ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x03
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587E5D11: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E5D15: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587E5D19: jmp 0x587e5d1f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587E5D1B: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E5D1F: lea edx, [ebx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x2B
        // 0x587E5D22: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x587E5D24: jl 0x587e5d34
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x587E5D26: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x587E5D28: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x587E5D2A: add ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x03
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587E5D2E: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E5D32: jmp 0x587e5d38
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587E5D34: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E5D38: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587E5D3A: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x587E5D3D: add edx, dword ptr [ecx + 0x10548]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5D43: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E5D48: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E5D4E: mov dword ptr [ecx + 0x1054c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5D54: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587E5D58: mov dword ptr [ecx + 0x10550], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5D5E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587E5D60: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x587E5D62: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587E5D66: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E5D6A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587E5D6C: jle 0x587e5df8
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5D72: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587E5D76: neg ebp
        __asm _emit 0xF7
        __asm _emit 0xDD
        // 0x587E5D78: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x587E5D7A: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E5D7E: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587E5D82: lea eax, [edi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1F
        // 0x587E5D85: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E5D87: jl 0x587e5dc1
        __asm _emit 0x7C
        __asm _emit 0x38
        // 0x587E5D89: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E5D8D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E5D8F: jle 0x587e5dc1
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x587E5D91: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587E5D95: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x587E5D97: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587E5D99: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E5D9D: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587E5DA1: jmp 0x587e5da7
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587E5DA3: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E5DA7: add ebp, edi
        __asm _emit 0x03
        __asm _emit 0xEF
        // 0x587E5DA9: lea eax, [esi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2E
        // 0x587E5DAC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E5DAE: jl 0x587e5db5
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x587E5DB0: mov al, byte ptr [ebp]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587E5DB3: or byte ptr [edi], al
        __asm _emit 0x08
        __asm _emit 0x07
        // 0x587E5DB5: inc edi
        __asm _emit 0x47
        // 0x587E5DB6: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x587E5DBB: jne 0x587e5da3
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x587E5DBD: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E5DC1: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587E5DC5: mov eax, dword ptr [ecx + 0x1054c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5DCB: add dword ptr [esp + 0x30], esi
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587E5DCF: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587E5DD3: add esi, dword ptr [esp + 0x18]
        __asm _emit 0x03
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E5DD7: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E5DDC: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587E5DDE: inc edi
        __asm _emit 0x47
        // 0x587E5DDF: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E5DE4: cmp edi, dword ptr [esp + 0x20]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E5DE8: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587E5DEC: mov dword ptr [ecx + 0x1054c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5DF2: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E5DF6: jl 0x587e5d82
        __asm _emit 0x7C
        __asm _emit 0x8A
        // 0x587E5DF8: pop edi
        __asm _emit 0x5F
        // 0x587E5DF9: pop esi
        __asm _emit 0x5E
        // 0x587E5DFA: pop ebp
        __asm _emit 0x5D
        // 0x587E5DFB: pop ebx
        __asm _emit 0x5B
        // 0x587E5DFC: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587E5DFF: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
