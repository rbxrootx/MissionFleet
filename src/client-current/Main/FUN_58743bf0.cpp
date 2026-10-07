// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 129 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743bf0.

// Ghidra body range 0x58743BF0..0x58743C71; 129 mapped bytes.
extern "C" __declspec(naked) void FUN_58743bf0_segment_00() {
    __asm {
        // 0x58743BF0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58743BF2: push 0x5898a548
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xA5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58743BF7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743BFD: push eax
        __asm _emit 0x50
        // 0x58743BFE: push ecx
        __asm _emit 0x51
        // 0x58743BFF: push esi
        __asm _emit 0x56
        // 0x58743C00: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58743C05: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58743C07: push eax
        __asm _emit 0x50
        // 0x58743C08: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58743C0C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743C12: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58743C14: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58743C18: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58743C1A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58743C1F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58743C22: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58743C24: je 0x58743c2a
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58743C26: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58743C28: jmp 0x58743c2c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58743C2A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58743C2C: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58743C2E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58743C30: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743C38: call 0x58743a50
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743C3D: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58743C40: mov byte ptr [eax + 0x29], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x29
        __asm _emit 0x01
        // 0x58743C44: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58743C47: mov dword ptr [eax + 4], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58743C4A: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58743C4D: mov dword ptr [eax], eax
        __asm _emit 0x89
        __asm _emit 0x00
        // 0x58743C4F: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58743C52: mov dword ptr [eax + 8], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58743C55: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743C5C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58743C5E: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58743C62: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743C69: pop ecx
        __asm _emit 0x59
        // 0x58743C6A: pop esi
        __asm _emit 0x5E
        // 0x58743C6B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58743C6E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
