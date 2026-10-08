// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 61 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772cb0.

// Ghidra body range 0x58772CB0..0x58772CED; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_58772cb0_segment_00() {
    __asm {
        // 0x58772CB0: push ecx
        __asm _emit 0x51
        // 0x58772CB1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772CB5: push esi
        __asm _emit 0x56
        // 0x58772CB6: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772CBA: push edi
        __asm _emit 0x57
        // 0x58772CBB: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772CBF: mov byte ptr [esp + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58772CC4: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58772CC8: push eax
        __asm _emit 0x50
        // 0x58772CC9: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58772CCD: push edx
        __asm _emit 0x52
        // 0x58772CCE: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58772CD1: push ecx
        __asm _emit 0x51
        // 0x58772CD2: push eax
        __asm _emit 0x50
        // 0x58772CD3: push esi
        __asm _emit 0x56
        // 0x58772CD4: push edi
        __asm _emit 0x57
        // 0x58772CD5: call 0x58772b70
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772CDA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58772CDC: imul eax, eax, 0x108
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772CE2: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58772CE5: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58772CE7: pop edi
        __asm _emit 0x5F
        // 0x58772CE8: pop esi
        __asm _emit 0x5E
        // 0x58772CE9: pop ecx
        __asm _emit 0x59
        // 0x58772CEA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
