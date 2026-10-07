// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_587350e0.

// Ghidra body range 0x587350E0..0x5873510B; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_587350e0_segment_00() {
    __asm {
        // 0x587350E0: push ebx
        __asm _emit 0x53
        // 0x587350E1: push esi
        __asm _emit 0x56
        // 0x587350E2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587350E4: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587350E7: push edi
        __asm _emit 0x57
        // 0x587350E8: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587350EC: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587350F2: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587350F5: jbe 0x587350fc
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587350F7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x7B
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587350FC: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587350FE: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58735100: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x58735103: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58735105: pop edi
        __asm _emit 0x5F
        // 0x58735106: pop esi
        __asm _emit 0x5E
        // 0x58735107: pop ebx
        __asm _emit 0x5B
        // 0x58735108: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
