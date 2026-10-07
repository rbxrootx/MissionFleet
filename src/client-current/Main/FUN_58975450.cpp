// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 117 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975450.

// Ghidra body range 0x58975450..0x589754C5; 117 mapped bytes.
extern "C" __declspec(naked) void FUN_58975450_segment_00() {
    __asm {
        // 0x58975450: push esi
        __asm _emit 0x56
        // 0x58975451: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975455: cmp dword ptr [esi + 0x14], 0x64
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x14
        __asm _emit 0x64
        // 0x58975459: je 0x58975474
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5897545B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897545D: push esi
        __asm _emit 0x56
        // 0x5897545E: mov dword ptr [eax + 0x14], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975465: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975467: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5897546A: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5897546D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897546F: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x58975471: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58975474: mov al, byte ptr [esp + 0xc]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58975478: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897547A: je 0x58975487
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5897547C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5897547E: push esi
        __asm _emit 0x56
        // 0x5897547F: call 0x589752f0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58975484: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58975487: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975489: push esi
        __asm _emit 0x56
        // 0x5897548A: call dword ptr [ecx + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5897548D: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x58975490: push esi
        __asm _emit 0x56
        // 0x58975491: call dword ptr [edx + 8]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x58975494: push esi
        __asm _emit 0x56
        // 0x58975495: call 0x58977590
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897549A: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589754A0: push esi
        __asm _emit 0x56
        // 0x589754A1: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x589754A3: mov dl, byte ptr [esi + 0xb0]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589754A9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x589754AC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x589754AE: mov dword ptr [esi + 0xd0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589754B8: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x589754BA: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x589754BD: add ecx, 0x65
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x65
        // 0x589754C0: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x589754C3: pop esi
        __asm _emit 0x5E
        // 0x589754C4: ret
        __asm _emit 0xC3
    }
}
