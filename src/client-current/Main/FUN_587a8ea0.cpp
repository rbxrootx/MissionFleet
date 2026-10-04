// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A8EA0 .. +0x60 bytes.
// Source symbol alias: FUN_587a8ea0.
extern "C" __declspec(naked) void FUN_587a8ea0() {
    __asm {
        // 0x587A8EA0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A8EA2: push 0x58980adb
        __asm _emit 0x68
        __asm _emit 0xDB
        __asm _emit 0x0A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A8EA7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8EAD: push eax
        __asm _emit 0x50
        // 0x587A8EAE: push ecx
        __asm _emit 0x51
        // 0x587A8EAF: push esi
        __asm _emit 0x56
        // 0x587A8EB0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A8EB5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A8EB7: push eax
        __asm _emit 0x50
        // 0x587A8EB8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A8EBC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8EC2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A8EC4: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A8EC8: lea ecx, [esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587A8ECB: mov dword ptr [esi], 0x58999a70
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x70
        __asm _emit 0x9A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A8ED1: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x6E
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A8ED6: lea ecx, [esi + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x587A8ED9: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8EE1: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x6E
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A8EE6: mov dword ptr [esi + 0x40], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8EED: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A8EEF: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A8EF3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8EFA: pop ecx
        __asm _emit 0x59
        // 0x587A8EFB: pop esi
        __asm _emit 0x5E
        // 0x587A8EFC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A8EFF: ret
        __asm _emit 0xC3
    }
}
