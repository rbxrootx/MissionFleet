// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 75 bytes in 1 exact ranges.
// Source symbol alias: FUN_589738e0.

// Ghidra body range 0x589738E0..0x5897392B; 75 mapped bytes.
extern "C" __declspec(naked) void FUN_589738e0_segment_00() {
    __asm {
        // 0x589738E0: push esi
        __asm _emit 0x56
        // 0x589738E1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589738E3: mov eax, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589738E9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589738EB: je 0x58973901
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x589738ED: push eax
        __asm _emit 0x50
        // 0x589738EE: call dword ptr [0x5898c2ac]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xAC
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589738F4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589738F7: mov dword ptr [esi + 0x1ac], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973901: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58973904: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58973907: mov dword ptr [esi + 0x170], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897390D: mov dword ptr [esi + 0x17c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973913: mov dword ptr [esi + 0x174], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897391D: mov dword ptr [esi + 0x178], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973927: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58973929: pop esi
        __asm _emit 0x5E
        // 0x5897392A: ret
        __asm _emit 0xC3
    }
}
