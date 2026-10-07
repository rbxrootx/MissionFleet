// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 79 bytes in 1 exact ranges.
// Source symbol alias: FUN_58899b60.

// Ghidra body range 0x58899B60..0x58899BAF; 79 mapped bytes.
extern "C" __declspec(naked) void FUN_58899b60_segment_00() {
    __asm {
        // 0x58899B60: push ebx
        __asm _emit 0x53
        // 0x58899B61: push ebp
        __asm _emit 0x55
        // 0x58899B62: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58899B66: push esi
        __asm _emit 0x56
        // 0x58899B67: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58899B6B: push edi
        __asm _emit 0x57
        // 0x58899B6C: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58899B70: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58899B72: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58899B74: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x58899B79: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58899B7B: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58899B7E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58899B80: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58899B83: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58899B85: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x58899B88: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58899B8A: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58899B8C: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58899B8E: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x58899B90: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x58899B92: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x58899B94: je 0x58899ba8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58899B96: sub ebp, esi
        __asm _emit 0x2B
        __asm _emit 0xEE
        // 0x58899B98: sub esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x18
        // 0x58899B9B: push esi
        __asm _emit 0x56
        // 0x58899B9C: lea ecx, [esi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x2E
        // 0x58899B9F: call 0x58899840
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58899BA4: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58899BA6: jne 0x58899b98
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58899BA8: pop edi
        __asm _emit 0x5F
        // 0x58899BA9: pop esi
        __asm _emit 0x5E
        // 0x58899BAA: pop ebp
        __asm _emit 0x5D
        // 0x58899BAB: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58899BAD: pop ebx
        __asm _emit 0x5B
        // 0x58899BAE: ret
        __asm _emit 0xC3
    }
}
