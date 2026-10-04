// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875F0E0 .. +0x67 bytes.
// Source symbol alias: FUN_5875f0e0.
extern "C" __declspec(naked) void FUN_5875f0e0() {
    __asm {
        // 0x5875F0E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5875F0E2: push 0x589899eb
        __asm _emit 0x68
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875F0E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F0ED: push eax
        __asm _emit 0x50
        // 0x5875F0EE: push ecx
        __asm _emit 0x51
        // 0x5875F0EF: push esi
        __asm _emit 0x56
        // 0x5875F0F0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875F0F5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875F0F7: push eax
        __asm _emit 0x50
        // 0x5875F0F8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875F0FC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F102: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875F104: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5875F106: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xDB
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875F10B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875F10E: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5875F112: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F11A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875F11C: je 0x5875f12c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5875F11E: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875F122: push ecx
        __asm _emit 0x51
        // 0x5875F123: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875F125: call 0x58907ac0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x89
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875F12A: jmp 0x5875f12e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875F12C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875F12E: mov dword ptr [esi + 0x180], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F134: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875F138: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F13F: pop ecx
        __asm _emit 0x59
        // 0x5875F140: pop esi
        __asm _emit 0x5E
        // 0x5875F141: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5875F144: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
