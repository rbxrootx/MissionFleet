// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 230 bytes in 1 exact ranges.
// Source symbol alias: FUN_58756bc0.

// Ghidra body range 0x58756BC0..0x58756CA6; 230 mapped bytes.
extern "C" __declspec(naked) void FUN_58756bc0_segment_00() {
    __asm {
        // 0x58756BC0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58756BC2: push 0x5897e953
        __asm _emit 0x68
        __asm _emit 0x53
        __asm _emit 0xE9
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58756BC7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756BCD: push eax
        __asm _emit 0x50
        // 0x58756BCE: push ecx
        __asm _emit 0x51
        // 0x58756BCF: push ebx
        __asm _emit 0x53
        // 0x58756BD0: push ebp
        __asm _emit 0x55
        // 0x58756BD1: push esi
        __asm _emit 0x56
        // 0x58756BD2: push edi
        __asm _emit 0x57
        // 0x58756BD3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58756BD8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58756BDA: push eax
        __asm _emit 0x50
        // 0x58756BDB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58756BDF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756BE5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58756BE7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58756BEB: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58756BEF: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58756BF3: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58756BF7: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58756BFB: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58756BFF: push ebp
        __asm _emit 0x55
        // 0x58756C00: push eax
        __asm _emit 0x50
        // 0x58756C01: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58756C05: push ecx
        __asm _emit 0x51
        // 0x58756C06: push ebx
        __asm _emit 0x53
        // 0x58756C07: push edx
        __asm _emit 0x52
        // 0x58756C08: push eax
        __asm _emit 0x50
        // 0x58756C09: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58756C0B: call 0x58796f00
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58756C10: or byte ptr [esi + 0x50], 1
        __asm _emit 0x80
        __asm _emit 0x4E
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58756C14: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58756C16: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756C1E: mov dword ptr [esi], 0x5898d714
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x14
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58756C24: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x60
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58756C29: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58756C2B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58756C2E: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58756C32: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58756C37: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58756C39: je 0x58756c5e
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58756C3B: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58756C3F: push ebp
        __asm _emit 0x55
        // 0x58756C40: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58756C42: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58756C44: push ebx
        __asm _emit 0x53
        // 0x58756C45: push ecx
        __asm _emit 0x51
        // 0x58756C46: push esi
        __asm _emit 0x56
        // 0x58756C47: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58756C49: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xC5
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58756C4E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58756C50: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58756C56: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x58756C59: mov dword ptr [edi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x58756C5C: jmp 0x58756c60
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58756C5E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58756C60: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756C66: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756C6B: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x58756C6F: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756C75: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756C7A: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58756C7F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xC0
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58756C84: mov dword ptr [esi + 0x88], 0x12c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756C8E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58756C90: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58756C94: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756C9B: pop ecx
        __asm _emit 0x59
        // 0x58756C9C: pop edi
        __asm _emit 0x5F
        // 0x58756C9D: pop esi
        __asm _emit 0x5E
        // 0x58756C9E: pop ebp
        __asm _emit 0x5D
        // 0x58756C9F: pop ebx
        __asm _emit 0x5B
        // 0x58756CA0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58756CA3: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
