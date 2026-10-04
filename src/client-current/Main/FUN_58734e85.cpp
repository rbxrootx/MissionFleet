// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58734E85 .. +0x66 bytes.
// Source symbol alias: FUN_58734e85.
extern "C" __declspec(naked) void FUN_58734e85() {
    __asm {
        // 0x58734E85: mov ebx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x58734E88: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58734E8A: jbe 0x58734eac
        __asm _emit 0x76
        __asm _emit 0x20
        // 0x58734E8C: cmp dword ptr [edi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x58734E90: jb 0x58734e97
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58734E92: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58734E95: jmp 0x58734e9a
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58734E97: lea eax, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58734E9A: push ebx
        __asm _emit 0x53
        // 0x58734E9B: push eax
        __asm _emit 0x50
        // 0x58734E9C: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58734E9F: lea edx, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x01
        // 0x58734EA2: push edx
        __asm _emit 0x52
        // 0x58734EA3: push eax
        __asm _emit 0x50
        // 0x58734EA4: call 0x5897cc5a
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x7D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58734EA9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58734EAC: cmp dword ptr [edi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x58734EB0: jb 0x58734ebe
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x58734EB2: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58734EB5: push ecx
        __asm _emit 0x51
        // 0x58734EB6: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x7D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58734EBB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58734EBE: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58734EC1: lea eax, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58734EC4: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734EC7: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58734EC9: mov dword ptr [edi + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x18
        // 0x58734ECC: mov dword ptr [edi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x14
        // 0x58734ECF: cmp esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x10
        // 0x58734ED2: jb 0x58734ed6
        __asm _emit 0x72
        __asm _emit 0x02
        // 0x58734ED4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58734ED6: mov byte ptr [eax + ebx], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58734EDA: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58734EDD: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734EE4: pop ecx
        __asm _emit 0x59
        // 0x58734EE5: pop edi
        __asm _emit 0x5F
        // 0x58734EE6: pop esi
        __asm _emit 0x5E
        // 0x58734EE7: pop ebx
        __asm _emit 0x5B
        // 0x58734EE8: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58734EEA: pop ebp
        __asm _emit 0x5D
    }
}
