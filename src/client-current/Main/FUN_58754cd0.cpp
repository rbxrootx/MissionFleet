// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58754CD0 .. +0x3E bytes.
// Source symbol alias: FUN_58754cd0.
extern "C" __declspec(naked) void FUN_58754cd0() {
    __asm {
        // 0x58754CD0: push ebx
        __asm _emit 0x53
        // 0x58754CD1: push edi
        __asm _emit 0x57
        // 0x58754CD2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58754CD6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58754CD8: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58754CDA: jbe 0x58754d09
        __asm _emit 0x76
        __asm _emit 0x2D
        // 0x58754CDC: push esi
        __asm _emit 0x56
        // 0x58754CDD: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58754CE1: add esi, 0x24
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x24
        // 0x58754CE4: mov edx, dword ptr [esi - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xE4
        // 0x58754CE7: lea eax, [esi + 9]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x09
        // 0x58754CEA: push eax
        __asm _emit 0x50
        // 0x58754CEB: mov eax, dword ptr [esi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xE0
        // 0x58754CEE: push esi
        __asm _emit 0x56
        // 0x58754CEF: lea ecx, [esi - 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0xE8
        // 0x58754CF2: push ecx
        __asm _emit 0x51
        // 0x58754CF3: mov ecx, dword ptr [esi - 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xDC
        // 0x58754CF6: push edx
        __asm _emit 0x52
        // 0x58754CF7: push eax
        __asm _emit 0x50
        // 0x58754CF8: push ecx
        __asm _emit 0x51
        // 0x58754CF9: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58754CFB: call 0x58754c00
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754D00: add esi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x54
        // 0x58754D03: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58754D06: jne 0x58754ce4
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x58754D08: pop esi
        __asm _emit 0x5E
        // 0x58754D09: pop edi
        __asm _emit 0x5F
        // 0x58754D0A: pop ebx
        __asm _emit 0x5B
        // 0x58754D0B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
