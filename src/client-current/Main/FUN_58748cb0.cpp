// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 47 bytes in 1 exact ranges.
// Source symbol alias: FUN_58748cb0.

// Ghidra body range 0x58748CB0..0x58748CDF; 47 mapped bytes.
extern "C" __declspec(naked) void FUN_58748cb0_segment_00() {
    __asm {
        // 0x58748CB0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58748CB4: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58748CB8: push esi
        __asm _emit 0x56
        // 0x58748CB9: push eax
        __asm _emit 0x50
        // 0x58748CBA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58748CBE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58748CC0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58748CC4: push ecx
        __asm _emit 0x51
        // 0x58748CC5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58748CC9: push edx
        __asm _emit 0x52
        // 0x58748CCA: push eax
        __asm _emit 0x50
        // 0x58748CCB: push ecx
        __asm _emit 0x51
        // 0x58748CCC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58748CCE: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58748CD3: mov dword ptr [esi], 0x5898cf7c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x7C
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58748CD9: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58748CDB: pop esi
        __asm _emit 0x5E
        // 0x58748CDC: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
