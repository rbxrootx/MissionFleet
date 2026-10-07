// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 74 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975e90.

// Ghidra body range 0x58975E90..0x58975EDA; 74 mapped bytes.
extern "C" __declspec(naked) void FUN_58975e90_segment_00() {
    __asm {
        // 0x58975E90: push ebp
        __asm _emit 0x55
        // 0x58975E91: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58975E95: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58975E97: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58975E99: jle 0x58975ed4
        __asm _emit 0x7E
        __asm _emit 0x39
        // 0x58975E9B: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58975E9F: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975EA3: push ebx
        __asm _emit 0x53
        // 0x58975EA4: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58975EA8: push esi
        __asm _emit 0x56
        // 0x58975EA9: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58975EAD: push edi
        __asm _emit 0x57
        // 0x58975EAE: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58975EB2: mov dword ptr [eax], 1
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975EB8: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58975EBB: mov dword ptr [eax + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x58975EBE: mov dword ptr [eax + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58975EC1: mov dword ptr [eax + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x1C
        // 0x58975EC4: mov dword ptr [eax + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x58975EC7: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58975ECA: inc ecx
        __asm _emit 0x41
        // 0x58975ECB: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x58975ECD: jl 0x58975eb2
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x58975ECF: pop edi
        __asm _emit 0x5F
        // 0x58975ED0: pop esi
        __asm _emit 0x5E
        // 0x58975ED1: pop ebx
        __asm _emit 0x5B
        // 0x58975ED2: pop ebp
        __asm _emit 0x5D
        // 0x58975ED3: ret
        __asm _emit 0xC3
        // 0x58975ED4: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975ED8: pop ebp
        __asm _emit 0x5D
        // 0x58975ED9: ret
        __asm _emit 0xC3
    }
}
