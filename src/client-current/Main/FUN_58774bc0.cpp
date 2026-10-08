// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 113 bytes in 1 exact ranges.
// Source symbol alias: FUN_58774bc0.

// Ghidra body range 0x58774BC0..0x58774C31; 113 mapped bytes.
extern "C" __declspec(naked) void FUN_58774bc0_segment_00() {
    __asm {
        // 0x58774BC0: push ecx
        __asm _emit 0x51
        // 0x58774BC1: push esi
        __asm _emit 0x56
        // 0x58774BC2: push edi
        __asm _emit 0x57
        // 0x58774BC3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58774BC5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58774BC9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58774BCD: push eax
        __asm _emit 0x50
        // 0x58774BCE: push ecx
        __asm _emit 0x51
        // 0x58774BCF: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58774BD3: push edx
        __asm _emit 0x52
        // 0x58774BD4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58774BD6: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774BDE: call 0x58771f70
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xD3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774BE3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58774BE5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58774BE7: je 0x58774c02
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58774BE9: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58774BED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58774BEF: je 0x58774c29
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58774BF1: push eax
        __asm _emit 0x50
        // 0x58774BF2: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x82
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774BF7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58774BFA: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58774BFC: pop edi
        __asm _emit 0x5F
        // 0x58774BFD: pop esi
        __asm _emit 0x5E
        // 0x58774BFE: pop ecx
        __asm _emit 0x59
        // 0x58774BFF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58774C02: push ebx
        __asm _emit 0x53
        // 0x58774C03: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58774C07: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774C0C: push ebx
        __asm _emit 0x53
        // 0x58774C0D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58774C0F: call 0x587741b0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774C14: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58774C16: jne 0x58774c1b
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58774C18: lea edi, [eax + 9]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x09
        // 0x58774C1B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58774C1D: je 0x58774c28
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58774C1F: push ebx
        __asm _emit 0x53
        // 0x58774C20: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x82
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774C25: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58774C28: pop ebx
        __asm _emit 0x5B
        // 0x58774C29: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58774C2B: pop edi
        __asm _emit 0x5F
        // 0x58774C2C: pop esi
        __asm _emit 0x5E
        // 0x58774C2D: pop ecx
        __asm _emit 0x59
        // 0x58774C2E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
