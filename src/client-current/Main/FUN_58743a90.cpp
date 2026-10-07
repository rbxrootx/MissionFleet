// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 87 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743a90.

// Ghidra body range 0x58743A90..0x58743AE7; 87 mapped bytes.
extern "C" __declspec(naked) void FUN_58743a90_segment_00() {
    __asm {
        // 0x58743A90: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x58743A92: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58743A97: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58743A9A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58743A9C: je 0x58743ae4
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x58743A9E: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58743AA2: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58743AA6: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58743AA8: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58743AAC: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58743AAF: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58743AB3: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58743AB6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58743AB8: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58743ABB: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58743ABE: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58743AC1: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58743AC4: mov dword ptr [eax + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58743AC7: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58743ACA: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x58743ACD: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58743AD0: mov dword ptr [eax + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x58743AD3: mov ecx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x14
        // 0x58743AD6: mov dl, byte ptr [esp + 0x14]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58743ADA: mov dword ptr [eax + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58743ADD: mov byte ptr [eax + 0x28], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x28
        // 0x58743AE0: mov byte ptr [eax + 0x29], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743AE4: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
