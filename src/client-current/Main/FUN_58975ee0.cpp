// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 97 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975ee0.

// Ghidra body range 0x58975EE0..0x58975F41; 97 mapped bytes.
extern "C" __declspec(naked) void FUN_58975ee0_segment_00() {
    __asm {
        // 0x58975EE0: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975EE4: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58975EE7: jg 0x58975f24
        __asm _emit 0x7F
        __asm _emit 0x3B
        // 0x58975EE9: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58975EED: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58975EEF: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58975EF1: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58975EF3: jle 0x58975f04
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x58975EF5: push esi
        __asm _emit 0x56
        // 0x58975EF6: lea esi, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x58975EF9: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x58975EFB: inc ecx
        __asm _emit 0x41
        // 0x58975EFC: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58975EFF: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58975F01: jl 0x58975ef9
        __asm _emit 0x7C
        __asm _emit 0xF6
        // 0x58975F03: pop esi
        __asm _emit 0x5E
        // 0x58975F04: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58975F08: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58975F0C: mov dword ptr [eax + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975F13: mov dword ptr [eax + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975F1A: mov dword ptr [eax + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x58975F1D: mov dword ptr [eax + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x58975F20: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58975F23: ret
        __asm _emit 0xC3
        // 0x58975F24: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58975F28: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58975F2C: push eax
        __asm _emit 0x50
        // 0x58975F2D: push ecx
        __asm _emit 0x51
        // 0x58975F2E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975F30: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58975F32: push edx
        __asm _emit 0x52
        // 0x58975F33: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58975F37: push edx
        __asm _emit 0x52
        // 0x58975F38: call 0x58975e90
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58975F3D: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58975F40: ret
        __asm _emit 0xC3
    }
}
