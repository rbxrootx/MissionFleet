// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587FF3E0 .. +0x81 bytes.
// Source symbol alias: FUN_587ff3e0.
extern "C" __declspec(naked) void FUN_587ff3e0() {
    __asm {
        // 0x587FF3E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587FF3E2: push 0x5898a548
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xA5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587FF3E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF3ED: push eax
        __asm _emit 0x50
        // 0x587FF3EE: push ecx
        __asm _emit 0x51
        // 0x587FF3EF: push esi
        __asm _emit 0x56
        // 0x587FF3F0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587FF3F5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587FF3F7: push eax
        __asm _emit 0x50
        // 0x587FF3F8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587FF3FC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF402: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587FF404: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587FF408: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587FF40A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xD8
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587FF40F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587FF412: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FF414: je 0x587ff41a
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587FF416: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x587FF418: jmp 0x587ff41c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587FF41A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587FF41C: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587FF41E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FF420: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF428: call 0x587f8720
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x92
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FF42D: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587FF430: mov byte ptr [eax + 0x2d], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x2D
        __asm _emit 0x01
        // 0x587FF434: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587FF437: mov dword ptr [eax + 4], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587FF43A: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587FF43D: mov dword ptr [eax], eax
        __asm _emit 0x89
        __asm _emit 0x00
        // 0x587FF43F: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587FF442: mov dword ptr [eax + 8], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587FF445: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF44C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587FF44E: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587FF452: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF459: pop ecx
        __asm _emit 0x59
        // 0x587FF45A: pop esi
        __asm _emit 0x5E
        // 0x587FF45B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587FF45E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
