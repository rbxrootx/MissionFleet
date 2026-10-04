// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A15E0 .. +0x57 bytes.
// Source symbol alias: FUN_587a15e0.
extern "C" __declspec(naked) void FUN_587a15e0() {
    __asm {
        // 0x587A15E0: push ebx
        __asm _emit 0x53
        // 0x587A15E1: push esi
        __asm _emit 0x56
        // 0x587A15E2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A15E4: push edi
        __asm _emit 0x57
        // 0x587A15E5: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A15E9: lea edi, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x587A15EC: push eax
        __asm _emit 0x50
        // 0x587A15ED: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A15EF: call 0x587a1330
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A15F4: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587A15F6: call dword ptr [0x5898c120]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A15FC: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A1600: add esi, 0x74
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x74
        // 0x587A1603: push ecx
        __asm _emit 0x51
        // 0x587A1604: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A1606: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x587A1608: call 0x587a1330
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A160D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A1611: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587A1613: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A1617: push eax
        __asm _emit 0x50
        // 0x587A1618: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A161A: call 0x587a1330
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A161F: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A1623: push ecx
        __asm _emit 0x51
        // 0x587A1624: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A1626: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A1628: call 0x587a1330
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A162D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587A162F: xor dword ptr [esi], edx
        __asm _emit 0x31
        __asm _emit 0x16
        // 0x587A1631: pop edi
        __asm _emit 0x5F
        // 0x587A1632: pop esi
        __asm _emit 0x5E
        // 0x587A1633: pop ebx
        __asm _emit 0x5B
        // 0x587A1634: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
