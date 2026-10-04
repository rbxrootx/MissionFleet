// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58754C00 .. +0xCE bytes.
// Source symbol alias: FUN_58754c00.
extern "C" __declspec(naked) void FUN_58754c00() {
    __asm {
        // 0x58754C00: sub esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x50
        // 0x58754C03: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58754C08: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58754C0A: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58754C0E: mov edx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58754C12: mov eax, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58754C16: push ebx
        __asm _emit 0x53
        // 0x58754C17: mov ebx, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58754C1B: push ebp
        __asm _emit 0x55
        // 0x58754C1C: mov ebp, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58754C20: push esi
        __asm _emit 0x56
        // 0x58754C21: push edi
        __asm _emit 0x57
        // 0x58754C22: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58754C24: mov ecx, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58754C28: push ecx
        __asm _emit 0x51
        // 0x58754C29: push edx
        __asm _emit 0x52
        // 0x58754C2A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58754C2C: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58754C30: call 0x58753bf0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754C35: mov edx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58754C39: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58754C3B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58754C3D: jne 0x58754c97
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x58754C3F: mov eax, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58754C43: mov ecx, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58754C47: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58754C4D: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58754C51: push ebx
        __asm _emit 0x53
        // 0x58754C52: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58754C56: push eax
        __asm _emit 0x50
        // 0x58754C57: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58754C5B: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58754C5F: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58754C61: push ebp
        __asm _emit 0x55
        // 0x58754C62: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58754C66: push ecx
        __asm _emit 0x51
        // 0x58754C67: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58754C69: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58754C6D: push edx
        __asm _emit 0x52
        // 0x58754C6E: lea eax, [esp + 0x45]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x45
        // 0x58754C72: push eax
        __asm _emit 0x50
        // 0x58754C73: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58754C75: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58754C79: push ecx
        __asm _emit 0x51
        // 0x58754C7A: lea ecx, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58754C7D: call 0x58754a30
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754C82: pop edi
        __asm _emit 0x5F
        // 0x58754C83: pop esi
        __asm _emit 0x5E
        // 0x58754C84: pop ebp
        __asm _emit 0x5D
        // 0x58754C85: pop ebx
        __asm _emit 0x5B
        // 0x58754C86: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58754C8A: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58754C8C: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x7F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754C91: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x50
        // 0x58754C94: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58754C97: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58754C9B: mov edi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58754CA1: push eax
        __asm _emit 0x50
        // 0x58754CA2: lea ecx, [esi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x2D
        // 0x58754CA5: push ecx
        __asm _emit 0x51
        // 0x58754CA6: mov dword ptr [esi + 8], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58754CA9: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58754CAB: push ebx
        __asm _emit 0x53
        // 0x58754CAC: lea edx, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58754CAF: push edx
        __asm _emit 0x52
        // 0x58754CB0: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58754CB2: push ebp
        __asm _emit 0x55
        // 0x58754CB3: add esi, 0x24
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x24
        // 0x58754CB6: push esi
        __asm _emit 0x56
        // 0x58754CB7: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58754CB9: mov ecx, dword ptr [esp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58754CBD: pop edi
        __asm _emit 0x5F
        // 0x58754CBE: pop esi
        __asm _emit 0x5E
        // 0x58754CBF: pop ebp
        __asm _emit 0x5D
        // 0x58754CC0: pop ebx
        __asm _emit 0x5B
        // 0x58754CC1: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58754CC3: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x7F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754CC8: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x50
        // 0x58754CCB: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
