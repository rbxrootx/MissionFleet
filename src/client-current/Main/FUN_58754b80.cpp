// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58754B80 .. +0x80 bytes.
// Source symbol alias: FUN_58754b80.
extern "C" __declspec(naked) void FUN_58754b80() {
    __asm {
        // 0x58754B80: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58754B82: push 0x5897e876
        __asm _emit 0x68
        __asm _emit 0x76
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58754B87: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754B8D: push eax
        __asm _emit 0x50
        // 0x58754B8E: push ecx
        __asm _emit 0x51
        // 0x58754B8F: push ebx
        __asm _emit 0x53
        // 0x58754B90: push esi
        __asm _emit 0x56
        // 0x58754B91: push edi
        __asm _emit 0x57
        // 0x58754B92: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58754B97: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58754B99: push eax
        __asm _emit 0x50
        // 0x58754B9A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58754B9E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754BA4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58754BA6: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58754BAA: lea edi, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58754BAD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58754BAF: mov dword ptr [esi], 0x5898d698
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x98
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58754BB5: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xB1
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58754BBA: lea ebx, [esi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x1C
        // 0x58754BBD: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58754BBF: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754BC7: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58754BCC: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58754BD0: push eax
        __asm _emit 0x50
        // 0x58754BD1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58754BD3: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58754BD8: call 0x58754650
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754BDD: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58754BE1: push ecx
        __asm _emit 0x51
        // 0x58754BE2: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58754BE4: call 0x58754770
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754BE9: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58754BEB: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58754BEF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754BF6: pop ecx
        __asm _emit 0x59
        // 0x58754BF7: pop edi
        __asm _emit 0x5F
        // 0x58754BF8: pop esi
        __asm _emit 0x5E
        // 0x58754BF9: pop ebx
        __asm _emit 0x5B
        // 0x58754BFA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58754BFD: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
