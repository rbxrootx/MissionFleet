// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 168 bytes in 1 exact ranges.
// Source symbol alias: FUN_58773a00.

// Ghidra body range 0x58773A00..0x58773AA8; 168 mapped bytes.
extern "C" __declspec(naked) void FUN_58773a00_segment_00() {
    __asm {
        // 0x58773A00: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58773A03: push ebx
        __asm _emit 0x53
        // 0x58773A04: push ebp
        __asm _emit 0x55
        // 0x58773A05: push esi
        __asm _emit 0x56
        // 0x58773A06: push edi
        __asm _emit 0x57
        // 0x58773A07: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58773A09: mov ebp, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x0C
        // 0x58773A0C: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58773A0E: jne 0x58773a14
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58773A10: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58773A12: jmp 0x58773a2c
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x58773A14: mov ecx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58773A17: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x58773A19: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58773A1E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58773A20: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58773A22: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58773A25: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58773A27: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x58773A2A: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58773A2C: mov ebx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x58773A2F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773A31: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x58773A33: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58773A38: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58773A3A: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58773A3C: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58773A3F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58773A41: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58773A44: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58773A46: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58773A48: jae 0x58773a80
        __asm _emit 0x73
        __asm _emit 0x36
        // 0x58773A4A: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58773A4E: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58773A53: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58773A57: push ecx
        __asm _emit 0x51
        // 0x58773A58: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58773A5C: push edx
        __asm _emit 0x52
        // 0x58773A5D: lea eax, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58773A60: push eax
        __asm _emit 0x50
        // 0x58773A61: push ecx
        __asm _emit 0x51
        // 0x58773A62: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58773A64: push ebx
        __asm _emit 0x53
        // 0x58773A65: call 0x58772ba0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773A6A: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58773A6D: add ebx, 0x118
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773A73: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x58773A76: pop edi
        __asm _emit 0x5F
        // 0x58773A77: pop esi
        __asm _emit 0x5E
        // 0x58773A78: pop ebp
        __asm _emit 0x5D
        // 0x58773A79: pop ebx
        __asm _emit 0x5B
        // 0x58773A7A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58773A7D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58773A80: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58773A82: jbe 0x58773a89
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58773A84: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773A89: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58773A8D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58773A8F: push edx
        __asm _emit 0x52
        // 0x58773A90: push ebx
        __asm _emit 0x53
        // 0x58773A91: push eax
        __asm _emit 0x50
        // 0x58773A92: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58773A96: push eax
        __asm _emit 0x50
        // 0x58773A97: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58773A99: call 0x58773730
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773A9E: pop edi
        __asm _emit 0x5F
        // 0x58773A9F: pop esi
        __asm _emit 0x5E
        // 0x58773AA0: pop ebp
        __asm _emit 0x5D
        // 0x58773AA1: pop ebx
        __asm _emit 0x5B
        // 0x58773AA2: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58773AA5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
