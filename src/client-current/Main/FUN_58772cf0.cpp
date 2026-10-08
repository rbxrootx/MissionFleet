// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 61 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772cf0.

// Ghidra body range 0x58772CF0..0x58772D2D; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_58772cf0_segment_00() {
    __asm {
        // 0x58772CF0: push ecx
        __asm _emit 0x51
        // 0x58772CF1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772CF5: push esi
        __asm _emit 0x56
        // 0x58772CF6: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772CFA: push edi
        __asm _emit 0x57
        // 0x58772CFB: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772CFF: mov byte ptr [esp + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58772D04: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58772D08: push eax
        __asm _emit 0x50
        // 0x58772D09: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58772D0D: push edx
        __asm _emit 0x52
        // 0x58772D0E: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58772D11: push ecx
        __asm _emit 0x51
        // 0x58772D12: push eax
        __asm _emit 0x50
        // 0x58772D13: push esi
        __asm _emit 0x56
        // 0x58772D14: push edi
        __asm _emit 0x57
        // 0x58772D15: call 0x58772ba0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772D1A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58772D1C: imul eax, eax, 0x118
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772D22: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58772D25: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58772D27: pop edi
        __asm _emit 0x5F
        // 0x58772D28: pop esi
        __asm _emit 0x5E
        // 0x58772D29: pop ecx
        __asm _emit 0x59
        // 0x58772D2A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
