// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 49 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975e50.

// Ghidra body range 0x58975E50..0x58975E81; 49 mapped bytes.
extern "C" __declspec(naked) void FUN_58975e50_segment_00() {
    __asm {
        // 0x58975E50: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58975E54: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975E58: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58975E5C: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58975E5F: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58975E63: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58975E66: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58975E6A: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58975E6D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58975E71: mov dword ptr [eax], 1
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975E77: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x58975E7A: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x58975E7D: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58975E80: ret
        __asm _emit 0xC3
    }
}
